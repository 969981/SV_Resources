/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b693fc; name: FUN_00b693fc
 */


undefined4 FUN_00b693fc(long param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0xc0)) {
  case 3:
    uVar1 = 1;
    if (*(int *)(param_1 + 0xc4) != 2) {
      uVar1 = 2;
    }
    break;
  case 4:
    return 3;
  case 5:
    uVar1 = 3;
    if (*(int *)(param_1 + 0xc4) == 5) {
      uVar1 = 4;
    }
    return uVar1;
  case 6:
    return 5;
  default:
    return 0;
  }
  return uVar1;
}


