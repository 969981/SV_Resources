/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018523f8; name: FUN_018523f8
 */


void FUN_018523f8(int param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  puVar4 = PTR_DAT_047d49d8;
  puVar3 = PTR_DAT_047d49d0;
  plVar2 = *(long **)(lVar8 + 0x1c8);
  for (plVar1 = *(long **)(lVar8 + 0x1c0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar8 = *plVar1;
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x28))((undefined8 *)(lVar8 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar7 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar7;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) goto LAB_018524a4;
    }
  }
  lVar8 = 0;
LAB_018524a4:
  switch(param_1) {
  default:
    lVar11 = lVar8 + 0x40;
    goto LAB_0185268c;
  case 1:
    lVar9 = 0;
    lVar11 = lVar8 + 0xcc0;
    piVar10 = (int *)(lVar8 + 0xcc8);
    do {
      if (piVar10[-2] == param_2) goto LAB_0185275c;
      if (*piVar10 == param_2) goto LAB_01852758;
      lVar9 = lVar9 + 2;
      piVar10 = piVar10 + 4;
    } while (lVar9 != 0xfa);
    break;
  case 2:
    lVar11 = lVar8 + 0x1490;
    lVar9 = 0;
    piVar10 = (int *)(lVar8 + 0x1498);
    do {
      if (piVar10[-2] == param_2) goto LAB_0185275c;
      if (*piVar10 == param_2) goto LAB_01852758;
      lVar9 = lVar9 + 2;
      piVar10 = piVar10 + 4;
    } while (lVar9 != 300);
    break;
  case 3:
    lVar11 = lVar8 + 0x1df0;
LAB_0185268c:
    lVar9 = 0;
    lVar8 = 200;
    if (param_1 != 3) {
      lVar8 = 400;
    }
    piVar10 = (int *)(lVar11 + 8);
    do {
      if (piVar10[-2] == param_2) goto LAB_0185275c;
      if (*piVar10 == param_2) goto LAB_01852758;
      lVar9 = lVar9 + 2;
      piVar10 = piVar10 + 4;
    } while (lVar8 != lVar9);
    break;
  case 4:
    lVar11 = lVar8 + 0x2430;
    lVar9 = 0;
    piVar10 = (int *)(lVar8 + 0x2438);
    do {
      if (piVar10[-2] == param_2) goto LAB_0185275c;
      if (*piVar10 == param_2) goto LAB_01852758;
      lVar9 = lVar9 + 2;
      piVar10 = piVar10 + 4;
    } while (lVar9 != 200);
    break;
  case 5:
    lVar11 = lVar8 + 0x2a70;
    lVar9 = 0;
    piVar10 = (int *)(lVar8 + 0x2a78);
    do {
      if (piVar10[-2] == param_2) goto LAB_0185275c;
      if (*piVar10 == param_2) goto LAB_01852758;
      lVar9 = lVar9 + 2;
      piVar10 = piVar10 + 4;
    } while (lVar9 != 900);
    break;
  case 6:
    lVar11 = lVar8 + 0x4690;
    lVar9 = 0;
    piVar10 = (int *)(lVar8 + 0x4698);
    do {
      if (piVar10[-2] == param_2) goto LAB_0185275c;
      if (*piVar10 == param_2) goto LAB_01852758;
      lVar9 = lVar9 + 2;
      piVar10 = piVar10 + 4;
    } while (lVar9 != 300);
    break;
  case 7:
    lVar11 = lVar8 + 0x4ff0;
    lVar9 = 0;
    piVar10 = (int *)(lVar8 + 0x4ff8);
    do {
      if (piVar10[-2] == param_2) goto LAB_0185275c;
      if (*piVar10 == param_2) goto LAB_01852758;
      lVar9 = lVar9 + 2;
      piVar10 = piVar10 + 4;
    } while (lVar9 != 0x96);
  }
LAB_018525a0:
  iVar5 = FUN_01852768();
  if (iVar5 != -1) {
LAB_018525b0:
    piVar10 = (int *)(lVar11 + (long)iVar5 * 8);
    *piVar10 = param_2;
    *(undefined1 *)(piVar10 + 1) = 1;
  }
  return;
LAB_01852758:
  lVar9 = lVar9 + 1;
LAB_0185275c:
  iVar5 = (int)lVar9;
  if (iVar5 == -1) goto LAB_018525a0;
  goto LAB_018525b0;
}


