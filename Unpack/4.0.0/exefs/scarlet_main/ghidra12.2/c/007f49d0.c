/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f49d0; name: FUN_007f49d0
 */


void FUN_007f49d0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_40;
  undefined4 local_38;
  
  if (param_2 != 0) {
    plVar1 = param_1 + 3;
    for (plVar3 = (long *)param_1[4]; plVar3 != plVar1; plVar3 = (long *)plVar3[1]) {
      if (plVar3[2] == param_2) {
        if ((int)param_1[0x10] == 0) {
          return;
        }
        lVar2 = FUN_0078fac8(param_1 + 0xe);
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = lVar2 - *(int *)((long)param_1 + 0x84);
        }
        *(undefined8 *)(lVar2 + 0x10) = 0;
        FUN_0078f9e0(param_1 + 0xb,param_1 + 0xb,lVar2);
        *(long *)(lVar2 + 0x10) = param_2;
        plVar3 = (long *)param_1[4];
        while( true ) {
          if (plVar3 == plVar1) {
            return;
          }
          if (plVar3[2] == param_2) break;
          plVar3 = (long *)plVar3[1];
        }
        FUN_0078fa2c(plVar1,plVar3);
        FUN_0078fa04(param_1 + 6,param_1 + 6,(long)plVar3 + (long)*(int *)((long)param_1 + 0x44));
        if (param_1[0x13] == param_2) {
          param_1[0x13] = 0;
        }
        local_38 = 0;
        local_40 = 0x20000000;
        (**(code **)(*param_1 + 0x98))(param_1,&local_40);
        return;
      }
    }
  }
  return;
}


