/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f10e0; name: FUN_021f10e0
 */


bool FUN_021f10e0(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_01400f2c(*(undefined8 *)(param_1 + 0x70));
  if (((((uVar2 & 3) == 0) &&
       (uVar2 = FUN_01400f2c(*(undefined8 *)(param_1 + 0x70)), (uVar2 & 0xc) == 0)) &&
      (uVar2 = FUN_01400f2c(*(undefined8 *)(param_1 + 0x70)), (uVar2 & 0x30) == 0)) &&
     ((uVar2 = FUN_01400f2c(*(undefined8 *)(param_1 + 0x70)), (uVar2 & 0xc0) == 0 &&
      (uVar2 = FUN_01400f2c(*(undefined8 *)(param_1 + 0x70)), (uVar2 & 0x300) == 0)))) {
    uVar2 = FUN_01400f2c(*(undefined8 *)(param_1 + 0x70));
    bVar1 = (uVar2 & 0xc00) != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


