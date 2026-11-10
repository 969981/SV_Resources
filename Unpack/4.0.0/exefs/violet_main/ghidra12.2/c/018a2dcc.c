/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a2dcc; name: FUN_018a2dcc
 */


void FUN_018a2dcc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  char *__dest;
  long lVar9;
  char cStack_41;
  long *local_40;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_047dd660;
  lVar8 = *(long *)PTR_DAT_047dd660;
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar8 + 0x40);
  }
  __dest = (char *)((long)&local_40 - (lVar9 + 0x26U & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar8 != 0) {
    puVar1 = (undefined8 *)(lVar8 + 0x38);
  }
  strcpy(__dest,(char *)*puVar1);
  if (__dest[lVar9 + -1] == '/') {
    __dest[lVar9 + -1] = '\0';
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
  pcVar6 = __dest + sVar4;
  *(undefined8 *)pcVar6 = s_havok_keycode_2021_bin_03c12d7d._0_8_;
  *(ulong *)(pcVar6 + 8) =
       CONCAT17(s_havok_keycode_2021_bin_03c12d7d[0xf],s_havok_keycode_2021_bin_03c12d7d._8_7_);
  *(ulong *)(pcVar6 + 0xf) =
       CONCAT71(s_havok_keycode_2021_bin_03c12d7d._16_7_,s_havok_keycode_2021_bin_03c12d7d[0xf]);
  local_40 = (long *)0x0;
  if (*__dest == '\0') {
    plVar7 = (long *)FUN_00d44228();
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    if (local_40 != (long *)0x0) {
      lVar8 = *local_40;
      local_40 = plVar7;
      (**(code **)(lVar8 + 0x20))();
      plVar7 = local_40;
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
    FUN_00cf9884(&local_38,uVar5,__dest);
    plVar7 = local_40;
    local_40 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    local_40 = local_38;
    plVar7 = local_40;
  }
  local_40 = plVar7;
  FUN_00d0bff0(param_1,&local_40,*(undefined4 *)(puVar2 + 0x28));
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  return;
}


