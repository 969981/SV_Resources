/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007aecdc; name: FUN_007aecdc
 */


void FUN_007aecdc(long param_1)

{
  FUN_007981d8();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  memset((void *)(param_1 + 0x40),0,0x40);
  *(undefined4 *)(param_1 + 0x20) = 0x5c;
  *(undefined2 *)(param_1 + 0x202) = 0;
  return;
}


