/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01097894; name: FUN_01097894
 */


ulong FUN_01097894(float param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  ulong local_48;
  float local_34;
  
  local_34 = param_1;
  uVar3 = FUN_010985ac(param_2 + 8);
  plVar12 = (long *)(param_2 + 0xc0);
  lVar5 = *plVar12;
  lVar6 = *(long *)(param_2 + 200) - lVar5 >> 3;
  uVar8 = lVar6 * -0x5555555555555555;
  local_48 = uVar3;
  if (uVar8 <= uVar3) {
    uVar7 = uVar3 + 1;
    lVar6 = uVar7 + lVar6 * 0x5555555555555555;
    if (uVar7 < uVar8 || lVar6 == 0) {
      if (uVar7 < uVar8) {
        *(ulong *)(param_2 + 200) = lVar5 + uVar7 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar12,lVar6);
      lVar5 = *plVar12;
    }
  }
  *(float *)(lVar5 + uVar3 * 0x18 + 0x10) = param_1;
  uVar7 = *(ulong *)(param_2 + 0x130);
  uVar8 = uVar7 + 1;
  plVar12 = (long *)(param_2 + 0xf8);
  *(ulong *)(param_2 + 0x130) = uVar8;
  if (uVar7 == 0) {
    if (*(long *)(param_2 + 0x100) - (long)*(ulong **)(param_2 + 0xf8) >> 4 == 0) {
LAB_01097b14:
      FUN_0109b618(plVar12,&local_48,&local_34);
      return uVar3;
    }
    **(ulong **)(param_2 + 0xf8) = uVar3;
  }
  else {
    pvVar4 = *(void **)(param_2 + 0xf8);
    uVar9 = uVar7 - 1;
    uVar10 = *(long *)(param_2 + 0x100) - (long)pvVar4 >> 4;
    if (*(float *)((long)pvVar4 + uVar9 * 0x10 + 8) <= param_1) {
      if (uVar10 < uVar8) goto LAB_01097b14;
      *(ulong *)((long)pvVar4 + uVar7 * 0x10) = uVar3;
      lVar5 = *plVar12 + uVar7 * 0x10;
      goto LAB_01097948;
    }
    if (uVar10 <= uVar8 && uVar8 - uVar10 != 0) {
      FUN_0103e51c(plVar12,uVar8 - uVar10);
      pvVar4 = (void *)*plVar12;
    }
    if (*(float *)((long)pvVar4 + 8) <= param_1) {
      if (uVar7 - 2 < 3) {
        uVar8 = 1;
      }
      else {
        uVar10 = (ulong)((float)(uVar7 - 2) * 0.5);
        fVar13 = *(float *)((long)pvVar4 + (uVar10 + 1) * 0x10 + 8);
        if (fVar13 <= param_1) {
          uVar1 = uVar9 - (uVar10 + 1);
        }
        else {
          uVar9 = uVar10 + 1;
          uVar1 = uVar10;
        }
        uVar8 = 1;
        if (fVar13 <= param_1) {
          uVar8 = uVar10 + 1;
        }
        if (2 < uVar1) {
          uVar10 = uVar8 + (long)((float)uVar1 * 0.5);
          uVar2 = uVar10;
          uVar1 = (long)((float)uVar1 * 0.5);
          if (*(float *)((long)pvVar4 + uVar10 * 0x10 + 8) <= param_1) {
            uVar8 = uVar10;
            uVar2 = uVar9;
            uVar1 = uVar9 - uVar10;
          }
          uVar9 = uVar2;
          if (2 < uVar1) {
            uVar10 = uVar8 + (long)((float)uVar1 * 0.5);
            uVar2 = uVar10;
            uVar1 = (long)((float)uVar1 * 0.5);
            if (*(float *)((long)pvVar4 + uVar10 * 0x10 + 8) <= param_1) {
              uVar8 = uVar10;
              uVar2 = uVar9;
              uVar1 = uVar9 - uVar10;
            }
            uVar9 = uVar2;
            if (2 < uVar1) {
              uVar10 = uVar8 + (long)((float)uVar1 * 0.5);
              uVar2 = uVar10;
              uVar1 = (long)((float)uVar1 * 0.5);
              if (*(float *)((long)pvVar4 + uVar10 * 0x10 + 8) <= param_1) {
                uVar8 = uVar10;
                uVar2 = uVar9;
                uVar1 = uVar9 - uVar10;
              }
              uVar9 = uVar2;
              if (2 < uVar1) {
                uVar10 = uVar8 + (long)((float)uVar1 * 0.5);
                uVar2 = uVar10;
                uVar1 = (long)((float)uVar1 * 0.5);
                if (*(float *)((long)pvVar4 + uVar10 * 0x10 + 8) <= param_1) {
                  uVar8 = uVar10;
                  uVar2 = uVar9;
                  uVar1 = uVar9 - uVar10;
                }
                while (uVar9 = uVar2, 2 < uVar1) {
                  uVar10 = uVar8 + (long)((float)uVar1 * 0.5);
                  uVar2 = uVar10;
                  uVar1 = (long)((float)uVar1 * 0.5);
                  if (*(float *)((long)pvVar4 + uVar10 * 0x10 + 8) <= param_1) {
                    uVar8 = uVar10;
                    uVar2 = uVar9;
                    uVar1 = uVar9 - uVar10;
                  }
                }
              }
            }
          }
        }
      }
      if (uVar9 <= uVar7 && uVar8 <= uVar9) {
        pfVar11 = (float *)((long)pvVar4 + uVar9 * 0x10 + 8);
        while (param_1 < *pfVar11) {
          uVar9 = uVar9 - 1;
          if ((uVar9 < uVar8) || (pfVar11 = pfVar11 + -4, uVar7 < uVar9)) goto LAB_01097b50;
        }
        uVar9 = uVar9 + 1;
      }
LAB_01097b50:
      if (uVar9 <= uVar7 && uVar8 <= uVar9) {
        uVar8 = uVar9;
      }
      pvVar4 = (void *)((long)pvVar4 + uVar8 * 0x10);
      memmove((void *)((long)pvVar4 + 0x10),pvVar4,(uVar7 - uVar8) * 0x10);
      *(ulong *)(*plVar12 + uVar8 * 0x10) = uVar3;
      lVar5 = *plVar12 + uVar8 * 0x10;
      goto LAB_01097948;
    }
    memmove((void *)((long)pvVar4 + 0x10),pvVar4,uVar7 << 4);
    *(ulong *)*plVar12 = uVar3;
  }
  lVar5 = *plVar12;
LAB_01097948:
  *(float *)(lVar5 + 8) = param_1;
  return uVar3;
}


