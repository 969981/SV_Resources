/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001da4f4; name: FUN_001da4f4
 */


undefined8 FUN_001da4f4(undefined8 *param_1,long param_2)

{
  char *__s;
  size_t sVar1;
  long lVar2;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_001cb68c(param_2,0);
  }
  if (param_1 != (undefined8 *)0x0) {
    FUN_001cb57c(param_2,&LAB_001da5a8);
    __s = (char *)*param_1;
    while (__s != (char *)0x0) {
      sVar1 = strlen(__s);
      lVar2 = FUN_001ec2f8(sVar1 + 0x20);
      if (lVar2 == 0) {
        FUN_001cb68c(param_2,0);
        return 3;
      }
      strcpy((char *)(lVar2 + 0x18),(char *)*param_1);
      FUN_001cb588(param_2,*(undefined8 *)(param_2 + 8),lVar2,lVar2);
      __s = (char *)param_1[1];
      param_1 = param_1 + 1;
    }
  }
  return 0;
}


