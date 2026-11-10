/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029cad10; name: FUN_029cad10
 */


ulong FUN_029cad10(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar3 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar2 = *param_2;
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar4 = uVar6 - 1 & uVar2;
    }
    else if (uVar2 < uVar6) {
      uVar4 = uVar2;
    }
    else {
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar2 / uVar6;
      }
      uVar4 = uVar2 - uVar4 * uVar6;
    }
    plVar7 = *(long **)(*param_1 + uVar4 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar7[1] == uVar2) {
            if (plVar7[2] == uVar2) goto LAB_029cae1c;
          }
          else if ((plVar7[1] & uVar6 - 1) != uVar4) goto LAB_029cadc0;
          plVar7 = (long *)*plVar7;
          uVar5 = 0;
          uVar3 = 0;
          uVar8 = 0;
        } while (plVar7 != (long *)0x0);
        goto LAB_029cae2c;
      }
      do {
        uVar3 = plVar7[1];
        if (uVar3 == uVar2) {
          if (plVar7[2] == uVar2) goto LAB_029cae1c;
        }
        else {
          if (uVar6 <= uVar3) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar3 / uVar6;
            }
            uVar3 = uVar3 - uVar1 * uVar6;
          }
          if (uVar3 != uVar4) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
LAB_029cadc0:
  uVar5 = 0;
  uVar3 = 0;
  uVar8 = 0;
  goto LAB_029cae2c;
LAB_029cae1c:
  uVar8 = *(uint *)((long)plVar7 + 0x74) & 0xffffff00;
  uVar5 = *(uint *)((long)plVar7 + 0x74) & 0xff;
  uVar3 = 0x100000000;
LAB_029cae2c:
  return uVar3 | (uVar8 | uVar5);
}


