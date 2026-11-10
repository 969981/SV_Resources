/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a6a238; name: FUN_02a6a238
 */


ulong FUN_02a6a238(float param_1,long param_2,undefined8 param_3,long param_4)

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
  ulong local_58;
  float local_44;
  
  local_44 = param_1;
  uVar4 = FUN_02a6a494(param_2 + 8);
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
LAB_02a6a378:
      FUN_00e94350(plVar11,&local_58,&local_44);
      return uVar4;
    }
    **(ulong **)(param_2 + 0xf8) = uVar4;
  }
  else {
    pvVar5 = *(void **)(param_2 + 0xf8);
    uVar8 = *(long *)(param_2 + 0x100) - (long)pvVar5 >> 4;
    if (*(float *)((long)pvVar5 + (uVar12 - 1) * 0x10 + 8) <= param_1) {
      if (uVar8 < uVar10) goto LAB_02a6a378;
      *(ulong *)((long)pvVar5 + uVar12 * 0x10) = uVar4;
      lVar6 = *plVar11 + uVar12 * 0x10;
      goto LAB_02a6a45c;
    }
    if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
      FUN_0103e51c(plVar11,uVar10 - uVar8);
      pvVar5 = (void *)*plVar11;
    }
    if (*(float *)((long)pvVar5 + 8) <= param_1) {
      uVar3 = uVar12 - 1;
      uVar8 = uVar12 - 2;
      uVar10 = 1;
      while (uVar13 = uVar3, 2 < uVar8) {
        uVar1 = uVar10 + (long)((float)uVar8 * 0.5);
        uVar3 = uVar1;
        uVar8 = (long)((float)uVar8 * 0.5);
        if (*(float *)((long)pvVar5 + uVar1 * 0x10 + 8) <= param_1) {
          uVar3 = uVar13;
          uVar8 = uVar13 - uVar1;
          uVar10 = uVar1;
        }
      }
      if (uVar13 <= uVar12 && uVar10 <= uVar13) {
        pfVar9 = (float *)((long)pvVar5 + uVar13 * 0x10 + 8);
        while (param_1 < *pfVar9) {
          uVar13 = uVar13 - 1;
          if ((uVar13 < uVar10) || (pfVar9 = pfVar9 + -4, uVar12 < uVar13)) goto LAB_02a6a428;
        }
        uVar13 = uVar13 + 1;
      }
LAB_02a6a428:
      if (uVar13 <= uVar12 && uVar10 <= uVar13) {
        uVar10 = uVar13;
      }
      pvVar5 = (void *)((long)pvVar5 + uVar10 * 0x10);
      memmove((void *)((long)pvVar5 + 0x10),pvVar5,(uVar12 - uVar10) * 0x10);
      *(ulong *)(*plVar11 + uVar10 * 0x10) = uVar4;
      lVar6 = *plVar11 + uVar10 * 0x10;
      goto LAB_02a6a45c;
    }
    memmove((void *)((long)pvVar5 + 0x10),pvVar5,uVar12 << 4);
    *(ulong *)*plVar11 = uVar4;
  }
  lVar6 = *plVar11;
LAB_02a6a45c:
  *(float *)(lVar6 + 8) = fVar2;
  return uVar4;
}


