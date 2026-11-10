/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00408210; name: FUN_00408210
 */


undefined8 FUN_00408210(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_003eb5b0();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_003eb5b0();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  lVar2 = FUN_003eb5b0();
  *(long *)(param_1 + 0x68) = lVar2;
  if (((*(long *)(param_1 + 0x40) == 0) || (lVar2 == 0)) || (*(long *)(param_1 + 0x60) == 0)) {
    FUN_003eb520();
    FUN_003eb520(*(undefined8 *)(param_1 + 0x60));
    FUN_003eb520(*(undefined8 *)(param_1 + 0x68));
    return 0;
  }
  return 1;
}


