/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0160eb04; name: FUN_0160eb04
 */


void FUN_0160eb04(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  char *__dest;
  long lVar8;
  char cStack_41;
  long *local_40;
  long *local_38;
  
  lVar7 = *param_2;
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x40);
  }
  __dest = (char *)((long)&local_40 - (lVar8 + 0x48U & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar7 != 0) {
    puVar1 = (undefined8 *)(lVar7 + 0x38);
  }
  strcpy(__dest,(char *)*puVar1);
  if (__dest[lVar8 + -1] == '/') {
    __dest[lVar8 + -1] = '\0';
  }
  else {
    pcVar5 = strrchr(__dest,0x2f);
    if (pcVar5 == (char *)0x0) {
      *__dest = '\0';
    }
    else {
      *pcVar5 = '\0';
    }
  }
  sVar3 = strlen(__dest);
  (__dest + sVar3)[0] = '/';
  (__dest + sVar3)[1] = '\0';
  sVar3 = strlen(__dest);
  memcpy(__dest + sVar3,"env_sound_init_settings/env_sound_init_settings_data.bin",0x39);
  local_40 = (long *)0x0;
  if (*__dest == '\0') {
    plVar6 = (long *)FUN_00d44228();
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    if (local_40 != (long *)0x0) {
      lVar7 = *local_40;
      local_40 = plVar6;
      (**(code **)(lVar7 + 0x20))();
      plVar6 = local_40;
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar4;
    FUN_00cf9884(&local_38,uVar4,__dest);
    plVar6 = local_40;
    local_40 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    local_40 = local_38;
    plVar6 = local_40;
  }
  local_40 = plVar6;
  FUN_00d0bff0(param_1,&local_40,(int)param_2[5]);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  return;
}


