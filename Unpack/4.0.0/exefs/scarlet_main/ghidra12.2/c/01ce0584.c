/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ce0584; name: FUN_01ce0584
 */


void FUN_01ce0584(char *param_1,undefined8 param_2)

{
  long lVar1;
  void *__src;
  undefined1 auStack_b8 [152];
  
  lVar1 = 0x24;
  if (DAT_0481b840 == '\0') {
    lVar1 = -1;
  }
  __src = (void *)FUN_01ce0c30(param_2);
  memcpy(auStack_b8,__src,0x94);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    memcpy((void *)(*(long *)(param_1 + 8) + lVar1),auStack_b8,0x94);
  }
  return;
}


