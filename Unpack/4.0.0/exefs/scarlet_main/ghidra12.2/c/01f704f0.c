/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f704f0; name: FUN_01f704f0
 */


undefined8 FUN_01f704f0(undefined8 *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if (*(long *)(pbVar1 + 0x60) != 0) {
    if ((*pbVar1 & 1) == 0) {
      if (1 < *pbVar1) {
        return 1;
      }
    }
    else if (*(long *)(pbVar1 + 8) != 0) {
      return 1;
    }
  }
  return 0;
}


