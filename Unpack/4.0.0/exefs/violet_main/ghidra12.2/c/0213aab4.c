/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0213aab4; name: FUN_0213aab4
 */


void FUN_0213aab4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = FUN_00c41664(*(long *)(param_1 + 0x1c0) + 0xf8);
  uVar1 = **(uint **)(lVar2 + 0x238);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      lVar3 = FUN_01102618(lVar2,uVar4 & 0xffffffff);
      if (lVar3 != 0) {
        if ((ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 2) < uVar4) {
          return;
        }
        FUN_01419538(lVar3,*(undefined4 *)(*(long *)(param_1 + 0x2a0) + uVar4 * 4));
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  return;
}


