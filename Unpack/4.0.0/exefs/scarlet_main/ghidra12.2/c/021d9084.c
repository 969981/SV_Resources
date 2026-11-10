/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d9084; name: thunk_FUN_026f76f8
 */


void thunk_FUN_026f76f8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)FUN_021dad60();
  if (plVar1 != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x88);
    while (plVar4 != (long *)(param_1 + 0x80)) {
      (**(code **)(*plVar1 + 0x10))(plVar1,(int)plVar4[6]);
      plVar2 = (long *)plVar4[2];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)*plVar4;
        if (plVar4 == (long *)plVar2[2]) {
          plVar3 = (long *)*plVar2;
          plVar4 = plVar2;
          if (plVar2 == (long *)plVar3[2]) {
            do {
              plVar4 = plVar3;
              plVar3 = (long *)*plVar4;
            } while (plVar4 == (long *)plVar3[2]);
          }
        }
        else {
          plVar3 = plVar2;
        }
        if ((long *)plVar4[2] != plVar3) {
          plVar4 = plVar3;
        }
      }
      else {
        plVar3 = (long *)plVar2[1];
        plVar4 = plVar2;
        if (plVar3 != (long *)0x0) {
          for (plVar2 = (long *)plVar3[1]; plVar4 = plVar3, plVar2 != (long *)0x0;
              plVar2 = (long *)plVar2[1]) {
            plVar3 = plVar2;
          }
        }
      }
    }
  }
  return;
}


