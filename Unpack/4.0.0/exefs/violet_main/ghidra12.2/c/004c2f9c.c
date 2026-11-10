/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004c2f9c; name: FUN_004c2f9c
 */


long * FUN_004c2f9c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  long *plVar6;
  byte *__s2;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  __s2 = (byte *)*param_2;
  bVar3 = *__s2;
  if (bVar3 == 0) {
    uVar7 = 0;
    uVar9 = param_1[1];
  }
  else {
    uVar7 = 0;
    pbVar5 = __s2;
    do {
      pbVar5 = pbVar5 + 1;
      uVar7 = uVar7 * 5 + (ulong)bVar3;
      bVar3 = *pbVar5;
    } while (bVar3 != 0);
    uVar9 = param_1[1];
  }
  if (uVar9 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar4 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar4 < 2) {
      uVar8 = uVar9 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar9 <= uVar7) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar7 / uVar9;
        }
        uVar8 = uVar7 - uVar8 * uVar9;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == uVar7) {
            iVar2 = strcmp((char *)plVar6[2],(char *)__s2);
            if (iVar2 == 0) {
              return plVar6;
            }
          }
          else if ((plVar6[1] & uVar9 - 1) != uVar8) {
            return (long *)0x0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar4 = plVar6[1];
        if (uVar4 == uVar7) {
          iVar2 = strcmp((char *)plVar6[2],(char *)__s2);
          if (iVar2 == 0) {
            return plVar6;
          }
        }
        else {
          if (uVar9 <= uVar4) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar4 / uVar9;
            }
            uVar4 = uVar4 - uVar1 * uVar9;
          }
          if (uVar4 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


