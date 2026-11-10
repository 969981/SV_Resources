/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ea2e0; name: FUN_008ea2e0
 */


int FUN_008ea2e0(float *param_1,float *param_2,float *param_3,float *param_4)

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
    bVar1 = fVar5 < fVar6;
    fVar5 = *param_3;
    if (fVar6 < 0.0) goto LAB_008ea324;
LAB_008ea374:
    bVar2 = fVar6 < fVar5;
    if (bVar1) goto LAB_008ea380;
LAB_008ea338:
    iVar4 = 0;
    if (bVar2) {
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar3;
      fVar6 = *param_2;
      fVar7 = *param_1;
      fVar5 = (float)uVar3;
      if ((0.0 <= fVar6) || (0.0 <= fVar7)) {
        if (fVar7 < fVar6) goto LAB_008ea3f4;
        iVar4 = 1;
        goto LAB_008ea44c;
      }
      if (fVar6 < fVar7) {
LAB_008ea3f4:
        uVar3 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar3;
        fVar5 = *param_3;
        iVar4 = 2;
        fVar6 = *param_4;
        goto joined_r0x008ea454;
      }
      goto LAB_008ea3d8;
    }
LAB_008ea44c:
    fVar6 = *param_4;
joined_r0x008ea454:
    if (fVar6 < 0.0) goto LAB_008ea458;
LAB_008ea470:
    if (fVar6 <= fVar5) {
      return iVar4;
    }
  }
  else {
    bVar1 = fVar6 < fVar5;
    fVar5 = *param_3;
    if (0.0 <= fVar6) goto LAB_008ea374;
LAB_008ea324:
    if (0.0 <= fVar5) goto LAB_008ea374;
    bVar2 = fVar5 < fVar6;
    if (!bVar1) goto LAB_008ea338;
LAB_008ea380:
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
        if (fVar7 < fVar5) goto LAB_008ea424;
      }
      else if (fVar5 < fVar7) {
LAB_008ea424:
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        iVar4 = 2;
        *(undefined8 *)param_3 = uVar3;
        fVar6 = *param_4;
        fVar5 = fVar7;
        goto joined_r0x008ea440;
      }
LAB_008ea3d8:
      iVar4 = 1;
      fVar6 = *param_4;
    }
joined_r0x008ea440:
    if (0.0 <= fVar6) goto LAB_008ea470;
LAB_008ea458:
    if (0.0 <= fVar5) goto LAB_008ea470;
    if (fVar5 <= fVar6) {
      return iVar4;
    }
  }
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = uVar3;
  fVar5 = *param_3;
  fVar6 = *param_2;
  if ((0.0 <= fVar5) || (0.0 <= fVar6)) {
    if (fVar5 <= fVar6) {
      return iVar4 + 1;
    }
  }
  else if (fVar6 <= fVar5) {
    return iVar4 + 1;
  }
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar3;
  fVar5 = *param_2;
  fVar6 = *param_1;
  if ((0.0 <= fVar5) || (0.0 <= fVar6)) {
    if (fVar6 < fVar5) goto LAB_008ea4fc;
  }
  else if (fVar5 < fVar6) {
LAB_008ea4fc:
    uVar3 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar3;
    return iVar4 + 3;
  }
  return iVar4 + 2;
}


