/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01613a4c; name: FUN_01613a4c
 */


void FUN_01613a4c(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar5 = *(ulong *)(param_1 + 0x1f8);
  if (uVar5 != 0) {
    uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      uVar6 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      uVar6 = uVar4;
    }
    else {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar4 / uVar5;
      }
      uVar6 = uVar4 - uVar6 * uVar5;
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0x1f0) + uVar6 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if (plVar3[1] == uVar4) {
            if (plVar3[2] == uVar4) goto LAB_01613b6c;
          }
          else if ((plVar3[1] & uVar5 - 1) != uVar6) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar2 = plVar3[1];
          if (uVar2 == uVar4) {
            if (plVar3[2] == uVar4) goto LAB_01613b6c;
          }
          else {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != uVar6) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  auVar7 = FUN_01612f88((long *)(param_1 + 0x1f0),param_2,param_1);
  plVar3 = auVar7._0_8_;
  if ((auVar7._8_8_ & 0xff) == 0) {
    return;
  }
LAB_01613b6c:
  FUN_01612840(plVar3 + 8,param_3,param_4);
  return;
}


