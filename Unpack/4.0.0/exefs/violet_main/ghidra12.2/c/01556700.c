/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01556700; name: FUN_01556700
 */


undefined8 FUN_01556700(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((((*(long *)(param_1 + 0x40) == 0) || (uVar1 = FUN_00fb3a58(), (uVar1 & 1) != 0)) &&
      ((*(long *)(param_1 + 0x48) == 0 || (uVar1 = FUN_00fb3a58(), (uVar1 & 1) != 0)))) &&
     ((*(long *)(param_1 + 0x50) == 0 || (uVar1 = FUN_00fb3a58(), (uVar1 & 1) != 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


