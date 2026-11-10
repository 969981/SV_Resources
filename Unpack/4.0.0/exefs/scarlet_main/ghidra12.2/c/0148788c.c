/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148788c; name: FUN_0148788c
 */


bool FUN_0148788c(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  puVar4 = PTR_DAT_047d4860;
  puVar3 = PTR_DAT_047d4858;
  plVar10 = *(long **)(lVar8 + 0x1c0);
  plVar1 = *(long **)(lVar8 + 0x1c8);
  do {
    if (plVar10 == plVar1) {
      return false;
    }
    lVar8 = *plVar10;
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x28))((undefined8 *)(lVar8 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar7 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar7;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) {
        plVar10 = (long *)(lVar8 + 0x50);
        uVar9 = 1;
        goto LAB_0148793c;
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
  while( true ) {
    if (*plVar10 == param_1) goto LAB_014879a4;
    uVar9 = uVar9 + 2;
    plVar10 = plVar10 + 4;
    if (uVar9 == 0x12d) break;
LAB_0148793c:
    if (plVar10[-2] == param_1) {
      uVar9 = uVar9 - 1;
LAB_014879a4:
      cVar2 = *(char *)(lVar8 + (uVar9 & 0xffffffff) * 0x10 + 0x48);
      goto LAB_014879ac;
    }
  }
  plVar10 = (long *)(lVar8 + 0x1310);
  uVar9 = 1;
  while (plVar10[-2] != param_1) {
    if (*plVar10 == param_1) goto LAB_014879d0;
    uVar9 = uVar9 + 2;
    plVar10 = plVar10 + 4;
    if (uVar9 == 0xc9) {
      return false;
    }
  }
  uVar9 = uVar9 - 1;
LAB_014879d0:
  cVar2 = *(char *)(lVar8 + (uVar9 & 0xffffffff) * 0x10 + 0x1308);
LAB_014879ac:
  return cVar2 != '\0';
}


