/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03349478; name: FUN_03349478
 */


ulong FUN_03349478(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char *__s;
  void *__s1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  
  iVar3 = (int)param_1[3];
  uVar7 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)((long)iVar3 << 1) < (uint)uVar7 && -2 < (int)param_1[1]) && uVar7 >> 0x20 == 0) &&
      (-1 < iVar3)) && (((long)iVar3 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
  }
  __s1 = (void *)*param_2;
  uVar7 = param_2[1] - (long)__s1;
  uVar8 = 0x811c9dc5;
  if (0 < (long)uVar7) {
    if (param_2[1] == (long)__s1 + 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        pbVar1 = (byte *)((long)__s1 + uVar5);
        uVar5 = uVar5 + 2;
        uVar8 = ((uVar8 ^ *pbVar1) * 0x1000193 ^ (uint)pbVar1[1]) * 0x1000193;
      } while ((uVar7 & 0xfffffffffffffffe) != uVar5);
    }
    if ((uVar7 & 1) != 0) {
      uVar8 = (uVar8 ^ *(byte *)((long)__s1 + uVar5)) * 0x1000193;
    }
  }
  uVar2 = *(uint *)(param_1 + 3);
  lVar10 = param_1[2];
  puVar9 = (uint *)(lVar10 + (ulong)(uVar2 & uVar8) * 8);
  puVar6 = puVar9 + 1;
  uVar11 = *puVar6;
  if (-1 < (int)uVar11) {
    do {
      if (*puVar9 == uVar8) {
        __s = (char *)(*(ulong *)(*param_1 + (ulong)uVar11 * 0x18) & 0xfffffffffffffffe);
        if (__s == (char *)0x0) {
          if (uVar7 == 0) goto LAB_03349628;
        }
        else {
          sVar4 = strlen(__s);
          if ((sVar4 == uVar7) && (iVar3 = memcmp(__s1,__s,uVar7), iVar3 == 0)) {
LAB_03349628:
            uVar7 = (long)puVar9 - lVar10;
            goto LAB_03349600;
          }
        }
      }
      puVar9 = (uint *)(lVar10 + (((ulong)((long)puVar9 - lVar10) >> 3) + 1 & (long)(int)uVar2) * 8)
      ;
      puVar6 = puVar9 + 1;
      uVar11 = *puVar6;
    } while (-1 < (int)uVar11);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *puVar9 = uVar8;
  *puVar6 = uVar2;
  uVar11 = *(uint *)(param_1 + 1);
  uVar7 = (long)puVar9 - param_1[2];
LAB_03349600:
  return (ulong)uVar11 | (uVar7 >> 3) << 0x20;
}


