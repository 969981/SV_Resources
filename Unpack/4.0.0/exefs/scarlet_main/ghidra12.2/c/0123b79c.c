/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123b79c; name: FUN_0123b79c
 */


bool FUN_0123b79c(undefined8 param_1,int param_2)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 local_48;
  int iStack_44;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar12 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar12;
  puVar6 = PTR_DAT_047dcba8;
  puVar5 = PTR_DAT_047dcba0;
  plVar2 = *(long **)(lVar12 + 0x1c0);
  plVar3 = *(long **)(lVar12 + 0x1c8);
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar12 = *plVar2;
    plVar9 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x28))((undefined8 *)(lVar12 + 0x28));
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
      uVar11 = FUN_020e5998();
      *(undefined8 *)puVar6 = uVar11;
      __cxa_guard_release(puVar5);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar6) goto LAB_0123b844;
    }
  }
  lVar12 = 0;
LAB_0123b844:
  iVar7 = (**(code **)(**(long **)(lVar12 + 0x40) + 0x30))();
  if (0 < iVar7) {
    iVar8 = 0;
    do {
      local_48 = *(undefined4 *)(lVar12 + 0x60);
      iStack_44 = iVar8;
      pcVar10 = (char *)(**(code **)(**(long **)(lVar12 + 0x40) + 0x40))
                                  (*(long **)(lVar12 + 0x40),&local_48);
      cVar4 = *pcVar10;
      if (-1 < (char)(cVar4 + '\x7f')) {
        cVar1 = -0x80;
        if (param_2 <= cVar4 + 0x80) {
          cVar1 = cVar4 - (char)param_2;
        }
        *pcVar10 = cVar1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar7 != iVar8);
  }
  (**(code **)(**(long **)(lVar12 + 0x40) + 0x50))
            (*(long **)(lVar12 + 0x40),*(undefined4 *)(lVar12 + 0x60));
  iVar7 = *(int *)(lVar12 + 0x60) + 1;
  *(int *)(lVar12 + 0x60) = iVar7;
  iVar8 = (**(code **)(**(long **)(lVar12 + 0x40) + 0x28))();
  if (iVar8 <= iVar7) {
    *(undefined4 *)(lVar12 + 0x60) = 0;
  }
  return iVar8 <= iVar7;
}


