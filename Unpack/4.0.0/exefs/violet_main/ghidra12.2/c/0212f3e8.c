/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212f3e8; name: FUN_0212f3e8
 */


undefined4 FUN_0212f3e8(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 local_18;
  
  uVar3 = *(ulong *)(param_1 + 0x160);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar3 - 1 & 0x12d7b82ec399ec60;
    }
    else {
      uVar5 = 0x12d7b82ec399ec60;
      if (uVar3 < 0x12d7b82ec399ec61) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = 0x12d7b82ec399ec60 / uVar3;
        }
        uVar5 = 0x12d7b82ec399ec60 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x158) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (1 < uVar4) {
        do {
          uVar4 = plVar6[1];
          if (uVar4 == 0x12d7b82ec399ec60) {
            if (plVar6[2] == 0x12d7b82ec399ec60) goto LAB_0212f500;
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
          if (plVar6 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        if (plVar6[1] == 0x12d7b82ec399ec60) {
          if (plVar6[2] == 0x12d7b82ec399ec60) {
LAB_0212f500:
            local_18 = 0x12d7b82ec399ec60;
            uVar2 = FUN_0212f52c(param_1,&local_18);
            return uVar2;
          }
        }
        else if ((plVar6[1] & uVar3 - 1) != uVar5) {
          return 0;
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


