/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029aabb4; name: FUN_029aabb4
 */


undefined8 * FUN_029aabb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04602d00;
  param_1[1] = &PTR_LAB_04602d80;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  return param_1;
}


