/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0250b304; name: FUN_0250b304
 */


void FUN_0250b304(char *param_1,undefined8 param_2)

{
  void *__src;
  uint uVar1;
  undefined1 auStack_50 [48];
  
  uVar1 = (uint)DAT_0484efa8;
  __src = (void *)FUN_024c8c84(param_2);
  memcpy(auStack_50,__src,0x30);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    memcpy((void *)(*(long *)(param_1 + 8) - ((ulong)~uVar1 & 1)),auStack_50,0x24);
  }
  return;
}


