/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b16144; name: FUN_00b16144
 */


void FUN_00b16144(long *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  void *__src;
  
  pvVar1 = (void *)param_1[1];
  if (pvVar1 == (void *)param_1[2]) {
    uVar6 = param_1[4];
    lVar9 = (long)pvVar1 - *param_1 >> 8;
    uVar4 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar5 = lVar3 >> 7;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (uVar6 >> 1 <= (ulong)(lVar3 >> 8)) {
      uVar4 = uVar6;
    }
    if (uVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 8,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar11 = param_1[3];
    pvVar1 = (void *)(lVar3 + lVar9 * 0x100);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 == 0) {
      memcpy(pvVar1,param_2,0x100);
    }
    else {
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00b16518;
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar11;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      memcpy(pvVar1,param_2,0x100);
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    pvVar8 = (void *)*param_1;
    __src = (void *)param_1[1];
    pvVar10 = pvVar1;
    if (__src != pvVar8) {
      do {
        lVar9 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        pvVar10 = (void *)((long)pvVar10 + -0x100);
        __src = (void *)((long)__src + -0x100);
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar11 == 0) {
          memcpy(pvVar10,__src,0x100);
        }
        else {
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00b16518;
          *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar9;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          memcpy(pvVar10,__src,0x100);
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
      } while (pvVar8 != __src);
      pvVar8 = (void *)*param_1;
    }
    *param_1 = (long)pvVar10;
    param_1[1] = (long)pvVar1 + 0x100;
    lVar9 = param_1[2];
    param_1[2] = lVar3 + uVar4 * 0x100;
    if (pvVar8 != (void *)0x0) {
      plVar7 = (long *)param_1[3];
      uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00b16434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x18))(plVar7,pvVar8,lVar9 - (long)pvVar8,8);
        return;
      }
      FUN_00c48fe8(plVar7,pvVar8,lVar9 - (long)pvVar8,8);
      return;
    }
  }
  else {
    lVar9 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      memcpy(pvVar1,param_2,0x100);
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00b16518:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      memcpy(pvVar1,param_2,0x100);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)pvVar1 + 0x100;
  }
  return;
}


