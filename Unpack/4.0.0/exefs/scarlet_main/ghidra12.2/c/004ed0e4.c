/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


