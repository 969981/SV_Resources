/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c30c8; name: FUN_004c30c8
 */


void FUN_004c30c8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar4 = param_2[1];
  uVar9 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                   CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                            CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                     CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                              CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                       CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                CONCAT11(POPCOUNT((char)(uVar4 >> 8)
                                                                                 ),
                                                                         POPCOUNT((char)uVar4)))))))
                  );
  uVar8 = NEON_uaddlv(uVar9,1);
  uVar5 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
  uVar3 = param_3[1];
  if (uVar5 < 2) {
    uVar3 = uVar4 - 1 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar7 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar7 = plVar6[1];
    if (uVar5 < 2) {
      uVar7 = uVar7 & uVar4 - 1;
    }
    else if (uVar4 <= uVar7) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar7 / uVar4;
      }
      uVar7 = uVar7 - uVar1 * uVar4;
    }
    if (uVar7 == uVar3) goto LAB_004c3194;
  }
  if (*param_3 != 0) {
    uVar7 = *(ulong *)(*param_3 + 8);
    if (uVar5 < 2) {
      uVar7 = uVar7 & uVar4 - 1;
    }
    else if (uVar4 <= uVar7) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar7 / uVar4;
      }
      uVar7 = uVar7 - uVar1 * uVar4;
    }
    if (uVar7 == uVar3) goto LAB_004c3194;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_004c3194:
  if (*param_3 != 0) {
    uVar7 = *(ulong *)(*param_3 + 8);
    if (uVar5 < 2) {
      uVar7 = uVar7 & uVar4 - 1;
    }
    else if (uVar4 <= uVar7) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar7 / uVar4;
      }
      uVar7 = uVar7 - uVar5 * uVar4;
    }
    if (uVar7 != uVar3) {
      *(long **)(*param_2 + uVar7 * 8) = plVar6;
    }
  }
  *plVar6 = *param_3;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


