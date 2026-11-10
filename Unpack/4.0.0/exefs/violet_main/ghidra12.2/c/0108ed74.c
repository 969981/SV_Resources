/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0108ed74; name: FUN_0108ed74
 */


void FUN_0108ed74(undefined8 *param_1,float *param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  ulong uVar6;
  ushort *puVar7;
  uint uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  char *local_38;
  
  puVar3 = PTR_DAT_047d5608;
  fVar11 = 0.0;
  piVar5 = (int *)param_1[1];
  fVar10 = 0.0;
  if (piVar5 != (int *)0x0) {
    fVar10 = 0.0;
    if (6 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
      fVar10 = 0.0;
      if (uVar6 != 0) {
        puVar4 = (uint *)((long)piVar5 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        local_38 = "ViewingDistance";
        puVar4 = bsearch(&local_38,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar4 == (uint *)0x0) {
          fVar10 = 0.0;
        }
        else {
          piVar5 = (int *)*param_1;
          fVar10 = 0.0;
          if (piVar5 != (int *)0x0) {
            piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
            uVar2 = *puVar7;
            if (uVar2 < 7) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
                piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar3 + uVar6 * 8) == 4) {
              fVar10 = 0.0;
              if (uVar2 < 0xb) {
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                if ((ulong)puVar7[5] != 0) {
                  uVar8 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
                }
                if ((0xe < uVar2) && ((ulong)puVar7[7] != 0)) {
                  fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
                }
              }
              if ((uVar8 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
                 (uVar6 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar8),
                 uVar6 != 0)) {
                fVar10 = *(float *)((long)piVar5 + uVar6);
              }
            }
            else {
              fVar10 = 0.0;
              if (0xe < uVar2) {
                fVar10 = 0.0;
                if ((ulong)puVar7[7] != 0) {
                  fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
                }
              }
            }
          }
        }
      }
    }
  }
  *param_2 = fVar10;
  piVar5 = (int *)param_1[1];
  fVar10 = 0.0;
  if (piVar5 != (int *)0x0) {
    fVar10 = 0.0;
    if (6 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
      fVar10 = 0.0;
      if (uVar6 != 0) {
        puVar4 = (uint *)((long)piVar5 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        local_38 = "ViewingAngle";
        puVar4 = bsearch(&local_38,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar4 == (uint *)0x0) {
          fVar10 = 0.0;
        }
        else {
          piVar5 = (int *)*param_1;
          fVar10 = 0.0;
          if (piVar5 != (int *)0x0) {
            piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
            uVar2 = *puVar7;
            if (uVar2 < 7) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
                piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar3 + uVar6 * 8) == 4) {
              fVar10 = 0.0;
              if (uVar2 < 0xb) {
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                if ((ulong)puVar7[5] != 0) {
                  uVar8 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
                }
                if ((0xe < uVar2) && ((ulong)puVar7[7] != 0)) {
                  fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
                }
              }
              if ((uVar8 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
                 (uVar6 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar8),
                 uVar6 != 0)) {
                fVar10 = *(float *)((long)piVar5 + uVar6);
              }
            }
            else {
              fVar10 = 0.0;
              if (0xe < uVar2) {
                fVar10 = 0.0;
                if ((ulong)puVar7[7] != 0) {
                  fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
                }
              }
            }
          }
        }
      }
    }
  }
  param_2[1] = fVar10;
  piVar5 = (int *)param_1[1];
  if (((piVar5 != (int *)0x0) && (6 < *(ushort *)((long)piVar5 - (long)*piVar5))) &&
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 != 0)) {
    puVar4 = (uint *)((long)piVar5 + uVar6);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    local_38 = "HearingDistance";
    puVar4 = bsearch(&local_38,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar4 != (uint *)0x0) && (piVar5 = (int *)*param_1, piVar5 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar2 = *puVar7;
      if (uVar2 < 7) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)0x0;
        if ((ulong)puVar7[3] != 0) {
          puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
          piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
      }
      if (*(long *)(puVar3 + uVar6 * 8) == 4) {
        fVar11 = 0.0;
        if (uVar2 < 0xb) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if ((ulong)puVar7[5] != 0) {
            uVar8 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar7[5]);
          }
          if ((0xe < uVar2) && ((ulong)puVar7[7] != 0)) {
            fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
          }
        }
        if ((uVar8 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
           (uVar6 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar8), uVar6 != 0))
        {
          fVar11 = *(float *)((long)piVar5 + uVar6);
        }
      }
      else if ((0xe < uVar2) && ((ulong)puVar7[7] != 0)) {
        fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar7[7]);
      }
    }
  }
  param_2[2] = fVar11;
  return;
}


