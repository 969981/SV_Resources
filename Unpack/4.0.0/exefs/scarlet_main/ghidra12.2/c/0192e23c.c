/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192e23c; name: FUN_0192e23c
 */


void FUN_0192e23c(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 local_48 [3];
  
  plVar2 = (long *)(param_1 + 8);
  if ((long *)*plVar2 == (long *)0x0) {
    plVar3 = plVar2;
LAB_0192e264:
    if (*plVar3 == 0) {
      FUN_0192e340(local_48,param_1,param_3,param_4);
      FUN_0192e2ec(param_1,plVar2,plVar3,local_48[0]);
    }
    return;
  }
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar2;
  do {
    if (*param_2 < (ulong)plVar2[4]) {
      plVar1 = (long *)*plVar2;
      plVar3 = plVar2;
      if (plVar1 == (long *)0x0) goto LAB_0192e264;
    }
    else {
      if (*param_2 <= (ulong)plVar2[4]) goto LAB_0192e264;
      plVar3 = plVar2 + 1;
      plVar1 = (long *)*plVar3;
      if (plVar1 == (long *)0x0) goto LAB_0192e264;
    }
    plVar2 = plVar1;
  } while( true );
}


