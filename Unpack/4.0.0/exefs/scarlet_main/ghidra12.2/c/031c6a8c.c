/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c6a8c; name: FUN_031c6a8c
 */


void FUN_031c6a8c(long *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


