/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d9800; name: FUN_015d9800
 */


uint FUN_015d9800(uint param_1,undefined1 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    goto switchD_015d982c_caseD_0;
  case 1:
    return param_1 >> 6;
  case 2:
    return param_1 >> 5;
  case 3:
    return param_1 >> 4;
  case 4:
    return param_1 >> 3;
  case 5:
    return param_1 >> 2;
  case 6:
    return param_1 >> 1;
  default:
    uVar1 = param_1;
switchD_015d982c_caseD_0:
    return uVar1;
  case 8:
    return param_1 << 1;
  case 9:
    return param_1 << 2;
  case 10:
    return param_1 << 3;
  case 0xb:
    return param_1 << 4;
  case 0xc:
    return param_1 << 5;
  case 0xd:
    return param_1 << 6;
  }
}


