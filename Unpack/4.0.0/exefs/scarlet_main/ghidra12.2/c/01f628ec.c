/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f628ec; name: FUN_01f628ec
 */


void FUN_01f628ec(long param_1)

{
  if (((*(char *)(param_1 + 0x88) == '\0') &&
      ((*(long *)(param_1 + 0x70) == 0 || (*(short *)(*(long *)(param_1 + 0x70) + 0x1a) == 0)))) ||
     (*(undefined8 **)(param_1 + 0x80) == (undefined8 *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01f62904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x80))();
  return;
}


