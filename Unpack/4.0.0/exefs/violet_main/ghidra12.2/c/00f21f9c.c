/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f21f9c; name: FUN_00f21f9c
 */


void FUN_00f21f9c(long param_1)

{
  if (((*(char *)(param_1 + 0x88) == '\0') &&
      ((*(long *)(param_1 + 0x70) == 0 || (*(short *)(*(long *)(param_1 + 0x70) + 0x1a) == 0)))) ||
     (*(undefined8 **)(param_1 + 0x80) == (undefined8 *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f21fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x80))();
  return;
}


