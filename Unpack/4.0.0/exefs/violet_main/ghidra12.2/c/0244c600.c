/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0244c600; name: FUN_0244c600
 */


ulong FUN_0244c600(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar1 = FUN_00d34290(param_1,0xffffffff);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00cc4dc0(param_1,0xffffffff);
    uVar3 = (ulong)(iVar2 != 0) << 8;
  }
  return uVar3 | iVar1 != 0;
}


