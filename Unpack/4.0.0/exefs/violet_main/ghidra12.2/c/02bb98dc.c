/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bb98dc; name: FUN_02bb98dc
 */


undefined8 FUN_02bb98dc(long param_1,int *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  if (param_2 != (int *)0x0) {
    plVar6 = (long *)(*(long **)(param_1 + 0x38))[1];
    uVar3 = plVar6[1];
    if (uVar3 != 0) {
      uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
      uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
      uVar2 = *param_3;
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
      plVar6 = *(long **)(*plVar6 + uVar5 * 8);
      if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
        if (uVar4 < 2) {
          do {
            if (plVar6[1] == uVar2) {
              if (plVar6[2] == uVar2) goto LAB_02bb99dc;
            }
            else if ((plVar6[1] & uVar3 - 1) != uVar5) {
              return 0;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        else {
          do {
            uVar4 = plVar6[1];
            if (uVar4 == uVar2) {
              if (plVar6[2] == uVar2) {
LAB_02bb99dc:
                *param_2 = (int)*(float *)(**(long **)(param_1 + 0x38) +
                                           (ulong)*(uint *)(plVar6 + 3) * 4 + 0x7c);
                return 0;
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
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
      }
    }
  }
  return 0;
}


