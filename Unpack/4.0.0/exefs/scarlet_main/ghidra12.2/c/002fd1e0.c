/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


