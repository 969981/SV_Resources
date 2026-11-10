/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002dac90; name: FUN_002dac90
 */


undefined4 FUN_002dac90(long param_1,ulong param_2,ulong param_3,ulong param_4,int param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong local_18;
  
  local_18 = (param_2 & 0xff) << 9 | (param_3 & 0xff) << 1 | param_4 & 1 | (long)param_5 << 0x11;
  uVar5 = *(ulong *)(param_1 + 0x80);
  if (uVar5 != 0) {
    uVar9 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar5 >> 
                                                  8)),POPCOUNT((char)uVar5))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar7 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar7 < 2) {
      uVar4 = uVar5 - 1 & local_18;
    }
    else {
      uVar4 = local_18;
      if (uVar5 <= local_18) {
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = local_18 / uVar5;
        }
        uVar4 = local_18 - uVar4 * uVar5;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x78) + uVar4 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar6[1] == local_18) {
            if (plVar6[2] == local_18) {
LAB_002dadb4:
              return (int)plVar6[3];
            }
          }
          else if ((plVar6[1] & uVar5 - 1) != uVar4) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == local_18) {
            if (plVar6[2] == local_18) goto LAB_002dadb4;
          }
          else {
            if (uVar5 <= uVar7) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar7 / uVar5;
              }
              uVar7 = uVar7 - uVar1 * uVar5;
            }
            if (uVar7 != uVar4) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  uVar2 = FUN_002dab74();
  puVar3 = (undefined4 *)FUN_002dadc8((long *)(param_1 + 0x78),&local_18);
  *puVar3 = uVar2;
  return uVar2;
}


