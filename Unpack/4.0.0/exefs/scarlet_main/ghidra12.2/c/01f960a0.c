/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f960a0; name: FUN_01f960a0
 */


void FUN_01f960a0(long *param_1,void *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  void *pvVar11;
  void *__src;
  
  pvVar9 = (void *)param_1[1];
  if (pvVar9 == (void *)param_1[2]) {
    uVar6 = param_1[4];
    lVar10 = (long)pvVar9 - *param_1 >> 4;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = lVar10 * -0x71c71c71c71c71c7 + 1;
    if (uVar6 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1 >> 4;
    uVar5 = lVar3 * 0x1c71c71c71c71c72;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (uVar6 >> 1 <= (ulong)(lVar3 * -0x71c71c71c71c71c7)) {
      uVar1 = uVar6;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x90,0x10);
      if (lVar3 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    pvVar9 = (void *)(lVar3 + lVar10 * 0x10);
    lVar10 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      memcpy(pvVar9,param_2,0x90);
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_01f9649c;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      memcpy(pvVar9,param_2,0x90);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    pvVar8 = (void *)*param_1;
    __src = (void *)param_1[1];
    pvVar11 = pvVar9;
    if (__src != pvVar8) {
      do {
        lVar10 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        pvVar11 = (void *)((long)pvVar11 + -0x90);
        __src = (void *)((long)__src + -0x90);
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          memcpy(pvVar11,__src,0x90);
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_01f9649c;
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          memcpy(pvVar11,__src,0x90);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
      } while (pvVar8 != __src);
      pvVar8 = (void *)*param_1;
    }
    *param_1 = (long)pvVar11;
    param_1[1] = (long)pvVar9 + 0x90;
    lVar10 = param_1[2];
    param_1[2] = lVar3 + uVar1 * 0x90;
    if (pvVar8 != (void *)0x0) {
      plVar7 = (long *)param_1[3];
      uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01f96338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x18))(plVar7,pvVar8,lVar10 - (long)pvVar8,0x10);
        return;
      }
      FUN_00c48fe8(plVar7,pvVar8,lVar10 - (long)pvVar8,0x10);
      return;
    }
  }
  else {
    lVar10 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      memcpy(pvVar9,param_2,0x90);
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_01f9649c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      memcpy(pvVar9,param_2,0x90);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)pvVar9 + 0x90;
  }
  return;
}


