/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf4c90; name: FUN_00cf4c90
 */


uint FUN_00cf4c90(long param_1,char param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = FUN_00cf4cfc(*(undefined8 *)(param_1 + 0x70));
  uVar2 = *(ushort *)(*(long *)(*(long *)(param_1 + 0x70) + 0x10) + 4);
  uVar3 = uVar2 >> 2 & 1;
  if (param_2 != '\x01') {
    uVar3 = 0;
  }
  uVar1 = uVar4 & (uVar2 & 4) == 0;
  if (param_2 != '\0') {
    uVar1 = uVar3;
  }
  uVar3 = uVar4 | (uVar2 & 4) >> 2;
  if (param_2 != '\x02') {
    uVar3 = uVar1;
  }
  return uVar3 & 1;
}


