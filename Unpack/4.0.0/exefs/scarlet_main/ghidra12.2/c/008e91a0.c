/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e91a0; name: FUN_008e91a0
 */


int FUN_008e91a0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *param_2;
  fVar5 = *param_1;
  if ((0.0 <= fVar6) || (0.0 <= fVar5)) {
    bVar1 = fVar6 < fVar5;
    fVar5 = *param_3;
    if (fVar6 < 0.0) goto LAB_008e91e4;
LAB_008e9234:
    bVar2 = fVar5 < fVar6;
    if (bVar1) goto LAB_008e9240;
LAB_008e91f8:
    iVar4 = 0;
    if (bVar2) {
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar3;
      fVar6 = *param_2;
      fVar7 = *param_1;
      fVar5 = (float)uVar3;
      if ((0.0 <= fVar6) || (0.0 <= fVar7)) {
        if (fVar6 < fVar7) goto LAB_008e92b4;
        iVar4 = 1;
        goto LAB_008e930c;
      }
      if (fVar7 < fVar6) {
LAB_008e92b4:
        uVar3 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar3;
        fVar5 = *param_3;
        iVar4 = 2;
        fVar6 = *param_4;
        goto joined_r0x008e9314;
      }
      goto LAB_008e9298;
    }
LAB_008e930c:
    fVar6 = *param_4;
joined_r0x008e9314:
    if (fVar6 < 0.0) goto LAB_008e9318;
LAB_008e9330:
    if (fVar5 <= fVar6) {
      return iVar4;
    }
  }
  else {
    bVar1 = fVar5 < fVar6;
    fVar5 = *param_3;
    if (0.0 <= fVar6) goto LAB_008e9234;
LAB_008e91e4:
    if (0.0 <= fVar5) goto LAB_008e9234;
    bVar2 = fVar6 < fVar5;
    if (!bVar1) goto LAB_008e91f8;
LAB_008e9240:
    uVar3 = *(undefined8 *)param_1;
    fVar7 = (float)uVar3;
    if (bVar2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar3;
      iVar4 = 1;
      fVar6 = *param_4;
      fVar5 = fVar7;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar3;
      fVar5 = *param_3;
      if ((0.0 <= fVar7) || (0.0 <= fVar5)) {
        if (fVar5 < fVar7) goto LAB_008e92e4;
      }
      else if (fVar7 < fVar5) {
LAB_008e92e4:
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        iVar4 = 2;
        *(undefined8 *)param_3 = uVar3;
        fVar6 = *param_4;
        fVar5 = fVar7;
        goto joined_r0x008e9300;
      }
LAB_008e9298:
      iVar4 = 1;
      fVar6 = *param_4;
    }
joined_r0x008e9300:
    if (0.0 <= fVar6) goto LAB_008e9330;
LAB_008e9318:
    if (0.0 <= fVar5) goto LAB_008e9330;
    if (fVar6 <= fVar5) {
      return iVar4;
    }
  }
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = uVar3;
  fVar5 = *param_3;
  fVar6 = *param_2;
  if ((0.0 <= fVar5) || (0.0 <= fVar6)) {
    if (fVar6 <= fVar5) {
      return iVar4 + 1;
    }
  }
  else if (fVar5 <= fVar6) {
    return iVar4 + 1;
  }
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar3;
  fVar5 = *param_2;
  fVar6 = *param_1;
  if ((0.0 <= fVar5) || (0.0 <= fVar6)) {
    if (fVar5 < fVar6) goto LAB_008e93bc;
  }
  else if (fVar6 < fVar5) {
LAB_008e93bc:
    uVar3 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar3;
    return iVar4 + 3;
  }
  return iVar4 + 2;
}


