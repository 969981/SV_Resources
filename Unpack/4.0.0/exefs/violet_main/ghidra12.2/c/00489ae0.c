/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00489ae0; name: FUN_00489ae0
 */


undefined8 FUN_00489ae0(int param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 0x148);
  if (plVar3 != (long *)0x0) {
    if ((plVar3[1] != 0) && (iVar1 = FUN_0047e430(), 0 < iVar1)) {
      iVar1 = 0;
      if ((param_3 >> 4 & 1) == 0) {
        do {
          FUN_0047e450(plVar3[1],iVar1);
          iVar2 = FUN_0045bea0();
          if (iVar2 == param_1) {
            return 2;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0047e430(plVar3[1]);
        } while (iVar1 < iVar2);
      }
      else {
        do {
          FUN_0047e450(plVar3[1],iVar1);
          iVar2 = FUN_0045bea0();
          if (iVar2 == param_1) {
            return 2;
          }
          if (iVar2 == 0x38e) {
            return 2;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0047e430(plVar3[1]);
        } while (iVar1 < iVar2);
      }
    }
    if (*plVar3 != 0) {
      iVar1 = FUN_0047e430();
      if (0 < iVar1) {
        if ((param_3 >> 4 & 1) == 0) {
          iVar1 = 0;
          do {
            FUN_0047e450(*plVar3,iVar1);
            iVar2 = FUN_0045bea0();
            if (iVar2 == param_1) {
              return 1;
            }
            iVar1 = iVar1 + 1;
            iVar2 = FUN_0047e430(*plVar3);
          } while (iVar1 < iVar2);
        }
        else {
          iVar1 = 0;
          do {
            FUN_0047e450(*plVar3,iVar1);
            iVar2 = FUN_0045bea0();
            if (iVar2 == param_1) {
              return 1;
            }
            if (iVar2 == 0x38e) {
              return 1;
            }
            iVar1 = iVar1 + 1;
            iVar2 = FUN_0047e430(*plVar3);
          } while (iVar1 < iVar2);
        }
      }
      return 2;
    }
  }
  if (((((param_3 >> 3 & 1) == 0) || (iVar1 = FUN_00498e10(param_2,0xffffffff,0), iVar1 != 1)) ||
      ((param_3 >> 2 & 1) != 0)) || ((*(byte *)(param_2 + 0xe1) >> 5 & 1) == 0)) {
    return 3;
  }
  return 1;
}


