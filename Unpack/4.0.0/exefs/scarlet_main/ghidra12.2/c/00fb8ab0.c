/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb8ab0; name: FUN_00fb8ab0
 */


void FUN_00fb8ab0(char *param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                 uint param_6,char param_7,uint param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  std::string::resize((ulong)param_1,'\0');
  if (((long)param_4 < 1) || (param_4 < param_3 || param_4 - param_3 == 0)) {
    std::string::reserve((ulong)param_1);
    if (param_7 != '\0') {
      std::string::append((ulong)param_1,'\x01');
    }
    if (param_3 == 0) {
      return;
    }
    std::string::append(param_1,param_2);
    return;
  }
  lVar2 = (param_4 - param_3) - (ulong)(param_7 != '\0');
  std::string::reserve((ulong)param_1);
  if ((param_8 & 1) == 0) {
    if ((param_6 >> 5 & 1) != 0) goto LAB_00fb8b98;
    lVar1 = 0;
    lVar3 = lVar2;
  }
  else {
    lVar1 = lVar2;
    if (lVar2 < 0) {
      lVar1 = lVar2 + 1;
    }
    lVar1 = lVar1 >> 1;
    lVar3 = lVar2 - lVar1;
  }
  lVar2 = lVar1;
  if (lVar3 != 0) {
    std::string::append((ulong)param_1,(char)lVar3);
  }
LAB_00fb8b98:
  if (param_7 != '\0') {
    std::string::append((ulong)param_1,'\x01');
  }
  if (param_3 != 0) {
    std::string::append(param_1,param_2);
  }
  if (lVar2 != 0) {
    std::string::append((ulong)param_1,(char)lVar2);
  }
  return;
}


