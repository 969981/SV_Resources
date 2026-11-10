/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e2dd4; name: FUN_011e2dd4
 */


long FUN_011e2dd4(long param_1,uint param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar5 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar4 = (ulong)param_2;
    if (uVar5 < 2) {
      uVar8 = (ulong)((int)uVar3 - 1U & param_2);
    }
    else {
      uVar8 = uVar4;
      if (uVar3 <= uVar4) {
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = uVar4 / uVar3;
        }
        uVar8 = uVar4 - uVar8 * uVar3;
      }
    }
    plVar7 = (long *)(param_1 + 8);
    plVar6 = *(long **)(*plVar7 + uVar8 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar6[1] == uVar4) {
            if (*(uint *)(plVar6 + 2) == param_2) goto LAB_011e2e64;
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar8) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
          param_1 = 0;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar9 = plVar6[1];
        if (uVar9 == uVar4) {
          if (*(uint *)(plVar6 + 2) == param_2) goto LAB_011e2e64;
        }
        else {
          if (uVar3 <= uVar9) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar9 / uVar3;
            }
            uVar9 = uVar9 - uVar1 * uVar3;
          }
          if (uVar9 != uVar8) {
            return 0;
          }
        }
        plVar6 = (long *)*plVar6;
        param_1 = 0;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
LAB_011e2e64:
  if (uVar5 < 2) {
    uVar8 = (ulong)((int)uVar3 - 1U & param_2);
  }
  else {
    uVar8 = uVar4;
    if (uVar3 <= uVar4) {
      uVar8 = 0;
      if (uVar3 != 0) {
        uVar8 = uVar4 / uVar3;
      }
      uVar8 = uVar4 - uVar8 * uVar3;
    }
  }
  plVar7 = *(long **)(*plVar7 + uVar8 * 8);
  if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
    if (uVar5 < 2) {
      do {
        if (plVar7[1] == uVar4) {
          if (*(uint *)(plVar7 + 2) == param_2) goto LAB_011e2ea8;
        }
        else if ((plVar7[1] & uVar3 - 1) != uVar8) break;
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
    else {
      do {
        uVar5 = plVar7[1];
        if (uVar5 == uVar4) {
          if (*(uint *)(plVar7 + 2) == param_2) {
LAB_011e2ea8:
            return (long)plVar7 + 0x14;
          }
        }
        else {
          if (uVar3 <= uVar5) {
            uVar9 = 0;
            if (uVar3 != 0) {
              uVar9 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar9 * uVar3;
          }
          if (uVar5 != uVar8) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  FUN_0297ae00(param_1);
                    /* WARNING: Does not return */
  pcVar2 = (code *)UndefinedInstructionException(0,0x11e2fac);
  (*pcVar2)();
}


