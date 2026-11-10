/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ce5e0; name: FUN_003ce5e0
 */


undefined8 FUN_003ce5e0(undefined8 param_1,uint param_2,ushort *param_3,long param_4,int param_5)

{
  int iVar1;
  
  if ((param_3 == (ushort *)0x0) || (param_4 == 0)) {
    return 0;
  }
  if (param_5 == 0) {
    do {
      if ((uint)*param_3 == (param_2 & 0xffff)) {
        return 1;
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  else {
    do {
      if (((uint)*param_3 == (param_2 & 0xffff)) &&
         (iVar1 = FUN_003d56b0(param_1,param_2,0x20006), iVar1 != 0)) {
        return 1;
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return 0;
}


