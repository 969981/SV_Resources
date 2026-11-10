/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0ac7c; name: FUN_01e0ac7c
 */


ulong FUN_01e0ac7c(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_01e0acf0();
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


