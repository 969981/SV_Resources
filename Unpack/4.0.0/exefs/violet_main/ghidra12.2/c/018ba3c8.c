/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ba3c8; name: FUN_018ba3c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018ba3c8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  short *psVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  short sVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  long lVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *local_80 [3];
  long *local_68;
  
  lVar14 = _UNK_03cac228;
  lVar13 = _DAT_03cac220;
  lVar12 = _UNK_03cabe68;
  lVar11 = _DAT_03cabe60;
  lVar10 = DAT_03cab628;
  lVar9 = DAT_03cab620;
  lVar8 = _UNK_03caa5b8;
  lVar27 = _DAT_03caa5b0;
  plVar24 = (long *)*param_2;
  plVar26 = (long *)param_2[1];
  if (plVar24 != plVar26) {
    puVar1 = PTR_DAT_047d66f8 + 0x10;
    puVar2 = (undefined8 *)(param_1 + 0x88);
    do {
      if (0 < (int)((ulong)(*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70)) >> 3)) {
        uVar28 = 0;
LAB_018ba470:
        FUN_014e26c4(local_80,param_1,uVar28 & 0xffffffff);
        plVar30 = local_80[0];
        plVar29 = (long *)*plVar24;
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (plVar30 != plVar29) goto code_r0x018ba498;
        if (((int)((ulong)(*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70)) >> 3) <=
             (int)uVar28) ||
           (plVar30 = *(long **)(*(long *)(param_1 + 0x70) + uVar28 * 8), plVar30 == (long *)0x0))
        goto LAB_018ba8ec;
        lVar17 = plVar30[6];
        if (*(long *)(lVar17 + 0x10) != 0) {
          psVar4 = (short *)(lVar17 + 0x1a);
          do {
            sVar23 = *psVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar6) {
              *psVar4 = sVar23 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar23 == 0) {
            uVar20 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
            *(undefined8 *)(lVar17 + 8) = uVar20;
            *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
          }
          else if (sVar23 == -1) goto LAB_018bafb8;
          goto LAB_018ba8b8;
        }
        goto LAB_018baf98;
      }
LAB_018ba4b0:
      plVar30 = *(long **)(param_1 + 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar17 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar30;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
      plVar29 = (long *)(**(code **)(*plVar30 + 0x10))(plVar30,0x270,0x10);
      if (plVar29 == (long *)0x0) {
        (**(code **)(*plVar30 + 0xe8))(plVar30);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      *plVar29 = (long)puVar1;
      plVar29[2] = 0;
      *(undefined4 *)(plVar29 + 3) = 0;
      if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar18 = nn::os::GetTlsValue(DAT_04865a30);
      puVar15 = PTR_DAT_047d8c78;
      if (lVar18 == 0) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        if (*(long *)(lVar18 + 0x80) != 0) {
          lVar21 = *(long *)(lVar18 + *(long *)(lVar18 + 0x80) * 8 + -8);
        }
      }
      puVar3 = PTR_DAT_047d8c78 + 0x88;
      *plVar29 = (long)(PTR_DAT_047d8c78 + 0x10);
      plVar29[1] = lVar21;
      plVar29[4] = (long)puVar3;
      plVar31 = plVar29 + 5;
      *plVar31 = (long)(puVar15 + 0xd8);
      plVar29[7] = 0;
      plVar29[6] = 0;
      FUN_00d1a3f4(plVar29 + 6,plVar31);
      *plVar29 = (long)&DAT_04603b68;
      plVar29[4] = (long)&PTR_LAB_04603be0;
      *plVar31 = (long)&DAT_04603c30;
      *(undefined1 *)(plVar29 + 0xc) = 0;
      *(undefined1 *)(plVar29 + 0x19) = 0;
      plVar29[8] = (long)&DAT_cbf29ce484222645;
      plVar29[9] = (long)&DAT_03c886bc;
      plVar29[10] = 0;
      plVar29[0xb] = 0;
      *(undefined8 *)((long)plVar29 + 0xcc) = 0x40490fdb40490fdb;
      *(undefined8 *)((long)plVar29 + 0xd4) = 0x40490fdb40490fdb;
      *(undefined4 *)((long)plVar29 + 0xdc) = 0;
      *(undefined1 *)(plVar29 + 0x1c) = 0;
      *(undefined8 *)((long)plVar29 + 0xe4) = 0x40490fdb40490fdb;
      *(undefined4 *)(plVar29 + 0x21) = 0x3f800000;
      *(undefined1 *)(plVar29 + 0x22) = 0;
      *(undefined4 *)((long)plVar29 + 0x114) = 0x3f800000;
      *(undefined1 *)(plVar29 + 0x2a) = 0;
      plVar29[0xd] = (long)&DAT_cbf29ce484222645;
      plVar29[0xe] = (long)&DAT_03c886bc;
      plVar29[0xf] = 0;
      plVar29[0x10] = 0;
      plVar29[0x11] = (long)&DAT_cbf29ce484222645;
      plVar29[0x12] = (long)&DAT_03c886bc;
      plVar29[0x13] = 0;
      plVar29[0x14] = 0;
      plVar29[0x15] = (long)&DAT_cbf29ce484222645;
      plVar29[0x16] = (long)&DAT_03c886bc;
      plVar29[0x20] = 0x3f80000000000000;
      plVar29[0x17] = 0;
      plVar29[0x18] = 0;
      plVar29[0x1f] = lVar14;
      plVar29[0x1e] = lVar13;
      plVar29[0x25] = lVar12;
      plVar29[0x24] = lVar11;
      plVar29[0x27] = lVar10;
      plVar29[0x26] = lVar9;
      plVar29[0x29] = lVar8;
      plVar29[0x28] = lVar27;
      *(undefined8 *)((long)plVar29 + 0x154) = 0x40490fdb40490fdb;
      *(undefined8 *)((long)plVar29 + 0x15c) = 0x40490fdb40490fdb;
      plVar29[0x37] = 0x53a83126f;
      *(undefined4 *)(plVar29 + 0x3a) = 0xffffffff;
      *(undefined1 *)(plVar29 + 0x2e) = 0;
      *(undefined4 *)((long)plVar29 + 0x174) = 0x3f800000;
      *(undefined1 *)(plVar29 + 0x38) = 0;
      *(undefined2 *)((long)plVar29 + 0x1d4) = 0xffff;
      plVar29[0x40] = 0;
      plVar29[0x2f] = (long)&DAT_cbf29ce484222645;
      plVar29[0x30] = (long)&DAT_03c886bc;
      plVar29[0x31] = 0;
      plVar29[0x32] = 0;
      plVar29[0x33] = (long)&DAT_cbf29ce484222645;
      plVar29[0x34] = (long)&DAT_03c886bc;
      plVar29[0x35] = 0;
      plVar29[0x36] = 0;
      plVar29[0x3d] = lVar8;
      plVar29[0x3c] = lVar27;
      plVar29[0x3e] = 0;
      plVar29[0x3f] = 0;
      if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar21 = nn::os::GetTlsValue(DAT_04865a30);
      lVar18 = tpidr_el0;
      if ((((lVar21 == 0) || (*(long *)(lVar21 + 0x80) == 0)) ||
          (lVar21 = *(long *)(lVar21 + *(long *)(lVar21 + 0x80) * 8 + -8), lVar21 == 0)) &&
         (lVar21 = *(long *)(lVar18 + 0x30), lVar21 == 0)) {
        if (((DAT_04859438 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04859438), iVar16 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        lVar21 = DAT_04859430;
        *(long *)(lVar18 + 0x30) = DAT_04859430;
      }
      plVar29[0x43] = 0;
      *(undefined4 *)(plVar29 + 0x44) = 0;
      plVar29[0x41] = lVar21;
      plVar29[0x42] = 0x7fffffffffffffff;
      plVar29[0x45] = 0;
      plVar29[0x46] = 0;
      plVar29[0x47] = 0;
      if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar21 = nn::os::GetTlsValue(DAT_04865a30);
      if ((((lVar21 == 0) || (*(long *)(lVar21 + 0x80) == 0)) ||
          (lVar21 = *(long *)(lVar21 + *(long *)(lVar21 + 0x80) * 8 + -8), lVar21 == 0)) &&
         (lVar21 = *(long *)(lVar18 + 0x30), lVar21 == 0)) {
        if (((DAT_04859438 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04859438), iVar16 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        lVar21 = DAT_04859430;
        *(long *)(lVar18 + 0x30) = DAT_04859430;
      }
      plVar29[0x48] = lVar21;
      plVar29[0x4a] = 0;
      *(undefined4 *)(plVar29 + 0x4b) = 0;
      plVar29[0x49] = 0x2aaaaaaaaaaaaaa;
      plVar29[0x4d] = 0;
      plVar29[0x4c] = 0;
      plVar29[8] = *plVar24;
      plVar29[9] = plVar24[1];
      plVar29[10] = plVar24[2];
      plVar31 = (long *)plVar24[3];
      if (plVar31 != (long *)0x0) {
        (**(code **)(*plVar31 + 0x18))(plVar31);
      }
      plVar19 = (long *)plVar29[0xb];
      plVar29[0xb] = (long)plVar31;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))();
      }
      *(undefined4 *)(plVar29 + 3) = 0x100270;
      plVar29[1] = (long)plVar30;
      plVar29[2] = (long)plVar29;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
      lVar17 = plVar29[6];
      local_80[0] = plVar29;
      if (*(long *)(lVar17 + 0x10) == 0) {
LAB_018baf98:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar4 = (short *)(lVar17 + 0x1a);
      do {
        sVar23 = *psVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar6) {
          *psVar4 = sVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar23 == 0) {
        uVar20 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        *(undefined8 *)(lVar17 + 8) = uVar20;
        *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
      }
      else if (sVar23 == -1) {
LAB_018bafb8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      uVar28 = *(ulong *)(param_1 + 0x78);
      if (uVar28 < *(ulong *)(param_1 + 0x80)) {
        FUN_018bb164(puVar2,uVar28,local_80);
        *(ulong *)(param_1 + 0x78) = uVar28 + 8;
      }
      else {
        uVar25 = *(ulong *)(param_1 + 0x90);
        lVar17 = (long)(uVar28 - *(long *)(param_1 + 0x70)) >> 3;
        uVar28 = lVar17 + 1;
        if (0x7ffffffffffffffe < uVar25) {
          uVar25 = 0x7fffffffffffffff;
        }
        if (uVar25 < uVar28) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar18 = *(ulong *)(param_1 + 0x80) - *(long *)(param_1 + 0x70);
        uVar22 = lVar18 >> 2;
        if (uVar28 <= uVar22) {
          uVar28 = uVar22;
        }
        if (uVar25 >> 1 <= (ulong)(lVar18 >> 3)) {
          uVar28 = uVar25;
        }
        if (uVar28 == 0) {
          lVar18 = 0;
        }
        else {
          lVar18 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar28 << 3,8);
          if (lVar18 == 0) {
            (**(code **)(*(long *)*puVar2 + 0xe8))();
          }
        }
        lVar21 = lVar18 + lVar17 * 8;
        FUN_018bb164(puVar2,lVar21,local_80);
        plVar30 = *(long **)(param_1 + 0x70);
        plVar29 = *(long **)(param_1 + 0x78);
        lVar17 = lVar21 + 8;
        if (plVar29 == plVar30) {
          plVar29 = plVar30;
        }
        else {
          do {
            lVar21 = lVar21 + -8;
            plVar29 = plVar29 + -1;
            FUN_018bb418(puVar2,lVar21,plVar29);
          } while (plVar30 != plVar29);
          plVar30 = *(long **)(param_1 + 0x70);
          plVar29 = *(long **)(param_1 + 0x78);
        }
        *(long *)(param_1 + 0x70) = lVar21;
        *(long *)(param_1 + 0x78) = lVar17;
        lVar17 = *(long *)(param_1 + 0x80);
        *(ulong *)(param_1 + 0x80) = lVar18 + uVar28 * 8;
        while (plVar29 != plVar30) {
          plVar29 = plVar29 + -1;
          plVar31 = (long *)*plVar29;
          if (plVar31 != (long *)0x0) {
            lVar18 = plVar31[6];
            psVar4 = (short *)(lVar18 + 0x1a);
            do {
              sVar23 = *psVar4;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar4,0x10);
              if (bVar6) {
                *psVar4 = sVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar23 == 1) {
              *(undefined8 *)(lVar18 + 0x10) = 0;
              (**(code **)(*plVar31 + 0x50))();
            }
            else if (sVar23 == 0) goto LAB_018baf70;
          }
        }
        if (plVar30 != (long *)0x0) {
          plVar29 = (long *)*puVar2;
          lVar17 = lVar17 - (long)plVar30;
          uVar28 = (**(code **)(*plVar29 + 0xf8))(plVar29);
          if (((uVar28 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
            (**(code **)(*plVar29 + 0x18))(plVar29,plVar30,lVar17,8);
          }
          else {
            FUN_00c48fe8(plVar29,plVar30,lVar17,8);
          }
        }
      }
      plVar30 = local_80[0];
      if (local_80[0] != (long *)0x0) {
LAB_018ba8b8:
        FUN_018bb4fc(plVar30,plVar24,param_1 + 0x68);
        lVar17 = plVar30[6];
        psVar4 = (short *)(lVar17 + 0x1a);
        do {
          sVar23 = *psVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar4,0x10);
          if (bVar6) {
            *psVar4 = sVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar23 == 1) {
          *(undefined8 *)(lVar17 + 0x10) = 0;
          (**(code **)(*plVar30 + 0x50))(plVar30);
        }
        else if (sVar23 == 0) {
LAB_018baf70:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
LAB_018ba8ec:
      plVar24 = plVar24 + 0x32;
    } while (plVar24 != plVar26);
  }
  FUN_018bb2dc(param_1);
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(*(long *)(param_1 + 0xb0) + 0x40) = *(undefined1 *)((long)param_2 + 0x3c);
  *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x44) = *(undefined4 *)(param_2 + 8);
  lVar27 = *(long *)(param_1 + 0xb8);
  if (lVar27 != 0) {
    (*(code *)**(undefined8 **)(lVar27 + 0x28))((undefined8 *)(lVar27 + 0x28));
    uVar28 = FUN_018bb0c0();
    if ((uVar28 & 1) != 0) {
      *(undefined1 *)(lVar27 + 0x40) = *(undefined1 *)((long)param_2 + 0x44);
      *(undefined4 *)(lVar27 + 0x44) = *(undefined4 *)(param_2 + 9);
      *(undefined1 *)(lVar27 + 0x48) = *(undefined1 *)((long)param_2 + 0x4c);
      *(undefined4 *)(lVar27 + 0x4c) = *(undefined4 *)(param_2 + 10);
    }
  }
  lVar27 = *(long *)(param_1 + 0x68);
  plVar24 = *(long **)(lVar27 + 0x30);
  if (plVar24 != *(long **)(lVar27 + 0x38)) {
LAB_018baa6c:
    uVar28 = *(ulong *)(*plVar24 + 0x40);
    if (uVar28 != 0) {
      uVar25 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar22 = uVar28 - 1 & 0x94aeaab4737159ef;
      }
      else {
        uVar22 = 0x94aeaab4737159ef;
        if (uVar28 < 0x94aeaab4737159f0) {
          uVar22 = 0;
          if (uVar28 != 0) {
            uVar22 = 0x94aeaab4737159ef / uVar28;
          }
          uVar22 = 0x94aeaab4737159ef - uVar22 * uVar28;
        }
      }
      plVar26 = *(long **)(*(long *)(*plVar24 + 0x38) + uVar22 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar26[1] == 0x94aeaab4737159ef) {
              if (plVar26[2] == -0x6b51554b8c8ea611) goto LAB_018bab60;
            }
            else if ((plVar26[1] & uVar28 - 1) != uVar22) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar26[1];
            if (uVar25 == 0x94aeaab4737159ef) {
              if (plVar26[2] == -0x6b51554b8c8ea611) goto LAB_018bab60;
            }
            else {
              if (uVar28 <= uVar25) {
                uVar7 = 0;
                if (uVar28 != 0) {
                  uVar7 = uVar25 / uVar28;
                }
                uVar25 = uVar25 - uVar7 * uVar28;
              }
              if (uVar25 != uVar22) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_018bab68;
  }
LAB_018bab74:
  sVar23 = -1;
LAB_018bab78:
  *(short *)(param_1 + 0xc0) = sVar23;
  plVar24 = *(long **)(lVar27 + 0x30);
joined_r0x018bab84:
  if (plVar24 != *(long **)(lVar27 + 0x38)) {
    uVar28 = *(ulong *)(*plVar24 + 0x40);
    if (uVar28 != 0) {
      uVar25 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar22 = uVar28 - 1 & 0xb4b2bc636c111d23;
      }
      else {
        uVar22 = 0xb4b2bc636c111d23;
        if (uVar28 < 0xb4b2bc636c111d24) {
          uVar22 = 0;
          if (uVar28 != 0) {
            uVar22 = 0xb4b2bc636c111d23 / uVar28;
          }
          uVar22 = 0xb4b2bc636c111d23 - uVar22 * uVar28;
        }
      }
      plVar26 = *(long **)(*(long *)(*plVar24 + 0x38) + uVar22 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar26[1] == 0xb4b2bc636c111d23) {
              if (plVar26[2] == -0x4b4d439c93eee2dd) goto LAB_018bac90;
            }
            else if ((plVar26[1] & uVar28 - 1) != uVar22) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar26[1];
            if (uVar25 == 0xb4b2bc636c111d23) {
              if (plVar26[2] == -0x4b4d439c93eee2dd) goto LAB_018bac90;
            }
            else {
              if (uVar28 <= uVar25) {
                uVar7 = 0;
                if (uVar28 != 0) {
                  uVar7 = uVar25 / uVar28;
                }
                uVar25 = uVar25 - uVar7 * uVar28;
              }
              if (uVar25 != uVar22) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_018bac98;
  }
  sVar23 = -1;
LAB_018baca8:
  *(short *)(param_1 + 0xc2) = sVar23;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)((long)param_2 + 0x54);
  return;
code_r0x018ba498:
  uVar28 = uVar28 + 1;
  if ((int)((ulong)(*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70)) >> 3) <= (int)uVar28)
  goto LAB_018ba4b0;
  goto LAB_018ba470;
LAB_018bab60:
  if (-1 < (short)plVar26[6]) {
    sVar23 = *(short *)((long)plVar24 + 10) + (short)plVar26[6];
    goto LAB_018bab78;
  }
LAB_018bab68:
  plVar24 = plVar24 + 2;
  if (plVar24 == *(long **)(lVar27 + 0x38)) goto LAB_018bab74;
  goto LAB_018baa6c;
LAB_018bac90:
  if (-1 < (short)plVar26[6]) {
    sVar23 = *(short *)((long)plVar24 + 10) + (short)plVar26[6];
    goto LAB_018baca8;
  }
LAB_018bac98:
  plVar24 = plVar24 + 2;
  goto joined_r0x018bab84;
}


