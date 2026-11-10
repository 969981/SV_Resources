/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f514b4; name: FUN_00f514b4
 */


void FUN_00f514b4(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x170);
  while ((iVar1 != 4 && (uVar2 = FUN_00f514f4(param_1), (uVar2 & 1) != 0))) {
    iVar1 = *(int *)(param_1 + 0x170);
  }
  return;
}


