/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e9530; name: FUN_008e9530
 */


void FUN_008e9530(float *param_1,float *param_2)

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
    bVar2 = fVar12 < fVar11;
    fVar10 = *pfVar3;
    if (fVar12 < 0.0) goto LAB_008e9578;
LAB_008e95bc:
    bVar1 = fVar10 < fVar12;
  }
  else {
    bVar2 = fVar11 < fVar12;
    fVar10 = *pfVar3;
    if (0.0 <= fVar12) goto LAB_008e95bc;
LAB_008e9578:
    if (0.0 <= fVar10) goto LAB_008e95bc;
    bVar1 = fVar12 < fVar10;
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
        if (fVar11 <= fVar10) goto LAB_008e9634;
      }
      else if (fVar10 <= fVar11) goto LAB_008e9634;
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
      if (fVar11 <= fVar12) goto LAB_008e9634;
    }
    else if (fVar12 <= fVar11) goto LAB_008e9634;
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = uVar6;
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
LAB_008e9634:
  pfVar7 = param_1 + 6;
  if (pfVar7 == param_2) {
    return;
  }
  lVar5 = 0;
  fVar11 = *pfVar7;
  if (fVar11 < 0.0) goto LAB_008e9674;
LAB_008e9688:
  if (fVar10 <= fVar11) goto LAB_008e973c;
  do {
    fVar12 = pfVar7[1];
    *(undefined8 *)pfVar7 = *(undefined8 *)pfVar3;
    pfVar9 = param_1;
    if (pfVar3 != param_1) {
      lVar8 = lVar5;
      if (0.0 <= fVar11) {
        do {
          if (*(float *)((long)param_1 + lVar8 + 8) <= fVar11) {
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
            if (fVar10 <= fVar11) {
              pfVar9 = (float *)((long)param_1 + lVar8 + 0x10);
              break;
            }
          }
          else if (fVar11 <= fVar10) {
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
LAB_008e973c:
    do {
      pfVar3 = pfVar7;
      pfVar7 = pfVar3 + 2;
      if (pfVar7 == param_2) {
        return;
      }
      fVar10 = *pfVar3;
      lVar5 = lVar5 + 8;
      fVar11 = *pfVar7;
      if (0.0 <= fVar11) goto LAB_008e9688;
LAB_008e9674:
      if (0.0 <= fVar10) goto LAB_008e9688;
    } while (fVar11 <= fVar10);
  } while( true );
}


