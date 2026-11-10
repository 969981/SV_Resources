/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ea670; name: FUN_008ea670
 */


void FUN_008ea670(float *param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = param_1[2];
  fVar11 = *param_1;
  pfVar3 = param_1 + 4;
  if ((0.0 <= fVar12) || (0.0 <= fVar11)) {
    bVar2 = fVar11 < fVar12;
    fVar10 = *pfVar3;
    if (fVar12 < 0.0) goto LAB_008ea6b8;
LAB_008ea6fc:
    bVar1 = fVar12 < fVar10;
  }
  else {
    bVar2 = fVar12 < fVar11;
    fVar10 = *pfVar3;
    if (0.0 <= fVar12) goto LAB_008ea6fc;
LAB_008ea6b8:
    if (0.0 <= fVar10) goto LAB_008ea6fc;
    bVar1 = fVar10 < fVar12;
  }
  if (bVar2) {
    uVar4 = *(undefined8 *)param_1;
    fVar11 = (float)uVar4;
    if (bVar1) {
      uVar6 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 4) = uVar4;
      *(undefined8 *)param_1 = uVar6;
      fVar10 = fVar11;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar4;
      if ((0.0 <= fVar10) || (0.0 <= fVar11)) {
        if (fVar10 <= fVar11) goto LAB_008ea774;
      }
      else if (fVar11 <= fVar10) goto LAB_008ea774;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 4) = uVar4;
      fVar10 = fVar11;
    }
  }
  else if (bVar1) {
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar6 = *(undefined8 *)(param_1 + 4);
    fVar12 = (float)uVar6;
    fVar10 = (float)uVar4;
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(undefined8 *)(param_1 + 4) = uVar4;
    if ((0.0 <= fVar11) || (0.0 <= fVar12)) {
      if (fVar12 <= fVar11) goto LAB_008ea774;
    }
    else if (fVar11 <= fVar12) goto LAB_008ea774;
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = uVar6;
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
LAB_008ea774:
  pfVar7 = param_1 + 6;
  if (pfVar7 == param_2) {
    return;
  }
  lVar5 = 0;
  fVar11 = *pfVar7;
  if (fVar11 < 0.0) goto LAB_008ea7b4;
LAB_008ea7c8:
  if (fVar11 <= fVar10) goto LAB_008ea87c;
  do {
    fVar12 = pfVar7[1];
    *(undefined8 *)pfVar7 = *(undefined8 *)pfVar3;
    pfVar9 = param_1;
    if (pfVar3 != param_1) {
      lVar8 = lVar5;
      if (0.0 <= fVar11) {
        do {
          if (fVar11 <= *(float *)((long)param_1 + lVar8 + 8)) {
            pfVar9 = (float *)((long)param_1 + lVar8 + 0x10);
            break;
          }
          bVar2 = lVar8 != -8;
          *(undefined8 *)((long)param_1 + lVar8 + 0x10) = *(undefined8 *)((long)param_1 + lVar8 + 8)
          ;
          lVar8 = lVar8 + -8;
        } while (bVar2);
      }
      else {
        do {
          fVar10 = *(float *)((long)param_1 + lVar8 + 8);
          if (0.0 <= fVar10) {
            if (fVar11 <= fVar10) {
              pfVar9 = (float *)((long)param_1 + lVar8 + 0x10);
              break;
            }
          }
          else if (fVar10 <= fVar11) {
            pfVar9 = pfVar3;
            break;
          }
          pfVar3 = pfVar3 + -2;
          bVar2 = lVar8 != -8;
          *(undefined8 *)((long)param_1 + lVar8 + 0x10) = *(undefined8 *)((long)param_1 + lVar8 + 8)
          ;
          lVar8 = lVar8 + -8;
        } while (bVar2);
      }
    }
    *pfVar9 = fVar11;
    pfVar9[1] = fVar12;
LAB_008ea87c:
    do {
      pfVar3 = pfVar7;
      pfVar7 = pfVar3 + 2;
      if (pfVar7 == param_2) {
        return;
      }
      fVar10 = *pfVar3;
      lVar5 = lVar5 + 8;
      fVar11 = *pfVar7;
      if (0.0 <= fVar11) goto LAB_008ea7c8;
LAB_008ea7b4:
      if (0.0 <= fVar10) goto LAB_008ea7c8;
    } while (fVar10 <= fVar11);
  } while( true );
}


