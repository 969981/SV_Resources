/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f6aac; name: FUN_001f6aac
 */


void FUN_001f6aac(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x100040 >> (ulong)((param_3 & 3) << 3);
  if (2 < param_3) {
    uVar1 = 0;
  }
  iVar2 = FUN_001f442c(param_1,uVar1);
  if ((iVar2 == 0) && (iVar2 = FUN_001f7c64(param_1,*param_2,param_2[2]), iVar2 == 0)) {
    FUN_001f7c64(param_1,param_2[1],param_2[3]);
    return;
  }
  return;
}


