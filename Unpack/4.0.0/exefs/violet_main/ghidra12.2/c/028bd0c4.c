/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028bd0c4; name: FUN_028bd0c4
 */


void FUN_028bd0c4(undefined8 *param_1)

{
  ulong uVar1;
  
  *param_1 = &PTR_FUN_045e8ab0;
  param_1[4] = &PTR_LAB_045e8ae0;
  uVar1 = FUN_028bd138();
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("CheckObjectLeak()","~IndexedHandleContainer",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/core/indexed_handle_container.cpp"
               ,0x19);
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1027));
  FUN_0271d6e4(param_1 + 0x1008);
  FUN_028bd2e8(param_1 + 6);
  return;
}


