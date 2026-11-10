/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03517d78; name: FUN_03517d78
 */


void FUN_03517d78(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  
  if (DAT_048d2010 != (long *)0x0) {
    if (param_2 == 0) {
      plVar2 = DAT_048d2010;
      if (param_4 == 0) {
        do {
          lVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2);
          if (lVar1 == param_1) {
            FUN_0351cd30(plVar2,param_3);
          }
          plVar2 = (long *)plVar2[0xe];
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          lVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2);
          if ((lVar1 == param_1) && (*(int *)(plVar2[0xc] + 0x2c) == param_4)) {
            FUN_0351cd30(plVar2,param_3);
          }
          plVar2 = (long *)plVar2[0xe];
        } while (plVar2 != (long *)0x0);
      }
    }
    else {
      plVar2 = DAT_048d2010;
      if (param_4 == 0) {
        do {
          lVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2);
          if ((lVar1 == param_1) && (*(long *)(plVar2[0xc] + 0x30) == param_2)) {
            FUN_0351cd30(plVar2,param_3);
          }
          plVar2 = (long *)plVar2[0xe];
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          lVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2);
          if (((lVar1 == param_1) && (*(long *)(plVar2[0xc] + 0x30) == param_2)) &&
             (*(int *)(plVar2[0xc] + 0x2c) == param_4)) {
            FUN_0351cd30(plVar2,param_3);
          }
          plVar2 = (long *)plVar2[0xe];
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  return;
}


