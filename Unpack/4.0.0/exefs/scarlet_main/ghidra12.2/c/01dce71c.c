/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dce71c; name: FUN_01dce71c
 */


bool FUN_01dce71c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_01dc5c90(*(undefined8 *)(param_1 + 0x1a8));
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    FUN_014a3de8(*(undefined8 *)(param_1 + 0x1a8),0,0);
    FUN_014a3de8(*(undefined8 *)(param_1 + 0x1a8),1,0);
    FUN_014a3de8(*(undefined8 *)(param_1 + 0x1a8),3,0);
    FUN_014a3de8(*(undefined8 *)(param_1 + 0x1a8),4,0);
  }
  return bVar1;
}


