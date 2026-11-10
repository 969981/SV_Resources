/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c9bd00; name: FUN_01c9bd00
 */


uint FUN_01c9bd00(void)

{
  uint uVar1;
  int iVar2;
  
  if (((DAT_0483a128 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0483a128), iVar2 != 0)) {
    FUN_00100190(&LAB_00b52dc4,&DAT_0483a118,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483a128);
  }
  DAT_0483a110 = DAT_0483a118;
  uVar1 = 0;
  if (DAT_0483a118 != 0) {
    if (*(long **)(DAT_0483a118 + 0x40) == (long *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(**(long **)(DAT_0483a118 + 0x40) + 0x68))();
      uVar1 = uVar1 ^ 1;
    }
  }
  return uVar1 & 1;
}


