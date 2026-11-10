/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fa13c0; name: FUN_00fa13c0
 */


void FUN_00fa13c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  size_t sVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  char *__dest;
  long lVar11;
  char cStack_41;
  long *local_28;
  
  puVar4 = PTR_DAT_047dd660;
  plVar10 = (long *)PTR_PTR_047d4508;
  lVar9 = *(long *)PTR_DAT_047dd660;
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar9 + 0x40);
  }
  __dest = (char *)((long)register0x00000008 + (-0x40 - (lVar11 + 0x47U & 0xfffffffffffffff0)));
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar9 != 0) {
    puVar1 = (undefined8 *)(lVar9 + 0x38);
  }
  strcpy(__dest,(char *)*puVar1);
  if (__dest[lVar11 + -1] == '/') {
    __dest[lVar11 + -1] = '\0';
  }
  else {
    pcVar8 = strrchr(__dest,0x2f);
    if (pcVar8 == (char *)0x0) {
      *__dest = '\0';
    }
    else {
      *pcVar8 = '\0';
    }
  }
  sVar6 = strlen(__dest);
  (__dest + sVar6)[0] = '/';
  (__dest + sVar6)[1] = '\0';
  sVar6 = strlen(__dest);
  memcpy(__dest + sVar6,"gfx2/shader/NX64/env_titan/system/ao_depth_smaller.bnsh",0x38);
  if (*__dest == '\0') {
    local_28 = (long *)FUN_00d44228();
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))(local_28);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar7 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar7;
    FUN_00cf9884(&local_28,uVar7,__dest);
  }
  *param_1 = local_28;
  uVar2 = *(undefined4 *)(puVar4 + 0x28);
  plVar3 = (long *)PTR_DAT_047d8b70;
  if (local_28 != (long *)0x0) {
    plVar10 = local_28 + 7;
    plVar3 = local_28 + 6;
  }
  lVar9 = *plVar10;
  if (local_28 == (long *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = local_28[8];
  }
  param_1[1] = *plVar3;
  param_1[2] = lVar9;
  param_1[3] = lVar11;
  param_1[4] = 0;
  plVar10 = (long *)0x0;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))(local_28);
    plVar10 = local_28;
  }
  param_1[4] = plVar10;
  *(undefined4 *)(param_1 + 5) = uVar2;
  FUN_00d0c0a4(param_1);
  return;
}


