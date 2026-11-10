/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020df1e0; name: FUN_020df1e0
 */


bool FUN_020df1e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined4 local_20;
  
  switch((long)param_2 - (long)param_1 >> 5) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(float *)(param_2 + -2) < *(float *)(param_1 + 2)) {
      uVar13 = param_1[1];
      uVar11 = *param_1;
      uVar12 = param_1[2];
      uVar8 = param_2[-4];
      uVar10 = param_2[-3];
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + -2);
      *param_1 = uVar8;
      param_1[1] = uVar10;
      local_20 = (undefined4)uVar12;
      *(undefined4 *)(param_2 + -2) = local_20;
      param_2[-4] = uVar11;
      param_2[-3] = uVar13;
    }
    break;
  case 3:
    fVar14 = *(float *)(param_1 + 6);
    puVar4 = param_1 + 4;
    puVar6 = param_2 + -4;
    if (fVar14 < *(float *)(param_1 + 2)) {
      uVar10 = param_1[1];
      uVar8 = *param_1;
      local_20 = (undefined4)param_1[2];
      if (*(float *)(param_2 + -2) < fVar14) {
        uVar2 = *(undefined4 *)(param_2 + -2);
        param_1[1] = param_2[-3];
        uVar11 = *puVar6;
        *(undefined4 *)(param_1 + 2) = uVar2;
        *param_1 = uVar11;
        *(undefined4 *)(param_2 + -2) = local_20;
        *puVar6 = uVar8;
        param_2[-3] = uVar10;
        return true;
      }
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 6);
      *param_1 = *puVar4;
      param_1[1] = param_1[5];
      *(undefined4 *)(param_1 + 6) = local_20;
      *puVar4 = uVar8;
      param_1[5] = uVar10;
      if (*(float *)(param_1 + 6) <= *(float *)(param_2 + -2)) {
        return true;
      }
      uVar13 = param_1[5];
      uVar11 = *puVar4;
      uVar12 = param_1[6];
      uVar8 = *puVar6;
      uVar10 = param_2[-3];
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + -2);
      *puVar4 = uVar8;
      param_1[5] = uVar10;
      local_20 = (undefined4)uVar12;
      *(undefined4 *)(param_2 + -2) = local_20;
      *puVar6 = uVar11;
      param_2[-3] = uVar13;
      return true;
    }
    if (fVar14 <= *(float *)(param_2 + -2)) {
      return true;
    }
    goto LAB_020df74c;
  case 4:
    fVar15 = *(float *)(param_1 + 6);
    puVar4 = param_1 + 4;
    puVar6 = param_1 + 8;
    fVar14 = *(float *)(param_1 + 10);
    if (*(float *)(param_1 + 2) <= fVar15) {
      if (fVar14 < fVar15) {
        uVar11 = param_1[5];
        uVar8 = *puVar4;
        uVar10 = param_1[6];
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 10);
        *puVar4 = *puVar6;
        param_1[5] = param_1[9];
        local_20 = (undefined4)uVar10;
        *(undefined4 *)(param_1 + 10) = local_20;
        *puVar6 = uVar8;
        param_1[9] = uVar11;
        if (*(float *)(param_1 + 6) < *(float *)(param_1 + 2)) {
          uVar11 = param_1[1];
          uVar8 = *param_1;
          uVar10 = param_1[2];
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 6);
          *param_1 = *puVar4;
          param_1[1] = param_1[5];
          local_20 = (undefined4)uVar10;
          *(undefined4 *)(param_1 + 6) = local_20;
          *puVar4 = uVar8;
          param_1[5] = uVar11;
        }
      }
    }
    else {
      uVar10 = param_1[1];
      uVar8 = *param_1;
      local_20 = (undefined4)param_1[2];
      if (fVar14 < fVar15) {
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 10);
        *param_1 = *puVar6;
        param_1[1] = param_1[9];
        *(undefined4 *)(param_1 + 10) = local_20;
        *puVar6 = uVar8;
        param_1[9] = uVar10;
      }
      else {
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 6);
        *param_1 = *puVar4;
        param_1[1] = param_1[5];
        *(undefined4 *)(param_1 + 6) = local_20;
        *puVar4 = uVar8;
        param_1[5] = uVar10;
        if (fVar14 < *(float *)(param_1 + 6)) {
          uVar11 = param_1[5];
          uVar8 = *puVar4;
          uVar10 = param_1[6];
          *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 10);
          *puVar4 = *puVar6;
          param_1[5] = param_1[9];
          local_20 = (undefined4)uVar10;
          *(undefined4 *)(param_1 + 10) = local_20;
          *puVar6 = uVar8;
          param_1[9] = uVar11;
        }
      }
    }
    if (*(float *)(param_1 + 10) <= *(float *)(param_2 + -2)) {
      return true;
    }
    uVar13 = param_1[9];
    uVar11 = *puVar6;
    uVar12 = param_1[10];
    uVar8 = param_2[-4];
    uVar10 = param_2[-3];
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + -2);
    *puVar6 = uVar8;
    param_1[9] = uVar10;
    local_20 = (undefined4)uVar12;
    *(undefined4 *)(param_2 + -2) = local_20;
    param_2[-4] = uVar11;
    param_2[-3] = uVar13;
    if (*(float *)(param_1 + 6) <= *(float *)(param_1 + 10)) {
      return true;
    }
LAB_020df74c:
    puVar4 = param_1 + 4;
    uVar12 = param_1[5];
    uVar11 = *puVar4;
    uVar13 = param_1[6];
    uVar8 = *puVar6;
    uVar10 = puVar6[1];
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar6 + 2);
    *puVar4 = uVar8;
    param_1[5] = uVar10;
    local_20 = (undefined4)uVar13;
    *(undefined4 *)(puVar6 + 2) = local_20;
    *puVar6 = uVar11;
    puVar6[1] = uVar12;
    if (*(float *)(param_1 + 6) < *(float *)(param_1 + 2)) {
      uVar10 = param_1[1];
      uVar8 = *param_1;
      uVar11 = param_1[2];
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 6);
      *param_1 = *puVar4;
      param_1[1] = param_1[5];
      local_20 = (undefined4)uVar11;
      *(undefined4 *)(param_1 + 6) = local_20;
      *puVar4 = uVar8;
      param_1[5] = uVar10;
    }
    break;
  case 5:
    FUN_00f06c60(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
    break;
  default:
    fVar15 = *(float *)(param_1 + 6);
    puVar4 = param_1 + 8;
    puVar6 = param_1 + 4;
    fVar14 = *(float *)(param_1 + 10);
    if (*(float *)(param_1 + 2) <= fVar15) {
      if (fVar14 < fVar15) {
        uVar11 = param_1[5];
        uVar8 = *puVar6;
        uVar10 = param_1[6];
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 10);
        *puVar6 = *puVar4;
        param_1[5] = param_1[9];
        local_20 = (undefined4)uVar10;
        *(undefined4 *)(param_1 + 10) = local_20;
        *puVar4 = uVar8;
        param_1[9] = uVar11;
        if (*(float *)(param_1 + 6) < *(float *)(param_1 + 2)) {
          uVar11 = param_1[1];
          uVar8 = *param_1;
          uVar10 = param_1[2];
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 6);
          *param_1 = *puVar6;
          param_1[1] = param_1[5];
          local_20 = (undefined4)uVar10;
          *(undefined4 *)(param_1 + 6) = local_20;
          *puVar6 = uVar8;
          param_1[5] = uVar11;
        }
      }
    }
    else {
      uVar10 = param_1[1];
      uVar8 = *param_1;
      local_20 = (undefined4)param_1[2];
      if (fVar14 < fVar15) {
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 10);
        *param_1 = *puVar4;
        param_1[1] = param_1[9];
        *(undefined4 *)(param_1 + 10) = local_20;
        *puVar4 = uVar8;
        param_1[9] = uVar10;
      }
      else {
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 6);
        *param_1 = *puVar6;
        param_1[1] = param_1[5];
        *(undefined4 *)(param_1 + 6) = local_20;
        *puVar6 = uVar8;
        param_1[5] = uVar10;
        if (fVar14 < *(float *)(param_1 + 6)) {
          uVar11 = param_1[5];
          uVar8 = *puVar6;
          uVar10 = param_1[6];
          *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 10);
          *puVar6 = *puVar4;
          param_1[5] = param_1[9];
          local_20 = (undefined4)uVar10;
          *(undefined4 *)(param_1 + 10) = local_20;
          *puVar4 = uVar8;
          param_1[9] = uVar11;
        }
      }
    }
    if (param_1 + 0xc != param_2) {
      lVar5 = 0;
      iVar7 = 0;
      puVar6 = param_1 + 0xc;
      do {
        fVar14 = *(float *)(puVar6 + 2);
        if (fVar14 < *(float *)(puVar4 + 2)) {
          uVar10 = puVar6[1];
          uVar8 = *puVar6;
          lVar3 = lVar5;
          do {
            lVar9 = lVar3;
            *(undefined8 *)((long)param_1 + lVar9 + 0x60) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x40);
            *(undefined8 *)((long)param_1 + lVar9 + 0x68) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x48);
            *(undefined4 *)((long)param_1 + lVar9 + 0x70) =
                 *(undefined4 *)((long)param_1 + lVar9 + 0x50);
            if (lVar9 == -0x40) {
              puVar4 = param_1;
              goto LAB_020df65c;
            }
            lVar3 = lVar9 + -0x20;
          } while (fVar14 < *(float *)((long)param_1 + lVar9 + 0x30));
          puVar4 = (undefined8 *)((long)param_1 + lVar9 + 0x40);
LAB_020df65c:
          iVar7 = iVar7 + 1;
          *(float *)(puVar4 + 2) = fVar14;
          puVar4[1] = uVar10;
          *puVar4 = uVar8;
          if (iVar7 == 8) {
            return puVar6 + 4 == param_2;
          }
        }
        puVar1 = puVar6 + 4;
        lVar5 = lVar5 + 0x20;
        puVar4 = puVar6;
        puVar6 = puVar1;
      } while (puVar1 != param_2);
    }
  }
  return true;
}


