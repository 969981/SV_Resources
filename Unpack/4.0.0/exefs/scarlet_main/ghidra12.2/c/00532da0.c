/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00532da0; name: FUN_00532da0
 */


/* WARNING: Removing unreachable block (ram,0x00532ef4) */

void FUN_00532da0(byte *param_1,ulong param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((long)param_2 < 1) {
    uVar6 = 0;
  }
  else {
    if (param_2 < 4) {
      uVar2 = 0;
      uVar6 = 0;
    }
    else {
      uVar2 = param_2 & 0xfffffffffffffffc;
      lVar9 = 0;
      lVar10 = 0;
      lVar7 = 0;
      lVar8 = 0;
      pbVar4 = param_1 + 3;
      uVar6 = uVar2;
      do {
        uVar6 = uVar6 - 4;
        lVar8 = lVar8 + (ulong)(byte)(&DAT_03d09b5f)[*pbVar4];
        lVar9 = lVar9 + (ulong)(byte)(&DAT_03d09b5f)[pbVar4[-3]];
        lVar10 = lVar10 + (ulong)(byte)(&DAT_03d09b5f)[pbVar4[-2]];
        lVar7 = lVar7 + (ulong)(byte)(&DAT_03d09b5f)[pbVar4[-1]];
        pbVar4 = pbVar4 + 4;
      } while (uVar6 != 0);
      uVar6 = lVar8 + lVar7 + lVar10 + lVar9;
      if (param_2 == uVar2) goto LAB_00532ea8;
    }
    uVar3 = uVar2;
    if ((param_2 & 1) != 0) {
      uVar6 = uVar6 + (byte)(&DAT_03d09b5f)[param_1[uVar2]];
      uVar3 = uVar2 | 1;
    }
    if (param_2 != (uVar2 | 1)) {
      lVar8 = param_2 - uVar3;
      pbVar4 = param_1 + uVar3 + 1;
      do {
        lVar8 = lVar8 + -2;
        uVar6 = uVar6 + (byte)(&DAT_03d09b5f)[pbVar4[-1]] + (ulong)(byte)(&DAT_03d09b5f)[*pbVar4];
        pbVar4 = pbVar4 + 2;
      } while (lVar8 != 0);
    }
  }
LAB_00532ea8:
  if (uVar6 == param_2) {
    FUN_0021d540(param_3,param_1,param_2);
    return;
  }
  if ((*param_3 & 1) == 0) {
    uVar2 = (ulong)(*param_3 >> 1);
    uVar6 = uVar6 + uVar2;
    if (uVar2 < uVar6) {
LAB_00532f08:
      FUN_002ce498(param_3,uVar6 - uVar2,0);
      if ((*param_3 & 1) != 0) goto LAB_00532f44;
    }
    else {
      param_3[uVar6 + 1] = 0;
      *param_3 = (byte)((int)uVar6 << 1);
    }
LAB_00532f20:
    param_3 = param_3 + 1;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    uVar6 = uVar2 + uVar6;
    if (uVar2 < uVar6) goto LAB_00532f08;
    *(undefined1 *)(*(long *)(param_3 + 0x10) + uVar6) = 0;
    *(ulong *)(param_3 + 8) = uVar6;
    if ((*param_3 & 1) == 0) goto LAB_00532f20;
LAB_00532f44:
    param_3 = *(byte **)(param_3 + 0x10);
  }
  if (0 < (long)param_2) {
    pbVar4 = param_3 + uVar2;
    do {
      bVar1 = *param_1;
      switch(bVar1) {
      case 9:
        pbVar5 = pbVar4 + 2;
        pbVar4[0] = 0x5c;
        pbVar4[1] = 0x74;
        break;
      case 10:
        pbVar5 = pbVar4 + 2;
        pbVar4[0] = 0x5c;
        pbVar4[1] = 0x6e;
        break;
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
switchD_00532fa8_caseD_b:
        if (bVar1 - 0x20 < 0x5f) {
          pbVar5 = pbVar4 + 1;
          *pbVar4 = bVar1;
        }
        else {
          pbVar4[1] = bVar1 >> 6 | 0x30;
          pbVar4[2] = bVar1 >> 3 & 7 | 0x30;
          *pbVar4 = 0x5c;
          pbVar4[3] = bVar1 & 7 | 0x30;
          pbVar5 = pbVar4 + 4;
        }
        break;
      case 0xd:
        pbVar5 = pbVar4 + 2;
        pbVar4[0] = 0x5c;
        pbVar4[1] = 0x72;
        break;
      case 0x22:
        pbVar5 = pbVar4 + 2;
        pbVar4[0] = 0x5c;
        pbVar4[1] = 0x22;
        break;
      case 0x27:
        pbVar5 = pbVar4 + 2;
        pbVar4[0] = 0x5c;
        pbVar4[1] = 0x27;
        break;
      default:
        if (bVar1 != 0x5c) goto switchD_00532fa8_caseD_b;
        pbVar5 = pbVar4 + 2;
        pbVar4[0] = 0x5c;
        pbVar4[1] = 0x5c;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
      pbVar4 = pbVar5;
    } while (param_2 != 0);
  }
  return;
}


