/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02207328; name: FUN_02207328
 */


ulong FUN_02207328(float param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  ulong local_50;
  float local_44;
  
  local_44 = param_1;
  uVar2 = FUN_02207598(param_2 + 8);
  plVar10 = (long *)(param_2 + 0xc0);
  lVar4 = *plVar10;
  lVar6 = *(long *)(param_2 + 200) - lVar4 >> 3;
  uVar9 = lVar6 * -0x5555555555555555;
  local_50 = uVar2;
  if (uVar9 <= uVar2) {
    uVar11 = uVar2 + 1;
    lVar6 = uVar11 + lVar6 * 0x5555555555555555;
    if (uVar11 < uVar9 || lVar6 == 0) {
      if (uVar11 < uVar9) {
        *(ulong *)(param_2 + 200) = lVar4 + uVar11 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar10,lVar6);
      lVar4 = *plVar10;
    }
  }
  *(float *)(lVar4 + uVar2 * 0x18 + 0x10) = param_1;
  uVar11 = *(ulong *)(param_2 + 0x130);
  uVar9 = uVar11 + 1;
  plVar10 = (long *)(param_2 + 0xf8);
  *(ulong *)(param_2 + 0x130) = uVar9;
  if (uVar11 == 0) {
    if (*(long *)(param_2 + 0x100) - (long)*(ulong **)(param_2 + 0xf8) >> 4 == 0) {
LAB_0220742c:
      FUN_0142d14c(plVar10,&local_50,&local_44);
      return uVar2;
    }
    **(ulong **)(param_2 + 0xf8) = uVar2;
  }
  else {
    pvVar3 = *(void **)(param_2 + 0xf8);
    uVar12 = uVar11 - 1;
    uVar7 = *(long *)(param_2 + 0x100) - (long)pvVar3 >> 4;
    if (*(float *)((long)pvVar3 + uVar12 * 0x10 + 8) <= param_1) {
      if (uVar7 < uVar9) goto LAB_0220742c;
      *(ulong *)((long)pvVar3 + uVar11 * 0x10) = uVar2;
      lVar4 = *plVar10 + uVar11 * 0x10;
      goto LAB_02207464;
    }
    if (uVar7 <= uVar9 && uVar9 - uVar7 != 0) {
      FUN_0103e51c(plVar10,uVar9 - uVar7);
      pvVar3 = (void *)*plVar10;
    }
    if (*(float *)((long)pvVar3 + 8) <= param_1) {
      if (uVar11 - 2 < 3) {
        uVar5 = 1;
      }
      else {
        uVar9 = (ulong)((float)(uVar11 - 2) * 0.5);
        fVar13 = *(float *)((long)pvVar3 + (uVar9 + 1) * 0x10 + 8);
        if (fVar13 <= param_1) {
          uVar7 = uVar12 - (uVar9 + 1);
        }
        else {
          uVar12 = uVar9 + 1;
          uVar7 = uVar9;
        }
        uVar5 = 1;
        uVar1 = uVar12;
        if (fVar13 <= param_1) {
          uVar5 = uVar9 + 1;
        }
        while (uVar12 = uVar1, 2 < uVar7) {
          uVar9 = uVar5 + (long)((float)uVar7 * 0.5);
          uVar1 = uVar9;
          uVar7 = (long)((float)uVar7 * 0.5);
          if (*(float *)((long)pvVar3 + uVar9 * 0x10 + 8) <= param_1) {
            uVar5 = uVar9;
            uVar1 = uVar12;
            uVar7 = uVar12 - uVar9;
          }
        }
      }
      if (uVar12 <= uVar11 && uVar5 <= uVar12) {
        pfVar8 = (float *)((long)pvVar3 + uVar12 * 0x10 + 8);
        while (param_1 < *pfVar8) {
          uVar12 = uVar12 - 1;
          if ((uVar12 < uVar5) || (pfVar8 = pfVar8 + -4, uVar11 < uVar12)) goto LAB_022074bc;
        }
        uVar12 = uVar12 + 1;
      }
LAB_022074bc:
      if (uVar12 <= uVar11 && uVar5 <= uVar12) {
        uVar5 = uVar12;
      }
      pvVar3 = (void *)((long)pvVar3 + uVar5 * 0x10);
      memmove((void *)((long)pvVar3 + 0x10),pvVar3,(uVar11 - uVar5) * 0x10);
      *(ulong *)(*plVar10 + uVar5 * 0x10) = uVar2;
      lVar4 = *plVar10 + uVar5 * 0x10;
      goto LAB_02207464;
    }
    memmove((void *)((long)pvVar3 + 0x10),pvVar3,uVar11 << 4);
    *(ulong *)*plVar10 = uVar2;
  }
  lVar4 = *plVar10;
LAB_02207464:
  *(float *)(lVar4 + 8) = param_1;
  return uVar2;
}


