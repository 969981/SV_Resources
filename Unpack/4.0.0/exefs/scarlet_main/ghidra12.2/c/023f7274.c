/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023f7274; name: FUN_023f7274
 */


ulong FUN_023f7274(float param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  ulong local_58;
  float local_44;
  
  local_44 = param_1;
  uVar4 = FUN_023f7574(param_2 + 8);
  plVar11 = (long *)(param_2 + 0xc0);
  lVar6 = *plVar11;
  lVar7 = *(long *)(param_2 + 200) - lVar6 >> 3;
  uVar10 = lVar7 * -0x5555555555555555;
  local_58 = uVar4;
  if (uVar10 <= uVar4) {
    uVar12 = uVar4 + 1;
    lVar7 = uVar12 + lVar7 * 0x5555555555555555;
    if (uVar12 < uVar10 || lVar7 == 0) {
      if (uVar12 < uVar10) {
        *(ulong *)(param_2 + 200) = lVar6 + uVar12 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar11,lVar7);
      lVar6 = *plVar11;
    }
  }
  fVar2 = local_44;
  *(bool *)(lVar6 + uVar4 * 0x18) = param_4 == 0;
  *(long *)(*(long *)(param_2 + 0xc0) + uVar4 * 0x18 + 8) = param_4;
  *(float *)(*(long *)(param_2 + 0xc0) + uVar4 * 0x18 + 0x10) = local_44;
  uVar12 = *(ulong *)(param_2 + 0x130);
  uVar10 = uVar12 + 1;
  plVar11 = (long *)(param_2 + 0xf8);
  *(ulong *)(param_2 + 0x130) = uVar10;
  if (uVar12 == 0) {
    if (*(long *)(param_2 + 0x100) - (long)*(ulong **)(param_2 + 0xf8) >> 4 == 0) {
LAB_023f73a0:
      FUN_02374074(plVar11,&local_58,&local_44);
      return uVar4;
    }
    **(ulong **)(param_2 + 0xf8) = uVar4;
  }
  else {
    pvVar5 = *(void **)(param_2 + 0xf8);
    uVar13 = uVar12 - 1;
    uVar8 = *(long *)(param_2 + 0x100) - (long)pvVar5 >> 4;
    if (*(float *)((long)pvVar5 + uVar13 * 0x10 + 8) <= param_1) {
      if (uVar8 < uVar10) goto LAB_023f73a0;
      *(ulong *)((long)pvVar5 + uVar12 * 0x10) = uVar4;
      lVar6 = *plVar11 + uVar12 * 0x10;
      goto LAB_023f73d8;
    }
    if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
      FUN_0103e51c(plVar11,uVar10 - uVar8);
      pvVar5 = (void *)*plVar11;
    }
    if (*(float *)((long)pvVar5 + 8) <= param_1) {
      if (uVar12 - 2 < 3) {
        uVar10 = 1;
      }
      else {
        uVar8 = (ulong)((float)(uVar12 - 2) * 0.5);
        fVar14 = *(float *)((long)pvVar5 + (uVar8 + 1) * 0x10 + 8);
        if (fVar14 <= param_1) {
          uVar1 = uVar13 - (uVar8 + 1);
        }
        else {
          uVar13 = uVar8 + 1;
          uVar1 = uVar8;
        }
        uVar10 = 1;
        if (fVar14 <= param_1) {
          uVar10 = uVar8 + 1;
        }
        if (2 < uVar1) {
          uVar8 = uVar10 + (long)((float)uVar1 * 0.5);
          uVar3 = uVar8;
          uVar1 = (long)((float)uVar1 * 0.5);
          if (*(float *)((long)pvVar5 + uVar8 * 0x10 + 8) <= param_1) {
            uVar10 = uVar8;
            uVar3 = uVar13;
            uVar1 = uVar13 - uVar8;
          }
          uVar13 = uVar3;
          if (2 < uVar1) {
            uVar8 = uVar10 + (long)((float)uVar1 * 0.5);
            uVar3 = uVar8;
            uVar1 = (long)((float)uVar1 * 0.5);
            if (*(float *)((long)pvVar5 + uVar8 * 0x10 + 8) <= param_1) {
              uVar10 = uVar8;
              uVar3 = uVar13;
              uVar1 = uVar13 - uVar8;
            }
            while (uVar13 = uVar3, 2 < uVar1) {
              uVar8 = uVar10 + (long)((float)uVar1 * 0.5);
              uVar3 = uVar8;
              uVar1 = (long)((float)uVar1 * 0.5);
              if (*(float *)((long)pvVar5 + uVar8 * 0x10 + 8) <= param_1) {
                uVar10 = uVar8;
                uVar3 = uVar13;
                uVar1 = uVar13 - uVar8;
              }
            }
          }
        }
      }
      if (uVar13 <= uVar12 && uVar10 <= uVar13) {
        pfVar9 = (float *)((long)pvVar5 + uVar13 * 0x10 + 8);
        while (param_1 < *pfVar9) {
          uVar13 = uVar13 - 1;
          if ((uVar13 < uVar10) || (pfVar9 = pfVar9 + -4, uVar12 < uVar13)) goto LAB_023f7528;
        }
        uVar13 = uVar13 + 1;
      }
LAB_023f7528:
      if (uVar13 <= uVar12 && uVar10 <= uVar13) {
        uVar10 = uVar13;
      }
      pvVar5 = (void *)((long)pvVar5 + uVar10 * 0x10);
      memmove((void *)((long)pvVar5 + 0x10),pvVar5,(uVar12 - uVar10) * 0x10);
      *(ulong *)(*plVar11 + uVar10 * 0x10) = uVar4;
      lVar6 = *plVar11 + uVar10 * 0x10;
      goto LAB_023f73d8;
    }
    memmove((void *)((long)pvVar5 + 0x10),pvVar5,uVar12 << 4);
    *(ulong *)*plVar11 = uVar4;
  }
  lVar6 = *plVar11;
LAB_023f73d8:
  *(float *)(lVar6 + 8) = fVar2;
  return uVar4;
}


