/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e33b8c; name: FUN_01e33b8c
 */


ulong FUN_01e33b8c(float param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
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
  uVar3 = FUN_01e33ecc(param_2 + 8);
  plVar10 = (long *)(param_2 + 0xc0);
  lVar5 = *plVar10;
  lVar6 = *(long *)(param_2 + 200) - lVar5 >> 3;
  uVar9 = lVar6 * -0x5555555555555555;
  local_50 = uVar3;
  if (uVar9 <= uVar3) {
    uVar11 = uVar3 + 1;
    lVar6 = uVar11 + lVar6 * 0x5555555555555555;
    if (uVar11 < uVar9 || lVar6 == 0) {
      if (uVar11 < uVar9) {
        *(ulong *)(param_2 + 200) = lVar5 + uVar11 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar10,lVar6);
      lVar5 = *plVar10;
    }
  }
  *(float *)(lVar5 + uVar3 * 0x18 + 0x10) = param_1;
  uVar11 = *(ulong *)(param_2 + 0x130);
  uVar9 = uVar11 + 1;
  plVar10 = (long *)(param_2 + 0xf8);
  *(ulong *)(param_2 + 0x130) = uVar9;
  if (uVar11 == 0) {
    if (*(long *)(param_2 + 0x100) - (long)*(ulong **)(param_2 + 0xf8) >> 4 == 0) {
LAB_01e33c90:
      FUN_0109b618(plVar10,&local_50,&local_44);
      return uVar3;
    }
    **(ulong **)(param_2 + 0xf8) = uVar3;
  }
  else {
    pvVar4 = *(void **)(param_2 + 0xf8);
    uVar12 = uVar11 - 1;
    uVar7 = *(long *)(param_2 + 0x100) - (long)pvVar4 >> 4;
    if (*(float *)((long)pvVar4 + uVar12 * 0x10 + 8) <= param_1) {
      if (uVar7 < uVar9) goto LAB_01e33c90;
      *(ulong *)((long)pvVar4 + uVar11 * 0x10) = uVar3;
      lVar5 = *plVar10 + uVar11 * 0x10;
      goto LAB_01e33cc8;
    }
    if (uVar7 <= uVar9 && uVar9 - uVar7 != 0) {
      FUN_0103e51c(plVar10,uVar9 - uVar7);
      pvVar4 = (void *)*plVar10;
    }
    if (*(float *)((long)pvVar4 + 8) <= param_1) {
      if (uVar11 - 2 < 3) {
        uVar9 = 1;
      }
      else {
        uVar7 = (ulong)((float)(uVar11 - 2) * 0.5);
        fVar13 = *(float *)((long)pvVar4 + (uVar7 + 1) * 0x10 + 8);
        if (fVar13 <= param_1) {
          uVar1 = uVar12 - (uVar7 + 1);
        }
        else {
          uVar12 = uVar7 + 1;
          uVar1 = uVar7;
        }
        uVar9 = 1;
        if (fVar13 <= param_1) {
          uVar9 = uVar7 + 1;
        }
        if (2 < uVar1) {
          uVar7 = uVar9 + (long)((float)uVar1 * 0.5);
          uVar2 = uVar7;
          uVar1 = (long)((float)uVar1 * 0.5);
          if (*(float *)((long)pvVar4 + uVar7 * 0x10 + 8) <= param_1) {
            uVar9 = uVar7;
            uVar2 = uVar12;
            uVar1 = uVar12 - uVar7;
          }
          uVar12 = uVar2;
          if (2 < uVar1) {
            uVar7 = uVar9 + (long)((float)uVar1 * 0.5);
            uVar2 = uVar7;
            uVar1 = (long)((float)uVar1 * 0.5);
            if (*(float *)((long)pvVar4 + uVar7 * 0x10 + 8) <= param_1) {
              uVar9 = uVar7;
              uVar2 = uVar12;
              uVar1 = uVar12 - uVar7;
            }
            uVar12 = uVar2;
            if (2 < uVar1) {
              uVar7 = uVar9 + (long)((float)uVar1 * 0.5);
              uVar2 = uVar7;
              uVar1 = (long)((float)uVar1 * 0.5);
              if (*(float *)((long)pvVar4 + uVar7 * 0x10 + 8) <= param_1) {
                uVar9 = uVar7;
                uVar2 = uVar12;
                uVar1 = uVar12 - uVar7;
              }
              uVar12 = uVar2;
              if (2 < uVar1) {
                uVar7 = uVar9 + (long)((float)uVar1 * 0.5);
                uVar2 = uVar7;
                uVar1 = (long)((float)uVar1 * 0.5);
                if (*(float *)((long)pvVar4 + uVar7 * 0x10 + 8) <= param_1) {
                  uVar9 = uVar7;
                  uVar2 = uVar12;
                  uVar1 = uVar12 - uVar7;
                }
                while (uVar12 = uVar2, 2 < uVar1) {
                  uVar7 = uVar9 + (long)((float)uVar1 * 0.5);
                  uVar2 = uVar7;
                  uVar1 = (long)((float)uVar1 * 0.5);
                  if (*(float *)((long)pvVar4 + uVar7 * 0x10 + 8) <= param_1) {
                    uVar9 = uVar7;
                    uVar2 = uVar12;
                    uVar1 = uVar12 - uVar7;
                  }
                }
              }
            }
          }
        }
      }
      if (uVar12 <= uVar11 && uVar9 <= uVar12) {
        pfVar8 = (float *)((long)pvVar4 + uVar12 * 0x10 + 8);
        while (param_1 < *pfVar8) {
          uVar12 = uVar12 - 1;
          if ((uVar12 < uVar9) || (pfVar8 = pfVar8 + -4, uVar11 < uVar12)) goto LAB_01e33e64;
        }
        uVar12 = uVar12 + 1;
      }
LAB_01e33e64:
      if (uVar12 <= uVar11 && uVar9 <= uVar12) {
        uVar9 = uVar12;
      }
      pvVar4 = (void *)((long)pvVar4 + uVar9 * 0x10);
      memmove((void *)((long)pvVar4 + 0x10),pvVar4,(uVar11 - uVar9) * 0x10);
      *(ulong *)(*plVar10 + uVar9 * 0x10) = uVar3;
      lVar5 = *plVar10 + uVar9 * 0x10;
      goto LAB_01e33cc8;
    }
    memmove((void *)((long)pvVar4 + 0x10),pvVar4,uVar11 << 4);
    *(ulong *)*plVar10 = uVar3;
  }
  lVar5 = *plVar10;
LAB_01e33cc8:
  *(float *)(lVar5 + 8) = param_1;
  return uVar3;
}


