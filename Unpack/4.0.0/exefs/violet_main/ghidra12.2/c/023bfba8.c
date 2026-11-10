/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023bfba8; name: FUN_023bfba8
 */


ulong FUN_023bfba8(float param_1,long param_2,undefined8 param_3,long param_4)

{
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
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
  uVar3 = FUN_023bfe40(param_2 + 8);
  plVar11 = (long *)(param_2 + 0xc0);
  lVar5 = *plVar11;
  lVar7 = *(long *)(param_2 + 200) - lVar5 >> 3;
  uVar10 = lVar7 * -0x5555555555555555;
  local_58 = uVar3;
  if (uVar10 <= uVar3) {
    uVar12 = uVar3 + 1;
    lVar7 = uVar12 + lVar7 * 0x5555555555555555;
    if (uVar12 < uVar10 || lVar7 == 0) {
      if (uVar12 < uVar10) {
        *(ulong *)(param_2 + 200) = lVar5 + uVar12 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar11,lVar7);
      lVar5 = *plVar11;
    }
  }
  fVar1 = local_44;
  *(bool *)(lVar5 + uVar3 * 0x18) = param_4 == 0;
  *(long *)(*(long *)(param_2 + 0xc0) + uVar3 * 0x18 + 8) = param_4;
  *(float *)(*(long *)(param_2 + 0xc0) + uVar3 * 0x18 + 0x10) = local_44;
  uVar12 = *(ulong *)(param_2 + 0x130);
  uVar10 = uVar12 + 1;
  plVar11 = (long *)(param_2 + 0xf8);
  *(ulong *)(param_2 + 0x130) = uVar10;
  if (uVar12 == 0) {
    if (*(long *)(param_2 + 0x100) - (long)*(ulong **)(param_2 + 0xf8) >> 4 == 0) {
LAB_023bfcd4:
      FUN_02374074(plVar11,&local_58,&local_44);
      return uVar3;
    }
    **(ulong **)(param_2 + 0xf8) = uVar3;
  }
  else {
    pvVar4 = *(void **)(param_2 + 0xf8);
    uVar13 = uVar12 - 1;
    uVar8 = *(long *)(param_2 + 0x100) - (long)pvVar4 >> 4;
    if (*(float *)((long)pvVar4 + uVar13 * 0x10 + 8) <= param_1) {
      if (uVar8 < uVar10) goto LAB_023bfcd4;
      *(ulong *)((long)pvVar4 + uVar12 * 0x10) = uVar3;
      lVar5 = *plVar11 + uVar12 * 0x10;
      goto LAB_023bfd0c;
    }
    if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
      FUN_0103e51c(plVar11,uVar10 - uVar8);
      pvVar4 = (void *)*plVar11;
    }
    if (*(float *)((long)pvVar4 + 8) <= param_1) {
      if (uVar12 - 2 < 3) {
        uVar6 = 1;
      }
      else {
        uVar10 = (ulong)((float)(uVar12 - 2) * 0.5);
        fVar14 = *(float *)((long)pvVar4 + (uVar10 + 1) * 0x10 + 8);
        if (fVar14 <= param_1) {
          uVar8 = uVar13 - (uVar10 + 1);
        }
        else {
          uVar13 = uVar10 + 1;
          uVar8 = uVar10;
        }
        uVar6 = 1;
        uVar2 = uVar13;
        if (fVar14 <= param_1) {
          uVar6 = uVar10 + 1;
        }
        while (uVar13 = uVar2, 2 < uVar8) {
          uVar10 = uVar6 + (long)((float)uVar8 * 0.5);
          uVar2 = uVar10;
          uVar8 = (long)((float)uVar8 * 0.5);
          if (*(float *)((long)pvVar4 + uVar10 * 0x10 + 8) <= param_1) {
            uVar6 = uVar10;
            uVar2 = uVar13;
            uVar8 = uVar13 - uVar10;
          }
        }
      }
      if (uVar13 <= uVar12 && uVar6 <= uVar13) {
        pfVar9 = (float *)((long)pvVar4 + uVar13 * 0x10 + 8);
        while (param_1 < *pfVar9) {
          uVar13 = uVar13 - 1;
          if ((uVar13 < uVar6) || (pfVar9 = pfVar9 + -4, uVar12 < uVar13)) goto LAB_023bfd64;
        }
        uVar13 = uVar13 + 1;
      }
LAB_023bfd64:
      if (uVar13 <= uVar12 && uVar6 <= uVar13) {
        uVar6 = uVar13;
      }
      pvVar4 = (void *)((long)pvVar4 + uVar6 * 0x10);
      memmove((void *)((long)pvVar4 + 0x10),pvVar4,(uVar12 - uVar6) * 0x10);
      *(ulong *)(*plVar11 + uVar6 * 0x10) = uVar3;
      lVar5 = *plVar11 + uVar6 * 0x10;
      goto LAB_023bfd0c;
    }
    memmove((void *)((long)pvVar4 + 0x10),pvVar4,uVar12 << 4);
    *(ulong *)*plVar11 = uVar3;
  }
  lVar5 = *plVar11;
LAB_023bfd0c:
  *(float *)(lVar5 + 8) = fVar1;
  return uVar3;
}


