/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001204b0; name: FUN_001204b0
 */


long FUN_001204b0(uint param_1)

{
  long lVar1;
  
  lVar1 = 3;
  switch(param_1) {
  case 0:
    return 5;
  default:
    lVar1 = 0;
    if (param_1 < 0x20) {
      lVar1 = (long)(int)(param_1 << 4 | 0xf);
    }
switchD_001204d8_caseD_10:
    return lVar1;
  case 8:
    return 4;
  case 0x10:
    goto switchD_001204d8_caseD_10;
  case 0x17:
    return 2;
  case 0x1f:
    return 1;
  }
}


