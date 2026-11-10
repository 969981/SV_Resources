/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00133b50; name: FUN_00133b50
 */


void FUN_00133b50(long *param_1,undefined4 *param_2)

{
  byte bVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  
  switch(*param_2) {
  case 9:
    param_2[2] = (uint)*(byte *)(param_2 + 2);
    uVar8 = 8;
    goto LAB_00133ddc;
  case 10:
    uVar11 = param_2[2] << 0x10 | 9;
    lVar10 = *param_1;
    uVar5 = *(undefined8 *)(param_1[2] + 0x38);
    uVar7 = *(undefined8 *)(lVar10 + 0x40);
    uVar8 = (undefined4)param_1[4];
    goto LAB_00133d90;
  case 0xb:
    puVar9 = (undefined8 *)(**(long **)(param_1[2] + 0x58) + (long)(int)param_2[2] * 0x18);
    switch(*(byte *)(puVar9 + 1) & 0x3f) {
    case 0:
      uVar8 = 1;
      break;
    case 1:
      uVar8 = 3;
      break;
    default:
      goto switchD_00133b8c_caseD_10;
    case 3:
      uVar8 = 6;
      goto LAB_00133e14;
    case 4:
    case 0x14:
      uVar8 = 7;
      goto LAB_00133e14;
    case 0x11:
      uVar8 = 2;
      break;
    case 0x13:
      uVar8 = 5;
LAB_00133e14:
      *param_2 = uVar8;
      *(undefined8 *)(param_2 + 2) = *puVar9;
      return;
    }
    goto LAB_00133ddc;
  case 0xc:
    bVar1 = *(byte *)((long)param_2 + 10);
    sVar2 = *(short *)(param_2 + 2);
    iVar4 = FUN_0012ea70(param_1);
    if (sVar2 < (short)(ushort)bVar1) {
      if (iVar4 <= (int)(uint)bVar1) {
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
      iVar4 = FUN_0012ea70(param_1);
      if (iVar4 <= sVar2) {
LAB_00133d58:
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
    }
    else {
      if (iVar4 <= sVar2) {
        *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
      }
      iVar4 = FUN_0012ea70(param_1);
      if (iVar4 <= (int)(uint)bVar1) goto LAB_00133d58;
    }
    lVar10 = *param_1;
    uVar5 = *(undefined8 *)(param_1[2] + 0x38);
    uVar11 = (uint)*(ushort *)(param_2 + 2) << 0x18 | (uint)*(byte *)((long)param_2 + 10) << 0x10 |
             0xc;
    break;
  case 0xd:
    bVar1 = *(byte *)((long)param_2 + 10);
    uVar11 = 0xb;
    goto LAB_00133c84;
  case 0xe:
    bVar1 = *(byte *)((long)param_2 + 10);
    iVar4 = FUN_0012ea70(param_1);
    if (iVar4 <= (int)(uint)bVar1) {
      *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
    }
    bVar1 = *(byte *)((long)param_2 + 10);
    uVar11 = 0xd;
LAB_00133c84:
    lVar10 = *param_1;
    uVar11 = (uint)*(ushort *)(param_2 + 2) << 0x18 | (uint)bVar1 << 0x10 | uVar11;
    uVar5 = *(undefined8 *)(param_1[2] + 0x38);
    break;
  case 0xf:
    bVar1 = *(byte *)((long)param_2 + 10);
    iVar4 = FUN_0012ea70(param_1);
    if (iVar4 <= (int)(uint)bVar1) {
      *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
    }
    lVar10 = *param_1;
    uVar5 = *(undefined8 *)(param_1[2] + 0x38);
    uVar11 = (uint)*(ushort *)(param_2 + 2) << 0x18 | (uint)*(byte *)((long)param_2 + 10) << 0x10 |
             0xe;
    break;
  default:
switchD_00133b8c_caseD_10:
    return;
  case 0x12:
    *param_2 = 8;
    param_2[2] = *(uint *)(*(long *)(*param_1 + 0x40) + (long)(int)param_2[2] * 4) >> 7 & 0xff;
    return;
  case 0x13:
    *(undefined1 *)(*(long *)(*param_1 + 0x40) + (long)(int)param_2[2] * 4 + 3) = 2;
    goto LAB_00133dd8;
  }
  uVar7 = *(undefined8 *)(lVar10 + 0x40);
  uVar8 = (undefined4)param_1[4];
LAB_00133d90:
  lVar6 = FUN_0012d3b0(uVar5,uVar7,uVar8,lVar10 + 0x18,4,0x7fffffff,"opcodes");
  *(long *)(lVar10 + 0x40) = lVar6;
  lVar3 = param_1[4];
  *(int *)(param_1 + 4) = (int)lVar3 + 1;
  *(uint *)(lVar6 + (long)(int)lVar3 * 4) = uVar11;
  FUN_00133660(param_1,lVar10,*(undefined4 *)(param_1[2] + 8));
  param_2[2] = (int)param_1[4] + -1;
LAB_00133dd8:
  uVar8 = 0x11;
LAB_00133ddc:
  *param_2 = uVar8;
  return;
}


