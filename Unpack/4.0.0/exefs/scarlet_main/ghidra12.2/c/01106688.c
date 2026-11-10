/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01106688; name: FUN_01106688
 */


void FUN_01106688(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  short *psVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  code *pcVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 *puVar32;
  long *plVar33;
  ulong uVar34;
  long *plVar35;
  long lVar36;
  code *pcVar37;
  long lVar38;
  code *local_1a0;
  undefined8 *local_180;
  undefined8 uStack_178;
  code *local_170;
  code *local_168;
  code *local_160;
  long *plStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  
  param_1[2] = 0;
  puVar9 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar9 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  puVar9 = PTR_DAT_047d8c78;
  if (lVar13 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = 0;
    if (*(long *)(lVar13 + 0x80) != 0) {
      lVar25 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar25;
  param_1[4] = (long)(puVar9 + 0x88);
  plVar33 = param_1 + 5;
  *plVar33 = (long)(puVar9 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar33);
  *param_1 = (long)&PTR_FUN_04595378;
  param_1[4] = (long)&PTR_LAB_045953f0;
  *plVar33 = (long)&DAT_04595440;
  *(undefined2 *)(param_1 + 8) = 1;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar25 = nn::os::GetTlsValue(DAT_04865a30);
  lVar13 = tpidr_el0;
  if ((((lVar25 == 0) || (*(long *)(lVar25 + 0x80) == 0)) ||
      (lVar25 = *(long *)(lVar25 + *(long *)(lVar25 + 0x80) * 8 + -8), lVar25 == 0)) &&
     (lVar25 = *(long *)(lVar13 + 0x30), lVar25 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar25 = DAT_04859430;
    *(long *)(lVar13 + 0x30) = DAT_04859430;
  }
  param_1[0xc] = lVar25;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xd] = 0x333333333333333;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x11] = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 1;
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 1;
  param_1[0x15] = (long)&DAT_cbf29ce484222645;
  param_1[0x16] = (long)&DAT_03c886bc;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x1a,0,1);
  if (((*PTR_DAT_047d8a48 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a48);
  }
  lVar25 = *(long *)PTR_DAT_047d8a50;
  *(long *)PTR_DAT_047d8a58 = lVar25;
  uVar11 = FUN_01108320(*(undefined8 *)(lVar25 + 0x30),param_1);
  *(undefined4 *)(param_1 + 0x10) = uVar11;
  param_1[0x15] = *param_2;
  param_1[0x16] = param_2[1];
  param_1[0x17] = param_2[2];
  plVar35 = (long *)param_2[3];
  if (plVar35 != (long *)0x0) {
    (**(code **)(*plVar35 + 0x18))(plVar35);
  }
  plVar14 = (long *)param_1[0x18];
  param_1[0x18] = (long)plVar35;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  if (((*PTR_DAT_047d8a48 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a48);
  }
  lVar25 = *(long *)PTR_DAT_047d8a50;
  *(long *)PTR_DAT_047d8a58 = lVar25;
  uVar26 = (*(long *)(lVar25 + 0x448) - *(long *)(lVar25 + 0x440) >> 4) * 0xb6db6db7;
  uVar29 = uVar26 & 0xffffffff;
  uVar34 = 0;
  if ((int)uVar26 < 1) {
    uVar29 = 0;
  }
  while( true ) {
    if (((*PTR_DAT_047d8a48 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a48);
    }
    lVar25 = *(long *)PTR_DAT_047d8a50;
    *(long *)PTR_DAT_047d8a58 = lVar25;
    if (uVar34 == uVar29) break;
    lVar25 = *(long *)(lVar25 + 0x440);
    if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
        (*(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8) == 0)) &&
       (*(long *)(lVar13 + 0x30) == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long *)(lVar13 + 0x30) = DAT_04859430;
    }
    plVar35 = DAT_0485a0f0;
    if (DAT_0485a0f0 != (long *)0x0) {
      plVar14 = DAT_0485a0f0 + 5;
      do {
        lVar15 = *plVar14;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar8) {
          *(int *)plVar14 = (int)lVar15 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((int)lVar15 == -1) {
LAB_0110793c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    local_d8 = (long *)param_1[1];
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_c0 = 0;
    local_e0 = (code *)0x0;
    local_d0 = 0x1fffffffffffffff;
    local_c8 = 0;
    if (plVar35[7] - plVar35[6] == 0) {
      local_1a0 = (code *)0x0;
      pcVar37 = (code *)0x0;
      pcVar16 = (code *)0x0;
    }
    else {
      lVar15 = plVar35[7] - plVar35[6] >> 4;
      if ((ulong)(lVar15 * -0x5555555555555555) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar38 = lVar15 * 0x5555555555555558;
      pcVar16 = (code *)(**(code **)(*local_d8 + 0x10))(local_d8,lVar38,8);
      if (pcVar16 == (code *)0x0) {
        (**(code **)(*local_d8 + 0xe8))();
      }
      pcVar37 = pcVar16 + lVar15 * 0x5555555555555558;
      local_f0 = pcVar16;
      local_e8 = pcVar16;
      local_e0 = pcVar37;
      do {
        plVar14 = local_d8;
        if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar15 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar15 == 0) {
          *(undefined8 *)pcVar16 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_011078f0;
          *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar14;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
          *(undefined8 *)pcVar16 = 0;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
        }
        pcVar16 = pcVar16 + 8;
        lVar38 = lVar38 + -8;
      } while (lVar38 != 0);
      local_1a0 = local_e0;
      pcVar16 = local_f0;
    }
    uVar10 = local_bc;
    uVar11 = local_c0;
    uVar5 = local_c8;
    uVar31 = local_d0;
    plVar14 = local_d8;
    local_e0 = (code *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    FUN_00fa4d3c(&local_f0);
    if (plVar35[7] != plVar35[6]) {
      uVar26 = 0;
      do {
        lVar15 = param_1[1];
        if (lVar15 == 0) {
          lVar15 = *(long *)(DAT_0485a0d0 + 8);
        }
        local_f0 = DAT_0485a0d0;
        lVar15 = FUN_00dfee60(&local_170,lVar15,&local_f0,param_2);
        if (lVar15 != 0) {
          piVar1 = (int *)(lVar15 + 0x28);
          do {
            iVar12 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar12 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar12 == -1) goto LAB_0110793c;
        }
        if (**(char **)(lVar25 + uVar34 * 0x70 + 0x40) != '\0') {
          FUN_00eac828(lVar15,lVar25 + uVar34 * 0x70 + 0x38);
        }
        plVar17 = *(long **)(pcVar16 + uVar26 * 8);
        *(undefined8 *)(pcVar16 + uVar26 * 8) = 0;
        if (plVar17 != (long *)0x0) {
          plVar2 = plVar17 + 5;
          do {
            lVar38 = *plVar2;
            iVar12 = (int)lVar38 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *(int *)plVar2 = iVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*plVar17 + 0x10))();
          }
          else if ((int)lVar38 == 0) goto LAB_011078f4;
        }
        *(long *)(pcVar16 + uVar26 * 8) = lVar15;
        if (plVar35[7] != plVar35[6]) {
          *(ulong *)(lVar15 + 0xd0) = *(ulong *)(lVar15 + 0xd0) & 0xfffffffe;
          lVar15 = *(long *)(pcVar16 + uVar26 * 8);
          if (1 < (ulong)((plVar35[7] - plVar35[6] >> 4) * -0x5555555555555555)) {
            *(ulong *)(lVar15 + 0xd0) = *(ulong *)(lVar15 + 0xd0) & 0xfffffffd;
            lVar15 = *(long *)(pcVar16 + uVar26 * 8);
            if (2 < (ulong)((plVar35[7] - plVar35[6] >> 4) * -0x5555555555555555)) {
              *(ulong *)(lVar15 + 0xd0) = *(ulong *)(lVar15 + 0xd0) & 0xfffffffb;
              lVar15 = *(long *)(pcVar16 + uVar26 * 8);
              if (3 < (ulong)((plVar35[7] - plVar35[6] >> 4) * -0x5555555555555555)) {
                uVar28 = 3;
                do {
                  uVar24 = (uint)uVar28;
                  uVar28 = uVar28 + 1;
                  *(ulong *)(lVar15 + 0xd0) =
                       *(ulong *)(lVar15 + 0xd0) & (ulong)(uint)~(1 << (ulong)(uVar24 & 0x1f));
                  lVar15 = *(long *)(pcVar16 + uVar26 * 8);
                } while (uVar28 < (ulong)((plVar35[7] - plVar35[6] >> 4) * -0x5555555555555555));
              }
            }
          }
        }
        uVar24 = (uint)uVar26;
        uVar26 = uVar26 + 1;
        *(ulong *)(lVar15 + 0xd0) = (ulong)(*(uint *)(lVar15 + 0xd0) | 1 << (ulong)(uVar24 & 0x1f));
      } while (uVar26 < (ulong)((plVar35[7] - plVar35[6] >> 4) * -0x5555555555555555));
    }
    puVar32 = (undefined8 *)param_1[10];
    if (puVar32 < (undefined8 *)param_1[0xb]) {
      lVar25 = param_1[0xc];
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar15 != 0) {
        if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_011078f0;
        *(long *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = lVar25;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      }
      puVar32[4] = uVar31;
      puVar32[5] = uVar5;
      *(undefined4 *)(puVar32 + 6) = uVar11;
      *(undefined4 *)((long)puVar32 + 0x34) = uVar10;
      *puVar32 = pcVar16;
      puVar32[1] = pcVar37;
      puVar32[2] = local_1a0;
      puVar32[3] = plVar14;
      puVar32[7] = 0;
      puVar32[8] = 0;
      *(undefined1 *)(puVar32 + 9) = 1;
      if (lVar15 != 0) {
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
      }
      param_1[10] = (long)(puVar32 + 10);
    }
    else {
      uVar26 = param_1[0xd];
      lVar25 = (long)puVar32 - param_1[9] >> 4;
      if (0x7ffffffffffffffe < uVar26) {
        uVar26 = 0x7fffffffffffffff;
      }
      uVar28 = lVar25 * -0x3333333333333333 + 1;
      if (uVar26 < uVar28) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar15 = param_1[0xb] - param_1[9] >> 4;
      uVar30 = lVar15 * -0x6666666666666666;
      if (uVar28 <= uVar30) {
        uVar28 = uVar30;
      }
      if (uVar26 >> 1 <= (ulong)(lVar15 * -0x3333333333333333)) {
        uVar28 = uVar26;
      }
      if (uVar28 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = (**(code **)(*(long *)param_1[0xc] + 0x10))((long *)param_1[0xc],uVar28 * 0x50,8);
        if (lVar15 == 0) {
          (**(code **)(*(long *)param_1[0xc] + 0xe8))();
        }
      }
      lVar38 = param_1[0xc];
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar18 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar18 != 0) {
        if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_011078f0;
        *(long *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = lVar38;
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
      }
      lVar38 = lVar15 + lVar25 * 0x10;
      puVar32 = (undefined8 *)(lVar15 + lVar25 * 0x10);
      *(long **)(lVar38 + 0x18) = plVar14;
      *(undefined8 *)(lVar38 + 0x20) = uVar31;
      *(undefined8 *)(lVar38 + 0x28) = uVar5;
      *(undefined4 *)(lVar38 + 0x30) = uVar11;
      *(undefined4 *)(lVar38 + 0x34) = uVar10;
      *puVar32 = pcVar16;
      *(code **)(lVar38 + 8) = pcVar37;
      *(code **)(lVar38 + 0x10) = local_1a0;
      *(undefined8 *)(lVar38 + 0x38) = 0;
      *(undefined8 *)(lVar38 + 0x40) = 0;
      *(undefined1 *)(lVar38 + 0x48) = 1;
      if (lVar18 != 0) {
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
      }
      lVar25 = param_1[9];
      lVar38 = param_1[10];
      if (lVar38 == lVar25) {
        puVar27 = puVar32;
        lVar38 = lVar25;
      }
      else {
        lVar18 = 0;
        do {
          lVar36 = param_1[0xc];
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar19 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar19 != 0) {
            if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_011078f0;
            *(long *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = lVar36;
            *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
          }
          lVar36 = lVar38 + lVar18;
          *(undefined8 *)((long)puVar32 + lVar18 + -0x50) = 0;
          *(undefined8 *)((long)puVar32 + lVar18 + -0x48) = 0;
          *(undefined8 *)((long)puVar32 + lVar18 + -0x40) = 0;
          uVar31 = *(undefined8 *)(lVar36 + -0x38);
          uVar5 = *(undefined8 *)(lVar36 + -0x30);
          uVar6 = *(undefined8 *)(lVar36 + -0x20);
          *(undefined8 *)((long)puVar32 + lVar18 + -0x28) = *(undefined8 *)(lVar36 + -0x28);
          *(undefined8 *)((long)puVar32 + lVar18 + -0x20) = uVar6;
          *(undefined8 *)((long)puVar32 + lVar18 + -0x38) = uVar31;
          *(undefined8 *)((long)puVar32 + lVar18 + -0x30) = uVar5;
          *(undefined8 *)((long)puVar32 + lVar18 + -0x50) = *(undefined8 *)(lVar36 + -0x50);
          *(undefined8 *)((long)puVar32 + lVar18 + -0x48) = *(undefined8 *)(lVar36 + -0x48);
          *(undefined8 *)((long)puVar32 + lVar18 + -0x40) = *(undefined8 *)(lVar36 + -0x40);
          uVar31 = *(undefined8 *)(lVar36 + -0x18);
          *(undefined8 *)(lVar36 + -0x48) = 0;
          *(undefined8 *)(lVar36 + -0x40) = 0;
          *(undefined8 *)(lVar36 + -0x50) = 0;
          *(undefined8 *)(lVar36 + -0x18) = 0;
          *(undefined8 *)((long)puVar32 + lVar18 + -0x18) = uVar31;
          uVar31 = *(undefined8 *)(lVar36 + -0x10);
          *(undefined8 *)(lVar36 + -0x10) = 0;
          *(undefined8 *)((long)puVar32 + lVar18 + -0x10) = uVar31;
          *(undefined1 *)((long)puVar32 + lVar18 + -8) = *(undefined1 *)(lVar36 + -8);
          if (lVar19 != 0) {
            *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
          }
          lVar18 = lVar18 + -0x50;
        } while (lVar25 - lVar38 != lVar18);
        lVar25 = param_1[9];
        puVar27 = (undefined8 *)((long)puVar32 + lVar18);
        lVar38 = param_1[10];
      }
      lVar18 = param_1[0xb];
      param_1[9] = (long)puVar27;
      param_1[10] = (long)(puVar32 + 10);
      param_1[0xb] = lVar15 + uVar28 * 0x50;
      while (lVar38 != lVar25) {
        if (*(long **)(lVar38 + -0x10) != (long *)0x0) {
          (**(code **)(**(long **)(lVar38 + -0x10) + 0x18))();
        }
        plVar14 = *(long **)(lVar38 + -0x18);
        if (plVar14 != (long *)0x0) {
          plVar17 = plVar14 + 5;
          do {
            lVar15 = *plVar17;
            iVar12 = (int)lVar15 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar8) {
              *(int *)plVar17 = iVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
          else if ((int)lVar15 == 0) goto LAB_011078f4;
        }
        lVar38 = lVar38 + -0x50;
        FUN_00fa4d3c(lVar38);
      }
      if (lVar25 != 0) {
        plVar14 = (long *)param_1[0xc];
        uVar26 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar26 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar25,lVar18 - lVar25,8);
        }
        else {
          FUN_00c48fe8(plVar14,lVar25,lVar18 - lVar25,8);
        }
      }
    }
    plVar14 = plVar35 + 5;
    do {
      lVar25 = *plVar14;
      iVar12 = (int)lVar25 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *(int *)plVar14 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar35 + 0x10))(plVar35);
    }
    else if ((int)lVar25 == 0) {
LAB_011078f4:
      pcVar20 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar21 = "DecrementReferenceInternal";
      pcVar22 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar23 = "Reference counter underflows.";
LAB_01107914:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar20,pcVar21,pcVar22,0x58,pcVar23);
    }
    uVar34 = uVar34 + 1;
  }
  (**(code **)(*param_1 + 0x18))(&local_f0,param_1);
  local_180 = (undefined8 *)0x0;
  uStack_178 = 0;
  plVar35 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar35 = plVar33;
  }
  if (*(long **)(local_f0 + 0x10) == plVar35) {
    FUN_01107ffc(&local_180,&local_f0);
  }
  pcVar37 = local_f0;
  if (local_f0 != (code *)0x0) {
    pcVar16 = local_f0 + 0x18;
    do {
      sVar4 = *(short *)pcVar16;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
      if (bVar8) {
        *(short *)pcVar16 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      pcVar16 = local_f0 + 0x1c;
      do {
        iVar12 = *(int *)pcVar16;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
        if (bVar8) {
          *(int *)pcVar16 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_170 = *(code **)pcVar37;
        FUN_00c44438(lVar13 + 0x8040,&local_170);
      }
    }
    else if (sVar4 == 0) goto LAB_01107304;
  }
  local_170 = (code *)0x0;
  local_168 = (code *)0x0;
  local_160 = (code *)0x0;
  plStack_158 = (long *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  FUN_01107cd8(&local_150,&local_180);
  local_170 = (code *)&LAB_021396fc;
  local_168 = FUN_021399bc;
  local_160 = (code *)&LAB_014952d0;
  plStack_158 = (long *)&LAB_02139acc;
  uVar31 = *(undefined8 *)(lVar25 + 0x30);
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = (code *)0x0;
  local_d8 = (long *)0x0;
  local_f0 = (code *)0x0;
  local_e8 = (code *)0x0;
  FUN_014952e4(&local_d0,&local_150);
  local_f0 = local_170;
  local_e8 = local_168;
  local_e0 = local_160;
  local_d8 = plStack_158;
  FUN_01107b30(uVar31,&local_f0);
  pcVar37 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar37)(&local_d0);
  }
  pcVar37 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    plStack_158 = (long *)0x0;
    local_170 = (code *)0x0;
    local_168 = (code *)0x0;
    (*pcVar37)(&local_150);
  }
  puVar32 = local_180;
  if (local_180 != (undefined8 *)0x0) {
    psVar3 = (short *)(local_180 + 3);
    do {
      sVar4 = *psVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar8) {
        *psVar3 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar1 = (int *)((long)local_180 + 0x1c);
      do {
        iVar12 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_f0 = (code *)*puVar32;
        FUN_00c44438(lVar13 + 0x8040,&local_f0);
      }
    }
    else if (sVar4 == 0) {
LAB_01107304:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  plVar33 = (long *)param_1[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_011078f0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar33;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  plVar35 = (long *)(**(code **)(*plVar33 + 0x10))(plVar33,0x400,0x10);
  if (plVar35 == (long *)0x0) {
    (**(code **)(*plVar33 + 0xe8))(plVar33);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar14 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar14 = param_1 + 4;
  }
  FUN_00da2ea0(plVar35,*(undefined8 *)PTR_DAT_047d8d98,plVar14,1);
  puVar9 = PTR_DAT_047d8da0;
  plVar35[0x70] = 0;
  plVar35[0x71] = 0;
  plVar35[4] = (long)(puVar9 + 0xc0);
  plVar35[5] = (long)(puVar9 + 0x110);
  plVar35[0x72] = 0;
  plVar35[0x73] = 0;
  *plVar35 = (long)(puVar9 + 0x10);
  plVar35[1] = (long)plVar33;
  plVar35[2] = (long)plVar35;
  *(undefined4 *)(plVar35 + 3) = 0x100400;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  lVar13 = plVar35[6];
  plVar35[0x37] = plVar35[0x37] | 8;
  if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar3 = (short *)(lVar13 + 0x1a);
  do {
    sVar4 = *psVar3;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar8) {
      *psVar3 = sVar4 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar4 == 0) {
    uVar31 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
    *(undefined8 *)(lVar13 + 8) = uVar31;
    *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
  }
  else if (sVar4 == -1) {
    pcVar20 = "count != 0";
    pcVar21 = "AddReference";
    pcVar22 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar23 = "Reference counter overflows.";
    goto LAB_01107914;
  }
  pcVar37 = (code *)plVar35[0x71];
  if (pcVar37 != (code *)0x0) {
    plVar35[0x72] = 0;
    plVar35[0x73] = 0;
    plVar35[0x70] = 0;
    plVar35[0x71] = 0;
    (*pcVar37)(plVar35 + 0x74);
  }
  plVar35[0x70] = (long)&LAB_0105392c;
  plVar35[0x71] = (long)&LAB_02b2a728;
  plVar35[0x72] = (long)&LAB_02b2a72c;
  plVar35[0x73] = (long)&LAB_02b2a738;
  plVar35[0x74] = (long)param_1;
  (**(code **)(*plVar35 + 0x88))(plVar35,0);
  plVar33 = plVar35 + 0x3a;
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar33 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar8) {
      *plVar33 = lVar13;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_011071e0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar35 + 0x3b));
  do {
    if (*plVar33 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar35 + 0x3b));
        while (*plVar33 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar8) {
            *plVar33 = lVar13;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_011071e0;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar8) {
      *plVar33 = lVar13;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_011071e0:
  if (((*PTR_DAT_047d8d80 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar13 = *(long *)PTR_DAT_047d8d88;
  *(long *)PTR_DAT_047d8d90 = lVar13;
  FUN_00e220f4(plVar35,0,*(undefined8 *)(lVar13 + 0x28));
  plVar33 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar33 != (long *)0x0) {
    lVar13 = plVar33[6];
    psVar3 = (short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar8) {
        *psVar3 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar33 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0x14] = (long)plVar35;
  plVar35[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar35 + 0x3b));
  return;
}


