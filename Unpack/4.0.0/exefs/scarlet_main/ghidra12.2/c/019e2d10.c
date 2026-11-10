/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e2d10; name: FUN_019e2d10
 */


void FUN_019e2d10(long param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x70))(*(long **)(param_1 + 0x48),1);
  *(short *)(param_1 + 0x400) =
       (short)((ulong)((uVar1 & 0xffff) * (uint)*(byte *)(param_1 + 0x3f6)) / 10);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x70))(*(long **)(param_1 + 0x48),2);
  *(short *)(param_1 + 0x402) =
       (short)((ulong)((uVar1 & 0xffff) * (uint)*(byte *)(param_1 + 0x3f7)) / 10);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x70))(*(long **)(param_1 + 0x48),3);
  *(short *)(param_1 + 0x404) =
       (short)((ulong)((uVar1 & 0xffff) * (uint)*(byte *)(param_1 + 0x3f8)) / 10);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x70))(*(long **)(param_1 + 0x48),4);
  *(short *)(param_1 + 0x406) =
       (short)((ulong)((uVar1 & 0xffff) * (uint)*(byte *)(param_1 + 0x3f9)) / 10);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x70))(*(long **)(param_1 + 0x48),5);
  *(short *)(param_1 + 0x408) =
       (short)((ulong)((uVar1 & 0xffff) * (uint)*(byte *)(param_1 + 0x3fa)) / 10);
  return;
}


