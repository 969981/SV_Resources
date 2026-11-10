/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f4b00; name: FUN_003f4b00
 */


void FUN_003f4b00(undefined8 param_1)

{
  long local_38 [2];
  undefined8 local_28;
  
  if (DAT_047f1828 == 0) {
    DAT_047f1828 = FUN_003f4c20();
  }
  (**(code **)(DAT_047f1828 + 0x10))(local_38);
  local_28 = param_1;
  (**(code **)(local_38[0] + 0x20))(local_38);
  return;
}


