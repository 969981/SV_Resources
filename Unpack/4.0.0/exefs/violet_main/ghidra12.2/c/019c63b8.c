/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c63b8; name: FUN_019c63b8
 */


void FUN_019c63b8(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_40 [16];
  
  if (((*PTR_DAT_047da800 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da800), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047da9d0,PTR_DAT_047da808,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da800);
  }
  lVar4 = *(long *)PTR_DAT_047da808;
  *(long *)PTR_DAT_047da810 = lVar4;
  if ((lVar4 != 0) && (uVar2 = FUN_019c6508(lVar4), (uVar2 & 1) != 0)) {
    if (*(int *)(param_1 + 0x50) != 1) {
      if (*(int *)(param_1 + 0x50) == 0) {
        FUN_027bd510(lVar4);
        *(undefined4 *)(param_1 + 0x50) = 1;
        return;
      }
      return;
    }
    uVar2 = FUN_027bda9c(lVar4);
    if ((uVar2 & 1) == 0) {
      return;
    }
    FUN_027bc370(lVar4);
  }
  lVar4 = *(long *)(*param_2 + 0x40);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x48) == 0)) {
    if (*(char *)(lVar4 + 0xd0) == '\0') {
      *(undefined8 *)(lVar4 + 0xd8) = 0;
      *(undefined1 *)(lVar4 + 0xd0) = 1;
    }
    else {
      *(undefined8 *)(lVar4 + 0xd8) = 0;
    }
    FUN_0135d328(auStack_40,*(undefined8 *)(lVar4 + 0xe0),0);
    plVar3 = *(long **)(lVar4 + 0xe8);
    *(undefined8 *)(lVar4 + 0xe8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    FUN_0135d2ec(auStack_40);
    *(undefined4 *)(lVar4 + 0x48) = 1;
    FUN_0174a3b8(lVar4);
  }
  return;
}


