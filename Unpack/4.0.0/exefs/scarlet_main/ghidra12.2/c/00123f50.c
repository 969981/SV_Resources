/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00123f50; name: FUN_00123f50
 */


ulong FUN_00123f50(undefined8 param_1,undefined4 param_2,char *param_3,long *param_4)

{
  int iVar1;
  char *__s1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (((param_3 == (char *)0x0) || (iVar1 = FUN_00d34290(param_1,param_2), 0 < iVar1)) &&
     (param_3 = (char *)FUN_00c646d0(param_1,param_2,0), param_3 == (char *)0x0)) {
    uVar2 = FUN_01b2ccf0(param_1,4);
    FUN_00123c80(param_1,param_2,uVar2);
    __s1 = (char *)*param_4;
  }
  else {
    __s1 = (char *)*param_4;
  }
  if (__s1 != (char *)0x0) {
    uVar3 = 0;
    do {
      iVar1 = strcmp(__s1,param_3);
      if (iVar1 == 0) {
        return uVar3 & 0xffffffff;
      }
      __s1 = (char *)param_4[uVar3 + 1];
      uVar3 = uVar3 + 1;
    } while (__s1 != (char *)0x0);
  }
  uVar2 = FUN_01b2cd10(param_1,"invalid option \'%s\'",param_3);
  uVar3 = FUN_00123970(param_1,param_2,uVar2);
  return uVar3;
}


