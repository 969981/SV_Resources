/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c46e4c; name: FUN_01c46e4c
 */


void FUN_01c46e4c(long *param_1,char *param_2,undefined8 param_3)

{
  void *__src;
  long lVar1;
  undefined1 auStack_170 [320];
  
  lVar1 = *param_1;
  __src = (void *)FUN_01c48c0c(param_3);
  memcpy(auStack_170,__src,0x140);
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (*(long *)(param_2 + 8) != 0)) {
    memcpy((void *)(*(long *)(param_2 + 8) + lVar1),auStack_170,0x140);
  }
  return;
}


