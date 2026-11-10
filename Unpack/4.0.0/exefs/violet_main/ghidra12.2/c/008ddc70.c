/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ddc70; name: FUN_008ddc70
 */


undefined8 FUN_008ddc70(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  lVar4 = *param_1;
  if (*(char *)(*(long *)(lVar4 + 0xa0) + 0x752) == '\0') {
    puVar3 = (undefined8 *)(**(code **)(*(long *)(lVar4 + 0x828) + 0x10))(lVar4 + 0x828,0x40,0x80);
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 **)(*param_1 + 0x418) = puVar3;
    fVar11 = *(float *)(*(long *)(*param_1 + 0xa0) + 0x800);
    lVar4 = *(long *)(*(long *)(*param_1 + 0x238) + 0x2b8);
    fVar12 = fVar11;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 4);
      if (0 < (int)uVar1) {
        if (uVar1 == 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          pfVar6 = (float *)(lVar4 + 0x1c);
          do {
            fVar12 = pfVar6[-4];
            if (pfVar6[-4] <= fVar11) {
              fVar12 = fVar11;
            }
            fVar11 = *pfVar6;
            if (*pfVar6 <= fVar12) {
              fVar11 = fVar12;
            }
            uVar5 = uVar5 + 2;
            pfVar6 = pfVar6 + 8;
          } while (((ulong)uVar1 & 0xfffffffe) != uVar5);
        }
        fVar12 = fVar11;
        if (((uVar1 & 1) != 0) &&
           (fVar12 = *(float *)(lVar4 + uVar5 * 0x10 + 0xc), fVar12 <= fVar11)) {
          fVar12 = fVar11;
        }
      }
    }
    *(int *)(puVar3 + 6) = (int)fVar12;
    fVar11 = (float)*(int *)(*(long *)(*param_1 + 0xa0) + 0x8b8);
    lVar4 = *(long *)(*(long *)(*param_1 + 0x238) + 0x2c0);
    fVar12 = fVar11;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 4);
      if (0 < (int)uVar1) {
        if (uVar1 == 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          pfVar6 = (float *)(lVar4 + 0x1c);
          do {
            fVar12 = pfVar6[-4];
            if (pfVar6[-4] <= fVar11) {
              fVar12 = fVar11;
            }
            fVar11 = *pfVar6;
            if (*pfVar6 <= fVar12) {
              fVar11 = fVar12;
            }
            uVar5 = uVar5 + 2;
            pfVar6 = pfVar6 + 8;
          } while (((ulong)uVar1 & 0xfffffffe) != uVar5);
        }
        fVar12 = fVar11;
        if (((uVar1 & 1) != 0) &&
           (fVar12 = *(float *)(lVar4 + uVar5 * 0x10 + 0xc), fVar12 <= fVar11)) {
          fVar12 = fVar11;
        }
      }
    }
    *(int *)((long)puVar3 + 0x34) = (int)fVar12;
    *(undefined4 *)(puVar3 + 7) = 0;
    lVar4 = *(long *)(*(long *)(*param_1 + 0x238) + 0x338);
    *(undefined4 *)puVar3 = *(undefined4 *)(lVar4 + 0x1c);
    *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(lVar4 + 0x20);
    puVar3[1] = 0;
    uVar5 = FUN_008c8e74(*param_1,4,0x60);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    lVar4 = *param_1;
    lVar9 = *(long *)PTR_DAT_047d25d8;
    lVar10 = *(long *)(*(long *)(lVar4 + 0x238) + 0x338);
    lVar8 = *(long *)(lVar4 + 0x418);
    iVar7 = (int)*(float *)(lVar10 + 0x14);
    iVar2 = FUN_008dfcd4(lVar4,iVar7);
    iVar2 = *(int *)(lVar4 + 0x230) + iVar2;
    *(int *)(lVar8 + 0x28) = iVar2;
    iVar7 = (iVar7 + (iVar7 + -1) * (int)*(float *)(lVar10 + 0x10)) * 2;
    *(int *)(lVar8 + 0x20) = iVar7;
    iVar7 = iVar7 * iVar2;
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined1 *)(lVar8 + 0x10) = 0;
    *(int *)(lVar8 + 0x24) = iVar7 * iVar2;
    if (iVar7 != 0) {
      uVar5 = FUN_008c8eb8(lVar4,*(undefined4 *)(lVar9 + 0x18),(long)iVar7 * 0x50);
      if ((uVar5 & 1) != 0) {
        *(undefined1 *)(lVar8 + 0x10) = 1;
        return 1;
      }
      if (*(char *)(lVar8 + 0x10) != '\0') {
        return 1;
      }
    }
    FUN_008d43d0(*param_1,0x10000);
    FUN_008d43e0("[Stripe] Memory Allocate Error!! : %d\n",0x38);
  }
  return 0;
}


