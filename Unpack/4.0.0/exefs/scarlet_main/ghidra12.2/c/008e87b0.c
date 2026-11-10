/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e87b0; name: FUN_008e87b0
 */


bool FUN_008e87b0(float *param_1,float *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  float fVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return true;
  case 2:
    if ((*param_1 <= param_2[-2]) &&
       ((param_2[-2] != *param_1 || ((int)param_2[-1] < (int)param_1[1])))) {
      uVar5 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar5;
      return true;
    }
    break;
  case 3:
    FUN_008e8470(param_1,param_1 + 2,param_2 + -2,param_3);
    break;
  case 4:
    pfVar9 = param_1 + 4;
    FUN_008e8470(param_1,param_1 + 2,pfVar9,param_3);
    if ((param_1[4] <= param_2[-2]) &&
       ((param_2[-2] != param_1[4] || ((int)param_2[-1] < (int)param_1[5])))) {
      uVar5 = *(undefined8 *)pfVar9;
      *(undefined8 *)pfVar9 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar5;
      fVar11 = param_1[2];
      if ((fVar11 <= *pfVar9) && ((*pfVar9 != fVar11 || ((int)param_1[5] < (int)param_1[3])))) {
        uVar5 = *(undefined8 *)(param_1 + 2);
        uVar1 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 2) = uVar1;
        *(undefined8 *)(param_1 + 4) = uVar5;
        if ((*param_1 <= (float)uVar1) &&
           ((*param_1 < (float)uVar1 || ((int)((ulong)uVar1 >> 0x20) < (int)param_1[1])))) {
          uVar5 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = uVar1;
          *(undefined8 *)(param_1 + 2) = uVar5;
        }
      }
    }
    break;
  case 5:
    FUN_008e85d0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    FUN_008e8470(param_1,param_1 + 2,param_1 + 4,param_3);
    if (param_1 + 6 != param_2) {
      lVar4 = 0;
      iVar6 = 0;
      pfVar9 = param_1 + 6;
      pfVar10 = param_1 + 4;
      do {
        pfVar7 = pfVar9;
        fVar11 = *pfVar7;
        if ((*pfVar10 <= fVar11) &&
           ((fVar2 = pfVar7[1], fVar11 != *pfVar10 || ((int)fVar2 < (int)pfVar10[1])))) {
          *(undefined8 *)pfVar7 = *(undefined8 *)pfVar10;
          pfVar9 = param_1;
          if (pfVar10 != param_1) {
            lVar8 = lVar4;
            do {
              fVar12 = *(float *)((long)param_1 + lVar8 + 8);
              pfVar9 = pfVar10;
              if (fVar11 < fVar12) goto LAB_008e883c;
              if ((fVar11 <= fVar12) && (*(int *)((long)param_1 + lVar8 + 0xc) <= (int)fVar2)) {
                pfVar9 = (float *)((long)param_1 + lVar8 + 0x10);
                goto LAB_008e883c;
              }
              bVar3 = lVar8 != -8;
              *(undefined8 *)((long)param_1 + lVar8 + 0x10) =
                   *(undefined8 *)((long)param_1 + lVar8 + 8);
              lVar8 = lVar8 + -8;
              pfVar10 = pfVar10 + -2;
            } while (bVar3);
            pfVar9 = param_1;
          }
LAB_008e883c:
          iVar6 = iVar6 + 1;
          *pfVar9 = fVar11;
          pfVar9[1] = fVar2;
          if (iVar6 == 8) {
            return pfVar7 + 2 == param_2;
          }
        }
        lVar4 = lVar4 + 8;
        pfVar9 = pfVar7 + 2;
        pfVar10 = pfVar7;
      } while (pfVar7 + 2 != param_2);
    }
  }
  return true;
}


