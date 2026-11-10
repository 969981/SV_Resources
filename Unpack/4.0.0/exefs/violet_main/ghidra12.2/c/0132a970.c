/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0132a970; name: FUN_0132a970
 */


void FUN_0132a970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  
  plVar1 = (long *)*param_4;
  FUN_0132a9c0(plVar1,*param_1,param_1[1]);
  if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_pokeSetupHandler","LoadAsync",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include\\pokemon/pokemon_model_system/poke_setup_file.h"
               ,0x1e);
  }
  FUN_0132b848();
  return;
}


