/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0332245c; name: FUN_0332245c
 */


void FUN_0332245c(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  byte *pbVar13;
  
  for (pbVar13 = (byte *)param_2[1]; (*pbVar13 & 1) == 0; pbVar13 = *(byte **)(pbVar13 + 8)) {
  }
  uVar6 = *(uint *)(param_1 + 0x54);
  iVar12 = *(int *)(param_1 + 0x1e8);
  if ((int)uVar6 < *(int *)(param_1 + 0x50) * 2) {
    FUN_02ef5fd4((long *)(param_1 + 0x48),PTR_PTR_047d1a50,uVar6 * 2 + 2);
    uVar6 = *(uint *)(param_1 + 0x54);
  }
  uVar1 = (int)pbVar13 * -0x61c8864f;
  uVar2 = (int)((ulong)pbVar13 >> 0x20) * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  lVar8 = *(long *)(param_1 + 0x48);
  uVar4 = (ulong)(uVar6 & (uVar1 + (uVar1 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2));
  puVar10 = (undefined8 *)(lVar8 + uVar4 * 0x10);
  if ((byte *)*puVar10 == (byte *)0xffffffffffffffff) {
LAB_03322538:
    *puVar10 = pbVar13;
    *(long *)(*(long *)(param_1 + 0x48) + uVar4 * 0x10 + 8) = (long)iVar12;
    lVar8 = *(long *)(param_1 + 0x48);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  else if ((byte *)*puVar10 != pbVar13) {
    do {
      uVar4 = (ulong)((int)uVar4 + 1U & uVar6);
      puVar10 = (undefined8 *)(lVar8 + uVar4 * 0x10);
      if ((byte *)*puVar10 == (byte *)0xffffffffffffffff) goto LAB_03322538;
    } while ((byte *)*puVar10 != pbVar13);
  }
  uVar4 = *(ulong *)(lVar8 + ((long)(uVar4 << 0x20) >> 0x1c) + 8);
  iVar12 = (int)uVar4;
  if (*(int *)(param_1 + 0x1e8) == iVar12) {
    iVar3 = iVar12;
    if ((int)(*(uint *)(param_1 + 0x1ec) & 0x7fffffff) <= iVar12) {
      FUN_033273cc(param_1 + 0x1e0,(long)(iVar12 + 1));
      iVar3 = *(int *)(param_1 + 0x1e8);
    }
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x1e0) + (long)iVar3 * 0x10);
    *(int *)(param_1 + 0x1e8) = iVar12 + 1;
    *puVar10 = 0;
    puVar10[1] = 0x8000000000000000;
  }
  if (-1 < iVar12) {
    uVar4 = uVar4 & 0xffffffff;
    puVar5 = (uint *)(*(long *)(param_1 + 0x1e0) + uVar4 * 0x10 + 8);
    uVar6 = *puVar5;
    uVar11 = (ulong)uVar6;
    if (0 < (int)uVar6) {
      plVar9 = *(long **)(*(long *)(param_1 + 0x1e0) + uVar4 * 0x10);
      plVar7 = plVar9;
      do {
        if (*plVar7 == *param_2) {
          *puVar5 = (uint)((long)(int)uVar6 + -1);
          if ((int)uVar11 == 1) {
            return;
          }
          plVar9 = plVar9 + ((long)(int)uVar6 + -1) * 3;
          lVar8 = plVar9[1];
          *plVar7 = *plVar9;
          plVar7[1] = lVar8;
          *(int *)(plVar7 + 2) = (int)plVar9[2];
          return;
        }
        plVar7 = plVar7 + 3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  return;
}


