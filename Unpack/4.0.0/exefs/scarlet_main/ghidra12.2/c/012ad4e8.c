/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ad4e8; name: FUN_012ad4e8
 */


undefined8 FUN_012ad4e8(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x38);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    (*pcVar1)(param_1 + 0x50);
  }
  *(undefined1 **)(param_1 + 0x30) = &LAB_02b7f54c;
  *(undefined1 **)(param_1 + 0x38) = &LAB_02b7f558;
  *(undefined1 **)(param_1 + 0x40) = &LAB_02b7f55c;
  *(undefined1 **)(param_1 + 0x48) = &LAB_02b7f560;
  return 1;
}


