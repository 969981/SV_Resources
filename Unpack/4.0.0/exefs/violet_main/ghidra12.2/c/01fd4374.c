/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fd4374; name: FUN_01fd4374
 */


void FUN_01fd4374(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if ((DAT_04837608 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04837608);
    if (iVar1 != 0) {
      FUN_00100190(param_1,&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04837608);
    }
  }
  DAT_04837610 = DAT_048375f8;
  FUN_00a91dc4(param_1,DAT_048375f8,param_2,param_3 & 1,param_4 & 1);
  return;
}


