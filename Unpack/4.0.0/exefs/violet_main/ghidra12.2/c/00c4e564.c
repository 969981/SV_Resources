/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4e564; name: FUN_00c4e564
 */


bool FUN_00c4e564(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0xf8))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  lVar2 = FUN_00c4e600();
  return 0 < *(int *)(lVar2 + 0x12c8);
}


