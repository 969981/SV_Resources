/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ed0e4; name: FUN_004ed0e4
 */


undefined8 FUN_004ed0e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  std::mutex::lock();
                    /* try { // try from 004ed100 to 004ed10b has its CatchHandler @ 004ed128 */
  uVar1 = FUN_004ebcc8(param_1,param_2);
  std::mutex::unlock();
  return uVar1;
}


