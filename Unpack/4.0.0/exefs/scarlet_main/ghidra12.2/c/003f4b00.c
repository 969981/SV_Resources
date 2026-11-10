/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


