# Automatic Waste Segregation System

## Project Overview

The Automatic Waste Segregation System is an Arduino-based project designed to automatically separate waste into three categories: wet, dry, and metallic waste.

The system uses multiple sensors to identify waste characteristics. Arduino UNO processes the sensor inputs and controls a servo motor to direct waste into the appropriate collection bin.

The project aims to reduce manual effort, improve waste management, and support environmental sustainability.

## Objectives

- Automate waste segregation.
- Identify wet, dry, and metallic waste.
- Reduce manual waste sorting.
- Improve waste management efficiency.
- Support recycling and environmental protection.

## Hardware Components

- Arduino UNO
- IR Sensor
- Moisture Sensor
- Metal Detection Sensor
- Servo Motor
- Motor Driver
- DC Motor
- Power Supply
- Connecting Wires

## Working Principle

1. The IR sensor detects the presence of waste.
2. Arduino UNO receives sensor inputs.
3. The metal detector checks whether the waste contains metal.
4. If metal is detected, the waste is classified as metallic.
5. If metal is not detected, the moisture sensor checks the moisture level.
6. High moisture indicates wet waste.
7. Otherwise, the waste is classified as dry.
8. The servo motor positions the appropriate waste collection bin.

## Waste Categories

- **Metal Waste:** Identified using a metal detection sensor.
- **Wet Waste:** Identified using a moisture sensor.
- **Dry Waste:** Classified when neither metal nor high moisture is detected.

## Technologies Used

- Arduino UNO
- Embedded C++ / Arduino Programming
- Sensors and Actuators
- Servo Motor Control
- IoT Concepts

## Project Workflow

1. Waste Detection
2. Sensor Data Collection
3. Waste Classification
4. Servo Motor Control
5. Automatic Waste Segregation

## Applications

- Smart Waste Management
- Residential Waste Segregation
- Schools and Colleges
- Hospitals
- Public Places
- Smart City Projects

## Future Scope

- IoT-based remote monitoring.
- Real-time bin-level monitoring.
- Cloud-based waste data management.
- Conveyor-based waste feeding.
- Machine Learning-based waste classification.

## Project Details

- **Project Name:** Automatic Waste Segregation System
- **Project Type:** Academic Team Project
- **Controller:** Arduino UNO
- **Publication:** International Journal of Innovative Research in Technology (IJIRT)
- **Publication Year:** December 2025
- **Volume:** 12, Issue 7
- **ISSN:** 2349-6002

## Contributors

- Sakshi Pawar
- Anuja Gaikwad
- Sanika Patil

## Note

The Arduino code in this repository is a sample implementation based on the published project description. Sensor logic, pin connections, and servo positions should be calibrated according to the actual hardware setup.

The research paper also describes IoT monitoring and conveyor operation, which are not implemented in the sample code provided here.
