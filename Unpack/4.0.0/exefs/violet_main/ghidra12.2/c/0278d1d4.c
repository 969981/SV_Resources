/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278d1d4; name: FUN_0278d1d4
 */


void FUN_0278d1d4(ushort *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  
  bVar2 = *param_2;
  uVar3 = *param_1;
  *param_1 = uVar3 & 0xfff8 | bVar2 & 7;
  uVar1 = bVar2 & 7 | (*param_3 & 1) << 3;
  *param_1 = uVar3 & 0xfff0 | uVar1;
  uVar1 = uVar1 | (*param_4 & 0xf) << 4;
  *param_1 = uVar3 & 0xff00 | uVar1;
  *param_1 = uVar3 & 0xf000 | uVar1 | (*param_5 & 0xf) << 8;
  return;
}


