/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029aabb4; name: FUN_029aabb4
 */


undefined8 * FUN_029aabb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04602d00;
  param_1[1] = &PTR_LAB_04602d80;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  return param_1;
}


