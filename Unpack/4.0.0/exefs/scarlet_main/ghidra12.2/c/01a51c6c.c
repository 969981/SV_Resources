/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a51c6c; name: FUN_01a51c6c
 */


undefined4 FUN_01a51c6c(long param_1,code *param_2,ulong param_3)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    return 0xc4700000;
  }
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *(long *)(param_1 + ((long)param_3 >> 1)));
  }
  puVar1 = (undefined4 *)(*param_2)();
  return *puVar1;
}


