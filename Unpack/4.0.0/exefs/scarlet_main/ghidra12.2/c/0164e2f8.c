/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0164e2f8; name: FUN_0164e2f8
 */


void FUN_0164e2f8(long *param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  void *pvVar10;
  void *pvVar11;
  void *__src;
  long lVar12;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047d8c78;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar6 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar6;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar9 = param_1 + 5;
  *plVar9 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar9);
  *param_1 = (long)&PTR_FUN_045833f0;
  param_1[4] = (long)&PTR_LAB_04583480;
  *plVar9 = (long)&DAT_045834d0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_0164ee40(param_1 + 0xb);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar6 = tpidr_el0;
    lVar4 = *(long *)(lVar6 + 0x30);
    if (lVar4 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar4 = DAT_04859430;
      *(long *)(lVar6 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x12] = lVar4;
  param_1[0x13] = 0x1e1e1e1e1e1e1e1;
  param_1[0x14] = 0;
  FUN_0164e97c(param_1 + 8);
  lVar4 = param_1[0xf];
  pvVar11 = (void *)param_1[0x10];
  lVar6 = (long)pvVar11 - lVar4 >> 3;
  if ((ulong)(lVar6 * -0xf0f0f0f0f0f0f0f) < 5) {
    uVar8 = lVar6 * 0xf0f0f0f0f0f0f0f + 5;
    if ((ulong)((param_1[0x11] - (long)pvVar11 >> 3) * -0xf0f0f0f0f0f0f0f) < uVar8) {
      uVar8 = param_1[0x13];
      if (0x7ffffffffffffffe < uVar8) {
        uVar8 = 0x7fffffffffffffff;
      }
      if (uVar8 < 5) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar4 = param_1[0x11] - lVar4 >> 3;
      uVar7 = lVar4 * -0x1e1e1e1e1e1e1e1e;
      if (uVar7 < 6) {
        uVar7 = 5;
      }
      if (uVar8 >> 1 <= (ulong)(lVar4 * -0xf0f0f0f0f0f0f0f)) {
        uVar7 = uVar8;
      }
      if (uVar7 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],uVar7 * 0x88,2);
        if (lVar4 == 0) {
          (**(code **)(*(long *)param_1[0x12] + 0xe8))();
        }
      }
      pvVar10 = (void *)(lVar4 + lVar6 * 8);
      lVar6 = lVar6 * -0xf0f0f0f0f0f0f0f - 5;
      pvVar11 = pvVar10;
      do {
        lVar12 = param_1[0x12];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          memset(pvVar11,0,0x88);
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0164e8dc;
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          memset(pvVar11,0,0x88);
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        pvVar11 = (void *)((long)pvVar11 + 0x88);
      } while (bVar2);
      pvVar11 = (void *)param_1[0xf];
      __src = (void *)param_1[0x10];
      if (__src != pvVar11) {
        do {
          lVar6 = param_1[0x12];
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          pvVar10 = (void *)((long)pvVar10 + -0x88);
          __src = (void *)((long)__src + -0x88);
          lVar12 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar12 == 0) {
            memcpy(pvVar10,__src,0x88);
          }
          else {
            if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_0164e8dc:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar6;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            memcpy(pvVar10,__src,0x88);
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          }
        } while (pvVar11 != __src);
        pvVar11 = (void *)param_1[0xf];
      }
      param_1[0xf] = (long)pvVar10;
      param_1[0x10] = lVar4 + 0x2a8;
      lVar6 = param_1[0x11];
      param_1[0x11] = lVar4 + uVar7 * 0x88;
      if (pvVar11 != (void *)0x0) {
        plVar9 = (long *)param_1[0x12];
        uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar8 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0164e6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x18))(plVar9,pvVar11,lVar6 - (long)pvVar11,2);
          return;
        }
        FUN_00c48fe8(plVar9,pvVar11,lVar6 - (long)pvVar11,2);
        return;
      }
    }
    else {
      pvVar10 = (void *)((long)pvVar11 + uVar8 * 0x88);
      lVar4 = lVar6 * -8 + 0x2a8;
      do {
        lVar6 = param_1[0x12];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 == 0) {
          memset(pvVar11,0,0x88);
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0164e8dc;
          *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar6;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          memset(pvVar11,0,0x88);
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        pvVar11 = (void *)((long)pvVar11 + 0x88);
        lVar4 = lVar4 + -0x88;
      } while (lVar4 != 0);
      param_1[0x10] = (long)pvVar10;
    }
  }
  else if ((long)pvVar11 - lVar4 != 0x2a8) {
    param_1[0x10] = lVar4 + 0x2a8;
  }
  return;
}


