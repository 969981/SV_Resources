/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275accc; name: FUN_0275accc
 */


void FUN_0275accc(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  char local_78 [64];
  long *local_38;
  
  pcVar2 = strstr(*(char **)(param_1 + 8),"__");
  pcVar2 = pcVar2 + 2;
  if (pcVar2 != (char *)0x2) {
    pcVar3 = strstr(pcVar2,"__");
    pcVar3 = pcVar3 + 2;
    if (pcVar3 != (char *)0x2) {
      local_78[0x30] = '\0';
      local_78[0x31] = '\0';
      local_78[0x32] = '\0';
      local_78[0x33] = '\0';
      local_78[0x34] = '\0';
      local_78[0x35] = '\0';
      local_78[0x36] = '\0';
      local_78[0x37] = '\0';
      local_78[0x38] = '\0';
      local_78[0x39] = '\0';
      local_78[0x3a] = '\0';
      local_78[0x3b] = '\0';
      local_78[0x3c] = '\0';
      local_78[0x3d] = '\0';
      local_78[0x3e] = '\0';
      local_78[0x3f] = '\0';
      local_78[0x20] = '\0';
      local_78[0x21] = '\0';
      local_78[0x22] = '\0';
      local_78[0x23] = '\0';
      local_78[0x24] = '\0';
      local_78[0x25] = '\0';
      local_78[0x26] = '\0';
      local_78[0x27] = '\0';
      local_78[0x28] = '\0';
      local_78[0x29] = '\0';
      local_78[0x2a] = '\0';
      local_78[0x2b] = '\0';
      local_78[0x2c] = '\0';
      local_78[0x2d] = '\0';
      local_78[0x2e] = '\0';
      local_78[0x2f] = '\0';
      local_78[0x10] = '\0';
      local_78[0x11] = '\0';
      local_78[0x12] = '\0';
      local_78[0x13] = '\0';
      local_78[0x14] = '\0';
      local_78[0x15] = '\0';
      local_78[0x16] = '\0';
      local_78[0x17] = '\0';
      local_78[0x18] = '\0';
      local_78[0x19] = '\0';
      local_78[0x1a] = '\0';
      local_78[0x1b] = '\0';
      local_78[0x1c] = '\0';
      local_78[0x1d] = '\0';
      local_78[0x1e] = '\0';
      local_78[0x1f] = '\0';
      local_78[0] = '\0';
      local_78[1] = '\0';
      local_78[2] = '\0';
      local_78[3] = '\0';
      local_78[4] = '\0';
      local_78[5] = '\0';
      local_78[6] = '\0';
      local_78[7] = '\0';
      local_78[8] = '\0';
      local_78[9] = '\0';
      local_78[10] = '\0';
      local_78[0xb] = '\0';
      local_78[0xc] = '\0';
      local_78[0xd] = '\0';
      local_78[0xe] = '\0';
      local_78[0xf] = '\0';
      strncpy(local_78,pcVar2,(size_t)(pcVar3 + (-2 - (long)pcVar2)));
      FUN_01343c78(&local_38,local_78);
      plVar4 = (long *)*param_2;
      *param_2 = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      *param_2 = (long)local_38;
      if (*pcVar3 == '\0') {
        local_38 = (long *)FUN_00d44228();
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x18))(local_38);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar1 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar5 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar5;
        FUN_00cf9884(&local_38,uVar5,pcVar3);
      }
      plVar4 = (long *)*param_3;
      *param_3 = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      *param_3 = (long)local_38;
    }
  }
  return;
}


