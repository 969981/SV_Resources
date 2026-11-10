/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270b12c; name: FUN_0270b12c
 */


uint FUN_0270b12c(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + 0x1c0);
  uVar1 = FUN_0270b190(lVar2 + 0x88,param_1[1],lVar2 + 0x90,param_1[2],lVar2 + 0x98,param_1[3],
                       lVar2 + 0xa0,param_1[4],lVar2 + 0xa8,param_1[5],lVar2 + 0xac,param_1[6]);
  return uVar1 & 1;
}


