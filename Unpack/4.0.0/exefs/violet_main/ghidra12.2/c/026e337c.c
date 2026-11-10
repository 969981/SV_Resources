/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026e337c; name: FUN_026e337c
 */


undefined4 FUN_026e337c(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  undefined8 local_38;
  
  lVar4 = *(long *)(param_1 + 0x170);
  FUN_01751e98(&local_38,lVar4 + 8);
  FUN_026e3420(param_1 + 0x170,lVar4);
  uVar1 = FUN_00f42d3c(local_38);
  if (param_3 < uVar1) {
    uVar2 = 0;
  }
  else {
    __src = (void *)FUN_00f42d24(local_38);
    uVar3 = FUN_00f42d3c(local_38);
    memcpy(param_2,__src,uVar3 & 0xffffffff);
    uVar2 = FUN_00f42d3c(local_38);
  }
  FUN_01751d6c(&local_38);
  return uVar2;
}


