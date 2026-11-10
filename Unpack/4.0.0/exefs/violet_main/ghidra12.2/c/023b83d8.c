/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023b83d8; name: FUN_023b83d8
 */


undefined8 FUN_023b83d8(undefined1 *param_1)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
    uVar1 = FUN_023c80e8(*(undefined8 *)(param_1 + 8));
    return uVar1;
  case 1:
    uVar1 = FUN_023c82d0(param_1 + 8);
    return uVar1;
  case 2:
    uVar1 = FUN_023c84bc(param_1 + 8);
    return uVar1;
  case 3:
    uVar1 = FUN_023c86b0(param_1 + 8);
    return uVar1;
  default:
    return 0;
  }
}


