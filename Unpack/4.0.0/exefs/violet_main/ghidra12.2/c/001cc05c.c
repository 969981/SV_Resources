/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cc05c; name: FUN_001cc05c
 */


size_t FUN_001cc05c(void *param_1,undefined8 param_2,size_t param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_4 + 0x98);
  uVar2 = *(long *)(param_4 + 0x78) - lVar1;
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  if (param_3 != 0) {
    memcpy(param_1,(void *)(*(long *)(param_4 + 0x20) + lVar1),param_3);
    lVar1 = *(long *)(param_4 + 0x98);
  }
  *(size_t *)(param_4 + 0x98) = lVar1 + param_3;
  return param_3;
}


