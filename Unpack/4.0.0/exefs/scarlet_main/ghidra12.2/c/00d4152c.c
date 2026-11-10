/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4152c; name: FUN_00d4152c
 */


void FUN_00d4152c(long *param_1,void *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  void *pvVar10;
  void *__dest;
  void *__src;
  
  pvVar10 = (void *)param_1[1];
  if (pvVar10 == (void *)param_1[2]) {
    uVar7 = param_1[4];
    lVar6 = (long)pvVar10 - *param_1 >> 4;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar1 = lVar6 * -0x5555555555555555 + 1;
    if (uVar7 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1 >> 4;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (uVar7 >> 1 <= (ulong)(lVar4 * -0x5555555555555555)) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x30,0x10);
      if (lVar4 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    pvVar10 = (void *)(lVar4 + lVar6 * 0x10);
    lVar6 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      memcpy(pvVar10,param_2,0x30);
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00d41910:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      memcpy(pvVar10,param_2,0x30);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    pvVar9 = (void *)*param_1;
    __src = (void *)param_1[1];
    __dest = pvVar10;
    if (__src != pvVar9) {
      do {
        lVar6 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        __dest = (void *)((long)__dest + -0x30);
        __src = (void *)((long)__src + -0x30);
        lVar3 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar3 == 0) {
          memcpy(__dest,__src,0x30);
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00d41910;
          *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          memcpy(__dest,__src,0x30);
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
      } while (pvVar9 != __src);
      pvVar9 = (void *)*param_1;
    }
    *param_1 = (long)__dest;
    param_1[1] = (long)pvVar10 + 0x30;
    lVar6 = param_1[2];
    param_1[2] = lVar4 + uVar1 * 0x30;
    if (pvVar9 != (void *)0x0) {
      plVar8 = (long *)param_1[3];
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if ((uVar7 & 1) != 0) {
        lVar4 = FUN_00c4e600();
        if (0 < *(int *)(lVar4 + 0x12c8)) {
          FUN_00c48fe8(plVar8,pvVar9,lVar6 - (long)pvVar9,0x10);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00d41744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x18))(plVar8,pvVar9,lVar6 - (long)pvVar9,0x10);
      return;
    }
  }
  else {
    lVar6 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      memcpy(pvVar10,param_2,0x30);
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00d41910;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar6;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      memcpy(pvVar10,param_2,0x30);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    param_1[1] = (long)pvVar10 + 0x30;
  }
  return;
}


