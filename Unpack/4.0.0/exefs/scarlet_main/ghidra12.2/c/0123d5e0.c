/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123d5e0; name: FUN_0123d5e0
 */


void FUN_0123d5e0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (((ulong)*(byte *)(param_1 + 0xb0) != 0) &&
     ((ulong)*(byte *)(param_1 + 0xb0) <= *(ulong *)(param_1 + 0x88))) {
    FUN_02901764(param_1 + 0x40);
  }
  lVar2 = *(long *)(param_1 + 0x48);
  lVar3 = *(long *)(param_1 + 0x50);
  uVar1 = 0;
  if (lVar3 - lVar2 != 0) {
    uVar1 = (lVar3 - lVar2) * 0x40 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x88) + *(long *)(param_1 + 0x80);
  if (uVar1 == uVar4) {
    FUN_0123d810(param_1 + 0x40);
    uVar4 = *(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x88);
    lVar2 = *(long *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x50);
  }
  if (lVar3 == lVar2) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8;
  }
  FUN_0123d698(param_1 + 0x90,lVar2,param_2);
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  return;
}


