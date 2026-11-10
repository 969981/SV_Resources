/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002228d4; name: FUN_002228d4
 */


void FUN_002228d4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cbe78 + 0x10);
  if ((char)param_1[1] == '\0') {
    return;
  }
  if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not recover jumptable at 0x0022290c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x18))();
  return;
}


