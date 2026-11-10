/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d5e80; name: FUN_003d5e80
 */


undefined8 FUN_003d5e80(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_003b00f0(*(undefined4 *)(param_1 + 0x10));
      if (lVar1 == 0) {
        return 0;
      }
    }
    if (param_2 != (long *)0x0) {
      *param_2 = lVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}


