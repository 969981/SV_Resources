/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b6b50; name: FUN_003b6b50
 */


void FUN_003b6b50(long param_1,long param_2)

{
  long lVar1;
  
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    return;
  }
  lVar1 = *(long *)(param_2 + 0x140);
  *(long *)(param_1 + 0x28) = param_2 + 0x128;
  *(long *)(param_1 + 0x88) = param_2 + 0x130;
  *(long *)(param_1 + 0x90) = param_2 + 0x134;
  *(long *)(param_1 + 0x78) = lVar1 + 0x1c;
  *(long *)(param_1 + 0x80) = param_2 + 0x160;
  return;
}


