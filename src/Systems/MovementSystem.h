#ifndef MOVEMENTSYSTEM_H
#define MOVEMENTSYSTEM_H

#include "../ECS/ECS.h"

class MovementSystem: public System {
    public:
        MovementSystem() {
            // TODO: RequireComponent<TransformComponent>();
            // TODO: RequireComponent<...>();
        }

        void Update() {
            // TODO:
            // Loop all entities that the system is interested in 
            // for (auto entity: GetEntities()) {

            // }
            // update entity pos based on its velocity
            // every frame of the game loop
        }
};

#endif // MOVEMENTSYSTEM_H