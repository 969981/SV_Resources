/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00530ac0; name: FUN_00530ac0
 */


byte * FUN_00530ac0(long *param_1,int param_2,byte *param_3,long *param_4)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  
  pbVar8 = param_3 + 1;
  bVar2 = *param_3;
  uVar7 = (ulong)bVar2;
  uVar6 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar6 = (uVar6 + (uint)*pbVar8 * 0x80) - 0x80;
    uVar7 = (ulong)uVar6;
    if ((char)*pbVar8 < '\0') {
      uVar6 = (uVar6 + (uint)param_3[2] * 0x4000) - 0x4000;
      uVar7 = (ulong)uVar6;
      if ((char)param_3[2] < '\0') {
        uVar6 = (uVar6 + (uint)param_3[3] * 0x200000) - 0x200000;
        uVar7 = (ulong)uVar6;
        if ((char)param_3[3] < '\0') {
          if (param_3[4] < 8) {
            uVar6 = uVar6 + (uint)param_3[4] * 0x10000000 + 0xf0000000;
            uVar7 = (ulong)uVar6;
            if (uVar6 < 0x7ffffff0) {
              pbVar8 = param_3 + 5;
              lVar10 = *param_1;
              goto joined_r0x00530d34;
            }
          }
          return (byte *)0x0;
        }
        lVar10 = 3;
      }
      else {
        lVar10 = 2;
      }
    }
    else {
      lVar10 = 1;
    }
    uVar6 = (uint)uVar7;
    pbVar8 = param_3 + lVar10 + 1;
    lVar10 = *param_1;
  }
  else {
    lVar10 = *param_1;
  }
joined_r0x00530d34:
  if (lVar10 == 0) {
    lVar10 = param_4[1];
    uVar11 = (lVar10 - (long)pbVar8) + 0x10;
    if ((long)uVar11 < (long)(int)uVar7) {
      uVar6 = *(uint *)((long)param_4 + 0x1c);
      do {
        if (uVar6 == 0x10) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar8 + ((int)uVar11 - lVar10);
        iVar9 = (int)pbVar12;
        if ((int)uVar6 < iVar9) {
          return (byte *)0x0;
        }
        lVar3 = FUN_0052da24(param_4,(ulong)pbVar12 & 0xffffffff,0xffffffff);
        if (lVar3 == 0) {
LAB_00530ca0:
          if (iVar9 == 0) {
            *param_4 = param_4[1];
            *(undefined4 *)(param_4 + 10) = 1;
            return (byte *)0x0;
          }
          return (byte *)0x0;
        }
        uVar7 = (long)(int)uVar7 - (long)(int)uVar11;
        while( true ) {
          lVar10 = param_4[1];
          pbVar8 = (byte *)(lVar3 + (int)pbVar12);
          uVar6 = *(int *)((long)param_4 + 0x1c) + ((int)lVar3 - (int)lVar10);
          pbVar12 = pbVar8 + -lVar10;
          *(uint *)((long)param_4 + 0x1c) = uVar6;
          iVar9 = (int)pbVar12;
          if (iVar9 < 0) break;
          lVar3 = FUN_0052da24(param_4,(ulong)pbVar12 & 0xffffffff,0xffffffff);
          if (lVar3 == 0) goto LAB_00530ca0;
        }
        *param_4 = lVar10 + (int)(uVar6 & (int)uVar6 >> 0x1f);
        uVar1 = ((int)lVar10 - (int)pbVar8) + 0x10;
        uVar11 = (ulong)uVar1;
      } while ((int)uVar1 < (int)uVar7);
      pbVar8 = pbVar8 + uVar7;
    }
    else {
      pbVar8 = pbVar8 + (int)uVar7;
    }
  }
  else {
    uVar1 = param_2 << 3 | 2;
    uVar7 = (ulong)uVar1;
    if (0x7f < uVar1) {
      uVar11 = (ulong)uVar1;
      do {
        FUN_002cdcec(lVar10,(uint)uVar11 | 0xffffff80);
        uVar7 = uVar11 >> 7;
        uVar5 = uVar11 >> 0xe;
        uVar11 = uVar7;
      } while (uVar5 != 0);
    }
    FUN_002cdcec(lVar10,uVar7);
    lVar10 = *param_1;
    uVar11 = (ulong)(int)uVar6;
    uVar7 = (ulong)uVar6;
    if (0x7f < uVar6) {
      uVar7 = (ulong)uVar6;
      uVar5 = uVar11;
      do {
        FUN_002cdcec(lVar10,(uint)uVar7 | 0xffffff80);
        uVar7 = uVar5 >> 7;
        uVar4 = uVar5 >> 0xe;
        uVar5 = uVar7;
      } while (uVar4 != 0);
    }
    FUN_002cdcec(lVar10,uVar7);
    if ((param_4[1] - (long)pbVar8) + 0x10 < (long)uVar11) {
      pbVar8 = (byte *)FUN_0052df70(param_4,pbVar8,uVar6);
      return pbVar8;
    }
    FUN_0021d540(*param_1,pbVar8,uVar11);
    pbVar8 = pbVar8 + uVar11;
  }
  return pbVar8;
}


