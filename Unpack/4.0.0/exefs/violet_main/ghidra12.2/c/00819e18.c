/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00819e18; name: FUN_00819e18
 */


undefined8 FUN_00819e18(long param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 0xfe) == 0x18) goto LAB_00819e4c;
    uVar2 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(param_2 + 8);
    if (uVar2 == 0xc) goto LAB_00819e4c;
  }
  if (uVar2 != 0x10) {
    return 0;
  }
LAB_00819e4c:
  FUN_001fcec0(param_1 + 0x10);
  return 1;
}


