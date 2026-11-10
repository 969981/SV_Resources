/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03485478; name: FUN_03485478
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_03485478(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(param_1 + 0x130);
  if (plVar4 != (long *)0x0) {
    plVar1 = (long *)(param_1 + 0x130);
    if (param_2 == 0) {
      if (param_3 == 0) {
        while( true ) {
          plVar5 = (long *)*plVar4;
          *(long **)(param_1 + 0x130) = plVar5;
          FUN_03484688(param_1,plVar4);
          FUN_0348490c(plVar4);
          if (plVar5 == (long *)0x0) break;
          plVar4 = plVar5;
          if ((long *)*plVar1 != plVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
      else {
        plVar5 = (long *)0x0;
        do {
          plVar3 = (long *)*plVar4;
          if (*(int *)((long)plVar4 + 0x4c) == param_3) {
            plVar2 = plVar1;
            if (*(long **)(param_1 + 0x130) != plVar4) {
              plVar2 = plVar5;
            }
            *plVar2 = (long)plVar3;
            FUN_03484688(param_1,plVar4);
            FUN_0348490c(plVar4);
            plVar4 = plVar5;
          }
          plVar5 = plVar4;
          plVar4 = plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
    else {
      plVar5 = (long *)0x0;
      do {
        if ((plVar4[1] == param_2) && ((param_3 == 0 || (*(int *)((long)plVar4 + 0x4c) == param_3)))
           ) {
          plVar3 = (long *)*plVar4;
          plVar2 = plVar1;
          if (*(long **)(param_1 + 0x130) != plVar4) {
            plVar2 = plVar5;
          }
          *plVar2 = (long)plVar3;
          FUN_03484688(param_1,plVar4);
          FUN_0348490c(plVar4);
        }
        else {
          plVar3 = (long *)*plVar4;
          plVar5 = plVar4;
        }
        plVar4 = plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
}


