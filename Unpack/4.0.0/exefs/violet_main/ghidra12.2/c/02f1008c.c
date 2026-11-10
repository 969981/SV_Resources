/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1008c; name: FUN_02f1008c
 */


void FUN_02f1008c(undefined2 *param_1,int param_2,undefined8 *param_3,int param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  puVar1 = (undefined2 *)((long)param_1 + (long)param_2);
  iVar4 = 0x20;
  iVar5 = param_4;
  if (param_4 < 1) {
    iVar5 = 0xff;
  }
  *(int *)(param_3 + 3) = param_2;
  param_3[1] = 0;
  param_3[2] = param_1;
  *param_3 = 0;
  *(undefined4 *)((long)param_3 + 4) = 0x20;
  if (puVar1 <= param_1) {
    iVar6 = 0;
LAB_02f102f0:
    if ((param_1 != puVar1) && (0 < param_4)) {
      *(int *)((long)param_3 + 4) = iVar4 + 0x140;
      *(int *)((long)param_3 + 0xc) = iVar6 + 6;
    }
switchD_02f100ec_caseD_1:
    return;
  }
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0x20;
  iVar8 = 1;
LAB_02f100d0:
  switch(*param_1) {
  case 1:
    goto switchD_02f100ec_caseD_1;
  case 2:
    param_1 = param_1 + 0x48;
    break;
  case 3:
    goto switchD_02f100ec_caseD_3;
  case 4:
    param_1 = param_1 + 0x38;
    break;
  case 5:
    iVar4 = iVar4 + 0x90;
    iVar7 = iVar7 + 3;
    iVar6 = iVar6 + 3;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
    *(int *)((long)param_3 + 0xc) = iVar6;
    iVar10 = *(int *)((long)param_3 + 0x1c) + -0x10;
    goto LAB_02f101d8;
  case 6:
    iVar4 = iVar4 + 0x70;
    goto LAB_02f101e4;
  case 7:
    iVar4 = iVar4 + 0x40;
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 1;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
    *(int *)((long)param_3 + 0xc) = iVar6;
    iVar10 = *(int *)((long)param_3 + 0x1c) + 0x10;
    goto LAB_02f101d8;
  case 9:
  case 0x15:
  case 0x16:
    iVar4 = iVar4 + 0x40;
    goto LAB_02f100fc;
  case 10:
    iVar4 = iVar4 + 0x40;
    iVar7 = iVar7 + 2;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
    iVar6 = iVar6 + 2;
    goto LAB_02f1027c;
  case 0xb:
    iVar4 = iVar4 + 0x50;
    goto LAB_02f1021c;
  case 0xc:
    iVar4 = iVar4 + 0x60;
    iVar7 = iVar7 + 2;
    iVar6 = iVar6 + 2;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
    *(int *)((long)param_3 + 0xc) = iVar6;
    iVar10 = *(int *)((long)param_3 + 0x1c) + 0x20;
    goto LAB_02f101d8;
  case 0xd:
    bVar3 = *(byte *)((long)param_1 + 5);
    uVar9 = (uint)bVar3;
    uVar2 = uVar9 * 0x20;
    if (uVar9 * 0x20 <= (uint)bVar3 * 0x30) {
      uVar2 = (uint)bVar3 * 0x30;
    }
    iVar4 = uVar2 + iVar4;
    iVar7 = iVar7 + uVar9;
    iVar6 = iVar6 + uVar9;
    *(int *)((long)param_3 + 0xc) = iVar6;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
    iVar10 = *(int *)((long)param_3 + 0x1c) + (uint)*(byte *)((long)param_1 + 5) * 0x10;
LAB_02f101d8:
    *(int *)((long)param_3 + 0x1c) = iVar10;
switchD_02f100ec_caseD_17:
    param_1 = param_1 + 8;
    break;
  case 0xe:
  case 0xf:
    iVar4 = iVar4 + 0x30;
LAB_02f100fc:
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 1;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
LAB_02f10228:
    param_1 = param_1 + 0x10;
    goto LAB_02f102d0;
  case 0x10:
    iVar4 = iVar4 + 0x50;
LAB_02f101e4:
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 1;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
LAB_02f102cc:
    param_1 = param_1 + 0x18;
LAB_02f102d0:
    *(int *)((long)param_3 + 0xc) = iVar6;
    break;
  case 0x11:
    bVar3 = *(byte *)(param_1 + 2);
    iVar4 = iVar4 + (uint)bVar3 * 0x30;
    iVar7 = iVar7 + (uint)bVar3 * 2;
    iVar6 = iVar6 + (uint)bVar3 * 2;
    *(int *)((long)param_3 + 0xc) = iVar6;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
    goto switchD_02f100ec_caseD_17;
  case 0x12:
    iVar4 = iVar4 + 0x40;
LAB_02f1021c:
    iVar7 = iVar7 + 2;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
    iVar6 = iVar6 + 2;
    goto LAB_02f10228;
  case 0x13:
    iVar4 = iVar4 + 0xc0;
    iVar7 = iVar7 + 6;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
    iVar6 = iVar6 + 6;
    goto LAB_02f1029c;
  case 0x14:
    iVar4 = iVar4 + 0x40;
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 1;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
    *(int *)((long)param_3 + 0xc) = iVar6;
    param_1 = param_1 + 0x20;
    *(int *)((long)param_3 + 0x1c) = *(int *)((long)param_3 + 0x1c) + 0x40;
    break;
  case 0x17:
    goto switchD_02f100ec_caseD_17;
  case 0x18:
    iVar4 = iVar4 + 0x60;
    iVar7 = iVar7 + 3;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
    iVar6 = iVar6 + 3;
LAB_02f1027c:
    param_1 = param_1 + 8;
    goto LAB_02f102d0;
  case 0x19:
    iVar4 = iVar4 + 0xb0;
    goto LAB_02f10290;
  case 0x1a:
    iVar4 = iVar4 + 0xc0;
LAB_02f10290:
    iVar7 = iVar7 + 3;
    iVar6 = iVar6 + 3;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
LAB_02f1029c:
    param_1 = param_1 + 0x30;
    goto LAB_02f102d0;
  case 0x1c:
    iVar4 = iVar4 + 0x70;
    iVar6 = iVar6 + 2;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)((long)param_3 + 0xc) = iVar6;
    goto switchD_02f100ec_caseD_3;
  case 0x1d:
    iVar4 = iVar4 + 0x70;
    iVar7 = iVar7 + 2;
    *(int *)((long)param_3 + 4) = iVar4;
    *(int *)(param_3 + 1) = iVar7;
    iVar6 = iVar6 + 2;
    goto LAB_02f102cc;
  }
switchD_02f100ec_caseD_8:
  if ((iVar5 <= iVar8) || (iVar8 = iVar8 + 1, puVar1 <= param_1)) goto LAB_02f102f0;
  goto LAB_02f100d0;
switchD_02f100ec_caseD_3:
  param_1 = param_1 + 0x18;
  goto switchD_02f100ec_caseD_8;
}


