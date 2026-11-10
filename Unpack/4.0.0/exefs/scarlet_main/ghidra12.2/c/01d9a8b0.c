/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9a8b0; name: FUN_01d9a8b0
 */


bool FUN_01d9a8b0(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  
  uVar3 = FUN_01dbdcd0();
  cVar1 = FUN_01dbdd90(param_1);
  cVar2 = FUN_01dbde48(param_1);
  return (uVar3 & 1) == 0 && (cVar1 != '\a' || cVar2 != '\x02');
}


