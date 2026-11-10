/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


