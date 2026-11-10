/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0a978; name: FUN_01e0a978
 */


ulong FUN_01e0a978(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_01e0a3b0();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_00c92df0(param_1,0xffffffff,0);
    uVar2 = lVar3 << 0x20;
  }
  FUN_00c5db00(param_1,0);
  return uVar2 | !bVar1;
}


