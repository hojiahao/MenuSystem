# MenuSystem

A comprehensive Unreal Engine 5.7 multi-variant game framework featuring multiplayer sessions, AI systems, and modular game mode architecture.

## Overview

MenuSystem is a flexible game development template that demonstrates UE5 best practices through three distinct game variants:

- **Shooter** - First-person shooter with complete weapon systems and AI enemies
- **Horror** - First-person horror with stamina mechanics and atmospheric gameplay
- **Lobby** - Multiplayer lobby system for player matchmaking

## Features

### Core Systems

- **Enhanced Input System** - Modern input framework with switchable mapping contexts
- **Multiplayer Sessions** - Full Steam integration with session creation, discovery, and joining
- **First-Person Framework** - Character system with head-mounted camera and separate first-person mesh

### Shooter Variant

| Component | Description |
|-----------|-------------|
| Weapon System | Multi-weapon inventory, ammo management, recoil, and accuracy mechanics |
| Projectile System | Physics-based projectiles with collision, explosion, and damage |
| AI System | StateTree-driven behavior with AIPerception (sight/hearing) |
| NPC Spawner | Dynamic enemy spawning with respawn mechanics |
| UI | Scoreboard, bullet counter, damage indicators |

### Horror Variant

| Component | Description |
|-----------|-------------|
| Stamina System | Sprint mechanics with fatigue and recovery |
| Flashlight | Spotlight-based illumination |
| UI | Sprint meter with state indicators |

### Multiplayer System

- Steam OnlineSubsystem integration
- Host/Join session workflow
- Lobby system with player tracking
- Dynamic delegate-based event communication

## Project Structure

```
MenuSystem/
├── Source/MenuSystem/
│   ├── Variant_Shooter/     # Shooter game variant
│   │   ├── AI/              # AI controllers and utilities
│   │   ├── Weapons/         # Weapon and projectile systems
│   │   └── UI/              # Shooter-specific UI
│   ├── Variant_Horror/      # Horror game variant
│   │   └── UI/              # Horror-specific UI
│   └── [Core Systems]       # Base character, controller, game mode
├── Plugins/
│   └── MultiplayerSessions/ # Multiplayer session management plugin
├── Content/
│   ├── Characters/          # Character meshes and animations
│   ├── Weapons/             # Weapon assets (Pistol, Rifle, Grenade Launcher)
│   ├── Variant_Shooter/     # Shooter blueprints and content
│   └── Variant_Horror/      # Horror blueprints and content
└── Config/                  # Engine and game configuration
```

## Technical Stack

**Engine:** Unreal Engine 5.7

**Core Modules:**
- EnhancedInput
- AIModule / StateTreeModule / GameplayStateTreeModule
- UMG / Slate
- OnlineSubsystem / OnlineSubsystemSteam

**Rendering:**
- DirectX 12 (SM6)
- Ray Tracing
- Substrate Rendering
- Virtual Shadow Maps
- Dynamic Global Illumination

## Key Classes

### Core
| Class | Purpose |
|-------|---------|
| `MenuSystemCharacter` | Base first-person character |
| `MenuSystemPlayerController` | Input and touch control management |
| `LobbyGameMode` | Player tracking for multiplayer lobby |

### Shooter
| Class | Purpose |
|-------|---------|
| `ShooterCharacter` | Player with weapon inventory and HP |
| `ShooterNPC` | AI-controlled enemy with weapons |
| `ShooterAIController` | StateTree AI with perception |
| `ShooterWeapon` | Weapon base class with ammo and firing |
| `ShooterProjectile` | Physics projectile with damage |

### Horror
| Class | Purpose |
|-------|---------|
| `HorrorCharacter` | Player with stamina system |
| `HorrorPlayerController` | Horror-specific input handling |

### Multiplayer
| Class | Purpose |
|-------|---------|
| `UMultiplayerSessionsSubsystem` | Session lifecycle management |
| `UMenu` | Host/Join UI widget |

## Design Patterns

- **Interface Pattern** - `IShooterWeaponHolder` for weapon interaction
- **Delegate Pattern** - Event-driven communication (OnBulletCountUpdated, OnDamaged, etc.)
- **Subsystem Pattern** - Global session management via GameInstanceSubsystem
- **Controller Pattern** - Separation of input, UI, and respawn logic

## Requirements

- Unreal Engine 5.7+
- Visual Studio 2022
- Steam SDK (for multiplayer features)

## License

This project is for educational and demonstration purposes.
