/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bfc35c; name: FUN_01bfc35c
 */


void FUN_01bfc35c(char *param_1,undefined8 param_2)

{
  long lVar1;
  void *__src;
  undefined1 auStack_98 [120];
  
  lVar1 = 4;
  if (DAT_04810e80 == '\0') {
    lVar1 = -1;
  }
  __src = (void *)FUN_01bfc8dc(param_2);
  memcpy(auStack_98,__src,0x78);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    memcpy((void *)(*(long *)(param_1 + 8) + lVar1),auStack_98,0x78);
  }
  return;
}


