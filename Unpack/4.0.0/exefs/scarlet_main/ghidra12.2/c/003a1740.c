/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a1740; name: FUN_003a1740
 */


undefined8 FUN_003a1740(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xb0);
  uVar1 = *(int *)(lVar4 + 0x1f0) + 1;
  *(uint *)(lVar4 + 0x1f0) = uVar1;
  if (2 < uVar1) {
    uVar1 = FUN_003b5740(param_1);
    if ((uVar1 >> 0xc & 1) != 0) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0xb0) + 0x1f0);
      goto joined_r0x003a17e8;
    }
    uVar2 = FUN_003b35e0(param_1);
    uVar3 = FUN_003e9560(uVar2,0x2f,0,0);
    lVar4 = *(long *)(param_1 + 0xb0);
    if (uVar3 < *(ulong *)(lVar4 + 0x130)) {
      *(ulong *)(lVar4 + 0x130) = uVar3;
    }
  }
  uVar1 = *(uint *)(lVar4 + 0x1f0);
joined_r0x003a17e8:
  if (uVar1 < 0xd) {
    return 0;
  }
  FUN_003c3950(param_1,0xffffffff,0x13e,0x138,"external/openssl/ssl/d1_lib.c",0x182);
  return 0xffffffff;
}


