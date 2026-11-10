/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025abc9c; name: FUN_025abc9c
 */


ulong FUN_025abc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_01a3ba40(param_1,param_2,1,param_3);
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


