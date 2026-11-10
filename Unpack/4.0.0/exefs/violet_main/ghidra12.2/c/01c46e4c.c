/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


