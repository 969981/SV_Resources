/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f6308; name: FUN_018f6308
 */


ulong FUN_018f6308(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_01892d50();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00cc4dc0(param_1,0xffffffff);
    uVar3 = (ulong)(iVar2 != 0) << 8;
  }
  FUN_00c5db00(param_1,0);
  return uVar3 | !bVar1;
}


