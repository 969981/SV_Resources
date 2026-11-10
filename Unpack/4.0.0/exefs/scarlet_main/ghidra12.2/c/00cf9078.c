/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf9078; name: FUN_00cf9078
 */


void FUN_00cf9078(char *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined *__s2;
  int iVar2;
  size_t __n;
  char *__s1;
  char local_88 [24];
  long *local_70;
  long *local_50;
  
  __s2 = PTR_s_data___047d8b68;
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_3 != 0) {
    puVar1 = (undefined8 *)(*param_3 + 0x38);
  }
  __s1 = (char *)*puVar1;
  __n = strlen(PTR_s_data___047d8b68);
  iVar2 = strncmp(__s1,__s2,__n);
  if (iVar2 == 0) {
    FUN_00cf92b0(param_1,param_2,param_3);
    if (*param_1 != '\0') {
      return;
    }
    FUN_00cfa0f8(local_88,param_2,param_3);
    if (local_88[0] != '\0') {
      FUN_00d0633c(param_1,local_88);
      if (local_88[0] == '\0') {
        return;
      }
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
      if (local_70 == (long *)0x0) {
        return;
      }
      (**(code **)(*local_70 + 0x20))();
      return;
    }
  }
  *param_1 = '\0';
  return;
}


