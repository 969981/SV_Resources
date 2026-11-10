/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017490c8; name: FUN_017490c8
 */


void FUN_017490c8(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  short *psVar5;
  short sVar6;
  undefined8 *puVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  int iVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  long *local_68;
  
  plVar23 = *(long **)(param_1 + 0x48);
  plVar24 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  while (plVar23 != plVar24) {
    plVar24 = plVar24 + -1;
    plVar12 = (long *)*plVar24;
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[6];
      psVar5 = (short *)(lVar13 + 0x1a);
      do {
        sVar6 = *psVar5;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar9) {
          *psVar5 = sVar6 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))();
      }
      else if (sVar6 == 0) {
LAB_01749140:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  *(long **)(param_1 + 0x50) = plVar23;
  if (0 < param_2) {
    puVar1 = PTR_DAT_047d66f8 + 0x10;
    iVar25 = 0;
    puVar2 = PTR_DAT_047dd330 + 0x10;
    do {
      plVar24 = *(long **)(param_1 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_01749814:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar24;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      plVar23 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x1c0,0x10);
      if (plVar23 == (long *)0x0) {
        (**(code **)(*plVar24 + 0xe8))(plVar24);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      *plVar23 = (long)puVar1;
      plVar23[2] = 0;
      *(undefined4 *)(plVar23 + 3) = 0;
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar14 = nn::os::GetTlsValue(DAT_04865a30);
      puVar10 = PTR_DAT_047d8c78;
      if (lVar14 == 0) {
        lVar20 = 0;
      }
      else {
        lVar20 = 0;
        if (*(long *)(lVar14 + 0x80) != 0) {
          lVar20 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8);
        }
      }
      puVar3 = PTR_DAT_047d8c78 + 0x88;
      *plVar23 = (long)(PTR_DAT_047d8c78 + 0x10);
      plVar23[1] = lVar20;
      plVar23[4] = (long)puVar3;
      plVar12 = plVar23 + 5;
      *plVar12 = (long)(puVar10 + 0xd8);
      plVar23[7] = 0;
      plVar23[6] = 0;
      FUN_00d1a3f4(plVar23 + 6,plVar12);
      plVar23[4] = (long)&PTR_LAB_045d0038;
      *plVar23 = (long)&PTR_FUN_045cffc0;
      *plVar12 = (long)&DAT_045d0088;
      plVar23[10] = 0;
      plVar23[0x11] = 0;
      *(undefined4 *)(plVar23 + 0x12) = 0;
      plVar23[0xb] = 0;
      plVar23[0xc] = 0;
      plVar23[0xd] = 0;
      plVar23[0xe] = 0;
      plVar23[0xf] = 0;
      plVar23[0x10] = 0;
      plVar23[8] = 0;
      plVar23[9] = (long)puVar2;
      plVar23[0x13] = (long)&DAT_cbf29ce484222645;
      plVar23[0x28] = 0;
      plVar23[0x29] = 0;
      plVar23[0x14] = (long)&DAT_03c886bc;
      plVar23[0x15] = 0;
      plVar23[0x2a] = 0;
      plVar23[0x2b] = 0;
      plVar23[0x1a] = 0;
      plVar23[0x1b] = 0;
      plVar23[0x18] = 0;
      plVar23[0x19] = 0;
      plVar23[0x16] = 0;
      plVar23[0x17] = 0;
      (*DAT_04859f60)(&local_68,&DAT_04859f80);
      if (local_68 != (long *)0x0) {
        plVar12 = local_68 + 5;
        do {
          lVar14 = *plVar12;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar9) {
            *(int *)plVar12 = (int)lVar14 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((int)lVar14 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar12 = (long *)plVar23[8];
      plVar23[8] = (long)local_68;
      if (plVar12 != (long *)0x0) {
        plVar4 = plVar12 + 5;
        do {
          lVar14 = *plVar4;
          iVar11 = (int)lVar14 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *(int *)plVar4 = iVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar14 == 0) {
          pcVar16 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar17 = "DecrementReferenceInternal";
          pcVar18 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          pcVar19 = "Reference counter underflows.";
          goto LAB_0174989c;
        }
      }
      if (local_68 != (long *)0x0) {
        plVar12 = local_68 + 5;
        do {
          lVar14 = *plVar12;
          iVar11 = (int)lVar14 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar9) {
            *(int *)plVar12 = iVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
        else if ((int)lVar14 == 0) {
          pcVar16 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar17 = "DecrementReferenceInternal";
          pcVar18 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          pcVar19 = "Reference counter underflows.";
          goto LAB_0174989c;
        }
      }
      *(undefined4 *)(plVar23 + 3) = 0x1001c0;
      plVar23[1] = (long)plVar24;
      plVar23[2] = (long)plVar23;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      lVar13 = plVar23[6];
      if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar5 = (short *)(lVar13 + 0x1a);
      do {
        sVar6 = *psVar5;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar9) {
          *psVar5 = sVar6 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar6 == 0) {
        uVar26 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar26;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar6 == -1) {
        pcVar16 = "count != 0";
        pcVar17 = "AddReference";
        pcVar18 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar19 = "Reference counter overflows.";
LAB_0174989c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar16,pcVar17,pcVar18,0x58,pcVar19);
      }
      puVar7 = *(undefined8 **)(param_1 + 0x50);
      if (puVar7 < *(undefined8 **)(param_1 + 0x58)) {
        uVar26 = *(undefined8 *)(param_1 + 0x60);
        if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          *puVar7 = plVar23;
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01749814;
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar26;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          *puVar7 = plVar23;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        *(undefined8 **)(param_1 + 0x50) = puVar7 + 1;
      }
      else {
        uVar22 = *(ulong *)(param_1 + 0x68);
        lVar13 = (long)puVar7 - *(long *)(param_1 + 0x48) >> 3;
        uVar15 = lVar13 + 1;
        if (0x7ffffffffffffffe < uVar22) {
          uVar22 = 0x7fffffffffffffff;
        }
        if (uVar22 < uVar15) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar14 = (long)*(undefined8 **)(param_1 + 0x58) - *(long *)(param_1 + 0x48);
        uVar21 = lVar14 >> 2;
        if (uVar15 <= uVar21) {
          uVar15 = uVar21;
        }
        if (uVar22 >> 1 <= (ulong)(lVar14 >> 3)) {
          uVar15 = uVar22;
        }
        if (uVar15 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                             (*(long **)(param_1 + 0x60),uVar15 << 3,8);
          if (lVar14 == 0) {
            (**(code **)(**(long **)(param_1 + 0x60) + 0xe8))();
          }
        }
        puVar7 = (undefined8 *)(lVar14 + lVar13 * 8);
        uVar26 = *(undefined8 *)(param_1 + 0x60);
        if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          *puVar7 = plVar23;
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01749814;
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar26;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          *puVar7 = plVar23;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        plVar24 = *(long **)(param_1 + 0x48);
        plVar23 = *(long **)(param_1 + 0x50);
        puVar27 = puVar7;
        if (plVar23 == plVar24) {
          plVar23 = plVar24;
        }
        else {
          do {
            uVar26 = *(undefined8 *)(param_1 + 0x60);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar13 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar13 == 0) {
              lVar13 = plVar23[-1];
              plVar23[-1] = 0;
              puVar27[-1] = lVar13;
            }
            else {
              if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01749814;
              *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar26;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
              lVar20 = plVar23[-1];
              plVar23[-1] = 0;
              puVar27[-1] = lVar20;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
            }
            plVar23 = plVar23 + -1;
            puVar27 = puVar27 + -1;
          } while (plVar24 != plVar23);
          plVar24 = *(long **)(param_1 + 0x50);
          plVar23 = *(long **)(param_1 + 0x48);
        }
        lVar13 = *(long *)(param_1 + 0x58);
        *(undefined8 **)(param_1 + 0x48) = puVar27;
        *(undefined8 **)(param_1 + 0x50) = puVar7 + 1;
        *(ulong *)(param_1 + 0x58) = lVar14 + uVar15 * 8;
        while (plVar24 != plVar23) {
          plVar24 = plVar24 + -1;
          plVar12 = (long *)*plVar24;
          if (plVar12 != (long *)0x0) {
            lVar14 = plVar12[6];
            psVar5 = (short *)(lVar14 + 0x1a);
            do {
              sVar6 = *psVar5;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar9) {
                *psVar5 = sVar6 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (sVar6 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*plVar12 + 0x50))();
            }
            else if (sVar6 == 0) goto LAB_01749140;
          }
        }
        if (plVar23 != (long *)0x0) {
          plVar24 = *(long **)(param_1 + 0x60);
          lVar13 = lVar13 - (long)plVar23;
          uVar15 = (**(code **)(*plVar24 + 0xf8))(plVar24);
          if (((uVar15 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
            (**(code **)(*plVar24 + 0x18))(plVar24,plVar23,lVar13,8);
          }
          else {
            FUN_00c48fe8(plVar24,plVar23,lVar13,8);
          }
        }
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 != param_2);
  }
  return;
}


