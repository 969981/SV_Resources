/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299380c; name: FUN_0299380c
 */


void FUN_0299380c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(int *)(*(long *)(param_1 + 0x38) + 0x34) == 2) {
    uVar2 = (uint)*(byte *)(*(long *)(param_1 + 0x38) + 0x8d);
    if (((uVar2 - 5 < 2) || (uVar2 - 1 < 3)) && (uVar1 = FUN_010a363c(param_1), (uVar1 & 1) != 0)) {
      FUN_0299387c(param_1);
      return;
    }
  }
  return;
}


