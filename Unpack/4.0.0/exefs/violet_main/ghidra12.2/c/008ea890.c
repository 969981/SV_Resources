/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ea890; name: FUN_008ea890
 */


bool FUN_008ea890(float *param_1,float *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return true;
  case 2:
    fVar12 = param_2[-2];
    fVar13 = *param_1;
    if ((0.0 <= fVar12) || (0.0 <= fVar13)) {
      if (fVar12 <= fVar13) {
        return true;
      }
    }
    else if (fVar13 <= fVar12) {
      return true;
    }
    uVar4 = *(undefined8 *)param_1;
    break;
  case 3:
    fVar12 = param_1[2];
    fVar13 = *param_1;
    if ((0.0 <= fVar12) || (0.0 <= fVar13)) {
      bVar2 = fVar13 < fVar12;
      fVar13 = param_2[-2];
      if (fVar12 < 0.0) goto LAB_008ea9c0;
LAB_008eaa0c:
      bVar1 = fVar12 < fVar13;
    }
    else {
      bVar2 = fVar12 < fVar13;
      fVar13 = param_2[-2];
      if (0.0 <= fVar12) goto LAB_008eaa0c;
LAB_008ea9c0:
      if (0.0 <= fVar13) goto LAB_008eaa0c;
      bVar1 = fVar13 < fVar12;
    }
    if (!bVar2) {
      if (!bVar1) {
        return true;
      }
      uVar4 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar4;
      fVar12 = param_1[2];
      fVar13 = *param_1;
      if ((0.0 <= fVar12) || (0.0 <= fVar13)) {
        if (fVar12 <= fVar13) {
          return true;
        }
      }
      else if (fVar13 <= fVar12) {
        return true;
      }
      uVar4 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar4;
      return true;
    }
    uVar4 = *(undefined8 *)param_1;
    if (!bVar1) {
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar4;
      fVar12 = (float)uVar4;
      fVar13 = param_2[-2];
      if ((0.0 <= fVar12) || (0.0 <= fVar13)) {
        if (fVar13 <= fVar12) {
          return true;
        }
      }
      else if (fVar12 <= fVar13) {
        return true;
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      goto LAB_008eaab8;
    }
    break;
  case 4:
    FUN_008ea2e0(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
    return true;
  case 5:
    FUN_008ea520(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    return true;
  default:
    fVar13 = param_1[2];
    fVar12 = *param_1;
    pfVar3 = param_1 + 4;
    if ((0.0 <= fVar13) || (0.0 <= fVar12)) {
      bVar2 = fVar12 < fVar13;
      fVar11 = *pfVar3;
      if (fVar13 < 0.0) goto LAB_008eaa60;
LAB_008eaacc:
      bVar1 = fVar13 < fVar11;
      if (bVar2) {
LAB_008eaad8:
        uVar4 = *(undefined8 *)param_1;
        fVar12 = (float)uVar4;
        if (bVar1) {
          uVar7 = *(undefined8 *)(param_1 + 4);
          *(undefined8 *)(param_1 + 4) = uVar4;
          *(undefined8 *)param_1 = uVar7;
          fVar11 = fVar12;
        }
        else {
          *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)(param_1 + 2) = uVar4;
          if ((0.0 <= fVar11) || (0.0 <= fVar12)) {
            if (fVar11 <= fVar12) goto LAB_008eab78;
          }
          else if (fVar12 <= fVar11) goto LAB_008eab78;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
          *(undefined8 *)(param_1 + 4) = uVar4;
          fVar11 = fVar12;
        }
        goto LAB_008eab78;
      }
    }
    else {
      bVar2 = fVar13 < fVar12;
      fVar11 = *pfVar3;
      if (0.0 <= fVar13) goto LAB_008eaacc;
LAB_008eaa60:
      if (0.0 <= fVar11) goto LAB_008eaacc;
      bVar1 = fVar11 < fVar13;
      if (bVar2) goto LAB_008eaad8;
    }
    if (bVar1) {
      uVar4 = *(undefined8 *)(param_1 + 2);
      uVar7 = *(undefined8 *)(param_1 + 4);
      fVar13 = (float)uVar7;
      fVar11 = (float)uVar4;
      *(undefined8 *)(param_1 + 2) = uVar7;
      *(undefined8 *)(param_1 + 4) = uVar4;
      if ((0.0 <= fVar12) || (0.0 <= fVar13)) {
        if (fVar13 <= fVar12) goto LAB_008eab78;
      }
      else if (fVar12 <= fVar13) goto LAB_008eab78;
      uVar4 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = uVar7;
      *(undefined8 *)(param_1 + 2) = uVar4;
    }
LAB_008eab78:
    pfVar8 = param_1 + 6;
    if (pfVar8 == param_2) {
      return true;
    }
    lVar5 = 0;
    iVar6 = 0;
    fVar12 = *pfVar8;
    if (0.0 <= fVar12) goto LAB_008eabb0;
    do {
      if (0.0 <= fVar11) goto LAB_008eabb0;
      if (fVar12 < fVar11) goto LAB_008eabb8;
      while( true ) {
        pfVar3 = pfVar8;
        pfVar8 = pfVar3 + 2;
        if (pfVar8 == param_2) {
          return true;
        }
        fVar11 = *pfVar3;
        lVar5 = lVar5 + 8;
        fVar12 = *pfVar8;
        if (fVar12 < 0.0) break;
LAB_008eabb0:
        if (fVar11 < fVar12) {
LAB_008eabb8:
          fVar13 = pfVar8[1];
          *(undefined8 *)pfVar8 = *(undefined8 *)pfVar3;
          pfVar10 = param_1;
          if (pfVar3 != param_1) {
            lVar9 = lVar5;
            if (0.0 <= fVar12) {
              do {
                if (fVar12 <= *(float *)((long)param_1 + lVar9 + 8)) {
                  pfVar10 = (float *)((long)param_1 + lVar9 + 0x10);
                  break;
                }
                bVar2 = lVar9 != -8;
                *(undefined8 *)((long)param_1 + lVar9 + 0x10) =
                     *(undefined8 *)((long)param_1 + lVar9 + 8);
                lVar9 = lVar9 + -8;
              } while (bVar2);
            }
            else {
              do {
                fVar11 = *(float *)((long)param_1 + lVar9 + 8);
                if (0.0 <= fVar11) {
                  if (fVar12 <= fVar11) {
                    pfVar10 = (float *)((long)param_1 + lVar9 + 0x10);
                    break;
                  }
                }
                else if (fVar11 <= fVar12) {
                  pfVar10 = pfVar3;
                  break;
                }
                pfVar3 = pfVar3 + -2;
                bVar2 = lVar9 != -8;
                *(undefined8 *)((long)param_1 + lVar9 + 0x10) =
                     *(undefined8 *)((long)param_1 + lVar9 + 8);
                lVar9 = lVar9 + -8;
              } while (bVar2);
            }
          }
          iVar6 = iVar6 + 1;
          *pfVar10 = fVar12;
          pfVar10[1] = fVar13;
          if (iVar6 == 8) {
            return pfVar8 + 2 == param_2;
          }
        }
      }
    } while( true );
  }
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
LAB_008eaab8:
  *(undefined8 *)(param_2 + -2) = uVar4;
  return true;
}


