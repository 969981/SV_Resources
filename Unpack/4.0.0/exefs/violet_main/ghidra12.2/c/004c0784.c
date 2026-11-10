/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004c0784; name: FUN_004c0784
 */


undefined1  [16] FUN_004c0784(long *param_1,long param_2,byte *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  byte *__s2;
  long *plVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  __s2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __s2 = param_3 + 1;
  }
  bVar7 = *__s2;
  if (bVar7 == 0) {
    uVar5 = 0;
    uVar11 = param_1[1];
  }
  else {
    uVar5 = 0;
    pbVar9 = __s2;
    do {
      pbVar9 = pbVar9 + 1;
      uVar5 = uVar5 * 5 + (ulong)bVar7;
      bVar7 = *pbVar9;
    } while (bVar7 != 0);
    uVar11 = param_1[1];
  }
  if (uVar11 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar11 
                                                  >> 8)),POPCOUNT((char)uVar11))))))));
    uVar5 = uVar5 ^ param_2 * 0x1000193;
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      uVar10 = uVar11 - 1 & uVar5;
    }
    else {
      uVar10 = uVar5;
      if (uVar11 <= uVar5) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar5 / uVar11;
        }
        uVar10 = uVar5 - uVar10 * uVar11;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar10 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (uVar5 == plVar8[1]) {
            if ((plVar8[2] == param_2) &&
               (iVar2 = strcmp((char *)plVar8[3],(char *)__s2), iVar2 == 0)) goto LAB_004c08d8;
          }
          else if ((plVar8[1] & uVar11 - 1) != uVar10) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar5 == uVar6) {
            if ((plVar8[2] == param_2) &&
               (iVar2 = strcmp((char *)plVar8[3],(char *)__s2), iVar2 == 0)) goto LAB_004c08d8;
          }
          else {
            if (uVar11 <= uVar6) {
              uVar1 = 0;
              if (uVar11 != 0) {
                uVar1 = uVar6 / uVar11;
              }
              uVar6 = uVar6 - uVar1 * uVar11;
            }
            if (uVar6 != uVar10) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  lVar3 = 0;
  lVar4 = 0;
LAB_004c08e8:
  auVar14._8_8_ = lVar4;
  auVar14._0_8_ = lVar3;
  return auVar14;
LAB_004c08d8:
  lVar3 = plVar8[4];
  lVar4 = plVar8[5];
  goto LAB_004c08e8;
}


