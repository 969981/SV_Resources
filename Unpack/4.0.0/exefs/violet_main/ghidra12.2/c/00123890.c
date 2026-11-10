/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00123890; name: FUN_00123890
 */


void FUN_00123890(long param_1)

{
  void *__src;
  void *__dest;
  undefined8 uVar1;
  size_t local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  __src = (void *)FUN_00c646d0(uVar1,0xffffffff,&local_18);
  __dest = (void *)FUN_00124470(param_1,local_18,0xfffffffe);
  memcpy(__dest,__src,local_18);
  *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + local_18;
  FUN_00c5db00(uVar1,0xfffffffe);
  return;
}


