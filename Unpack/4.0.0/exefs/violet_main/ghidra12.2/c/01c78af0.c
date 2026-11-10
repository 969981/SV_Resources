/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


