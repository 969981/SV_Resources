/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ce5a34; name: FUN_01ce5a34
 */


void FUN_01ce5a34(char *param_1,undefined8 param_2)

{
  long lVar1;
  void *__src;
  undefined1 auStack_328 [760];
  
  lVar1 = 0xc0;
  if (DAT_0481b858 == '\0') {
    lVar1 = -1;
  }
  __src = (void *)FUN_01ce5ef4(param_2);
  memcpy(auStack_328,__src,0x2f4);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    memcpy((void *)(*(long *)(param_1 + 8) + lVar1),auStack_328,0x2f4);
  }
  return;
}


