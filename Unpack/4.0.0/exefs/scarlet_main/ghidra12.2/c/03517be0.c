/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03517be0; name: FUN_03517be0
 */


void FUN_03517be0(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (DAT_048d2010 != (long *)0x0) {
    if (param_2 == 0) {
      plVar3 = DAT_048d2010;
      if (param_4 == 0) {
        do {
          plVar2 = (long *)plVar3[0xe];
          lVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if (lVar1 == param_1) {
            FUN_0351cba8(plVar3,param_3,0xffffffff);
          }
          plVar3 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          plVar2 = (long *)plVar3[0xe];
          lVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if ((lVar1 == param_1) && (*(int *)(plVar3[0xc] + 0x2c) == param_4)) {
            FUN_0351cba8(plVar3,param_3,0xffffffff);
          }
          plVar3 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    else if (param_4 == 0) {
      plVar3 = DAT_048d2010;
      do {
        plVar2 = (long *)plVar3[0xe];
        lVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
        if ((lVar1 == param_1) && (*(long *)(plVar3[0xc] + 0x30) == param_2)) {
          FUN_0351cba8(plVar3,param_3,0xffffffff);
        }
        plVar3 = plVar2;
      } while (plVar2 != (long *)0x0);
    }
    else {
      plVar3 = DAT_048d2010;
      do {
        plVar2 = (long *)plVar3[0xe];
        lVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
        if (((lVar1 == param_1) && (*(long *)(plVar3[0xc] + 0x30) == param_2)) &&
           (*(int *)(plVar3[0xc] + 0x2c) == param_4)) {
          FUN_0351cba8(plVar3,param_3,0xffffffff);
        }
        plVar3 = plVar2;
      } while (plVar2 != (long *)0x0);
    }
  }
  return;
}


