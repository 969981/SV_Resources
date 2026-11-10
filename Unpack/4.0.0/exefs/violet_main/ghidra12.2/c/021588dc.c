/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021588dc; name: FUN_021588dc
 */


bool FUN_021588dc(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_02158920();
  if ((uVar2 & 1) == 0) {
    bVar1 = *(char *)(param_1 + 0x81) == '\0';
  }
  else {
    FUN_018cff08(param_1,1);
    bVar1 = false;
  }
  return bVar1;
}


