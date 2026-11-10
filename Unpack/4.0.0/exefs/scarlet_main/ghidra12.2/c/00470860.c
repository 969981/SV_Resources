/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00470860; name: FUN_00470860
 */


undefined8 FUN_00470860(int param_1)

{
  if (param_1 < 0x2a1) {
    if (param_1 == 0x40) {
      return 0x33;
    }
    if (param_1 == 0x2a0) {
      return 0x34;
    }
  }
  else {
    if (param_1 == 0x2a1) {
      return 0x36;
    }
    if (param_1 == 0x2a2) {
      return 0x35;
    }
  }
  return 0xffffffff;
}


