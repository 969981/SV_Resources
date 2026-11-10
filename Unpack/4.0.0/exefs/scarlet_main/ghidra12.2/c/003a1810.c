/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a1810; name: FUN_003a1810
 */


undefined8 FUN_003a1810(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0xb0) + 0x128);
  if (lVar6 == 0) {
    uVar3 = *(ulong *)(*(long *)(param_1 + 0xb0) + 0x130);
  }
  else {
    uVar2 = FUN_003b35e0(param_1);
    uVar3 = FUN_003e9560(uVar2,0x31,0,0);
    lVar5 = *(long *)(param_1 + 0xb0);
    uVar3 = lVar6 - (uVar3 & 0xffffffff);
    *(undefined8 *)(lVar5 + 0x128) = 0;
    *(ulong *)(lVar5 + 0x130) = uVar3;
  }
  uVar2 = FUN_003b35e0(param_1);
  uVar4 = FUN_003e9560(uVar2,0x31,0,0);
  if (uVar3 < 0x100 - (uVar4 & 0xffffffff)) {
    uVar1 = FUN_003b5740(param_1);
    if ((uVar1 >> 0xc & 1) != 0) {
      return 0;
    }
    uVar2 = FUN_003b35e0(param_1);
    uVar3 = FUN_003e9560(uVar2,0x28,0,0);
    *(ulong *)(*(long *)(param_1 + 0xb0) + 0x130) = uVar3;
    uVar2 = FUN_003b35e0(param_1);
    uVar4 = FUN_003e9560(uVar2,0x31,0,0);
    if (uVar3 < 0x100 - (uVar4 & 0xffffffff)) {
      uVar2 = FUN_003b35e0(param_1);
      uVar3 = FUN_003e9560(uVar2,0x31,0,0);
      *(ulong *)(*(long *)(param_1 + 0xb0) + 0x130) = 0x100 - (uVar3 & 0xffffffff);
      uVar2 = FUN_003b35e0(param_1);
      FUN_003e9560(uVar2,0x2a,*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x130),0);
    }
  }
  return 1;
}


