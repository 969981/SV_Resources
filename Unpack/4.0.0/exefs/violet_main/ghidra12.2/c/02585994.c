/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02585994; name: FUN_02585994
 */


undefined8 FUN_02585994(undefined1 *param_1)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
    uVar1 = FUN_025878d0(*(undefined8 *)(param_1 + 8));
    return uVar1;
  case 1:
    uVar1 = FUN_02587ab8(param_1 + 8);
    return uVar1;
  case 2:
    uVar1 = FUN_02587ca4(param_1 + 8);
    return uVar1;
  case 3:
    uVar1 = FUN_02587e98(param_1 + 8);
    return uVar1;
  default:
    return 0;
  }
}


