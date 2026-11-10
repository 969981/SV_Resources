/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038ad50; name: FUN_0038ad50
 */


long FUN_0038ad50(long param_1,long param_2)

{
  void *__s;
  ulong uVar1;
  long lVar2;
  
  __s = *(void **)(param_2 + 8);
  uVar1 = (ulong)((uint)*(ushort *)(param_1 + 0x10) + (uint)*(byte *)(param_1 + 0x14) * -8 + 0x27) &
          0x3fff0;
  if ((ulong)(*(long *)(param_2 + 0x10) - (long)__s) < uVar1) {
    __s = (void *)FUN_0038bad0(param_2,uVar1);
  }
  else {
    *(ulong *)(param_2 + 8) = (long)__s + uVar1;
  }
  if (__s == (void *)0x0) {
    return 0;
  }
  lVar2 = (ulong)*(byte *)(param_1 + 0x14) * -8 + 0x18;
  memset(__s,0,lVar2 + (ulong)*(ushort *)(param_1 + 0x10));
  return (long)__s + lVar2;
}


