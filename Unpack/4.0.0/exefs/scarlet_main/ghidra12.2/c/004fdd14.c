/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fdd14; name: FUN_004fdd14
 */


undefined8 FUN_004fdd14(long *param_1)

{
  undefined8 uVar1;
  
  std::mutex::lock();
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  std::mutex::unlock();
  return uVar1;
}


