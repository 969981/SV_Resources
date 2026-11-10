/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02950aa0; name: FUN_02950aa0
 */


undefined8 FUN_02950aa0(undefined2 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  switch(param_1) {
  case 1:
    break;
  case 2:
    return 0x6b;
  case 3:
    return 0x65;
  case 4:
    return 0x5b;
  case 5:
    return 0x55;
  case 6:
    return 0x78;
  default:
    uVar1 = 0xffff;
  }
  return uVar1;
}


