/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f34b34; name: FUN_01f34b34
 */


void FUN_01f34b34(long param_1)

{
  if (((*(char *)(param_1 + 0x88) == '\0') &&
      ((*(long *)(param_1 + 0x70) == 0 || (*(short *)(*(long *)(param_1 + 0x70) + 0x1a) == 0)))) ||
     (*(long **)(param_1 + 0x80) == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01f34b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x80) + 8))();
  return;
}


