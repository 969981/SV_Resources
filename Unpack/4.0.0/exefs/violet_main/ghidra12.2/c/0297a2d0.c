/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297a2d0; name: FUN_0297a2d0
 */


int FUN_0297a2d0(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_020fcaf8();
  *(undefined2 *)(param_1 + 0x710) = *(undefined2 *)(param_2 + (ulong)uVar1);
  *(undefined2 *)(param_1 + 0x712) = *(undefined2 *)(param_2 + (ulong)(uVar1 + 2));
  *(undefined2 *)(param_1 + 0x716) = *(undefined2 *)(param_2 + (ulong)(uVar1 + 4));
  *(undefined2 *)(param_1 + 0x718) = *(undefined2 *)(param_2 + (ulong)(uVar1 + 6));
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(param_2 + (ulong)(uVar1 + 8));
  return uVar1 + 0xc;
}


