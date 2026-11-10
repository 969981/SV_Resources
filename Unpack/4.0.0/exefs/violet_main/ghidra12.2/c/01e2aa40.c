/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e2aa40; name: FUN_01e2aa40
 */


undefined8 FUN_01e2aa40(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar3 = *(ulong *)(param_1 + 0x118);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar7 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar4 = (ulong)param_2;
    if (uVar7 < 2) {
      uVar5 = uVar3 - 1 & uVar4;
    }
    else if (uVar4 < uVar3) {
      uVar5 = uVar4;
    }
    else {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar4 / uVar3;
      }
      uVar5 = uVar4 - uVar5 * uVar3;
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x110) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar6[1] == uVar4) {
            if ((int)plVar6[2] == param_2) goto LAB_01e2aac8;
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar5) {
            return 1;
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 1;
          }
        } while( true );
      }
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if ((int)plVar6[2] == param_2) {
LAB_01e2aac8:
            if (*(long *)(plVar6[3] + 0x18) == 0) {
              return 0;
            }
            uVar2 = FUN_00de1730();
            return uVar2;
          }
        }
        else {
          if (uVar3 <= uVar7) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar1 * uVar3;
          }
          if (uVar7 != uVar5) {
            return 1;
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return 1;
}


