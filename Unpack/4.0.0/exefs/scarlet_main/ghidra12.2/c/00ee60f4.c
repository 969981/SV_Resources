/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ee60f4; name: FUN_00ee60f4
 */


void FUN_00ee60f4(long *param_1,void *param_2)

{
  void *__dest;
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  void *local_68;
  
  uVar5 = param_1[4];
  lVar7 = param_1[1] - *param_1 >> 6;
  uVar2 = lVar7 + 1;
  if (0x7ffffffffffffffe < uVar5) {
    uVar5 = 0x7fffffffffffffff;
  }
  if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  uVar4 = lVar3 >> 5;
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  if (uVar5 >> 1 <= (ulong)(lVar3 >> 6)) {
    uVar2 = uVar5;
  }
  if (uVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar2 << 6,0x10);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  lVar10 = param_1[3];
  __dest = (void *)(lVar3 + lVar7 * 0x40);
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    memcpy(__dest,param_2,0x40);
  }
  else {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00ee63c8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    memcpy(__dest,param_2,0x40);
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  pvVar8 = (void *)*param_1;
  local_68 = (void *)param_1[1];
  pvVar9 = __dest;
  if (local_68 != pvVar8) {
    do {
      lVar7 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      local_68 = (void *)((long)local_68 + -0x40);
      pvVar9 = (void *)((long)pvVar9 + -0x40);
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 == 0) {
        memcpy(pvVar9,local_68,0x40);
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00ee63c8;
        *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar7;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        memcpy(pvVar9,local_68,0x40);
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
    } while (pvVar8 != local_68);
    pvVar8 = (void *)*param_1;
  }
  *param_1 = (long)pvVar9;
  param_1[1] = (long)__dest + 0x40;
  lVar7 = param_1[2];
  param_1[2] = lVar3 + uVar2 * 0x40;
  if (pvVar8 == (void *)0x0) {
    return;
  }
  plVar6 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00ee6284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,pvVar8,lVar7 - (long)pvVar8,0x10);
    return;
  }
  FUN_00c48fe8(plVar6,pvVar8,lVar7 - (long)pvVar8,0x10);
  return;
}


