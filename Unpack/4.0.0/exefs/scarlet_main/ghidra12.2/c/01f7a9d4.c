/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7a9d4; name: FUN_01f7a9d4
 */


void FUN_01f7a9d4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = 0;
  uVar1 = FUN_01cf7e20();
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = 0;
  *param_1 = param_1 + 1;
  if ((long *)*param_2 != param_2 + 1) {
    plVar5 = (long *)*param_2;
    do {
      FUN_01d0202c(param_1,param_1 + 1,plVar5 + 4,plVar5 + 4);
      plVar2 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar2 = plVar5 + 2;
        plVar3 = (long *)*plVar2;
        if ((long *)*plVar3 != plVar5) {
          do {
            lVar4 = *plVar2;
            plVar2 = (long *)(lVar4 + 0x10);
            plVar3 = (long *)*plVar2;
          } while (*plVar3 != lVar4);
        }
      }
      else {
        do {
          plVar3 = plVar2;
          plVar2 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      plVar5 = plVar3;
    } while (plVar3 != param_2 + 1);
  }
  return;
}


