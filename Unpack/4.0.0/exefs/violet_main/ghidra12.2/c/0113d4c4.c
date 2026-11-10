/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0113d4c4; name: FUN_0113d4c4
 */


undefined8 FUN_0113d4c4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long local_38;
  undefined1 auStack_30 [16];
  
  uVar3 = param_1[1];
  if (uVar3 == 0) {
    return 0;
  }
  uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = *param_2;
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar6 = uVar3 - 1 & uVar4;
  }
  else if (uVar4 < uVar3) {
    uVar6 = uVar4;
  }
  else {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = uVar4 / uVar3;
    }
    uVar6 = uVar4 - uVar6 * uVar3;
  }
  plVar7 = *(long **)(*param_1 + uVar6 * 8);
  if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
    if (uVar5 < 2) {
      do {
        if (plVar7[1] == uVar4) {
          if (plVar7[2] == uVar4) goto LAB_0113d5d0;
        }
        else if ((plVar7[1] & uVar3 - 1) != uVar6) {
          return 0;
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
    do {
      uVar5 = plVar7[1];
      if (uVar5 == uVar4) {
        if (plVar7[2] == uVar4) {
LAB_0113d5d0:
          FUN_0113d6c0(&local_38);
          lVar2 = local_38;
          local_38 = 0;
          if (lVar2 != 0) {
            FUN_0113d610(auStack_30);
          }
          return 1;
        }
      }
      else {
        if (uVar3 <= uVar5) {
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = uVar5 / uVar3;
          }
          uVar5 = uVar5 - uVar1 * uVar3;
        }
        if (uVar5 != uVar6) {
          return 0;
        }
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return 0;
}


