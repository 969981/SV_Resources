/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027065c0; name: FUN_027065c0
 */


long * FUN_027065c0(undefined8 *param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar2 = FUN_027067ec();
  param_1 = (undefined8 *)*param_1;
  if ((uVar2 & 1) == 0) {
    plVar4 = (long *)param_1[1];
    if ((long *)param_1[1] == (long *)0x0) {
      plVar3 = (long *)*param_1;
      plVar4 = plVar3;
      if ((undefined8 *)plVar3[1] == param_1) {
        do {
          plVar3 = (long *)*plVar4;
          bVar1 = (long *)plVar3[1] == plVar4;
          plVar4 = plVar3;
        } while (bVar1);
      }
    }
    else {
      do {
        plVar3 = plVar4;
        plVar4 = (long *)plVar3[2];
      } while ((long *)plVar3[2] != (long *)0x0);
    }
  }
  else {
    plVar4 = (long *)*param_1;
    do {
      plVar3 = plVar4;
      plVar4 = (long *)plVar3[2];
    } while ((long *)plVar3[2] != (long *)0x0);
  }
  return plVar3;
}


