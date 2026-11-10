/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f670b8; name: FUN_01f670b8
 */


void FUN_01f670b8(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xc0) == 6) {
    *(undefined1 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xaa) = 0;
    FUN_01f67130(param_1 + 0xb0,0);
    FUN_01f67130(param_1 + 0xb8,0);
    *(undefined8 *)(param_1 + 0xc0) = 0x200000002;
    if (*(char *)(param_1 + 200) != '\0') {
      *(undefined1 *)(param_1 + 200) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (lVar1 != 0) {
      FUN_01f671f8(param_1 + 0x68);
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  return;
}


