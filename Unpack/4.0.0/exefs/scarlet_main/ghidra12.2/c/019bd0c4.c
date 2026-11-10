/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bd0c4; name: FUN_019bd0c4
 */


void FUN_019bd0c4(char *param_1,undefined8 param_2)

{
  void *__src;
  uint uVar1;
  undefined1 auStack_48 [40];
  
  uVar1 = (uint)DAT_04815b60;
  __src = (void *)FUN_019bd138(param_2);
  memcpy(auStack_48,__src,0x28);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    memcpy((void *)(*(long *)(param_1 + 8) - ((ulong)~uVar1 & 1)),auStack_48,0x28);
  }
  return;
}


