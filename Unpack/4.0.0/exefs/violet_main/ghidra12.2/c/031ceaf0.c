/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031ceaf0; name: FUN_031ceaf0
 */


int FUN_031ceaf0(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  int iVar5;
  undefined8 *****pppppuVar6;
  int iVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  long lVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****local_10;
  undefined8 *****local_8;
  
  pppppuVar4 = &local_10;
  if ((undefined8 *****)param_1[3] == (undefined8 *****)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    pppppuVar6 = (undefined8 *****)param_1[3];
    do {
      local_8 = (undefined8 *****)0x0;
      if (pppppuVar6 == (undefined8 *****)0x0) {
        uVar2 = 0;
        pppppuVar3 = &local_8;
      }
      else {
        if (iVar1 < 1) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar2 = 0;
        pppppuVar3 = &local_8;
        do {
          iVar7 = 0;
          pppppuVar9 = pppppuVar6;
          do {
            pppppuVar9 = (undefined8 *****)*pppppuVar9;
            iVar7 = iVar7 + 1;
            if (iVar1 <= iVar7) break;
          } while (pppppuVar9 != (undefined8 *****)0x0);
          iVar5 = iVar1;
          if (pppppuVar9 == (undefined8 *****)0x0) {
            pppppuVar9 = (undefined8 *****)0x0;
LAB_031cebb0:
            iVar7 = iVar7 + 1;
            pppppuVar8 = pppppuVar3;
            do {
              pppppuVar3 = pppppuVar6;
              *pppppuVar8 = pppppuVar3;
              iVar7 = iVar7 + -1;
              pppppuVar6 = (undefined8 *****)*pppppuVar3;
              pppppuVar8 = pppppuVar3;
            } while (1 < iVar7);
          }
          else {
            pppppuVar8 = pppppuVar3;
            pppppuVar11 = pppppuVar6;
            do {
              if (pppppuVar9[1] < pppppuVar11[1]) {
                iVar5 = iVar5 + -1;
                pppppuVar3 = pppppuVar9;
                pppppuVar6 = pppppuVar11;
                pppppuVar9 = (undefined8 *****)*pppppuVar9;
              }
              else {
                pppppuVar6 = (undefined8 *****)*pppppuVar11;
                iVar7 = iVar7 + -1;
                pppppuVar3 = pppppuVar11;
              }
              *pppppuVar8 = pppppuVar3;
              if ((pppppuVar9 == (undefined8 *****)0x0) || (iVar7 < 1)) break;
              pppppuVar8 = pppppuVar3;
              pppppuVar11 = pppppuVar6;
            } while (0 < iVar5);
            if (0 < iVar7) goto LAB_031cebb0;
          }
          uVar2 = uVar2 + 1;
          pppppuVar6 = pppppuVar9;
          if (0 < iVar5) {
            while( true ) {
              pppppuVar6 = pppppuVar9;
              if (pppppuVar9 == (undefined8 *****)0x0) break;
              *pppppuVar3 = pppppuVar9;
              pppppuVar6 = (undefined8 *****)*pppppuVar9;
              pppppuVar3 = pppppuVar9;
              if (iVar5 < 2) break;
              iVar5 = iVar5 + -1;
              pppppuVar9 = pppppuVar6;
            }
          }
        } while (pppppuVar6 != (undefined8 *****)0x0);
      }
      *pppppuVar3 = (undefined8 ****)0x0;
      iVar1 = iVar1 << 1;
      pppppuVar6 = local_8;
    } while (1 < uVar2);
    param_1[3] = local_8;
    pppppuVar9 = (undefined8 *****)param_1[8];
    pppppuVar6 = (undefined8 *****)*param_1;
    pppppuVar3 = pppppuVar6;
    if (pppppuVar9 < (undefined8 *****)param_1[9]) {
      do {
        pppppuVar6 = pppppuVar9;
        *pppppuVar6 = pppppuVar3;
        pppppuVar3 = pppppuVar6;
        pppppuVar9 = (undefined8 *****)((long)pppppuVar6 + param_1[1]);
      } while ((undefined8 *****)((long)pppppuVar6 + param_1[1]) < (undefined8 *****)param_1[9]);
    }
    *param_1 = pppppuVar6;
    param_1[8] = 0;
    param_1[9] = 0;
    pppppuVar3 = (undefined8 *****)0x0;
    if (pppppuVar6 != (undefined8 *****)0x0) {
      iVar1 = 1;
      do {
        local_8 = (undefined8 *****)0x0;
        if (pppppuVar6 == (undefined8 *****)0x0) {
          uVar2 = 0;
          pppppuVar3 = &local_8;
        }
        else {
          if (iVar1 < 1) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar2 = 0;
          pppppuVar3 = &local_8;
          do {
            iVar7 = 0;
            pppppuVar9 = pppppuVar6;
            do {
              pppppuVar9 = (undefined8 *****)*pppppuVar9;
              iVar7 = iVar7 + 1;
              if (iVar1 <= iVar7) break;
            } while (pppppuVar9 != (undefined8 *****)0x0);
            iVar5 = iVar1;
            if (pppppuVar9 == (undefined8 *****)0x0) {
              pppppuVar9 = (undefined8 *****)0x0;
LAB_031ced24:
              iVar7 = iVar7 + 1;
              pppppuVar8 = pppppuVar3;
              do {
                pppppuVar3 = pppppuVar6;
                *pppppuVar8 = pppppuVar3;
                iVar7 = iVar7 + -1;
                pppppuVar6 = (undefined8 *****)*pppppuVar3;
                pppppuVar8 = pppppuVar3;
              } while (1 < iVar7);
            }
            else {
              pppppuVar8 = pppppuVar3;
              do {
                pppppuVar3 = pppppuVar6;
                if (pppppuVar9 < pppppuVar3) {
                  iVar5 = iVar5 + -1;
                  pppppuVar6 = pppppuVar3;
                  pppppuVar3 = pppppuVar9;
                  pppppuVar9 = (undefined8 *****)*pppppuVar9;
                }
                else {
                  pppppuVar6 = (undefined8 *****)*pppppuVar3;
                  iVar7 = iVar7 + -1;
                }
                *pppppuVar8 = pppppuVar3;
                if ((pppppuVar9 == (undefined8 *****)0x0) || (iVar7 < 1)) break;
                pppppuVar8 = pppppuVar3;
              } while (0 < iVar5);
              if (0 < iVar7) goto LAB_031ced24;
            }
            uVar2 = uVar2 + 1;
            pppppuVar6 = pppppuVar9;
            if (0 < iVar5) {
              while( true ) {
                pppppuVar6 = pppppuVar9;
                if (pppppuVar9 == (undefined8 *****)0x0) break;
                *pppppuVar3 = pppppuVar9;
                pppppuVar6 = (undefined8 *****)*pppppuVar9;
                pppppuVar3 = pppppuVar9;
                if (iVar5 < 2) break;
                iVar5 = iVar5 + -1;
                pppppuVar9 = pppppuVar6;
              }
            }
          } while (pppppuVar6 != (undefined8 *****)0x0);
        }
        *pppppuVar3 = (undefined8 ****)0x0;
        iVar1 = iVar1 << 1;
        pppppuVar3 = local_8;
        pppppuVar6 = local_8;
      } while (1 < uVar2);
    }
    local_8 = (undefined8 *****)param_1[3];
    iVar1 = 0;
    *param_1 = pppppuVar3;
    local_10 = pppppuVar3;
    if (local_8 != (undefined8 *****)0x0) {
      pppppuVar6 = local_8;
      pppppuVar9 = &local_8;
LAB_031cedbc:
      do {
        pppppuVar11 = pppppuVar6;
        pppppuVar8 = (undefined8 *****)pppppuVar11[2];
        lVar10 = param_1[1] * (long)pppppuVar11[3];
        pppppuVar6 = (undefined8 *****)((long)pppppuVar8 + lVar10);
        if (pppppuVar8 == pppppuVar3 && 0 < lVar10) {
          do {
            pppppuVar3 = (undefined8 *****)*pppppuVar3;
            pppppuVar8 = (undefined8 *****)((long)pppppuVar8 + param_1[1]);
            if (pppppuVar6 <= pppppuVar8) break;
          } while (pppppuVar8 == pppppuVar3);
        }
        if (pppppuVar8 != pppppuVar6) {
          pppppuVar9 = pppppuVar4;
          if ((pppppuVar3 != (undefined8 *****)0x0) && (pppppuVar3 < pppppuVar6)) {
            do {
              pppppuVar3 = (undefined8 *****)*pppppuVar3;
            } while ((pppppuVar3 != (undefined8 *****)0x0 && pppppuVar3 <= pppppuVar6) &&
                     (pppppuVar3 == (undefined8 *****)0x0 || pppppuVar6 != pppppuVar3));
          }
          do {
            pppppuVar4 = pppppuVar9;
            pppppuVar9 = (undefined8 *****)*pppppuVar4;
          } while ((undefined8 *****)*pppppuVar4 != pppppuVar3);
          pppppuVar6 = (undefined8 *****)*pppppuVar11;
          pppppuVar9 = pppppuVar11;
          if ((undefined8 *****)*pppppuVar11 == (undefined8 *****)0x0) break;
          goto LAB_031cedbc;
        }
        *pppppuVar9 = *pppppuVar11;
        *pppppuVar11 = (undefined8 ****)param_1[4];
        param_1[4] = pppppuVar11;
        pppppuVar6 = (undefined8 *****)*pppppuVar9;
        iVar1 = iVar1 + 1;
        *pppppuVar4 = pppppuVar3;
      } while (pppppuVar6 != (undefined8 *****)0x0);
    }
    *param_1 = local_10;
    param_1[2] = 0;
    param_1[3] = local_8;
  }
  return iVar1;
}


