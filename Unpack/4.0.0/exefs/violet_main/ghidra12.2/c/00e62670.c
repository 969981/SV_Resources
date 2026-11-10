/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e62670; name: FUN_00e62670
 */


void FUN_00e62670(undefined4 param_1,long param_2,long param_3,int param_4,int param_5,byte param_6)

{
  long *plVar1;
  long *plVar2;
  undefined4 local_30;
  byte local_2c [4];
  undefined4 local_28;
  byte local_24 [4];
  
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    plVar1 = (long *)plVar1[1];
    if (plVar1 != plVar2) {
      if (plVar2 != plVar1) {
        do {
          if (*plVar2 == *(long *)(param_3 + 8)) goto LAB_00e626c0;
          plVar2 = plVar2 + 0x34;
        } while (plVar1 != plVar2);
        plVar2 = plVar1;
      }
LAB_00e626c0:
      if (param_5 == 2) {
        if ((plVar2 != plVar1) && ((code *)plVar2[4] != (code *)0x0)) {
          local_24[0] = param_6 & 1;
          local_28 = param_1;
          (*(code *)plVar2[4])(plVar2 + 8,param_3,local_24,&local_28);
        }
      }
      else if (param_4 == 2) {
        if ((plVar2 != plVar1) && ((code *)plVar2[0x24] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e6277c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar2[0x24])(plVar2 + 0x28,param_3);
          return;
        }
      }
      else if (plVar2 != plVar1) {
        if ((code *)plVar2[4] != (code *)0x0) {
          local_2c[0] = param_6 & 1;
          local_30 = param_1;
          (*(code *)plVar2[4])(plVar2 + 8,param_3,local_2c,&local_30);
        }
        if ((code *)plVar2[0x24] != (code *)0x0) {
          (*(code *)plVar2[0x24])(plVar2 + 0x28,param_3);
        }
      }
    }
  }
  return;
}


