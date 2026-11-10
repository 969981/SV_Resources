/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0042bb10; name: FUN_0042bb10
 */


undefined8 FUN_0042bb10(long *param_1)

{
  int iVar1;
  
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      if ((*(long *)(*param_1 + 0x38) != 0) && (iVar1 = FUN_0043b790(param_1,2), iVar1 == 0)) {
        (**(code **)(*param_1 + 0x38))(param_1);
      }
      if ((((*param_1 != 0) && (*(int *)(*param_1 + 0x44) != 0)) && (param_1[3] != 0)) &&
         (iVar1 = FUN_0043b790(param_1,4), iVar1 == 0)) {
        FUN_00453260(param_1[3],(long)*(int *)(*param_1 + 0x44),
                     "external/openssl/crypto/evp/digest.c",0x21);
      }
    }
    iVar1 = FUN_0043b790(param_1,0x400);
    if (iVar1 == 0) {
      FUN_00440340(param_1[4]);
    }
    FUN_00453300(param_1,0x30);
  }
  return 1;
}


