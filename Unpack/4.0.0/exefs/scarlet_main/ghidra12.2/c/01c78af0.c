/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c78af0; name: FUN_01c78af0
 */


void FUN_01c78af0(char *param_1,undefined8 param_2)

{
  long lVar1;
  void *__src;
  undefined1 auStack_80 [96];
  
  lVar1 = 0x20;
  if (DAT_04815b78 == '\0') {
    lVar1 = -1;
  }
  __src = (void *)FUN_01c5e1fc(param_2);
  memcpy(auStack_80,__src,0x60);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    memcpy((void *)(*(long *)(param_1 + 8) + lVar1),auStack_80,0x54);
  }
  return;
}


