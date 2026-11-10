/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a30834; name: FUN_00a30834
 */


void FUN_00a30834(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047d6c80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c80), iVar1 != 0))
  {
    FUN_00100190(&LAB_00b651c8,PTR_DAT_047d6c88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c80);
  }
  lVar2 = *(long *)PTR_DAT_047d6c88;
  *(long *)PTR_DAT_047d6c90 = lVar2;
  if (lVar2 != 0) {
    FUN_00b62208();
  }
  FUN_01f2d890();
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar1 != 0))
  {
    FUN_00100190(&LAB_00a30924,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar2 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar2;
  if (lVar2 == 0) {
    return;
  }
  FUN_0278d460();
  return;
}


