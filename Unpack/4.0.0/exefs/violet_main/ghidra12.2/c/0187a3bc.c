/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0187a3bc; name: FUN_0187a3bc
 */


undefined4 FUN_0187a3bc(long param_1,void *param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_0157190c(param_1,param_3,1);
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    if ((ulong)(lVar2 - *(long *)(param_1 + 0x38)) < param_3) {
      FUN_0157184c(param_1,param_3);
      lVar2 = *(long *)(param_1 + 0x30);
    }
    *(void **)(param_1 + 0x30) = (void *)(lVar2 - param_3);
    memcpy((void *)(lVar2 - param_3),param_2,param_3);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar1 = FUN_015713f8(param_1,param_3 & 0xffffffff);
  return uVar1;
}


