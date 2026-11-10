/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f06c60; name: FUN_00f06c60
 */


int FUN_00f06c60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 local_10;
  
  fVar8 = *(float *)(param_2 + 2);
  if (*(float *)(param_1 + 2) <= fVar8) {
    if (fVar8 <= *(float *)(param_3 + 2)) {
      iVar2 = 0;
      goto LAB_00f06dd8;
    }
    uVar7 = param_2[1];
    uVar4 = *param_2;
    uVar5 = param_2[2];
    uVar3 = *param_3;
    uVar6 = param_3[1];
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    *param_2 = uVar3;
    param_2[1] = uVar6;
    local_10 = (undefined4)uVar5;
    *(undefined4 *)(param_3 + 2) = local_10;
    *param_3 = uVar4;
    param_3[1] = uVar7;
    if (*(float *)(param_2 + 2) < *(float *)(param_1 + 2)) {
      uVar7 = param_1[1];
      uVar4 = *param_1;
      uVar5 = param_1[2];
      uVar3 = *param_2;
      uVar6 = param_2[1];
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *param_1 = uVar3;
      param_1[1] = uVar6;
      local_10 = (undefined4)uVar5;
      *(undefined4 *)(param_2 + 2) = local_10;
      *param_2 = uVar4;
      param_2[1] = uVar7;
      goto LAB_00f06da4;
    }
  }
  else {
    uVar6 = param_1[1];
    uVar3 = *param_1;
    local_10 = (undefined4)param_1[2];
    if (*(float *)(param_3 + 2) < fVar8) {
      uVar1 = *(undefined4 *)(param_3 + 2);
      param_1[1] = param_3[1];
      uVar4 = *param_3;
      *(undefined4 *)(param_1 + 2) = uVar1;
      *param_1 = uVar4;
      *(undefined4 *)(param_3 + 2) = local_10;
      *param_3 = uVar3;
      param_3[1] = uVar6;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 2);
      param_1[1] = param_2[1];
      uVar4 = *param_2;
      *(undefined4 *)(param_1 + 2) = uVar1;
      *param_1 = uVar4;
      *(undefined4 *)(param_2 + 2) = local_10;
      *param_2 = uVar3;
      param_2[1] = uVar6;
      if (*(float *)(param_3 + 2) < *(float *)(param_2 + 2)) {
        uVar7 = param_2[1];
        uVar4 = *param_2;
        uVar5 = param_2[2];
        uVar3 = *param_3;
        uVar6 = param_3[1];
        *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
        *param_2 = uVar3;
        param_2[1] = uVar6;
        local_10 = (undefined4)uVar5;
        *(undefined4 *)(param_3 + 2) = local_10;
        *param_3 = uVar4;
        param_3[1] = uVar7;
LAB_00f06da4:
        iVar2 = 2;
        goto LAB_00f06dd8;
      }
    }
  }
  iVar2 = 1;
LAB_00f06dd8:
  if (*(float *)(param_4 + 2) < *(float *)(param_3 + 2)) {
    uVar7 = param_3[1];
    uVar4 = *param_3;
    uVar5 = param_3[2];
    uVar3 = *param_4;
    uVar6 = param_4[1];
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_4 + 2);
    *param_3 = uVar3;
    param_3[1] = uVar6;
    local_10 = (undefined4)uVar5;
    *(undefined4 *)(param_4 + 2) = local_10;
    *param_4 = uVar4;
    param_4[1] = uVar7;
    if (*(float *)(param_2 + 2) <= *(float *)(param_3 + 2)) {
      iVar2 = iVar2 + 1;
    }
    else {
      uVar7 = param_2[1];
      uVar4 = *param_2;
      uVar5 = param_2[2];
      uVar3 = *param_3;
      uVar6 = param_3[1];
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
      *param_2 = uVar3;
      param_2[1] = uVar6;
      local_10 = (undefined4)uVar5;
      *(undefined4 *)(param_3 + 2) = local_10;
      *param_3 = uVar4;
      param_3[1] = uVar7;
      if (*(float *)(param_2 + 2) < *(float *)(param_1 + 2)) {
        iVar2 = iVar2 + 3;
        uVar7 = param_1[1];
        uVar4 = *param_1;
        uVar5 = param_1[2];
        uVar3 = *param_2;
        uVar6 = param_2[1];
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
        *param_1 = uVar3;
        param_1[1] = uVar6;
        local_10 = (undefined4)uVar5;
        *(undefined4 *)(param_2 + 2) = local_10;
        *param_2 = uVar4;
        param_2[1] = uVar7;
      }
      else {
        iVar2 = iVar2 + 2;
      }
    }
  }
  if (*(float *)(param_5 + 2) < *(float *)(param_4 + 2)) {
    uVar7 = param_4[1];
    uVar4 = *param_4;
    uVar5 = param_4[2];
    uVar3 = *param_5;
    uVar6 = param_5[1];
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_5 + 2);
    *param_4 = uVar3;
    param_4[1] = uVar6;
    local_10 = (undefined4)uVar5;
    *(undefined4 *)(param_5 + 2) = local_10;
    *param_5 = uVar4;
    param_5[1] = uVar7;
    if (*(float *)(param_3 + 2) <= *(float *)(param_4 + 2)) {
      iVar2 = iVar2 + 1;
    }
    else {
      uVar7 = param_3[1];
      uVar4 = *param_3;
      uVar5 = param_3[2];
      uVar3 = *param_4;
      uVar6 = param_4[1];
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_4 + 2);
      *param_3 = uVar3;
      param_3[1] = uVar6;
      local_10 = (undefined4)uVar5;
      *(undefined4 *)(param_4 + 2) = local_10;
      *param_4 = uVar4;
      param_4[1] = uVar7;
      if (*(float *)(param_2 + 2) <= *(float *)(param_3 + 2)) {
        iVar2 = iVar2 + 2;
      }
      else {
        uVar7 = param_2[1];
        uVar4 = *param_2;
        uVar5 = param_2[2];
        uVar3 = *param_3;
        uVar6 = param_3[1];
        *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
        *param_2 = uVar3;
        param_2[1] = uVar6;
        local_10 = (undefined4)uVar5;
        *(undefined4 *)(param_3 + 2) = local_10;
        *param_3 = uVar4;
        param_3[1] = uVar7;
        if (*(float *)(param_1 + 2) <= *(float *)(param_2 + 2)) {
          iVar2 = iVar2 + 3;
        }
        else {
          iVar2 = iVar2 + 4;
          uVar7 = param_1[1];
          uVar4 = *param_1;
          uVar5 = param_1[2];
          uVar3 = *param_2;
          uVar6 = param_2[1];
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
          *param_1 = uVar3;
          param_1[1] = uVar6;
          local_10 = (undefined4)uVar5;
          *(undefined4 *)(param_2 + 2) = local_10;
          *param_2 = uVar4;
          param_2[1] = uVar7;
        }
      }
    }
  }
  return iVar2;
}


