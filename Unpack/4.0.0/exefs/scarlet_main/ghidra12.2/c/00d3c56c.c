/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d3c56c; name: FUN_00d3c56c
 */


long FUN_00d3c56c(long param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar5 = *(ulong *)(param_1 + 0x78);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar3;
    }
    else if (uVar3 < uVar5) {
      uVar7 = uVar3;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar3 / uVar5;
      }
      uVar7 = uVar3 - uVar7 * uVar5;
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x70) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar3) {
            if (plVar8[2] == uVar3) {
LAB_00d3c65c:
              lVar4 = *(long *)(*(long *)(param_1 + 0x38) + (long)(int)plVar8[6] * 0x20);
              lVar1 = 0;
              if (*(char *)(lVar4 + 0xd0) != '\0') {
                lVar1 = lVar4;
              }
              return lVar1;
            }
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) {
            return 0;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar3) {
            if (plVar8[2] == uVar3) goto LAB_00d3c65c;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar7) {
              return 0;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  return 0;
}


