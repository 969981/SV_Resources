/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a6d1bc; name: FUN_01a6d1bc
 */


undefined4 FUN_01a6d1bc(long param_1,void *param_2,ulong param_3)

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


