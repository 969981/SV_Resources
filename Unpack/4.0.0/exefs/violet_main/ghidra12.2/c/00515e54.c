/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00515e54; name: FUN_00515e54
 */


void FUN_00515e54(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_2 % 1000000000;
  uVar1 = (ulong)((int)uVar2 + 1000000000);
  if (-1 < (long)uVar2) {
    uVar1 = uVar2;
  }
  FUN_00513be8(param_1,0);
  *(long *)(param_1 + 0x10) = param_2 / 1000000000 + ((long)uVar2 >> 0x3f);
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return;
}


