/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c80a84; name: FUN_01c80a84
 */


void FUN_01c80a84(char *param_1,undefined8 param_2)

{
  long lVar1;
  void *__src;
  undefined1 auStack_50 [48];
  
  lVar1 = 0x18;
  if (DAT_04815bb8 == '\0') {
    lVar1 = -1;
  }
  __src = (void *)FUN_019cace0(param_2);
  memcpy(auStack_50,__src,0x2c);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    memcpy((void *)(*(long *)(param_1 + 8) + lVar1),auStack_50,0x2c);
  }
  return;
}


