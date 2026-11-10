/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02943e10; name: FUN_02943e10
 */


undefined1 FUN_02943e10(long param_1,undefined4 param_2)

{
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined1 local_14;
  
  local_14 = 2;
  local_20[0] = 0;
  local_18 = param_2;
  FUN_02943e50(**(undefined8 **)(param_1 + 0x28),local_20,&local_18);
  return local_20[0];
}


