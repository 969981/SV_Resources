/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008874d4; name: FUN_008874d4
 */


void FUN_008874d4(long param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined1 param_6,byte param_7)

{
  *(byte *)(param_1 + 0x17) = param_7 & 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined2 *)(param_1 + 0x14) = param_3;
  *(undefined2 *)(param_1 + 0x12) = param_4;
  *(undefined2 *)(param_1 + 0x10) = param_5;
  *(undefined1 *)(param_1 + 0x16) = param_6;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


