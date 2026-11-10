/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0295b158; name: FUN_0295b158
 */


bool FUN_0295b158(long *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = (**(code **)(*param_1 + 0x118))();
  uVar2 = (**(code **)(*param_1 + 0x110))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x108))(param_1);
  return 0x13 < bVar1 && (uVar2 >> 2 & 0x3fff) < (uVar3 & 0xffff);
}


