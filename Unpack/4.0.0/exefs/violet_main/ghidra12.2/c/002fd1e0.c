/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fd1e0; name: FUN_002fd1e0
 */


ulong FUN_002fd1e0(ulong param_1)

{
  switch(param_1 & 0xffffffff) {
  case 0:
    goto switchD_002fd200_caseD_0;
  default:
    param_1 = 1;
switchD_002fd200_caseD_0:
    return param_1;
  case 3:
    return 2;
  case 5:
    return 9;
  case 0xd:
    return 7;
  }
}


