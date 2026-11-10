/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029787a0; name: FUN_029787a0
 */


void FUN_029787a0(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = (uint)*(ulong *)(param_1 + 8) & 7;
  if (uVar1 == 4) {
    uVar2 = (ulong)param_2 << 0x1a;
    uVar3 = 0xfc00000003ffffff;
  }
  else {
    if (uVar1 != 3) {
      return;
    }
    uVar2 = (ulong)((param_2 & 0x3f) << 3);
    uVar3 = 0xfffffffffffffe07;
  }
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & uVar3 | uVar2;
  return;
}


