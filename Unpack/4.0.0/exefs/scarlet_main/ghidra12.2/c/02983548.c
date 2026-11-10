/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02983548; name: FUN_02983548
 */


undefined1 FUN_02983548(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 local_18;
  undefined1 local_17;
  
  local_28[0] = 0;
  local_20 = param_2;
  local_18 = param_3;
  local_17 = param_4;
  FUN_01461214();
  uVar1 = FUN_029835dc();
  FUN_01705774(uVar1,local_28,&local_20);
  return local_28[0];
}


