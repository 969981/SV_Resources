/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038e77c; name: FUN_0038e77c
 */


undefined8 FUN_0038e77c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  plVar1 = (long *)param_1[3];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
                    /* try { // try from 0038e798 to 0038e79b has its CatchHandler @ 0038e7bc */
    FUN_0038c890();
  }
  FUN_0038c890(param_1);
  return uVar2;
}


