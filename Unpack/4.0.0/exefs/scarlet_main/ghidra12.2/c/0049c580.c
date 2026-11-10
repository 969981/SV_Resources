/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049c580; name: FUN_0049c580
 */


bool FUN_0049c580(char *param_1,ulong param_2,void *param_3,ulong param_4,uint param_5)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  
  if ((param_5 >> 0xf & 1) != 0) {
    pcVar2 = param_1;
    uVar3 = param_2;
    if (param_4 <= param_2 && param_2 - param_4 != 0) {
      if ((param_5 >> 4 & 1) == 0) {
        do {
          if (*pcVar2 == '\0') goto LAB_0049c5f4;
          uVar3 = uVar3 - 1;
          pcVar2 = pcVar2 + 1;
        } while (param_4 < uVar3);
      }
      else {
        do {
          if ((*pcVar2 == '\0') || (*pcVar2 == '.')) goto LAB_0049c5f4;
          uVar3 = uVar3 - 1;
          pcVar2 = pcVar2 + 1;
        } while (param_4 < uVar3);
      }
      param_1 = param_1 + (param_2 - param_4);
      param_2 = param_4;
      goto LAB_0049c610;
    }
LAB_0049c5f4:
    if (uVar3 == param_4) {
      param_1 = pcVar2;
      param_2 = param_4;
      goto LAB_0049c610;
    }
  }
  if (param_2 != param_4) {
    return false;
  }
LAB_0049c610:
  iVar1 = memcmp(param_1,param_3,param_2);
  return iVar1 == 0;
}


