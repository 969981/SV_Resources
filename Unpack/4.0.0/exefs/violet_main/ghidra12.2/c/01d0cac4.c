/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d0cac4; name: FUN_01d0cac4
 */


void FUN_01d0cac4(char *param_1,undefined8 param_2)

{
  long lVar1;
  void *__src;
  undefined1 auStack_130 [256];
  
  lVar1 = 8;
  if (DAT_0482cc40 == '\0') {
    lVar1 = -1;
  }
  __src = (void *)FUN_01c0b3bc(param_2);
  memcpy(auStack_130,__src,0x100);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    memcpy((void *)(*(long *)(param_1 + 8) + lVar1),auStack_130,0x100);
  }
  return;
}


