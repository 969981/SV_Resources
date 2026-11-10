/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017691a4; name: FUN_017691a4
 */


undefined8 FUN_017691a4(undefined8 *param_1)

{
  int iVar1;
  undefined8 local_18;
  
  if ((DAT_0483a128 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0483a128);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b52dc4,&DAT_0483a118,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483a128);
    }
  }
  DAT_0483a110 = DAT_0483a118;
  if (DAT_0483a118 == 0) {
    local_18 = 0;
  }
  else if (*(long *)(DAT_0483a118 + 0x48) == 0) {
    local_18 = 0;
  }
  else {
    FUN_01769260(&local_18,*(long *)(DAT_0483a118 + 0x48),*param_1);
  }
  return local_18;
}


