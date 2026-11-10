/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052fd84; name: FUN_0052fd84
 */


byte * FUN_0052fd84(long *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong local_48;
  
  pbVar7 = param_2 + 1;
  uVar3 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar3 = (uVar3 + (uint)*pbVar7 * 0x80) - 0x80;
    if ((char)*pbVar7 < '\0') {
      uVar3 = (uVar3 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar3 = (uVar3 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if (7 < param_2[4]) {
            return (byte *)0x0;
          }
          uVar3 = uVar3 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
          if (0x7fffffef < uVar3) {
            return (byte *)0x0;
          }
          pbVar7 = param_2 + 5;
          goto LAB_0052fdd0;
        }
        lVar6 = 3;
      }
      else {
        lVar6 = 2;
      }
    }
    else {
      lVar6 = 1;
    }
    pbVar7 = param_2 + lVar6 + 1;
  }
LAB_0052fdd0:
  uVar3 = uVar3 + ((int)pbVar7 - (int)param_1[1]);
  pbVar4 = (byte *)(param_1[1] + (long)(int)(uVar3 & (int)uVar3 >> 0x1f));
  iVar1 = *(int *)((long)param_1 + 0x1c);
  *(uint *)((long)param_1 + 0x1c) = uVar3;
  *param_1 = (long)pbVar4;
  iVar1 = iVar1 - uVar3;
  if (-1 < iVar1) {
    while (pbVar7 < pbVar4) {
LAB_0052fe24:
      pbVar7 = (byte *)FUN_0052f200(pbVar7,&local_48);
      uVar8 = local_48;
      if (pbVar7 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar3 = *param_3;
      if (uVar3 == param_3[1]) {
        FUN_00531704(param_3,uVar3 + 1);
      }
      *(ulong *)(*(long *)(param_3 + 2) + (ulong)uVar3 * 8) = -(uVar8 & 1) ^ uVar8 >> 1;
      *param_3 = uVar3 + 1;
      pbVar4 = (byte *)*param_1;
    }
    uVar8 = (long)pbVar7 - param_1[1];
    if (uVar8 == (long)*(int *)((long)param_1 + 0x1c)) {
LAB_0052fed0:
      iVar2 = (int)param_1[10];
    }
    else {
      if ((int)uVar8 <= *(int *)((long)param_1 + 0x1c)) {
        do {
          lVar6 = FUN_0052da24(param_1,uVar8 & 0xffffffff,0xffffffff);
          if (lVar6 == 0) {
            if ((int)uVar8 != 0) goto LAB_0052ff14;
            *param_1 = param_1[1];
            *(undefined4 *)(param_1 + 10) = 1;
            goto LAB_0052fed0;
          }
          lVar5 = param_1[1];
          pbVar7 = (byte *)(lVar6 + (int)uVar8);
          uVar3 = *(int *)((long)param_1 + 0x1c) + ((int)lVar6 - (int)lVar5);
          uVar8 = (long)pbVar7 - lVar5;
          *(uint *)((long)param_1 + 0x1c) = uVar3;
        } while (-1 < (int)uVar8);
        *param_1 = lVar5 + (int)(uVar3 & (int)uVar3 >> 0x1f);
        goto LAB_0052fe24;
      }
LAB_0052ff14:
      pbVar7 = (byte *)0x0;
      iVar2 = (int)param_1[10];
    }
    if (iVar2 == 0) {
      uVar3 = *(int *)((long)param_1 + 0x1c) + iVar1;
      *(uint *)((long)param_1 + 0x1c) = uVar3;
      *param_1 = param_1[1] + (long)(int)(uVar3 & (int)uVar3 >> 0x1f);
      return pbVar7;
    }
  }
  return (byte *)0x0;
}


