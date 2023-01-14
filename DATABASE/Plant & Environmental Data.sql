CREATE TABLE plantData (
	id int NOT NULL IDENTITY(1, 1),
	Time varchar(100) NOT NULL,
    temperature FLOAT(100) NOT NULL,
	airHumidity FLOAT(100) NOT NULL,
	soilHumidity FLOAT(100) NOT NULL,
	amountOfRainFall FLOAT(100) NOT NULL,
	amountOfSunlight FLOAT(100) NOT NULL,
    PRIMARY KEY (id)
);

CREATE TABLE environmentalData (
    id int NOT NULL IDENTITY(1, 1),
	Time varchar(100) NOT NULL,
    sensor1 FLOAT(100) NOT NULL,
	sensor2 FLOAT(100) NOT NULL,
	sensor3 FLOAT(100) NOT NULL,
	sensor4 FLOAT(100) NOT NULL,
	id2 int,
    PRIMARY KEY (id),
	FOREIGN KEY (id2) references plantData(id)
);

CREATE TABLE environmentalData2 (
	id int NOT NULL IDENTITY(1, 1),
	Time varchar(100) NOT NULL,
    sensor1 FLOAT(100) NOT NULL,
	sensor2 FLOAT(100),
	sensor3 FLOAT(100),
	sensor4 FLOAT(100),
	id2 int,
	id3 int,
	PRIMARY KEY (id),
	FOREIGN KEY (id2) references plantData(id),
	FOREIGN KEY (id3) references environmentalData(id)
);