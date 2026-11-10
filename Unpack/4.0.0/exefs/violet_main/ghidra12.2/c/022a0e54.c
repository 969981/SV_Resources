/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022a0e54; name: FUN_022a0e54
 */


void FUN_022a0e54(char *param_1,undefined8 param_2)

{
  long lVar1;
  void *__src;
  undefined1 auStack_70 [80];
  
  lVar1 = 0x10;
  if (DAT_04843af8 == '\0') {
    lVar1 = -1;
  }
  __src = (void *)FUN_022a136c(param_2);
  memcpy(auStack_70,__src,0x50);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    memcpy((void *)(*(long *)(param_1 + 8) + lVar1),auStack_70,0x44);
  }
  return;
}


