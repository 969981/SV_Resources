/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052cbdc; name: FUN_0052cbdc
 */


byte * FUN_0052cbdc(long *param_1,uint param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  size_t __n;
  byte *pbVar12;
  undefined8 uVar13;
  byte *local_50;
  uint local_44;
  
  pbVar8 = (byte *)*param_1;
  if (pbVar8 <= param_4) {
    pbVar12 = (byte *)(param_1 + 2);
    pbVar1 = (byte *)(param_1 + 4);
    do {
      if ((char)param_1[7] != '\0') {
        param_4 = pbVar12;
        break;
      }
      iVar4 = (int)pbVar8;
      pbVar10 = pbVar12;
      if (param_1[6] == 0) {
LAB_0052cd1c:
        *(undefined1 *)(param_1 + 7) = 1;
        *param_1 = (long)pbVar1;
        pbVar8 = pbVar1;
      }
      else {
        if ((void *)param_1[1] == (void *)0x0) {
          uVar13 = *(undefined8 *)pbVar8;
          param_1[3] = *(long *)(pbVar8 + 8);
          *(undefined8 *)pbVar12 = uVar13;
          *param_1 = (long)pbVar1;
          param_1[1] = (long)pbVar8;
          pbVar8 = pbVar1;
        }
        else {
          memcpy((void *)param_1[1],pbVar12,(long)pbVar8 - (long)pbVar12);
          do {
            uVar5 = (**(code **)(*(long *)param_1[6] + 0x10))
                              ((long *)param_1[6],&local_50,&local_44);
            if ((uVar5 & 1) == 0) goto LAB_0052cd1c;
          } while (local_44 == 0);
          puVar11 = (undefined8 *)*param_1;
          if (0x10 < (int)local_44) {
            uVar13 = *puVar11;
            *(undefined8 *)(local_50 + 8) = puVar11[1];
            *(undefined8 *)local_50 = uVar13;
            *param_1 = (long)(local_50 + ((ulong)local_44 - 0x10));
            param_1[1] = 0;
            pbVar8 = local_50 + ((ulong)local_44 - 0x10);
            pbVar10 = local_50;
            goto LAB_0052cd2c;
          }
          uVar13 = *puVar11;
          pbVar8 = (byte *)((long)param_1 + (long)(int)local_44 + 0x10);
          param_1[3] = puVar11[1];
          *(undefined8 *)pbVar12 = uVar13;
          *param_1 = (long)pbVar8;
          param_1[1] = (long)local_50;
        }
      }
LAB_0052cd2c:
      param_4 = pbVar10 + ((int)param_4 - iVar4);
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
        pbVar12 = pbVar8;
        uVar6 = uVar7 >> 7;
        pbVar12[-1] = (byte)uVar7 | 0x80;
        pbVar8 = pbVar12 + 1;
        uVar2 = uVar7 >> 0xe;
        uVar7 = uVar6;
      } while (uVar2 != 0);
      *pbVar12 = (byte)uVar6;
    }
  }
  uVar6 = (uint)uVar5;
  uVar7 = uVar6;
  if (0x7f < uVar6) {
    uVar9 = uVar5 & 0xffffffff;
    pbVar12 = pbVar8;
    do {
      uVar3 = uVar9 >> 0xe;
      uVar7 = (uint)(uVar9 >> 7);
      pbVar8 = pbVar12 + 1;
      *pbVar12 = (byte)uVar9 | 0x80;
      uVar9 = uVar9 >> 7;
      pbVar12 = pbVar8;
    } while (uVar3 != 0);
  }
  pbVar12 = pbVar8 + 1;
  *pbVar8 = (byte)uVar7;
  pbVar8 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar8 = param_3 + 1;
  }
  __n = (size_t)(int)uVar6;
  if (*param_1 - (long)pbVar12 < (long)__n) {
    pbVar12 = (byte *)FUN_0052c7dc(param_1,pbVar8,uVar5,pbVar12);
  }
  else {
    memcpy(pbVar12,pbVar8,__n);
    pbVar12 = pbVar12 + __n;
  }
  return pbVar12;
}


