/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ad7c4; name: FUN_010ad7c4
 */


bool FUN_010ad7c4(char param_1,undefined1 param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = false;
  switch(param_2) {
  case 0:
    if (4 < (int)param_3) {
      return false;
    }
    if (param_1 == '\0') {
      return param_3 == 1;
    }
    return (&DAT_03d6a2fd)[param_3] != '\0';
  default:
    goto switchD_010ad7f0_caseD_1;
  case 2:
  case 4:
    bVar1 = (param_3 & 0xfffffffd) == 1;
    break;
  case 3:
  case 5:
    bVar1 = (param_3 & 0xfffffffb) != 0;
  }
  bVar1 = (bool)((int)param_3 < 5 & bVar1);
switchD_010ad7f0_caseD_1:
  return bVar1;
}


