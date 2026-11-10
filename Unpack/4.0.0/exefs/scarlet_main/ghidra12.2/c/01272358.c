/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01272358; name: FUN_01272358
 */


void FUN_01272358(undefined1 *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar3 = *(ulong *)(param_2 + 0x40);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar2 = *param_3;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar6 = uVar3 - 1 & uVar2;
    }
    else if (uVar2 < uVar3) {
      uVar6 = uVar2;
    }
    else {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar2 / uVar3;
      }
      uVar6 = uVar2 - uVar6 * uVar3;
    }
    plVar5 = *(long **)(*(long *)(param_2 + 0x38) + uVar6 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar5[1] == uVar2) {
            if (plVar5[2] == uVar2) goto LAB_01272460;
          }
          else if ((plVar5[1] & uVar3 - 1) != uVar6) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar5[1];
          if (uVar4 == uVar2) {
            if (plVar5[2] == uVar2) {
LAB_01272460:
              *param_1 = 0;
              if ((char)plVar5[6] == '\0') {
                return;
              }
              *(long *)(param_1 + 8) = plVar5[7];
              *(long *)(param_1 + 0x10) = plVar5[8];
              *(long *)(param_1 + 0x18) = plVar5[9];
              plVar5 = (long *)plVar5[10];
              *(long **)(param_1 + 0x20) = plVar5;
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x18))();
              }
              *param_1 = 1;
              return;
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
            if (uVar4 != uVar6) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
}


