/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fa32d0; name: FUN_00fa32d0
 */


undefined4 FUN_00fa32d0(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  uint local_14;
  
  uVar4 = *(ulong *)(param_1 + 0x48);
  if (uVar4 != 0) {
    uVar2 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar3 = (ulong)param_2;
    if (uVar2 < 2) {
      uVar5 = (ulong)((int)uVar4 - 1U & param_2);
    }
    else {
      uVar5 = uVar3;
      if (uVar4 <= uVar3) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar3 / uVar4;
        }
        uVar5 = uVar3 - uVar5 * uVar4;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x40) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if (plVar6[1] == uVar3) {
            if (*(uint *)(plVar6 + 2) == param_2) goto LAB_00fa33ec;
          }
          else if ((plVar6[1] & uVar4 - 1) != uVar5) {
            return 0xffffffff;
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0xffffffff;
          }
        } while( true );
      }
      do {
        uVar2 = plVar6[1];
        if (uVar2 == uVar3) {
          if (*(uint *)(plVar6 + 2) == param_2) {
LAB_00fa33ec:
            local_14 = param_2;
            plVar6 = (long *)FUN_00fa340c((long *)(param_1 + 0x40),&local_14);
            return *(undefined4 *)(*plVar6 + 0x40);
          }
        }
        else {
          if (uVar4 <= uVar2) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar2 / uVar4;
            }
            uVar2 = uVar2 - uVar1 * uVar4;
          }
          if (uVar2 != uVar5) {
            return 0xffffffff;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0xffffffff;
        }
      } while( true );
    }
  }
  return 0xffffffff;
}


