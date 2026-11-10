/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd785c; name: FUN_01dd785c
 */


void FUN_01dd785c(long param_1)

{
  uint uVar1;
  
  FUN_01dd78b4();
  FUN_01195974(param_1);
  uVar1 = *(uint *)(param_1 + 0x108);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  FUN_01dd81d4(param_1,uVar1,1);
  if (*(long *)(param_1 + 0x1b8) != 0) {
    *(undefined4 *)(param_1 + 0x170) = 2;
    *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = 2;
  }
  return;
}


