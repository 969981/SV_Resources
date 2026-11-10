/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01deee70; name: FUN_01deee70
 */


void FUN_01deee70(char *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long *local_18;
  
  *param_1 = '\0';
  uVar2 = FUN_01deefa0();
  if ((uVar2 & 1) != 0) {
    pcVar3 = (char *)FUN_00c646d0(param_2,0xffffffff,0);
    if (*pcVar3 == '\0') {
      local_18 = (long *)FUN_00d44228();
      if (local_18 != (long *)0x0) {
        (**(code **)(*local_18 + 0x18))(local_18);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4240,pcVar3), iVar1 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar4 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar4;
      FUN_00cf9884(&local_18,uVar4,pcVar3);
      if (*param_1 != '\0') {
        plVar5 = *(long **)(param_1 + 8);
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
        *(long **)(param_1 + 8) = local_18;
        goto LAB_01deeef8;
      }
    }
    *(long **)(param_1 + 8) = local_18;
    *param_1 = '\x01';
  }
LAB_01deeef8:
  FUN_00c5db00(param_2,0);
  return;
}


