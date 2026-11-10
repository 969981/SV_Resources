/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a2c88; name: FUN_030a2c88
 */


undefined8 FUN_030a2c88(long param_1)

{
  float *pfVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  
  iVar10 = *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar10 == 0) {
    if (iVar4 == *(int *)(param_1 + 0x48)) {
      return 0;
    }
    *(int *)(param_1 + 0x28) = iVar4 + 1;
    pfVar1 = (float *)(*(long *)(param_1 + 0x40) + (long)iVar4 * 8);
    fVar16 = *pfVar1;
    fVar15 = *(float *)(param_1 + 0x60);
    if (*(float *)(param_1 + 0x60) <= fVar16) {
      fVar15 = fVar16;
    }
    *(float *)(param_1 + 0x60) = fVar15;
    fVar15 = pfVar1[1];
LAB_030a2ddc:
    iVar10 = *(int *)(*(long *)(param_1 + 0x30) + (long)(int)fVar15 * 0xc);
    if (iVar10 == 3) {
      FUN_030a3d34();
    }
    else if (iVar10 == 2) {
      FUN_030a38ac();
    }
    else if (iVar10 == 1) {
      FUN_030a31bc();
    }
  }
  else {
    plVar8 = *(long **)(param_1 + 0x50);
    lVar14 = *plVar8;
    if (iVar4 == *(int *)(param_1 + 0x48)) {
      if (iVar10 + -1 == 0) {
LAB_030a2db4:
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      else {
        puVar6 = (undefined4 *)plVar8[iVar10 + -1];
        fVar15 = (float)puVar6[1];
        fVar16 = *(float *)(lVar14 + 4);
        *plVar8 = (long)puVar6;
        *puVar6 = 0;
        iVar10 = *(int *)(param_1 + 0x58);
        iVar4 = iVar10 + -1;
        *(int *)(param_1 + 0x58) = iVar4;
        if (fVar16 <= fVar15) {
          if (iVar10 < 4) {
            uVar9 = 1;
          }
          else {
            uVar7 = 2;
            if (*(float *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 4) <
                *(float *)(*(long *)(*(long *)(param_1 + 0x50) + 0x10) + 4)) {
              uVar7 = 1;
            }
            uVar9 = (ulong)uVar7;
          }
          if ((int)uVar9 < iVar4) {
            iVar10 = 0;
            do {
              lVar12 = *(long *)(param_1 + 0x50);
              iVar5 = (int)uVar9;
              lVar13 = *(long *)(lVar12 + (long)iVar5 * 8);
              puVar6 = *(undefined4 **)(lVar12 + (long)iVar10 * 8);
              if ((float)puVar6[1] <= *(float *)(lVar13 + 4)) break;
              *(long *)(lVar12 + (long)iVar10 * 8) = lVar13;
              lVar13 = (long)iVar5;
              *(undefined4 **)(lVar12 + lVar13 * 8) = puVar6;
              puVar11 = *(undefined4 **)(lVar12 + (long)iVar10 * 8);
              uVar3 = *puVar11;
              *puVar11 = *puVar6;
              *puVar6 = uVar3;
              uVar9 = lVar13 << 1 | 1;
              uVar7 = (int)(lVar13 << 1) + 2;
              if ((int)uVar7 < *(int *)(param_1 + 0x58)) {
                uVar2 = (uint)uVar9;
                if (*(float *)(*(long *)(*(long *)(param_1 + 0x50) + (long)(int)uVar7 * 8) + 4) <=
                    *(float *)(*(long *)(*(long *)(param_1 + 0x50) + uVar9 * 8) + 4)) {
                  uVar2 = uVar7;
                }
                uVar9 = (ulong)uVar2;
              }
              iVar10 = iVar5;
            } while ((int)uVar9 < iVar4);
          }
        }
      }
    }
    else {
      pfVar1 = (float *)(*(long *)(param_1 + 0x40) + (long)iVar4 * 8);
      fVar15 = *(float *)(lVar14 + 4);
      if (*pfVar1 <= fVar15) {
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        fVar15 = *(float *)(param_1 + 0x60);
        if (*(float *)(param_1 + 0x60) <= *pfVar1) {
          fVar15 = *pfVar1;
        }
        *(float *)(param_1 + 0x60) = fVar15;
        fVar15 = pfVar1[1];
        goto LAB_030a2ddc;
      }
      if (iVar10 + -1 == 0) goto LAB_030a2db4;
      puVar6 = (undefined4 *)plVar8[iVar10 + -1];
      fVar16 = (float)puVar6[1];
      *plVar8 = (long)puVar6;
      *puVar6 = 0;
      iVar10 = *(int *)(param_1 + 0x58);
      iVar4 = iVar10 + -1;
      *(int *)(param_1 + 0x58) = iVar4;
      if (fVar15 <= fVar16) {
        if (iVar10 < 4) {
          uVar9 = 1;
        }
        else {
          uVar7 = 2;
          if (*(float *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 4) <
              *(float *)(*(long *)(*(long *)(param_1 + 0x50) + 0x10) + 4)) {
            uVar7 = 1;
          }
          uVar9 = (ulong)uVar7;
        }
        if ((int)uVar9 < iVar4) {
          iVar10 = 0;
          do {
            lVar12 = *(long *)(param_1 + 0x50);
            iVar5 = (int)uVar9;
            lVar13 = *(long *)(lVar12 + (long)iVar5 * 8);
            puVar6 = *(undefined4 **)(lVar12 + (long)iVar10 * 8);
            if ((float)puVar6[1] <= *(float *)(lVar13 + 4)) break;
            *(long *)(lVar12 + (long)iVar10 * 8) = lVar13;
            lVar13 = (long)iVar5;
            *(undefined4 **)(lVar12 + lVar13 * 8) = puVar6;
            puVar11 = *(undefined4 **)(lVar12 + (long)iVar10 * 8);
            uVar3 = *puVar11;
            *puVar11 = *puVar6;
            *puVar6 = uVar3;
            uVar9 = lVar13 << 1 | 1;
            uVar7 = (int)(lVar13 << 1) + 2;
            if ((int)uVar7 < *(int *)(param_1 + 0x58)) {
              uVar2 = (uint)uVar9;
              if (*(float *)(*(long *)(*(long *)(param_1 + 0x50) + (long)(int)uVar7 * 8) + 4) <=
                  *(float *)(*(long *)(*(long *)(param_1 + 0x50) + uVar9 * 8) + 4)) {
                uVar2 = uVar7;
              }
              uVar9 = (ulong)uVar2;
            }
            iVar10 = iVar5;
          } while ((int)uVar9 < iVar4);
        }
      }
    }
    fVar15 = *(float *)(param_1 + 0x60);
    if (*(float *)(param_1 + 0x60) <= *(float *)(lVar14 + 4)) {
      fVar15 = *(float *)(lVar14 + 4);
    }
    *(float *)(param_1 + 0x60) = fVar15;
    FUN_030a2f98(param_1,lVar14);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar14,0);
  }
  return 1;
}


