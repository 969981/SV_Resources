/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f79188; name: FUN_00f79188
 */


ulong FUN_00f79188(float param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  float fVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  ulong local_58;
  ulong local_50;
  float local_44;
  
  local_44 = param_1;
  uVar3 = FUN_00f79460(param_2 + 8);
  plVar11 = (long *)(param_2 + 0xc0);
  lVar5 = *plVar11;
  lVar7 = *(long *)(param_2 + 200) - lVar5 >> 3;
  uVar9 = lVar7 * -0x5555555555555555;
  local_50 = uVar3;
  if (uVar9 <= uVar3) {
    uVar12 = uVar3 + 1;
    lVar7 = uVar12 + lVar7 * 0x5555555555555555;
    if (uVar12 < uVar9 || lVar7 == 0) {
      if (uVar12 < uVar9) {
        *(ulong *)(param_2 + 200) = lVar5 + uVar12 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar11,lVar7);
      lVar5 = *plVar11;
    }
  }
  fVar2 = local_44;
  plVar11 = (long *)(param_2 + 0xf8);
  *(bool *)(lVar5 + uVar3 * 0x18) = param_4 == 0;
  *(long *)(*(long *)(param_2 + 0xc0) + uVar3 * 0x18 + 8) = param_4;
  *(float *)(*(long *)(param_2 + 0xc0) + uVar3 * 0x18 + 0x10) = local_44;
  uVar12 = *(ulong *)(param_2 + 0x130);
  uVar9 = uVar12 + 1;
  *(ulong *)(param_2 + 0x130) = uVar9;
  if (uVar12 == 0) {
    if (*(long *)(param_2 + 0x100) - (long)*(ulong **)(param_2 + 0xf8) >> 4 == 0) {
LAB_00f79258:
      FUN_00e94350(plVar11,&local_50,&local_44);
      return uVar3;
    }
    **(ulong **)(param_2 + 0xf8) = uVar3;
    lVar5 = *plVar11;
  }
  else {
    pvVar4 = *(void **)(param_2 + 0xf8);
    local_58 = uVar12 - 1;
    uVar10 = *(long *)(param_2 + 0x100) - (long)pvVar4 >> 4;
    if (param_1 < *(float *)((long)pvVar4 + local_58 * 0x10 + 8)) {
      if (uVar10 <= uVar9 && uVar9 - uVar10 != 0) {
        FUN_0103e51c(plVar11,uVar9 - uVar10);
        pvVar4 = (void *)*plVar11;
      }
      if (*(float *)((long)pvVar4 + 8) <= param_1) {
        if (uVar12 - 2 < 3) {
          uVar6 = 1;
        }
        else {
          uVar10 = (ulong)((float)(uVar12 - 2) * 0.5);
          fVar13 = *(float *)((long)pvVar4 + (uVar10 + 1) * 0x10 + 8);
          uVar9 = local_58 - (uVar10 + 1);
          if (param_1 < fVar13) {
            local_58 = uVar10 + 1;
            uVar9 = uVar10;
          }
          uVar6 = 1;
          uVar1 = local_58;
          if (fVar13 <= param_1) {
            uVar6 = uVar10 + 1;
          }
          while (local_58 = uVar1, 2 < uVar9) {
            uVar1 = uVar6 + (long)((float)uVar9 * 0.5);
            uVar9 = (long)((float)uVar9 * 0.5);
            if (*(float *)((long)pvVar4 + uVar1 * 0x10 + 8) <= param_1) {
              uVar9 = local_58 - uVar1;
              uVar6 = uVar1;
              uVar1 = local_58;
            }
          }
        }
        if (local_58 <= uVar12 && uVar6 <= local_58) {
          pfVar8 = (float *)((long)pvVar4 + local_58 * 0x10 + 8);
          while (param_1 < *pfVar8) {
            local_58 = local_58 - 1;
            if ((local_58 < uVar6) || (pfVar8 = pfVar8 + -4, uVar12 < local_58)) goto LAB_00f79374;
          }
          local_58 = local_58 + 1;
        }
LAB_00f79374:
        if (local_58 <= uVar12 && uVar6 <= local_58) {
          uVar6 = local_58;
        }
        pvVar4 = (void *)((long)pvVar4 + uVar6 * 0x10);
        memmove((void *)((long)pvVar4 + 0x10),pvVar4,(uVar12 - uVar6) * 0x10);
        *(ulong *)(*plVar11 + uVar6 * 0x10) = uVar3;
        lVar5 = *plVar11 + uVar6 * 0x10;
      }
      else {
        memmove((void *)((long)pvVar4 + 0x10),pvVar4,uVar12 << 4);
        *(ulong *)*plVar11 = uVar3;
        lVar5 = *plVar11;
      }
    }
    else {
      if (uVar10 < uVar9) goto LAB_00f79258;
      *(ulong *)((long)pvVar4 + uVar12 * 0x10) = uVar3;
      lVar5 = *plVar11 + uVar12 * 0x10;
    }
  }
  *(float *)(lVar5 + 8) = fVar2;
  return uVar3;
}


