/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297a270; name: FUN_0297a270
 */


int FUN_0297a270(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_020fbf18();
  *(undefined2 *)(param_2 + (ulong)uVar1) = *(undefined2 *)(param_1 + 0x710);
  *(undefined2 *)(param_2 + (ulong)(uVar1 + 2)) = *(undefined2 *)(param_1 + 0x712);
  *(undefined2 *)(param_2 + (ulong)(uVar1 + 4)) = *(undefined2 *)(param_1 + 0x716);
  *(undefined2 *)(param_2 + (ulong)(uVar1 + 6)) = *(undefined2 *)(param_1 + 0x718);
  *(undefined4 *)(param_2 + (ulong)(uVar1 + 8)) = *(undefined4 *)(param_1 + 0x71c);
  return uVar1 + 0xc;
}


