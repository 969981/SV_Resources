/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021eb010; name: FUN_021eb010
 */


bool FUN_021eb010(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  uVar3 = *(ulong *)(param_1 + 0x200);
  if (uVar3 != 0) {
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
    plVar6 = *(long **)(*(long *)(param_1 + 0x1f8) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (1 < uVar4) {
        do {
          uVar4 = plVar6[1];
          if (uVar4 == uVar2) {
            if (plVar6[2] == uVar2) goto LAB_021eb104;
          }
          else {
            if (uVar3 <= uVar4) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar4 / uVar3;
              }
              uVar4 = uVar4 - uVar1 * uVar3;
            }
            if (uVar4 != uVar5) goto LAB_021eb0ac;
          }
          plVar6 = (long *)*plVar6;
          plVar7 = (long *)0x0;
        } while (plVar6 != (long *)0x0);
        goto LAB_021eb108;
      }
      do {
        if (plVar6[1] == uVar2) {
          if (plVar6[2] == uVar2) goto LAB_021eb104;
        }
        else if ((plVar6[1] & uVar3 - 1) != uVar5) break;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
LAB_021eb0ac:
  plVar7 = (long *)0x0;
  goto LAB_021eb108;
LAB_021eb104:
  plVar7 = plVar6;
LAB_021eb108:
  return plVar7 != (long *)0x0;
}


