/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ed6390; name: FUN_02ed6390
 */


void FUN_02ed6390(uint *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  float *pfVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint *local_410 [64];
  uint *local_210 [64];
  
  if (param_2 < 2) {
    return;
  }
  local_410[0] = param_1 + (param_2 - 1);
  uVar5 = 0;
  local_210[0] = param_1;
LAB_02ed63e4:
  lVar6 = (long)(int)uVar5;
LAB_02ed63e8:
  do {
    puVar7 = local_410[0];
    do {
      local_410[0] = puVar7;
      uVar5 = param_1[(long)local_410[0] - (long)param_1 >> 3];
      puVar7 = local_410[0];
      puVar8 = param_1;
      do {
        lVar1 = 0;
        if (*param_4 != 0) {
          lVar1 = *param_4 + (long)param_4;
        }
        puVar10 = (undefined8 *)(lVar1 + (ulong)uVar5 * 0x30);
        fVar13 = ((float)*puVar10 + (float)puVar10[2]) * 0.5;
        fVar14 = ((float)((ulong)*puVar10 >> 0x20) + (float)((ulong)puVar10[2] >> 0x20)) * 0.5;
        fVar15 = ((float)puVar10[1] + (float)puVar10[3]) * 0.5;
        fVar16 = ((float)((ulong)puVar10[1] >> 0x20) + (float)((ulong)puVar10[3] >> 0x20)) * 0.5;
        if (param_3 == 1) {
          puVar8 = puVar8 + -1;
          do {
            puVar8 = puVar8 + 1;
            uVar9 = *puVar8;
            lVar12 = lVar1 + (ulong)uVar9 * 0x30;
          } while ((*(float *)(lVar12 + 4) + *(float *)(lVar12 + 0x14)) * 0.5 < fVar14);
        }
        else if (param_3 == 2) {
          puVar8 = puVar8 + -1;
          do {
            puVar8 = puVar8 + 1;
            uVar9 = *puVar8;
            lVar12 = lVar1 + (ulong)uVar9 * 0x30;
          } while ((*(float *)(lVar12 + 8) + *(float *)(lVar12 + 0x18)) * 0.5 < fVar15);
        }
        else if (param_3 == 3) {
          puVar8 = puVar8 + -1;
          do {
            puVar8 = puVar8 + 1;
            uVar9 = *puVar8;
            lVar12 = lVar1 + (ulong)uVar9 * 0x30;
          } while ((*(float *)(lVar12 + 0xc) + *(float *)(lVar12 + 0x1c)) * 0.5 < fVar16);
        }
        else {
          puVar8 = puVar8 + -1;
          do {
            puVar8 = puVar8 + 1;
            uVar9 = *puVar8;
            pfVar4 = (float *)(lVar1 + (ulong)uVar9 * 0x30);
          } while ((*pfVar4 + pfVar4[4]) * 0.5 < fVar13);
        }
        if (param_3 == 1) {
          puVar7 = puVar7 + 1;
          do {
            puVar7 = puVar7 + -1;
            uVar11 = *puVar7;
            lVar12 = lVar1 + (ulong)uVar11 * 0x30;
          } while (fVar14 < (*(float *)(lVar12 + 4) + *(float *)(lVar12 + 0x14)) * 0.5);
        }
        else if (param_3 == 2) {
          puVar7 = puVar7 + 1;
          do {
            puVar7 = puVar7 + -1;
            uVar11 = *puVar7;
            lVar12 = lVar1 + (ulong)uVar11 * 0x30;
          } while (fVar15 < (*(float *)(lVar12 + 8) + *(float *)(lVar12 + 0x18)) * 0.5);
        }
        else {
          fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar16) & -(uint)(param_3 == 3));
          puVar7 = puVar7 + 1;
          if (param_3 == 3) {
            do {
              puVar7 = puVar7 + -1;
              uVar11 = *puVar7;
              lVar12 = lVar1 + (ulong)uVar11 * 0x30;
            } while (fVar13 < (*(float *)(lVar12 + 0xc) + *(float *)(lVar12 + 0x1c)) * 0.5);
          }
          else {
            do {
              puVar7 = puVar7 + -1;
              uVar11 = *puVar7;
              pfVar4 = (float *)(lVar1 + (ulong)uVar11 * 0x30);
            } while (fVar13 < (*pfVar4 + pfVar4[4]) * 0.5);
          }
        }
        if (puVar8 <= puVar7) {
          if (puVar7 != puVar8) {
            *puVar7 = uVar9;
            *puVar8 = uVar11;
          }
          puVar7 = puVar7 + -1;
          puVar8 = puVar8 + 1;
        }
      } while (puVar8 <= puVar7);
      if (puVar7 <= param_1) {
        param_1 = puVar8;
        if (puVar8 < local_410[0]) goto LAB_02ed63e8;
        uVar5 = (int)lVar6 - 1;
        if ((int)lVar6 < 1) {
          return;
        }
        param_1 = local_210[uVar5];
        local_410[0] = local_410[uVar5];
        goto LAB_02ed63e4;
      }
    } while (local_410[0] <= puVar8);
    puVar2 = puVar7;
    puVar3 = param_1;
    if ((long)local_410[0] - (long)puVar8 <= (long)puVar7 - (long)param_1) {
      puVar2 = local_410[0];
      puVar3 = puVar8;
      local_410[0] = puVar7;
      puVar8 = param_1;
    }
    local_210[lVar6] = puVar8;
    local_410[lVar6] = local_410[0];
    lVar6 = lVar6 + 1;
    param_1 = puVar3;
    local_410[0] = puVar2;
  } while( true );
}


