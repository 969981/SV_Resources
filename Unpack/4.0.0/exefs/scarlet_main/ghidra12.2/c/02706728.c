/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02706728; name: FUN_02706728
 */


void FUN_02706728(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_48 [8];
  
  *param_4 = 0;
  if (param_2 != param_3) {
    do {
      plVar1 = (long *)param_2[2];
      plVar2 = param_2;
      if ((long *)param_2[2] == (long *)0x0) {
        do {
          plVar3 = plVar2;
          plVar2 = (long *)*plVar3;
        } while (plVar3 == (long *)plVar2[2]);
        if ((long *)plVar3[2] != plVar2) {
          plVar3 = plVar2;
        }
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)plVar3[1];
        } while ((long *)plVar3[1] != (long *)0x0);
      }
      FUN_02706b30(auStack_48,param_2);
      (*DAT_04859df0)(param_2);
      *param_4 = *param_4 + 1;
      param_2 = plVar3;
    } while (plVar3 != param_3);
    param_2 = param_3;
  }
  *param_1 = (long)param_2;
  return;
}


