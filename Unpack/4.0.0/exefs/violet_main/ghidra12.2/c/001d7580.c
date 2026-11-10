/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d7580; name: FUN_001d7580
 */


ulong FUN_001d7580(undefined8 param_1,void *param_2,size_t param_3)

{
  void *__dest;
  ulong uVar1;
  
  if ((param_2 == (void *)0x0) || (param_3 == 0)) {
    uVar1 = FUN_001cbfac(param_1,param_2);
    return uVar1;
  }
  __dest = (void *)FUN_001ec2f8(param_3 + 1);
  if (__dest == (void *)0x0) {
    uVar1 = 0x1b;
  }
  else {
    memcpy(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    uVar1 = FUN_001cbfac(param_1,__dest);
    uVar1 = uVar1 & 0xffffffff;
    FUN_001ec308(__dest);
  }
  return uVar1;
}


