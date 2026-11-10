/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cb0018; name: FUN_01cb0018
 */


void FUN_01cb0018(char *param_1,long param_2,void *param_3)

{
  char cVar1;
  void *__dest;
  long lVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar2 == 0) {
      return;
    }
    __dest = (void *)(lVar2 + param_2 + -0x28);
  }
  else {
    if (((cVar1 != '\x01') && (cVar1 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
      return;
    }
    __dest = (void *)(*(long *)(param_1 + 8) + param_2);
  }
  memcpy(__dest,param_3,0x3c8);
  return;
}


