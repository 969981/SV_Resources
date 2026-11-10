/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f79bd8; name: FUN_01f79bd8
 */


void FUN_01f79bd8(char *param_1,long param_2)

{
  if (*param_1 == '\0') {
    *(undefined **)(param_1 + 8) = PTR_DAT_047cfbf8 + 0x10;
    FUN_01cfa5b0(param_1 + 0x10,param_2 + 8);
    FUN_01cfa5b0(param_1 + 0x30,param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x48);
    FUN_01cfa5b0(param_1 + 0x58,param_2 + 0x50);
    FUN_01cfa5b0(param_1 + 0x78,param_2 + 0x70);
    FUN_01cfa5b0(param_1 + 0x98,param_2 + 0x90);
    memcpy(param_1 + 0xb8,(void *)(param_2 + 0xb0),100);
    *param_1 = '\x01';
    return;
  }
  FUN_01d0e1a8(param_1 + 0x10,param_2 + 8);
  FUN_01d0e1a8(param_1 + 0x30,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x48);
  FUN_01d0e1a8(param_1 + 0x58,param_2 + 0x50);
  FUN_01d0e1a8(param_1 + 0x78,param_2 + 0x70);
  FUN_01d0e1a8(param_1 + 0x98,param_2 + 0x90);
  memcpy(param_1 + 0xb8,(void *)(param_2 + 0xb0),100);
  return;
}


