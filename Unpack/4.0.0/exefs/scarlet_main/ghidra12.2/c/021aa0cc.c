/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021aa0cc; name: FUN_021aa0cc
 */


bool FUN_021aa0cc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *local_8;
  
  (**(code **)(*(long *)*param_2 + 0x40))(&local_8);
  lVar1 = FUN_021aa128(local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x60))();
  }
  return lVar1 != 0;
}


