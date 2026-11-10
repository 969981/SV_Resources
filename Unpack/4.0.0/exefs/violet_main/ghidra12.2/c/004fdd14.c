/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


