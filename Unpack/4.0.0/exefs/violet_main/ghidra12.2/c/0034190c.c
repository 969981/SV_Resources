/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034190c; name: FUN_0034190c
 */


void FUN_0034190c(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 2;
                    /* try { // try from 00341928 to 0034192b has its CatchHandler @ 00341934 */
    FUN_00360570(param_1 + 0x18);
  }
  return;
}


