/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c7c8a8; name: FUN_02c7c8a8
 */


int FUN_02c7c8a8(long param_1,long *param_2,ulong param_3,long param_4,long *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  void *pvVar18;
  long *plVar19;
  long lVar20;
  void *__src;
  ulong uVar21;
  
  if (0x1d < (ulong)param_2[2]) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("name.Length() <= kLineLength - 3","RegisterDyingMessageWriter",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/framework2/product_error_handler.cpp"
               ,0x47);
  }
  lVar4 = param_1 + (param_3 & 0xffffffff) * 0x38;
  plVar5 = (long *)(lVar4 + 0x50);
  plVar9 = (long *)*plVar5;
  plVar14 = (long *)(lVar4 + 0x58);
  plVar19 = (long *)*plVar14;
  if (plVar9 != plVar19) {
    plVar17 = plVar9;
    do {
      plVar12 = plVar17 + 5;
      if (*plVar17 == *param_2) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("it.id != name.GetHash()","RegisterDyingMessageWriter",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/framework2/product_error_handler.cpp"
                   ,0x4c);
      }
      plVar17 = plVar12;
    } while (plVar19 != plVar12);
  }
  uVar21 = param_4 + 0x3fU & 0xffffffffffffffe0;
  if (0x1000 < *(long *)(param_1 + 0x48) + uVar21) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_usingSize + useSize <= kBufferSize","RegisterDyingMessageWriter",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/framework2/product_error_handler.cpp"
               ,0x51);
  }
  lVar8 = *param_5;
  lVar2 = param_5[1];
  lVar20 = *param_2;
  lVar16 = param_1 + (param_3 & 0xffffffff) * 0x38;
  lVar4 = *(long *)(param_1 + 0x48) + 0x20;
  plVar17 = (long *)(lVar16 + 0x60);
  puVar1 = (undefined8 *)(lVar16 + 0x68);
  if (plVar19 < (long *)*plVar17) {
    uVar15 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar16 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar16 == 0) {
      *plVar19 = lVar20;
      plVar19[1] = lVar4;
      plVar19[4] = lVar2;
      plVar19[2] = param_4;
      plVar19[3] = lVar8;
    }
    else {
      if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_02c7cd84:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar15;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      *plVar19 = lVar20;
      plVar19[1] = lVar4;
      plVar19[4] = lVar2;
      plVar19[2] = param_4;
      plVar19[3] = lVar8;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    }
    *plVar14 = (long)(plVar19 + 5);
  }
  else {
    lVar16 = (long)plVar19 - (long)plVar9 >> 3;
    uVar11 = *(ulong *)(param_1 + (param_3 & 0xffffffff) * 0x38 + 0x70);
    uVar7 = lVar16 * -0x3333333333333333 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = *plVar17 - (long)plVar9 >> 3;
    uVar13 = lVar10 * -0x6666666666666666;
    if (uVar7 <= uVar13) {
      uVar7 = uVar13;
    }
    if (uVar11 >> 1 <= (ulong)(lVar10 * -0x3333333333333333)) {
      uVar7 = uVar11;
    }
    if (uVar7 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar7 * 0x28,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    plVar9 = (long *)(lVar10 + lVar16 * 8);
    uVar15 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      lVar16 = lVar10 + lVar16 * 8;
      *plVar9 = lVar20;
      *(long *)(lVar16 + 8) = lVar4;
      *(long *)(lVar16 + 0x10) = param_4;
      *(long *)(lVar16 + 0x18) = lVar8;
      *(long *)(lVar16 + 0x20) = lVar2;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_02c7cd84;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar16 = lVar10 + lVar16 * 8;
      *plVar9 = lVar20;
      *(long *)(lVar16 + 8) = lVar4;
      *(long *)(lVar16 + 0x10) = param_4;
      *(long *)(lVar16 + 0x18) = lVar8;
      *(long *)(lVar16 + 0x20) = lVar2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    pvVar18 = (void *)*plVar5;
    __src = (void *)*plVar14;
    plVar19 = plVar9;
    if (__src != pvVar18) {
      do {
        uVar15 = *puVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        plVar19 = plVar19 + -5;
        __src = (void *)((long)__src + -0x28);
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          memcpy(plVar19,__src,0x28);
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_02c7cd84;
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar15;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          memcpy(plVar19,__src,0x28);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
      } while (pvVar18 != __src);
      pvVar18 = (void *)*plVar5;
    }
    *plVar5 = (long)plVar19;
    *plVar14 = (long)(plVar9 + 5);
    lVar4 = *plVar17;
    *plVar17 = lVar10 + uVar7 * 0x28;
    if (pvVar18 != (void *)0x0) {
      plVar5 = (long *)*puVar1;
      uVar7 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,pvVar18,lVar4 - (long)pvVar18,8);
      }
      else {
        FUN_00c48fe8(plVar5,pvVar18,lVar4 - (long)pvVar18,8);
      }
    }
  }
  iVar3 = snprintf((char *)(*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x48)),0x20,"[%s]",
                   param_2[1]);
  *(ulong *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + uVar21;
  return iVar3;
}


