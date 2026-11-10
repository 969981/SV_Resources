/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f3d8d0; name: FUN_00f3d8d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f3d8d0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  long *local_68;
  
  param_1[2] = 0;
  puVar6 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar14 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045d1648;
  param_1[1] = lVar14;
  param_1[4] = (long)&PTR_LAB_045d1680;
  param_1[6] = *param_2;
  param_1[7] = param_2[1];
  param_1[8] = param_2[2];
  plVar9 = (long *)param_2[3];
  param_1[9] = (long)plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
    lVar14 = param_1[1];
  }
  lVar5 = _UNK_03caa988;
  lVar8 = _DAT_03caa980;
  param_1[0x1b] = _UNK_03caa988;
  param_1[0x1a] = lVar8;
  lVar11 = _UNK_03cabe58;
  lVar15 = _DAT_03cabe50;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = lVar14;
  param_1[0x24] = lVar14;
  param_1[0x25] = 0x38e38e38e38e38e;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x2a] = 0x400000010;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x7f;
  param_1[0x18] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x2c] = (long)&DAT_cbf29ce484222645;
  param_1[0x2d] = (long)&DAT_03c886bc;
  param_1[0x30] = (long)&DAT_cbf29ce484222645;
  param_1[0x31] = (long)&DAT_03c886bc;
  param_1[0x1d] = lVar11;
  param_1[0x1c] = lVar15;
  lVar11 = _UNK_03cabf48;
  lVar15 = _DAT_03cabf40;
  param_1[0xe] = 0x1fffffffffffffff;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = lVar14;
  param_1[0x15] = 0x1fffffffffffffff;
  param_1[0x16] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x28] = lVar14;
  param_1[0x29] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = lVar14;
  param_1[0x3e] = 0x1fffffffffffffff;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x35] = lVar11;
  param_1[0x34] = lVar15;
  param_1[0x37] = lVar11;
  param_1[0x36] = lVar15;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
     (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) {
    lVar15 = tpidr_el0;
    lVar14 = *(long *)(lVar15 + 0x30);
    if (lVar14 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar14 = DAT_04859430;
      *(long *)(lVar15 + 0x30) = DAT_04859430;
    }
  }
  param_1[0x44] = lVar14;
  param_1[0x45] = 0x1fffffffffffffff;
  plVar9 = (long *)param_1[1];
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0x101;
  *(undefined4 *)((long)param_1 + 0x244) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x49) = 0x101;
  *(undefined1 *)((long)param_1 + 0x24a) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_00f3e1e8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar9;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x40,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar9 + 0xe8))(plVar9);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  *plVar10 = (long)(puVar6 + 0x10);
  plVar10[2] = 0;
  *(undefined4 *)(plVar10 + 3) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  nn::os::GetTlsValue(DAT_04865a30);
  plVar20 = plVar10 + 5;
  *(int *)plVar20 = 0;
  plVar10[4] = (long)&PTR_LAB_045d1740;
  plVar10[2] = (long)plVar10;
  *plVar10 = (long)&PTR_LAB_045d16b0;
  plVar10[1] = (long)plVar9;
  plVar10[6] = (long)&PTR_LAB_045d1770;
  plVar10[7] = (long)param_1;
  *(undefined4 *)(plVar10 + 3) = 0x80040;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  do {
    lVar14 = *plVar20;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar4) {
      *(int *)plVar20 = (int)lVar14 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((int)lVar14 != -1) {
    (**(code **)(*plVar10 + 0x28))(plVar10,param_1 + 6);
    if (param_1[0x11] != param_1[0x12]) {
      (**(code **)(*plVar10 + 0x30))(plVar10,param_1[0x12] + -8);
    }
    do {
      lVar14 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = (int)lVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_68 = plVar10;
    if ((int)lVar14 != -1) {
      if ((ulong)param_1[0x12] < (ulong)param_1[0x13]) {
        FUN_00f3e1fc(param_1 + 0x11,&local_68);
LAB_00f3dce8:
        if (local_68 != (long *)0x0) {
          plVar9 = local_68 + 5;
          do {
            lVar14 = *plVar9;
            iVar7 = (int)lVar14 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *(int *)plVar9 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
          else if ((int)lVar14 == 0) goto LAB_00f3dd7c;
        }
        do {
          lVar14 = *plVar20;
          iVar7 = (int)lVar14 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        else if ((int)lVar14 == 0) goto LAB_00f3dd7c;
        fVar21 = *(float *)(param_1 + 0x1a);
        fVar24 = *(float *)(param_1 + 0x1b);
        param_1[0x1b] = lVar5;
        param_1[0x1a] = lVar8;
        if ((char)param_1[0x49] == '\0') {
          fVar21 = (float)lVar8 - fVar21;
          fVar23 = (float)((ulong)lVar8 >> 0x20) - *(float *)((long)param_1 + 0xd4);
          fVar24 = (float)lVar5 - fVar24;
          fVar25 = (float)((ulong)lVar5 >> 0x20) - *(float *)((long)param_1 + 0xdc);
          fVar21 = fVar21 * fVar21;
          fVar23 = fVar23 * fVar23;
          fVar24 = fVar24 * fVar24;
          fVar25 = fVar25 * fVar25;
          auVar22._0_4_ = fVar21 + fVar23;
          auVar22._4_4_ = fVar24 + fVar25;
          auVar22._8_4_ = fVar21 + fVar23;
          auVar22._12_4_ = fVar24 + fVar25;
          auVar22 = NEON_ext(auVar22,auVar22,4,1);
          *(bool *)(param_1 + 0x49) = 1.1920929e-07 < auVar22._0_4_ + auVar22._4_4_;
        }
        return;
      }
      uVar17 = param_1[0x15];
      lVar14 = param_1[0x12] - param_1[0x11] >> 3;
      uVar13 = lVar14 + 1;
      if (0x7ffffffffffffffe < uVar17) {
        uVar17 = 0x7fffffffffffffff;
      }
      if (uVar17 < uVar13) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar15 = param_1[0x13] - param_1[0x11];
      uVar16 = lVar15 >> 2;
      if (uVar13 <= uVar16) {
        uVar13 = uVar16;
      }
      if (uVar17 >> 1 <= (ulong)(lVar15 >> 3)) {
        uVar13 = uVar17;
      }
      if (uVar13 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = (**(code **)(*(long *)param_1[0x14] + 0x10))((long *)param_1[0x14],uVar13 << 3,8);
        if (lVar15 == 0) {
          (**(code **)(*(long *)param_1[0x14] + 0xe8))();
        }
      }
      puVar2 = (undefined8 *)(lVar15 + lVar14 * 8);
      lVar14 = param_1[0x14];
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        *puVar2 = local_68;
      }
      else {
        if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00f3e1e8;
        *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar14;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        *puVar2 = local_68;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      }
      local_68 = (long *)0x0;
      plVar9 = (long *)param_1[0x11];
      plVar18 = (long *)param_1[0x12];
      puVar19 = puVar2;
      if (plVar18 == plVar9) {
        plVar18 = plVar9;
      }
      else {
        do {
          lVar14 = param_1[0x14];
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar11 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar11 == 0) {
            lVar14 = plVar18[-1];
            plVar18[-1] = 0;
            puVar19[-1] = lVar14;
          }
          else {
            if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00f3e1e8;
            *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar14;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
            lVar14 = plVar18[-1];
            plVar18[-1] = 0;
            puVar19[-1] = lVar14;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          }
          plVar18 = plVar18 + -1;
          puVar19 = puVar19 + -1;
        } while (plVar9 != plVar18);
        plVar9 = (long *)param_1[0x11];
        plVar18 = (long *)param_1[0x12];
      }
      lVar14 = param_1[0x13];
      param_1[0x11] = (long)puVar19;
      param_1[0x12] = (long)(puVar2 + 1);
      param_1[0x13] = lVar15 + uVar13 * 8;
      do {
        while( true ) {
          do {
            if (plVar18 == plVar9) {
              if (plVar9 != (long *)0x0) {
                plVar18 = (long *)param_1[0x14];
                uVar13 = (**(code **)(*plVar18 + 0xf8))(plVar18);
                if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar18 + 0x18))(plVar18,plVar9,lVar14 - (long)plVar9,8);
                }
                else {
                  FUN_00c48fe8(plVar18,plVar9,lVar14 - (long)plVar9,8);
                }
              }
              goto LAB_00f3dce8;
            }
            plVar18 = plVar18 + -1;
            plVar12 = (long *)*plVar18;
          } while (plVar12 == (long *)0x0);
          plVar1 = plVar12 + 5;
          do {
            lVar15 = *plVar1;
            iVar7 = (int)lVar15 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 != 0) break;
          (**(code **)(*plVar12 + 0x10))();
        }
      } while ((int)lVar15 != 0);
LAB_00f3dd7c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x53,"Reference counter overflows.");
}


