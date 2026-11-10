/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b4c60; name: FUN_016b4c60
 */


undefined8 FUN_016b4c60(int param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_048405f8 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(&DAT_048405f8);
    if (iVar5 != 0) {
      FUN_00100190(&LAB_02acf048,&DAT_048405e8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048405f8);
    }
  }
  lVar3 = DAT_048405e8;
  DAT_04840600 = DAT_048405e8;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  bVar4 = param_1 != 1;
  lVar1 = -0x5e3f6a55a2fdd144;
  if (bVar4) {
    lVar1 = -0x48330932290ee09d;
  }
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  plVar7 = (long *)(lVar3 + 0x50);
  *plVar7 = lVar1;
  pcVar2 = "kBackup";
  if (bVar4) {
    pcVar2 = "kMain";
  }
  uVar9 = 7;
  if (bVar4) {
    uVar9 = 5;
  }
  *(char **)(lVar3 + 0x58) = pcVar2;
  *(undefined8 *)(lVar3 + 0x60) = uVar9;
  uVar6 = FUN_016b4e70(lVar8,plVar7);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(lVar8 + 0x160));
  if ((*(long **)(lVar8 + 0x140) == (long *)0x0) || (**(long **)(lVar8 + 0x140) != *plVar7)) {
    uVar9 = 0;
  }
  else {
    FUN_016b4e50();
    uVar9 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x160));
  return uVar9;
}


