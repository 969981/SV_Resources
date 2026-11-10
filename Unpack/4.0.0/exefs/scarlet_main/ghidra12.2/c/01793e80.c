/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01793e80; name: FUN_01793e80
 */


void FUN_01793e80(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long local_18;
  
  local_18 = param_2;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("0","RegisterNetworkModule",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/pokemon_engine/programs/src/network/network_system.cpp"
               ,0x72,"pNetworkModule == nullptr");
  }
  plVar2 = *(long **)(param_1 + 0xa8);
  plVar1 = plVar2;
  if (*(long *)(param_1 + 0xb0) != 0) {
    plVar1 = plVar2 + *(long *)(param_1 + 0xb0);
  }
  if ((plVar1 != plVar2) && (*plVar2 != param_2)) {
    do {
      plVar2 = plVar2 + 1;
      if (plVar1 == plVar2) {
        plVar2 = plVar1;
        goto LAB_01793edc;
      }
    } while (*plVar2 != param_2);
  }
LAB_01793edc:
  if (plVar1 != plVar2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("0","RegisterNetworkModule",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/pokemon_engine/programs/src/network/network_system.cpp"
               ,0x7c,"m_networkModuleVector already contains pNetworkModule");
  }
  FUN_01793f4c(param_1 + 0x88,&local_18);
  return;
}


