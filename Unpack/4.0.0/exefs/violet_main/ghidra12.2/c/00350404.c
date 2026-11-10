/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00350404; name: FUN_00350404
 */


void FUN_00350404(long param_1)

{
  if (4 < (*(ulong *)(param_1 + 0x58) & -(*(ulong *)(param_1 + 0x58) & 1) & 0xfffffffffffffffe)) {
                    /* try { // try from 00350428 to 0035042b has its CatchHandler @ 00350460 */
    FUN_00350fd0();
  }
  if (param_1 + 0x50 != *(long *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00350454 to 0035045b has its CatchHandler @ 0035045c */
    abort();
  }
  if (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


