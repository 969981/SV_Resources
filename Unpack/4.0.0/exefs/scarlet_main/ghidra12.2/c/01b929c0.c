/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b929c0; name: FUN_01b929c0
 */


undefined8 FUN_01b929c0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = FUN_00c92df0(param_1,1,0);
  if ((DAT_0480adb8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0480adb8);
    if (iVar2 != 0) {
      __cxa_guard_release(&DAT_0480adb8);
    }
  }
  if ((*PTR_DAT_047d4ec8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d4ec8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02a2ca1c,PTR_DAT_047d4ed0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4ec8);
    }
  }
  lVar3 = *(long *)PTR_DAT_047d4ed0;
  *(long *)PTR_DAT_047d4ed8 = lVar3;
  plVar4 = (long *)(*(long *)(*(long *)(lVar3 + 0x218) + 0x98) + (long)iVar1 * 0x38);
  FUN_00c5d960(param_1,(plVar4[1] - *plVar4) * 0x20000000 >> 0x20);
  return 1;
}


