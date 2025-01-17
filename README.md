# NATURAL-DISASTER-PREDICTION-SYSTEM

LANDSLIDE ⛰📈 PREDICTOR

A comprehensive AI-Powered embedded system designed to predict the possibility of landslides in an area based on real-time environmental sensor data and machine learning analysis.

## Features

- **Real-time Monitoring**: Collects environmental data using Arduino-based sensors.
- **Data Processing**: Processes sensor data for soil moisture, temperature, humidity and light intensity.
- **Local Storage**: Stores sensor readings in local database for offline analysis.
- **Remote Storage**: Syncs data with remote database for backup and distributed access.
- **Machine Learning**: Uses scikit-learn models to predict landslide probability.
- **Visualization**: Interactive plots and graphs using matplotlib and seaborn.
- **Hardware Design**: Complete electronic system design in Proteus.
- **Web Interface**: Online dashboard for monitoring and predictions.

## Project Structure

```
NATURAL-DISASTER-PREDICTION-SYSTEM/

├── APPLICATION/  📊

│   └── NATURAL DISASTER PREDICTION SYSTEM.ipynb  🤖 ML model training notebook

├── DATABASE/     💾

│   ├── msodbcsql_2.msi                           🔌 SQL driver

│   ├── msodbcsql.msi                             🔌 SQL driver

│   ├── Plant & Environmental Data.sql            📝 SQL database

│   └── Plant & Environmental Data.sql.bak        💾 Backup file

├── DOCUMENTATION/ 📚

├── HARDWARE/      🔧

│   ├── environmentalData_MainClass_PrimaryArduino/    

│   │   └── environmentalData_MainClass_PrimaryArduino.ino     🎯 Primary Arduino code

│   ├── environmentalData_MainClass_SupportArduino/

│   │   └── environmentalData_MainClass_SupportArduino.ino     🔄 Support Arduino code

│   └── environmentalData_MonitorClass_SupportArduino/

│       └── environmentalData_MonitorClass_SupportArduino.ino  📡 Monitoring code

├── INTERFACE/     🖥️

├── PROTEUS/       ⚡

│   ├── Electronic Design Files

│   └── Circuit Simulations

└── SCHEMATICS/    📐

    └── SOFTWARE DESIGN/

        ├── arduino class diagram.uxf           📊 Class diagram

        ├── arduino E-R diagram.uxf             📊 E-R diagram

        ├── arduino sequence diagram.uxf        📊 Sequence diagram

        └── arduino use case diagram.uxf        📊 Use case diagram
```

## Hardware Components

- Arduino microcontroller
- Soil moisture sensors
- Temperature and humidity sensors 
- Light intensity sensors
- LCD display
- Buzzers for alerts
- Relay for fan control
- Stepper motor controller

## Getting Started

### Prerequisites
- Arduino IDE
- Python 3.8+
- Proteus 8.7+
- Required sensors and components
- Web browser

### Hardware Setup

1. Follow the Proteus circuit design to assemble the hardware components
2. Upload the Arduino code to the microcontroller:
```bash
arduino-cli compile --upload Arduino_Code.ino
```

### Software Installation

1. Clone this repository:
```bash
git clone https://github.com/N-Elmer/NATURAL-DISASTER-PREDICTION-SYSTEM.git
cd NATURAL-DISASTER-PREDICTION-SYSTEM
```

2. Install Python dependencies:
```bash
pip install -r requirements.txt
```

3. Access the web interface at:
```
https://s7ac6zkycfusqzuh.anvil.app/D3COVOGNRLN7VLXFJ3FJ7DD2
```

## Key Features

### Data Collection
- Real-time sensor readings for:
  - Soil moisture levels
  - Temperature
  - Air humidity
  - Light intensity

### Data Processing
- Signal conditioning
- Noise filtering
- Data normalization
- Feature extraction

### Prediction System
- Machine learning models for landslide prediction
- Real-time probability assessment
- Historical data analysis
- Alert generation

### Visualization
- Interactive dashboards
- Time-series plots
- Sensor data graphs
- Prediction confidence metrics

## Dependencies

- **Hardware**:
  - Arduino libraries
  - Sensor drivers
  - LCD library
  
- **Software**:
  - pandas: Data manipulation
  - scikit-learn: Machine learning
  - matplotlib: Data visualization
  - seaborn: Statistical plotting

## Contributing

Contributions are welcome! Please feel free to submit issues and pull requests.

## License

This project is licensed under the Apache License - see the LICENSE file for details.

---

Powered by AI 🤖 and ⚡ Iot

Web Interface: [Live Demo](https://s7ac6zkycfusqzuh.anvil.app/D3COVOGNRLN7VLXFJ3FJ7DD2)

---


