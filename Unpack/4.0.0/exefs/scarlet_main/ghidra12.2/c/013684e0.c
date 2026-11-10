/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013684e0; name: FUN_013684e0
 */


void FUN_013684e0(long param_1)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 local_28 [8];
  
  if (((*PTR_DAT_047d66a0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d66a0), iVar4 != 0))
  {
    FUN_00100190(&LAB_00b52dc4,PTR_DAT_047d66a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d66a0);
  }
  lVar5 = *(long *)PTR_DAT_047d66a8;
  *(long *)PTR_DAT_047d66b0 = lVar5;
  if (lVar5 == 0) {
    uVar3 = 4;
  }
  else {
    uVar3 = FUN_01193998();
  }
  if ((((*(uint *)(*(long *)(param_1 + 0x50) + 0x34) < 2) && (*(char *)(param_1 + 0xcc) == '\0')) &&
      (uVar6 = FUN_02b1d428(param_1), uVar3 < 3)) && ((uVar6 & 1) != 0)) {
    FUN_01c3e1f8();
    *(undefined1 *)(param_1 + 0xcc) = 1;
  }
  if (uVar3 - 1 < 2) {
    FUN_019e217c(param_1);
  }
  if (((*(int *)(*(long *)(param_1 + 0x50) + 0x34) == 2) &&
      (*(byte *)(*(long *)(param_1 + 0x50) + 0x8d) - 3 < 4)) &&
     (uVar6 = FUN_02114f8c(param_1), (uVar6 & 1) == 0)) {
    for (plVar7 = *(long **)(param_1 + 0x90); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      lVar5 = *(long *)(param_1 + 0xf0);
      *(undefined4 *)(plVar7 + 4) = 2;
      if (plVar7[5] == lVar5) {
        *(undefined1 *)(plVar7 + 3) = 1;
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((long)plVar7 + 0x1c);
      }
      else {
        *(undefined1 *)(plVar7 + 3) = 0;
      }
    }
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
    lVar5 = *(long *)(param_1 + 0x50);
    if (((*(int *)(lVar5 + 0x34) != 2) || (*(char *)(lVar5 + 0x8d) != '\0')) &&
       (((*(int *)(lVar5 + 0x34) != 2 || (3 < (byte)(*(char *)(lVar5 + 0x8d) - 3U))) &&
        (((lVar5 == 0 || (*(char *)(lVar5 + 0x710) == '\0')) && (*(char *)(param_1 + 0xc9) != '\0'))
        )))) {
      if (((*PTR_DAT_047d6c98 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
      }
      *(undefined8 *)PTR_DAT_047d6ca8 = *(undefined8 *)PTR_DAT_047d6ca0;
      if (*(long *)PTR_DAT_047d0a08 == 0) {
        bVar1 = true;
      }
      else {
        uVar2 = FUN_00d0ca58();
        bVar1 = uVar2 < 2;
      }
      local_28[0] = 0;
      if (((bVar1) || (*(char *)(param_1 + 200) != '\0')) ||
         (uVar6 = (**(code **)(**(long **)(param_1 + 0xf8) + 0x70))
                            (*(long **)(param_1 + 0xf8),local_28,1), (uVar6 & 1) != 0)) {
        *(undefined2 *)(param_1 + 200) = 1;
        DAT_0483ab50 = 1;
      }
    }
  }
  return;
}


