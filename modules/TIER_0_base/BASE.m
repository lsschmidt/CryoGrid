classdef BASE < matlab.mixin.Copyable
    
    properties
        class_index
        CONST %constants
        PARA %external service parameters, all other
        STATVAR  %energy, water content, etc.
        TEMP  %derivatives in prognostic timestep and optimal timestep
        PREVIOUS
        NEXT
        IA_PREVIOUS
        IA_NEXT
    end
    
    methods %empty functions for lateral interactions, overwritten in TIER 2-3 if the functions are active
        function base = lateral_push_remove_surfaceWater(base, lateral)
            
        end
        
        function base = lateral_push_remove_subsurfaceWater(base, lateral)
            
        end
        
        function ground = lateral_push_remove_water_seepage(ground, lateral)
            
        end
        
        function ground = lateral_push_water_reservoir(ground, lateral)
            lateral.TEMP.open_system = 0;
        end
        
        function ground = lateral3D_pull_water_unconfined_aquifer(ground, lateral)
            lateral.TEMP.open_system = 0;
        end
        
        function ground = lateral3D_push_water_unconfined_aquifer(ground, lateral)
            
        end
        
        function ground = lateral3D_pull_water_general_aquifer(ground, lateral)
            lateral.TEMP.open_system = 0;
        end
        
        function ground = lateral3D_push_water_general_aquifer(ground, lateral)
            
        end
        
        function [saturated_next, hardBottom_next] = get_saturated_hardBottom_first_cell(ground, lateral)
            saturated_next = 0;
            hardBottom_next = 1;
        end
        
        function ground = lateral3D_pull_heat(ground, lateral)

        end
        
        function ground = lateral3D_push_heat(ground, lateral)
            
        end
        
%         function ground = lateral3D_pull_snow(ground, lateral)
%             lateral.STATVAR2ALL.snow_drift = 0;
%         end
    end
    
end

