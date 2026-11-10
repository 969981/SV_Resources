/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d6288; name: FUN_029d6288
 */


undefined8 FUN_029d6288(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  if ((*(long *)(param_1 + 0x268) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x268) + 0x1e8) & 1) == 0)) {
    return 0;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x268) + 0x220);
  if ((lVar6 != 0) && (uVar3 = *(ulong *)(lVar6 + 0x10), uVar3 != 0)) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar2 = *param_2;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar3 - 1 & uVar2;
    }
    else if (uVar2 < uVar3) {
      uVar5 = uVar2;
    }
    else {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar2 / uVar3;
      }
      uVar5 = uVar2 - uVar5 * uVar3;
    }
    plVar7 = *(long **)(*(long *)(lVar6 + 8) + uVar5 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar7[1] == uVar2) {
            if (plVar7[2] == uVar2) goto LAB_029d63ac;
          }
          else if ((plVar7[1] & uVar3 - 1) != uVar5) {
            return 0;
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar4 = plVar7[1];
        if (uVar4 == uVar2) {
          if (plVar7[2] == uVar2) {
LAB_029d63ac:
            if (plVar7[6] == 0) {
              return 0;
            }
            return *(undefined8 *)(plVar7[6] + 0x10);
          }
        }
        else {
          if (uVar3 <= uVar4) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar4 / uVar3;
            }
            uVar4 = uVar4 - uVar1 * uVar3;
          }
          if (uVar4 != uVar5) {
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 0;
}


