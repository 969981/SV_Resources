/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


