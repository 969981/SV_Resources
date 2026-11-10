/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f6490; name: FUN_003f6490
 */


undefined8 FUN_003f6490(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = FUN_004513d0(&LAB_003f64d0,&LAB_003f6500);
      *(long *)(param_1 + 0x10) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


