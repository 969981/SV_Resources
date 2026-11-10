/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023644ec; name: FUN_023644ec
 */


uint FUN_023644ec(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = FUN_02364550();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00c92df0(param_1,0xffffffff,0);
    uVar2 = (uVar2 & 0xff) << 8;
  }
  FUN_00c5db00(param_1,0);
  return uVar2 | !bVar1;
}


