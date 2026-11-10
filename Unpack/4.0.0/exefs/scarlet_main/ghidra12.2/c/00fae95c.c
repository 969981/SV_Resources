/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fae95c; name: FUN_00fae95c
 */


undefined8 FUN_00fae95c(int param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar5 = PTR_DAT_047d49d8;
  puVar4 = PTR_DAT_047d49d0;
  plVar3 = *(long **)(lVar9 + 0x1c8);
  for (plVar2 = *(long **)(lVar9 + 0x1c0); plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar9 = *plVar2;
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar8 = FUN_01b3fb0c();
      *(undefined8 *)puVar5 = uVar8;
      __cxa_guard_release(puVar4);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar5) goto LAB_00faea08;
    }
  }
  lVar9 = 0;
LAB_00faea08:
  switch(param_1) {
  default:
    lVar9 = lVar9 + 0x40;
    goto LAB_00faeba0;
  case 1:
    lVar10 = 0;
    piVar11 = (int *)(lVar9 + 0xcc8);
    do {
      if (piVar11[-2] == param_2) goto LAB_00faec60;
      if (*piVar11 == param_2) goto LAB_00faec5c;
      lVar10 = lVar10 + 2;
      piVar11 = piVar11 + 4;
    } while (lVar10 != 0xfa);
    break;
  case 2:
    lVar10 = 0;
    piVar11 = (int *)(lVar9 + 0x1498);
    do {
      if (piVar11[-2] == param_2) goto LAB_00faec60;
      if (*piVar11 == param_2) goto LAB_00faec5c;
      lVar10 = lVar10 + 2;
      piVar11 = piVar11 + 4;
    } while (lVar10 != 300);
    break;
  case 3:
    lVar9 = lVar9 + 0x1df0;
LAB_00faeba0:
    lVar10 = 0;
    lVar1 = 200;
    if (param_1 != 3) {
      lVar1 = 400;
    }
    piVar11 = (int *)(lVar9 + 8);
    do {
      if (piVar11[-2] == param_2) goto LAB_00faec60;
      if (*piVar11 == param_2) goto LAB_00faec5c;
      lVar10 = lVar10 + 2;
      piVar11 = piVar11 + 4;
    } while (lVar1 != lVar10);
    break;
  case 4:
    lVar10 = 0;
    piVar11 = (int *)(lVar9 + 0x2438);
    do {
      if (piVar11[-2] == param_2) goto LAB_00faec60;
      if (*piVar11 == param_2) goto LAB_00faec5c;
      lVar10 = lVar10 + 2;
      piVar11 = piVar11 + 4;
    } while (lVar10 != 200);
    break;
  case 5:
    lVar10 = 0;
    piVar11 = (int *)(lVar9 + 0x2a78);
    do {
      if (piVar11[-2] == param_2) goto LAB_00faec60;
      if (*piVar11 == param_2) goto LAB_00faec5c;
      lVar10 = lVar10 + 2;
      piVar11 = piVar11 + 4;
    } while (lVar10 != 900);
    break;
  case 6:
    lVar10 = 0;
    piVar11 = (int *)(lVar9 + 0x4698);
    do {
      if (piVar11[-2] == param_2) goto LAB_00faec60;
      if (*piVar11 == param_2) goto LAB_00faec5c;
      lVar10 = lVar10 + 2;
      piVar11 = piVar11 + 4;
    } while (lVar10 != 300);
    break;
  case 7:
    lVar10 = 0;
    piVar11 = (int *)(lVar9 + 0x4ff8);
    do {
      if (piVar11[-2] == param_2) goto LAB_00faec60;
      if (*piVar11 == param_2) goto LAB_00faec5c;
      lVar10 = lVar10 + 2;
      piVar11 = piVar11 + 4;
    } while (lVar10 != 0x96);
  }
  return 0;
LAB_00faec5c:
  lVar10 = lVar10 + 1;
LAB_00faec60:
  if ((int)lVar10 == -1) {
    return 0;
  }
  return 1;
}


