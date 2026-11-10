/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f34734; name: FUN_00f34734
 */


ulong FUN_00f34734(float param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  float fVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  ulong local_58;
  ulong local_50;
  float local_44;
  
  local_44 = param_1;
  uVar3 = FUN_00f34a88(param_2 + 8);
  plVar11 = (long *)(param_2 + 0xc0);
  lVar6 = *plVar11;
  lVar7 = *(long *)(param_2 + 200) - lVar6 >> 3;
  uVar10 = lVar7 * -0x5555555555555555;
  local_50 = uVar3;
  if (uVar10 <= uVar3) {
    uVar12 = uVar3 + 1;
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
  plVar11 = (long *)(param_2 + 0xf8);
  *(bool *)(lVar6 + uVar3 * 0x18) = param_4 == 0;
  *(long *)(*(long *)(param_2 + 0xc0) + uVar3 * 0x18 + 8) = param_4;
  *(float *)(*(long *)(param_2 + 0xc0) + uVar3 * 0x18 + 0x10) = local_44;
  uVar12 = *(ulong *)(param_2 + 0x130);
  uVar10 = uVar12 + 1;
  *(ulong *)(param_2 + 0x130) = uVar10;
  if (uVar12 == 0) {
    if (*(long *)(param_2 + 0x100) - (long)*(ulong **)(param_2 + 0xf8) >> 4 == 0) {
LAB_00f34854:
      FUN_00e94350(plVar11,&local_50,&local_44);
      return uVar3;
    }
    **(ulong **)(param_2 + 0xf8) = uVar3;
    lVar6 = *plVar11;
  }
  else {
    pvVar4 = *(void **)(param_2 + 0xf8);
    local_58 = uVar12 - 1;
    uVar8 = *(long *)(param_2 + 0x100) - (long)pvVar4 >> 4;
    if (param_1 < *(float *)((long)pvVar4 + local_58 * 0x10 + 8)) {
      if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
        FUN_0103e51c(plVar11,uVar10 - uVar8);
        pvVar4 = (void *)*plVar11;
      }
      if (*(float *)((long)pvVar4 + 8) <= param_1) {
        if (uVar12 - 2 < 3) {
          uVar10 = 1;
        }
        else {
          uVar5 = (ulong)((float)(uVar12 - 2) * 0.5);
          fVar13 = *(float *)((long)pvVar4 + (uVar5 + 1) * 0x10 + 8);
          uVar8 = local_58 - (uVar5 + 1);
          if (param_1 < fVar13) {
            uVar8 = uVar5;
            uVar1 = uVar5 + 1;
          }
          else {
            uVar1 = local_58;
          }
          uVar10 = 1;
          if (fVar13 <= param_1) {
            uVar10 = uVar5 + 1;
          }
          local_58 = uVar1;
          if (2 < uVar8) {
            uVar5 = uVar10 + (long)((float)uVar8 * 0.5);
            local_58 = uVar5;
            uVar8 = (long)((float)uVar8 * 0.5);
            if (*(float *)((long)pvVar4 + uVar5 * 0x10 + 8) <= param_1) {
              uVar10 = uVar5;
              local_58 = uVar1;
              uVar8 = uVar1 - uVar5;
            }
            if (2 < uVar8) {
              uVar5 = uVar10 + (long)((float)uVar8 * 0.5);
              uVar1 = uVar5;
              uVar8 = (long)((float)uVar8 * 0.5);
              if (*(float *)((long)pvVar4 + uVar5 * 0x10 + 8) <= param_1) {
                uVar10 = uVar5;
                uVar1 = local_58;
                uVar8 = local_58 - uVar5;
              }
              while (local_58 = uVar1, 2 < uVar8) {
                uVar5 = uVar10 + (long)((float)uVar8 * 0.5);
                uVar1 = uVar5;
                uVar8 = (long)((float)uVar8 * 0.5);
                if (*(float *)((long)pvVar4 + uVar5 * 0x10 + 8) <= param_1) {
                  uVar10 = uVar5;
                  uVar1 = local_58;
                  uVar8 = local_58 - uVar5;
                }
              }
            }
          }
        }
        if (!(uVar12 < local_58 || local_58 < uVar10)) {
          pfVar9 = (float *)((long)pvVar4 + local_58 * 0x10 + 8);
          while (param_1 < *pfVar9) {
            local_58 = local_58 - 1;
            if ((local_58 < uVar10) || (pfVar9 = pfVar9 + -4, uVar12 < local_58)) goto LAB_00f34a28;
          }
          local_58 = local_58 + 1;
        }
LAB_00f34a28:
        if (local_58 <= uVar12 && uVar10 <= local_58) {
          uVar10 = local_58;
        }
        pvVar4 = (void *)((long)pvVar4 + uVar10 * 0x10);
        memmove((void *)((long)pvVar4 + 0x10),pvVar4,(uVar12 - uVar10) * 0x10);
        *(ulong *)(*plVar11 + uVar10 * 0x10) = uVar3;
        lVar6 = *plVar11 + uVar10 * 0x10;
      }
      else {
        memmove((void *)((long)pvVar4 + 0x10),pvVar4,uVar12 << 4);
        *(ulong *)*plVar11 = uVar3;
        lVar6 = *plVar11;
      }
    }
    else {
      if (uVar8 < uVar10) goto LAB_00f34854;
      *(ulong *)((long)pvVar4 + uVar12 * 0x10) = uVar3;
      lVar6 = *plVar11 + uVar12 * 0x10;
    }
  }
  *(float *)(lVar6 + 8) = fVar2;
  return uVar3;
}


