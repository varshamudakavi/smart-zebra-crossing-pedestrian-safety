# 🚸 SMART ZEBRA CROSSING FOR PEDESTRIAN SAFETY

### 🌱 Sustainable Infrastructure Technologies

---

## 📌 PROJECT OVERVIEW

The **Smart Zebra Crossing for Pedestrian Safety** is an innovative hardware prototype developed to improve pedestrian safety through an automated traffic management system.

The proposed system combines traffic signal indicators, automatically controlled road-blocking poles, and a moving escalator-style crossing platform. These components work together to create a more organized and controlled pedestrian crossing environment.

The project uses an Arduino-based controller to coordinate the traffic signals and motor operations. The physical prototype demonstrates the timed operation of the signals, pole motor, and escalator motor.

The overall concept aims to reduce dependence on driver awareness and support safer pedestrian movement, particularly in busy areas.

## 🎯 PROJECT OBJECTIVES

- Improve pedestrian safety at road crossings.
- Develop an automated traffic control mechanism.
- Coordinate traffic signals with motor-controlled barriers.
- Demonstrate an escalator-style pedestrian crossing concept.
- Explore technology-based solutions for sustainable urban infrastructure.

## ⚠️ PROBLEM STATEMENT

Traditional zebra crossings depend mainly on drivers noticing pedestrians and voluntarily stopping. This can create safety risks, especially for children, elderly people, and people with disabilities.

Our project proposes an automated crossing system to make pedestrian movement safer and more organized.

## 💡 PROPOSED SOLUTION

The system uses an Arduino-based controller to coordinate:

- 🚦 Traffic signal indicators
- 🚧 Automated road-blocking poles
- ⚙️ Motor-controlled crossing platform
- 🔄 Timed crossing operation

## 🔧 HARDWARE COMPONENTS

- Arduino microcontroller board
- Red, Yellow, and Green LEDs
- DC motors for pole and platform movement
- Motor control circuitry
- Connecting wires and supporting prototype components

## ⚙️ WORKING PRINCIPLE

The system operates through an Arduino-based controller that coordinates traffic signals and two motor-control channels.

The proposed crossing concept works as follows:

1. **Pedestrian Request:** In the proposed system, a pedestrian can request crossing assistance through a push button or sensor-based detection.

2. **Traffic Signal Control:** The traffic signal changes according to the crossing sequence to coordinate vehicle and pedestrian movement.

3. **Automatic Pole Operation:** The road-blocking poles are controlled through a motor mechanism to regulate vehicle movement during the crossing phase.

4. **Escalator Platform Operation:** The motor-controlled escalator-style platform is activated as part of the pedestrian crossing sequence.

5. **Completion of Crossing:** After the designated interval, the system proceeds to the next signal and motor-control stage.

### 🔄 ACTUAL PROTOTYPE OPERATION

The Arduino code currently demonstrates the following timed sequence:

| Stage | Signal | Motor Operation | Duration |
|---|---|---|---|
| 1 | Green | Both motors OFF | 5 seconds |
| 2 | Yellow | Pole motor forward | 3 seconds |
| 3 | Red | Escalator motor ON | 10 seconds |
| 4 | Yellow | Pole motor reverse | 3 seconds |

The sequence repeats continuously.

## 🔌 PIN CONFIGURATION

| Component | Arduino Pin |
|---|---|
| Red LED | 10 |
| Yellow LED | 9 |
| Green LED | 8 |
| Pole Motor IN1 | 6 |
| Pole Motor IN2 | 7 |
| Escalator Motor IN3 | 2 |
| Escalator Motor IN4 | 3 |

## 💻 TECHNOLOGIES USED

- Arduino Programming
- Embedded Systems
- Electronics
- Motor Control
- Hardware Prototyping

## 🌍 APPLICATIONS

- Smart city infrastructure
- School and college zones
- Railway and bus terminals
- High-traffic roads
- Commercial areas
- Areas used by elderly and differently-abled pedestrians

## 🚀 FUTURE SCOPE

- Integration of pedestrian detection sensors
- Addition of a pedestrian request button
- Improved automatic traffic control
- Enhanced safety mechanisms
- Development of a larger-scale working model

## 📸 PROJECT PROTOTYPE

<img src="project_prototype.jpeg" alt="Smart Zebra Crossing Prototype" width="300">


## 🏫 PROJECT DETAILS

**Institution:** KLE Technological University  
**Department:** Electrical and Electronics Engineering  
**Project Theme:** Sustainable Infrastructure Technologies

---

## ⭐ PROJECT GOAL

To explore an automated and technology-driven approach to improving pedestrian safety and supporting smarter urban infrastructure.
