/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023fc714; name: FUN_023fc714
 */


undefined8 FUN_023fc714(undefined1 *param_1)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
    uVar1 = FUN_0240a344(*(undefined8 *)(param_1 + 8));
    return uVar1;
  case 1:
    uVar1 = FUN_0240a52c(param_1 + 8);
    return uVar1;
  case 2:
    uVar1 = FUN_0240a718(param_1 + 8);
    return uVar1;
  case 3:
    uVar1 = FUN_0240a90c(param_1 + 8);
    return uVar1;
  default:
    return 0;
  }
}


