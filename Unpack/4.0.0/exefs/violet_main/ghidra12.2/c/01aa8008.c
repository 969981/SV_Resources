/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aa8008; name: FUN_01aa8008
 */


void FUN_01aa8008(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  void *pvVar10;
  void *__dest;
  void *pvVar11;
  long lVar12;
  void *__src;
  
  puVar2 = PTR_LAB_047d3900;
  if (param_2 <= (ulong)((param_1[2] - param_1[1] >> 5) * -0x5555555555555555)) {
    pvVar10 = (void *)param_1[1];
    pvVar11 = pvVar10;
    if (param_2 != 0) {
      pvVar11 = (void *)((long)pvVar10 + param_2 * 0x60);
      lVar7 = param_2 * 0x60;
      do {
        lVar5 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 == 0) {
          memset(pvVar10,0,0x60);
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar5;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          memset(pvVar10,0,0x60);
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        pvVar10 = (void *)((long)pvVar10 + 0x60);
        lVar7 = lVar7 + -0x60;
      } while (lVar7 != 0);
    }
    param_1[1] = (long)pvVar11;
    return;
  }
  lVar7 = param_1[1] - *param_1 >> 5;
  uVar8 = param_1[4];
  if (0x7ffffffffffffffe < uVar8) {
    uVar8 = 0x7fffffffffffffff;
  }
  uVar1 = lVar7 * -0x5555555555555555 + param_2;
  if (uVar8 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 5;
  uVar6 = lVar5 * 0x5555555555555556;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (uVar8 >> 1 <= (ulong)(lVar5 * -0x5555555555555555)) {
    uVar1 = uVar8;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x60,0x10);
    if (lVar5 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  __dest = (void *)(lVar5 + lVar7 * 0x20);
  pvVar10 = (void *)((long)__dest + param_2 * 0x60);
  lVar7 = param_2 * 0x60;
  pvVar11 = __dest;
  do {
    lVar12 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      memset(pvVar11,0,0x60);
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_01aa8380;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      memset(pvVar11,0,0x60);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    lVar7 = lVar7 + -0x60;
    pvVar11 = (void *)((long)pvVar11 + 0x60);
  } while (lVar7 != 0);
  pvVar11 = (void *)*param_1;
  __src = (void *)param_1[1];
  if (__src != pvVar11) {
    do {
      lVar7 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      __dest = (void *)((long)__dest + -0x60);
      __src = (void *)((long)__src + -0x60);
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar12 == 0) {
        memcpy(__dest,__src,0x60);
      }
      else {
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_01aa8380:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar7;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        memcpy(__dest,__src,0x60);
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
    } while (pvVar11 != __src);
    pvVar11 = (void *)*param_1;
  }
  lVar7 = param_1[2];
  *param_1 = (long)__dest;
  param_1[1] = (long)pvVar10;
  param_1[2] = lVar5 + uVar1 * 0x60;
  if (pvVar11 == (void *)0x0) {
    return;
  }
  plVar9 = (long *)param_1[3];
  uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar8 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01aa81d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,pvVar11,lVar7 - (long)pvVar11,0x10);
    return;
  }
  FUN_00c48fe8(plVar9,pvVar11,lVar7 - (long)pvVar11,0x10);
  return;
}


