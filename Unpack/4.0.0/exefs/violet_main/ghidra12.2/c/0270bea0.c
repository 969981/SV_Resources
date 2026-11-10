/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270bea0; name: FUN_0270bea0
 */


bool FUN_0270bea0(uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = param_2[-1];
    lVar11 = *(long *)(*param_3 + 0x60);
    uVar1 = *param_1;
    lVar6 = *(long *)(lVar11 + (ulong)uVar2 * 8);
    lVar11 = *(long *)(lVar11 + (ulong)uVar1 * 8);
    iVar7 = *(int *)(lVar6 + 0x20);
    iVar3 = *(int *)(lVar11 + 0x20);
    if (iVar7 == iVar3) {
      fVar14 = *(float *)(lVar6 + 0x24);
      fVar15 = *(float *)(lVar11 + 0x24);
      if (fVar14 == fVar15) {
        if (uVar2 < uVar1) goto LAB_0270bf34;
      }
      else if (*(int *)(*param_3 + 0x1e0) == 2) {
        if (fVar14 < fVar15) goto LAB_0270bf34;
      }
      else if (fVar15 < fVar14) {
LAB_0270bf34:
        *param_1 = uVar2;
        param_2[-1] = uVar1;
        return true;
      }
    }
    else if (iVar7 < iVar3) goto LAB_0270bf34;
    break;
  case 3:
    FUN_00c6e440(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_00c6e280(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00c6e980(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_00c6e440(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      puVar10 = param_1 + 3;
      puVar9 = param_1 + 2;
      do {
        puVar8 = puVar10;
        uVar1 = *puVar8;
        uVar2 = *puVar9;
        lVar12 = *(long *)(*param_3 + 0x60);
        lVar11 = *(long *)(lVar12 + (ulong)uVar1 * 8);
        iVar3 = *(int *)(lVar11 + 0x20);
        lVar12 = *(long *)(lVar12 + (ulong)uVar2 * 8);
        iVar4 = *(int *)(lVar12 + 0x20);
        if (iVar3 == iVar4) {
          fVar14 = *(float *)(lVar11 + 0x24);
          fVar15 = *(float *)(lVar12 + 0x24);
          if (fVar14 == fVar15) {
            if (uVar1 < uVar2) goto LAB_0270bfe0;
          }
          else if (*(int *)(*param_3 + 0x1e0) == 2) {
            if (fVar14 < fVar15) goto LAB_0270bfe0;
          }
          else if (fVar15 < fVar14) {
LAB_0270bfe0:
            *puVar8 = uVar2;
            puVar10 = param_1;
            if (puVar9 != param_1) {
              lVar11 = lVar6;
              do {
                uVar2 = *(uint *)((long)param_1 + lVar11 + 4);
                lVar13 = *(long *)(*param_3 + 0x60);
                lVar12 = *(long *)(lVar13 + (ulong)uVar1 * 8);
                lVar13 = *(long *)(lVar13 + (ulong)uVar2 * 8);
                iVar3 = *(int *)(lVar12 + 0x20);
                iVar4 = *(int *)(lVar13 + 0x20);
                if (iVar3 == iVar4) {
                  fVar14 = *(float *)(lVar12 + 0x24);
                  fVar15 = *(float *)(lVar13 + 0x24);
                  if (fVar14 == fVar15) {
                    if (uVar2 <= uVar1) goto LAB_0270c138;
                  }
                  else if (*(int *)(*param_3 + 0x1e0) == 2) {
                    if (fVar15 <= fVar14) goto LAB_0270c138;
                  }
                  else if (fVar14 <= fVar15) {
                    puVar10 = (uint *)((long)param_1 + lVar11 + 8);
                    break;
                  }
                }
                else if (iVar4 <= iVar3) {
LAB_0270c138:
                  puVar10 = puVar9;
                  break;
                }
                puVar9 = puVar9 + -1;
                *(uint *)((long)param_1 + lVar11 + 8) = uVar2;
                bVar5 = lVar11 != -4;
                lVar11 = lVar11 + -4;
              } while (bVar5);
            }
            iVar7 = iVar7 + 1;
            *puVar10 = uVar1;
            if (iVar7 == 8) {
              return puVar8 + 1 == param_2;
            }
          }
        }
        else if (iVar3 < iVar4) goto LAB_0270bfe0;
        lVar6 = lVar6 + 4;
        puVar10 = puVar8 + 1;
        puVar9 = puVar8;
      } while (puVar8 + 1 != param_2);
    }
  }
  return true;
}


