/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a33e0; name: FUN_004a33e0
 */


long FUN_004a33e0(long *param_1,long *param_2)

{
  long lVar1;
  byte *__s2;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  lVar1 = *param_2;
  __s2 = (byte *)param_2[1];
  bVar6 = *__s2;
  if (bVar6 == 0) {
    uVar4 = 0;
    uVar10 = param_1[1];
  }
  else {
    uVar4 = 0;
    pbVar8 = __s2;
    do {
      pbVar8 = pbVar8 + 1;
      uVar4 = uVar4 * 5 + (ulong)bVar6;
      bVar6 = *pbVar8;
    } while (bVar6 != 0);
    uVar10 = param_1[1];
  }
  if (uVar10 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar4 = uVar4 ^ lVar1 * 0x1000193;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar5 < 2) {
      uVar9 = uVar10 - 1 & uVar4;
    }
    else {
      uVar9 = uVar4;
      if (uVar10 <= uVar4) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar4 / uVar10;
        }
        uVar9 = uVar4 - uVar9 * uVar10;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar9 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == uVar4) {
            if ((plVar7[2] == lVar1) && (iVar3 = strcmp((char *)plVar7[3],(char *)__s2), iVar3 == 0)
               ) {
LAB_004a3524:
              return plVar7[4];
            }
          }
          else if ((plVar7[1] & uVar10 - 1) != uVar9) {
            return 0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar4) {
            if ((plVar7[2] == lVar1) && (iVar3 = strcmp((char *)plVar7[3],(char *)__s2), iVar3 == 0)
               ) goto LAB_004a3524;
          }
          else {
            if (uVar10 <= uVar5) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar5 / uVar10;
              }
              uVar5 = uVar5 - uVar2 * uVar10;
            }
            if (uVar5 != uVar9) {
              return 0;
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return 0;
}


