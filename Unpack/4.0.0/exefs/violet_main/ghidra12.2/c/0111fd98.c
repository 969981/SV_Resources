/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111fd98; name: FUN_0111fd98
 */


ulong FUN_0111fd98(float param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  float fVar15;
  ulong local_50;
  float local_44;
  
  local_44 = param_1;
  uVar4 = FUN_011200c4(param_2 + 8);
  plVar14 = (long *)(param_2 + 0xc0);
  lVar8 = *plVar14;
  lVar10 = *(long *)(param_2 + 200) - lVar8 >> 3;
  uVar12 = lVar10 * -0x5555555555555555;
  local_50 = uVar4;
  if (uVar12 <= uVar4) {
    uVar6 = uVar4 + 1;
    lVar10 = uVar6 + lVar10 * 0x5555555555555555;
    if (uVar6 < uVar12 || lVar10 == 0) {
      if (uVar6 < uVar12) {
        *(ulong *)(param_2 + 200) = lVar8 + uVar6 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar14,lVar10);
      lVar8 = *plVar14;
    }
  }
  fVar2 = local_44;
  *(bool *)(lVar8 + uVar4 * 0x18) = param_4 == 0;
  *(long *)(*(long *)(param_2 + 0xc0) + uVar4 * 0x18 + 8) = param_4;
  *(float *)(*(long *)(param_2 + 0xc0) + uVar4 * 0x18 + 0x10) = local_44;
  uVar6 = *(ulong *)(param_2 + 0x130);
  uVar12 = uVar6 + 1;
  plVar14 = (long *)(param_2 + 0xf8);
  *(ulong *)(param_2 + 0x130) = uVar12;
  if (uVar6 == 0) {
    puVar7 = *(ulong **)(param_2 + 0xf8);
    if (*(long *)(param_2 + 0x100) - (long)puVar7 >> 4 == 0) {
LAB_0111fec8:
      FUN_00e94350(plVar14,&local_50,&local_44);
      return uVar4;
    }
  }
  else {
    pvVar5 = *(void **)(param_2 + 0xf8);
    uVar11 = uVar6 - 1;
    uVar13 = *(long *)(param_2 + 0x100) - (long)pvVar5 >> 4;
    if (*(float *)((long)pvVar5 + uVar11 * 0x10 + 8) <= param_1) {
      if (uVar13 < uVar12) goto LAB_0111fec8;
      *(ulong *)((long)pvVar5 + uVar6 * 0x10) = uVar4;
      lVar8 = *plVar14 + uVar6 * 0x10;
      goto LAB_0111fe78;
    }
    if (uVar13 <= uVar12 && uVar12 - uVar13 != 0) {
      FUN_0103e51c(plVar14,uVar12 - uVar13);
      pvVar5 = (void *)*plVar14;
    }
    if (*(float *)((long)pvVar5 + 8) <= param_1) {
      if (uVar6 - 2 < 3) {
        uVar12 = 1;
      }
      else {
        uVar13 = (ulong)((float)(uVar6 - 2) * 0.5);
        fVar15 = *(float *)((long)pvVar5 + (uVar13 + 1) * 0x10 + 8);
        if (fVar15 <= param_1) {
          uVar1 = uVar11 - (uVar13 + 1);
        }
        else {
          uVar11 = uVar13 + 1;
          uVar1 = uVar13;
        }
        uVar12 = 1;
        if (fVar15 <= param_1) {
          uVar12 = uVar13 + 1;
        }
        if (2 < uVar1) {
          uVar13 = uVar12 + (long)((float)uVar1 * 0.5);
          uVar3 = uVar13;
          uVar1 = (long)((float)uVar1 * 0.5);
          if (*(float *)((long)pvVar5 + uVar13 * 0x10 + 8) <= param_1) {
            uVar12 = uVar13;
            uVar3 = uVar11;
            uVar1 = uVar11 - uVar13;
          }
          uVar11 = uVar3;
          if (2 < uVar1) {
            uVar13 = uVar12 + (long)((float)uVar1 * 0.5);
            uVar3 = uVar13;
            uVar1 = (long)((float)uVar1 * 0.5);
            if (*(float *)((long)pvVar5 + uVar13 * 0x10 + 8) <= param_1) {
              uVar12 = uVar13;
              uVar3 = uVar11;
              uVar1 = uVar11 - uVar13;
            }
            while (uVar11 = uVar3, 2 < uVar1) {
              uVar13 = uVar12 + (long)((float)uVar1 * 0.5);
              uVar3 = uVar13;
              uVar1 = (long)((float)uVar1 * 0.5);
              if (*(float *)((long)pvVar5 + uVar13 * 0x10 + 8) <= param_1) {
                uVar12 = uVar13;
                uVar3 = uVar11;
                uVar1 = uVar11 - uVar13;
              }
            }
          }
        }
      }
      if (uVar11 <= uVar6 && uVar12 <= uVar11) {
        pfVar9 = (float *)((long)pvVar5 + uVar11 * 0x10 + 8);
        while (param_1 < *pfVar9) {
          uVar11 = uVar11 - 1;
          if ((uVar11 < uVar12) || (pfVar9 = pfVar9 + -4, uVar6 < uVar11)) goto LAB_0112006c;
        }
        uVar11 = uVar11 + 1;
      }
LAB_0112006c:
      if (uVar11 <= uVar6 && uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
      pvVar5 = (void *)((long)pvVar5 + uVar12 * 0x10);
      memmove((void *)((long)pvVar5 + 0x10),pvVar5,(uVar6 - uVar12) * 0x10);
      *(ulong *)(*plVar14 + uVar12 * 0x10) = uVar4;
      lVar8 = *plVar14 + uVar12 * 0x10;
      goto LAB_0111fe78;
    }
    memmove((void *)((long)pvVar5 + 0x10),pvVar5,uVar6 << 4);
    puVar7 = (ulong *)*plVar14;
  }
  *puVar7 = uVar4;
  lVar8 = *plVar14;
LAB_0111fe78:
  *(float *)(lVar8 + 8) = fVar2;
  return uVar4;
}


