/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ea520; name: FUN_001ea520
 */


long * FUN_001ea520(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_001ec2f8(0x10);
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_001ec2f8(*(undefined4 *)(param_1 + 3));
    plVar1[1] = lVar2;
    if (lVar2 == 0) {
      FUN_001ec308(plVar1);
      plVar1 = (long *)0x0;
    }
    else {
      *plVar1 = (long)param_1;
      (*(code *)*param_1)();
    }
  }
  return plVar1;
}


