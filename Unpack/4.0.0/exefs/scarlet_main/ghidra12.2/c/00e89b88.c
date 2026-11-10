/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e89b88; name: FUN_00e89b88
 */


undefined8 FUN_00e89b88(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  long *plVar5;
  char *__s;
  long lVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  long *local_48;
  
  __s = *(char **)(param_2 + 8);
  pcVar2 = strchr(__s,0x2f);
  lVar6 = 0;
  while( true ) {
    if (pcVar2 == (char *)0x0) {
      if (param_3 != (long *)0x0) {
        *param_3 = lVar6;
      }
      if (param_4 != (long *)0x0) {
        if (*__s == '\0') {
          local_48 = (long *)FUN_00d44228();
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x18))(local_48);
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar1 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar4 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar4;
          FUN_00cf9884(&local_48,uVar4,__s);
        }
        plVar5 = (long *)*param_4;
        *param_4 = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
        *param_4 = (long)local_48;
      }
      return 1;
    }
    if (0x17 < ((long)pcVar2 - (long)__s) - 1U) break;
    local_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = 0;
    strncpy((char *)&local_68,__s,(long)pcVar2 - (long)__s);
    if (lVar6 == 0) {
      lVar6 = FUN_00e89d28(param_1,&local_68);
    }
    else {
      lVar6 = FUN_00e89e88(param_1,lVar6,&local_68);
    }
    sVar3 = strlen((char *)&local_68);
    __s = __s + sVar3 + 1;
    pcVar2 = strchr(__s,0x2f);
  }
  return 0;
}


