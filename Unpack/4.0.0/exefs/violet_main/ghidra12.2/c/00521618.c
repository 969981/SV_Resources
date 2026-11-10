/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00521618; name: FUN_00521618
 */


undefined4 FUN_00521618(long *param_1)

{
  switch(*(undefined4 *)(PTR_DAT_047cdbe8 + (ulong)*(byte *)(param_1 + 1) * 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    return *(undefined4 *)*param_1;
  case 9:
  case 10:
    return *(undefined4 *)(*param_1 + 8);
  default:
    return 0;
  }
}


