/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


