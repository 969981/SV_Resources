/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015e7e78; name: FUN_015e7e78
 */


void FUN_015e7e78(undefined4 param_1)

{
  int iVar1;
  
  if ((*PTR_DAT_047d38d8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d38d8);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_008f33ec,PTR_DAT_047d38e0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d38d8);
    }
  }
  DAT_04800900 = *(undefined8 *)PTR_DAT_047d38e0;
  FUN_015e8150(DAT_04800900,param_1);
  return;
}


