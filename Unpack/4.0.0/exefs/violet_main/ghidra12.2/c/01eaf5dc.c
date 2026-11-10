/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eaf5dc; name: FUN_01eaf5dc
 */


bool FUN_01eaf5dc(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = FUN_01419468(param_1 + 0x38);
  uVar2 = FUN_01eaf650(param_1 + 0xd8);
  uVar3 = FUN_01eaf650(param_1 + 0xe3);
  uVar4 = FUN_01eaf650(param_1 + 0xee);
  uVar5 = FUN_01eaf650(param_1 + 0xf9);
  return uVar1 <= (ushort)((uVar3 & 1) + (uVar2 & 1) + (uVar4 & 1) + (uVar5 & 1));
}


