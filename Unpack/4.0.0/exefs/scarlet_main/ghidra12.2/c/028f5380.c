/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f5380; name: FUN_028f5380
 */


bool FUN_028f5380(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  uVar7 = (long)param_2 - (long)param_1 >> 3;
  if (1 < uVar7) {
    switch(uVar7) {
    case 2:
      lVar6 = param_2[-1];
      lVar13 = *(long *)(*param_3 + 0x280);
      lVar12 = *(long *)(*param_3 + 0x248);
      uVar7 = lVar13 + *(int *)(lVar6 + 0x468);
      lVar8 = *param_1;
      iVar1 = *(int *)(*(long *)(lVar12 + (uVar7 >> 2 & 0x3ffffffffffffff8)) + (uVar7 & 0x1f) * 0x80
                      + 0x78);
      uVar7 = lVar13 + *(int *)(lVar8 + 0x468);
      iVar2 = *(int *)(*(long *)(lVar12 + (uVar7 >> 2 & 0x3ffffffffffffff8)) + (uVar7 & 0x1f) * 0x80
                      + 0x78);
      bVar5 = SBORROW4(iVar1,iVar2);
      iVar9 = iVar1 - iVar2;
      if (iVar1 == iVar2) {
        bVar5 = SBORROW4(*(int *)(lVar6 + 0x4f4),*(int *)(lVar8 + 0x4f4));
        iVar9 = *(int *)(lVar6 + 0x4f4) - *(int *)(lVar8 + 0x4f4);
      }
      if (iVar9 < 0 != bVar5) {
        *param_1 = lVar6;
        param_2[-1] = lVar8;
        return true;
      }
      break;
    case 3:
      FUN_00da13c0(param_1,param_1 + 1,param_2 + -1,param_3);
      break;
    case 4:
      FUN_00da1200(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
      break;
    case 5:
      FUN_00da15a0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      break;
    default:
      FUN_00da13c0(param_1,param_1 + 1,param_1 + 2,param_3);
      if (param_1 + 3 != param_2) {
        lVar8 = 0;
        iVar9 = 0;
        plVar4 = param_1 + 3;
        plVar10 = param_1 + 2;
        do {
          plVar11 = plVar4;
          lVar12 = *plVar11;
          lVar6 = *(long *)(*param_3 + 0x280);
          lVar13 = *(long *)(*param_3 + 0x248);
          uVar7 = lVar6 + *(int *)(lVar12 + 0x468);
          lVar14 = *plVar10;
          iVar2 = *(int *)(*(long *)(lVar13 + (uVar7 >> 2 & 0x3ffffffffffffff8)) +
                           (uVar7 & 0x1f) * 0x80 + 0x78);
          uVar7 = lVar6 + *(int *)(lVar14 + 0x468);
          iVar3 = *(int *)(*(long *)(lVar13 + (uVar7 >> 2 & 0x3ffffffffffffff8)) +
                           (uVar7 & 0x1f) * 0x80 + 0x78);
          bVar5 = SBORROW4(iVar2,iVar3);
          iVar1 = iVar2 - iVar3;
          if (iVar2 == iVar3) {
            bVar5 = SBORROW4(*(int *)(lVar12 + 0x4f4),*(int *)(lVar14 + 0x4f4));
            iVar1 = *(int *)(lVar12 + 0x4f4) - *(int *)(lVar14 + 0x4f4);
          }
          if (iVar1 < 0 != bVar5) {
            *plVar11 = lVar14;
            if (plVar10 != param_1) {
              lVar6 = lVar8;
              do {
                lVar14 = *(long *)((long)param_1 + lVar6 + 8);
                lVar13 = *(long *)(*param_3 + 0x280);
                lVar15 = *(long *)(*param_3 + 0x248);
                uVar7 = lVar13 + *(int *)(lVar12 + 0x468);
                iVar1 = *(int *)(*(long *)(lVar15 + (uVar7 >> 2 & 0x3ffffffffffffff8)) +
                                 (uVar7 & 0x1f) * 0x80 + 0x78);
                uVar7 = lVar13 + *(int *)(lVar14 + 0x468);
                iVar2 = *(int *)(*(long *)(lVar15 + (uVar7 >> 2 & 0x3ffffffffffffff8)) +
                                 (uVar7 & 0x1f) * 0x80 + 0x78);
                if (iVar1 == iVar2) {
                  if (*(int *)(lVar14 + 0x4f4) <= *(int *)(lVar12 + 0x4f4)) {
                    plVar10 = (long *)((long)param_1 + lVar6 + 0x10);
                    goto LAB_028f5618;
                  }
                }
                else if (iVar2 <= iVar1) goto LAB_028f5618;
                plVar10 = plVar10 + -1;
                *(long *)((long)param_1 + lVar6 + 0x10) = lVar14;
                bVar5 = lVar6 != -8;
                lVar6 = lVar6 + -8;
              } while (bVar5);
              plVar10 = param_1;
            }
LAB_028f5618:
            iVar9 = iVar9 + 1;
            *plVar10 = lVar12;
            if (iVar9 == 8) {
              return plVar11 + 1 == param_2;
            }
          }
          lVar8 = lVar8 + 8;
          plVar4 = plVar11 + 1;
          plVar10 = plVar11;
          if (plVar11 + 1 == param_2) {
            return true;
          }
        } while( true );
      }
    }
  }
  return true;
}


