/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bee5ac; name: FUN_01bee5ac
 */


void FUN_01bee5ac(undefined8 param_1)

{
  int iVar1;
  
  if ((DAT_0483af40 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0483af40);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02a30078,&DAT_0483af30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483af40);
    }
  }
  DAT_0483af48 = DAT_0483af30;
  FUN_01fa5518(DAT_0483af30,param_1);
  return;
}


