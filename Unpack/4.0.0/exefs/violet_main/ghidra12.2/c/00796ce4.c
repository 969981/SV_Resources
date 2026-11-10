/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00796ce4; name: FUN_00796ce4
 */


void FUN_00796ce4(long param_1,byte param_2)

{
  short sVar1;
  ushort uVar2;
  
  param_1 = param_1 + (ulong)param_2 * 2;
  uVar2 = *(ushort *)(param_1 + 0x18);
  sVar1 = uVar2 + 2;
  if ((uVar2 + 1 & 0x10000) == 0) {
    sVar1 = uVar2 + 1;
  }
  *(short *)(param_1 + 0x18) = sVar1;
  return;
}


