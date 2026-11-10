/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e036c4; name: FUN_01e036c4
 */


void FUN_01e036c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((DAT_04837608 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04837608);
    if (iVar1 != 0) {
      FUN_00100190(param_1,param_2,param_3,param_4,&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04837608);
    }
  }
  DAT_04837610 = DAT_048375f8;
  FUN_01e0375c(param_1,param_2,param_3,param_4);
  return;
}


