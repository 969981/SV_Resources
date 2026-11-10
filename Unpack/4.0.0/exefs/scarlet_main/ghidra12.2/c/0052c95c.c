/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052c95c; name: FUN_0052c95c
 */


byte * FUN_0052c95c(long *param_1,uint param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  long *plVar12;
  byte *pbVar13;
  size_t __n;
  byte *local_50;
  uint local_44;
  
  pbVar8 = (byte *)*param_1;
  if (pbVar8 <= param_4) {
    pbVar13 = (byte *)(param_1 + 2);
    pbVar1 = (byte *)(param_1 + 4);
    do {
      if ((char)param_1[7] != '\0') {
        param_4 = pbVar13;
        break;
      }
      iVar4 = (int)pbVar8;
      pbVar11 = pbVar13;
      if (param_1[6] == 0) {
LAB_0052cb14:
        *(undefined1 *)(param_1 + 7) = 1;
        *param_1 = (long)pbVar1;
        pbVar8 = pbVar1;
      }
      else {
        if ((void *)param_1[1] == (void *)0x0) {
          lVar9 = *(long *)pbVar8;
          param_1[3] = *(long *)(pbVar8 + 8);
          *(long *)pbVar13 = lVar9;
          *param_1 = (long)pbVar1;
          param_1[1] = (long)pbVar8;
          pbVar8 = pbVar1;
        }
        else {
          memcpy((void *)param_1[1],pbVar13,(long)pbVar8 - (long)pbVar13);
          do {
            uVar5 = (**(code **)(*(long *)param_1[6] + 0x10))
                              ((long *)param_1[6],&local_50,&local_44);
            if ((uVar5 & 1) == 0) goto LAB_0052cb14;
          } while (local_44 == 0);
          plVar12 = (long *)*param_1;
          if (0x10 < (int)local_44) {
            lVar9 = *plVar12;
            *(long *)(local_50 + 8) = plVar12[1];
            *(long *)local_50 = lVar9;
            *param_1 = (long)(local_50 + ((ulong)local_44 - 0x10));
            param_1[1] = 0;
            pbVar8 = local_50 + ((ulong)local_44 - 0x10);
            pbVar11 = local_50;
            goto LAB_0052cb24;
          }
          lVar9 = *plVar12;
          pbVar8 = (byte *)((long)param_1 + (long)(int)local_44 + 0x10);
          param_1[3] = plVar12[1];
          *(long *)pbVar13 = lVar9;
          *param_1 = (long)pbVar8;
          param_1[1] = (long)local_50;
        }
      }
LAB_0052cb24:
      param_4 = pbVar11 + ((int)param_4 - iVar4);
    } while (pbVar8 <= param_4);
  }
  uVar7 = param_2 << 3 | 2;
  uVar5 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_3 + 8);
  }
  if (uVar7 < 0x80) {
    pbVar8 = param_4 + 1;
    *param_4 = (byte)uVar7;
  }
  else {
    *param_4 = (byte)(param_2 << 3) | 0x82;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) {
      param_4[1] = (byte)(param_2 >> 4);
      pbVar8 = param_4 + 2;
    }
    else {
      pbVar8 = param_4 + 2;
      uVar7 = param_2 >> 4 & 0x1ffffff;
      do {
        pbVar13 = pbVar8;
        uVar6 = uVar7 >> 7;
        pbVar13[-1] = (byte)uVar7 | 0x80;
        pbVar8 = pbVar13 + 1;
        uVar2 = uVar7 >> 0xe;
        uVar7 = uVar6;
      } while (uVar2 != 0);
      *pbVar13 = (byte)uVar6;
    }
  }
  uVar6 = (uint)uVar5;
  uVar7 = uVar6;
  if (0x7f < uVar6) {
    uVar10 = uVar5 & 0xffffffff;
    pbVar13 = pbVar8;
    do {
      uVar3 = uVar10 >> 0xe;
      uVar7 = (uint)(uVar10 >> 7);
      pbVar8 = pbVar13 + 1;
      *pbVar13 = (byte)uVar10 | 0x80;
      uVar10 = uVar10 >> 7;
      pbVar13 = pbVar8;
    } while (uVar3 != 0);
  }
  pbVar13 = pbVar8 + 1;
  *pbVar8 = (byte)uVar7;
  pbVar8 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar8 = param_3 + 1;
  }
  if (*(char *)((long)param_1 + 0x39) == '\0') {
    lVar9 = *param_1 - (long)pbVar13;
  }
  else {
    lVar9 = *param_1 - (long)pbVar13;
    if (lVar9 + 0x10 <= (long)(int)uVar6) {
      pbVar13 = (byte *)FUN_0052c420(param_1,pbVar13);
      uVar5 = (**(code **)(*(long *)param_1[6] + 0x28))
                        ((long *)param_1[6],pbVar8,uVar5 & 0xffffffff);
      if ((uVar5 & 1) == 0) {
        *(undefined1 *)(param_1 + 7) = 1;
        *param_1 = (long)(param_1 + 4);
        return (byte *)(param_1 + 2);
      }
      return pbVar13;
    }
  }
  __n = (size_t)(int)uVar6;
  if (lVar9 < (long)__n) {
    pbVar13 = (byte *)FUN_0052c7dc(param_1,pbVar8,uVar5 & 0xffffffff,pbVar13);
  }
  else {
    memcpy(pbVar13,pbVar8,__n);
    pbVar13 = pbVar13 + __n;
  }
  return pbVar13;
}


