/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fa8b4; name: FUN_007fa8b4
 */


void FUN_007fa8b4(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xb0) != '\x04') {
    if (*(char *)(param_1 + 0xb0) != '\x01') {
      *(undefined1 *)(param_1 + 0xb0) = 0x11;
      FUN_007c9f04(param_1 + 0x68);
      if (*(char *)(param_1 + 0xb0) != '\x01') {
        lVar1 = *(long *)PTR_DAT_047d0970;
        do {
          FUN_007ca35c(lVar1 / 10000);
          if (*(char *)(param_1 + 0xb0) == '\x03') {
            *(undefined1 *)(param_1 + 0xb0) = 0x11;
            FUN_007c9f04(param_1 + 0x68);
          }
        } while (*(char *)(param_1 + 0xb0) != '\x01');
      }
    }
    FUN_007eadb0(param_1 + 8);
    if (*(long *)(param_1 + 200) != 0) {
      FUN_007f83dc();
      return;
    }
  }
  return;
}


