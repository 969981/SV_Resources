/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052fb7c; name: FUN_0052fb7c
 */


byte * FUN_0052fb7c(long *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  uint local_48 [2];
  
  pbVar8 = param_2 + 1;
  uVar4 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar4 = (uVar4 + (uint)*pbVar8 * 0x80) - 0x80;
    if ((char)*pbVar8 < '\0') {
      uVar4 = (uVar4 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar4 = (uVar4 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if (7 < param_2[4]) {
            return (byte *)0x0;
          }
          uVar4 = uVar4 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
          if (0x7fffffef < uVar4) {
            return (byte *)0x0;
          }
          pbVar8 = param_2 + 5;
          goto LAB_0052fbc8;
        }
        lVar7 = 3;
      }
      else {
        lVar7 = 2;
      }
    }
    else {
      lVar7 = 1;
    }
    pbVar8 = param_2 + lVar7 + 1;
  }
LAB_0052fbc8:
  uVar4 = uVar4 + ((int)pbVar8 - (int)param_1[1]);
  pbVar5 = (byte *)(param_1[1] + (long)(int)(uVar4 & (int)uVar4 >> 0x1f));
  iVar2 = *(int *)((long)param_1 + 0x1c);
  *(uint *)((long)param_1 + 0x1c) = uVar4;
  *param_1 = (long)pbVar5;
  iVar2 = iVar2 - uVar4;
  if (-1 < iVar2) {
    while (pbVar8 < pbVar5) {
LAB_0052fc1c:
      pbVar8 = (byte *)FUN_0052f200(pbVar8,local_48);
      uVar4 = local_48[0];
      if (pbVar8 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar1 = *param_3;
      if (uVar1 == param_3[1]) {
        FUN_00531134(param_3,uVar1 + 1);
      }
      *(uint *)(*(long *)(param_3 + 2) + (ulong)uVar1 * 4) = -(uVar4 & 1) ^ uVar4 >> 1;
      *param_3 = uVar1 + 1;
      pbVar5 = (byte *)*param_1;
    }
    uVar9 = (long)pbVar8 - param_1[1];
    if (uVar9 == (long)*(int *)((long)param_1 + 0x1c)) {
LAB_0052fcc8:
      iVar3 = (int)param_1[10];
    }
    else {
      if ((int)uVar9 <= *(int *)((long)param_1 + 0x1c)) {
        do {
          lVar7 = FUN_0052da24(param_1,uVar9 & 0xffffffff,0xffffffff);
          if (lVar7 == 0) {
            if ((int)uVar9 != 0) goto LAB_0052fd0c;
            *param_1 = param_1[1];
            *(undefined4 *)(param_1 + 10) = 1;
            goto LAB_0052fcc8;
          }
          lVar6 = param_1[1];
          pbVar8 = (byte *)(lVar7 + (int)uVar9);
          uVar4 = *(int *)((long)param_1 + 0x1c) + ((int)lVar7 - (int)lVar6);
          uVar9 = (long)pbVar8 - lVar6;
          *(uint *)((long)param_1 + 0x1c) = uVar4;
        } while (-1 < (int)uVar9);
        *param_1 = lVar6 + (int)(uVar4 & (int)uVar4 >> 0x1f);
        goto LAB_0052fc1c;
      }
LAB_0052fd0c:
      pbVar8 = (byte *)0x0;
      iVar3 = (int)param_1[10];
    }
    if (iVar3 == 0) {
      uVar4 = *(int *)((long)param_1 + 0x1c) + iVar2;
      *(uint *)((long)param_1 + 0x1c) = uVar4;
      *param_1 = param_1[1] + (long)(int)(uVar4 & (int)uVar4 >> 0x1f);
      return pbVar8;
    }
  }
  return (byte *)0x0;
}


