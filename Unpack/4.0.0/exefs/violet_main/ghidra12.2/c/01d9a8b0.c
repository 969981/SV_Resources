/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


