/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016166b8; name: FUN_016166b8
 */


void FUN_016166b8(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  char *__dest;
  long lVar10;
  char cStack_41;
  long *local_28;
  
  plVar8 = (long *)PTR_PTR_047d4508;
  lVar7 = *param_2;
  if (lVar7 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(lVar7 + 0x40);
  }
  __dest = (char *)((long)register0x00000008 + (-0x40 - (lVar10 + 0x53U & 0xfffffffffffffff0)));
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar7 != 0) {
    puVar1 = (undefined8 *)(lVar7 + 0x38);
  }
  strcpy(__dest,(char *)*puVar1);
  if (__dest[lVar10 + -1] == '/') {
    __dest[lVar10 + -1] = '\0';
  }
  else {
    pcVar6 = strrchr(__dest,0x2f);
    if (pcVar6 == (char *)0x0) {
      *__dest = '\0';
    }
    else {
      *pcVar6 = '\0';
    }
  }
  sVar4 = strlen(__dest);
  (__dest + sVar4)[0] = '/';
  (__dest + sVar4)[1] = '\0';
  sVar4 = strlen(__dest);
  memcpy(__dest + sVar4,"env_poke_voice_init_settings/env_poke_voice_init_settings_data.bfbs",0x44);
  if (*__dest == '\0') {
    local_28 = (long *)FUN_00d44228();
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))(local_28);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar5 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar5;
    FUN_00cf9884(&local_28,uVar5,__dest);
  }
  lVar7 = param_2[5];
  *param_1 = local_28;
  plVar2 = (long *)PTR_DAT_047d8b70;
  if (local_28 != (long *)0x0) {
    plVar8 = local_28 + 7;
    plVar2 = local_28 + 6;
  }
  lVar10 = *plVar8;
  if (local_28 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = local_28[8];
  }
  param_1[1] = *plVar2;
  param_1[2] = lVar10;
  param_1[3] = lVar9;
  param_1[4] = 0;
  plVar8 = (long *)0x0;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))(local_28);
    plVar8 = local_28;
  }
  param_1[4] = plVar8;
  *(int *)(param_1 + 5) = (int)lVar7;
  FUN_00d0c0a4(param_1);
  return;
}


