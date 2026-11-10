/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023eb808; name: FUN_023eb808
 */


undefined8 FUN_023eb808(undefined1 *param_1)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
    uVar1 = FUN_023fb500(*(undefined8 *)(param_1 + 8));
    return uVar1;
  case 1:
    uVar1 = FUN_023fb6e8(param_1 + 8);
    return uVar1;
  case 2:
    uVar1 = FUN_023fb8d4(param_1 + 8);
    return uVar1;
  case 3:
    uVar1 = FUN_023fbac8(param_1 + 8);
    return uVar1;
  default:
    return 0;
  }
}


