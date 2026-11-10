/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021034b4; name: FUN_021034b4
 */


undefined8 FUN_021034b4(long param_1,int *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  code *pcVar10;
  
  uVar3 = param_3[4];
  uVar1 = *(undefined4 *)(param_3 + 8);
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  uVar4 = FUN_010e161c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),*param_3);
  uVar5 = FUN_010e161c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),uVar3);
  switch(*param_2) {
  case 0:
    (**(code **)(**(long **)(param_1 + 0x1b0) + 0x318))(*(long **)(param_1 + 0x1b0),uVar4,uVar1);
    DAT_04840bec = 8;
    break;
  case 1:
    (**(code **)(**(long **)(param_1 + 0x1b0) + 800))(*(long **)(param_1 + 0x1b0),uVar4);
    if (DAT_04840bec != 0) {
      DAT_04840bec = DAT_04840bec - 1;
      return 0;
    }
    plVar7 = *(long **)(param_1 + 0x1b0);
    goto LAB_021036d0;
  case 2:
    uVar6 = (**(code **)(**(long **)(param_1 + 0x1b0) + 800))(*(long **)(param_1 + 0x1b0),uVar4);
    plVar7 = *(long **)(param_1 + 0x1b0);
    pcVar10 = *(code **)(*plVar7 + 800);
    goto LAB_021036ac;
  case 3:
    DAT_04840bec = 0;
    iVar9 = 4;
    goto LAB_021036ec;
  case 4:
    DAT_04840bec = DAT_04840bec + 1;
    if (DAT_04840bec < 9) {
      return 0;
    }
    plVar7 = *(long **)(param_1 + 0x1b0);
    uVar5 = uVar4;
LAB_021036d0:
    pcVar10 = *(code **)(*plVar7 + 0x318);
LAB_021036dc:
    (*pcVar10)(plVar7,uVar5,uVar2);
    break;
  case 5:
    uVar6 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x340))(*(long **)(param_1 + 0x1b0),uVar4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    plVar7 = *(long **)(param_1 + 0x1b0);
    pcVar10 = *(code **)(*plVar7 + 0x318);
    uVar2 = uVar1;
    goto LAB_021036dc;
  case 6:
    uVar6 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x340))(*(long **)(param_1 + 0x1b0),uVar5);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    DAT_04840bec = 0;
    break;
  case 7:
    DAT_04840bec = DAT_04840bec + 1;
    if (DAT_04840bec < 9) {
      return 0;
    }
    (**(code **)(**(long **)(param_1 + 0x1b0) + 0x328))(*(long **)(param_1 + 0x1b0),uVar4);
    (**(code **)(**(long **)(param_1 + 0x1b0) + 0x328))(*(long **)(param_1 + 0x1b0),uVar5);
    break;
  case 8:
    uVar6 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x330))(*(long **)(param_1 + 0x1b0),uVar4);
    plVar7 = *(long **)(param_1 + 0x1b0);
    pcVar10 = *(code **)(*plVar7 + 0x330);
LAB_021036ac:
    uVar8 = (*pcVar10)(plVar7,uVar5);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    break;
  default:
    return 1;
  }
  iVar9 = *param_2 + 1;
LAB_021036ec:
  *param_2 = iVar9;
  return 0;
}


