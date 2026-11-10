/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0169c034; name: FUN_0169c034
 */


void FUN_0169c034(long param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 local_68;
  
  plVar25 = (long *)(param_1 + 0x30);
  lVar20 = *plVar25;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar20) {
    lVar11 = nn::os::GetCurrentThread();
LAB_0169c07c:
    if (*plVar25 == 0) goto code_r0x0169c084;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
    do {
      if (*plVar25 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
          while (*plVar25 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar7) {
              *plVar25 = lVar11;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0169c08c;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar7) {
        *plVar25 = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0169c08c:
    bVar7 = false;
    goto LAB_0169c090;
  }
  plVar25 = (long *)0x0;
  bVar7 = true;
LAB_0169c090:
  puVar23 = *(undefined8 **)(param_1 + 0x50);
  if (puVar23 < *(undefined8 **)(param_1 + 0x58)) {
    uVar22 = *(undefined8 *)(param_1 + 0x60);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_0169c5ec:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar22;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    *puVar23 = 0;
    puVar23[1] = 0;
    FUN_00ca1a48(puVar23,param_2);
    *(byte *)(puVar23 + 2) = param_3 & 1;
    *(undefined1 *)((long)puVar23 + 0x11) = 0;
    *(undefined4 *)(puVar23 + 4) = 0;
    puVar23[10] = 0;
    puVar23[0xb] = 0;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x50) = puVar23 + 0x18;
  }
  else {
    uVar16 = *(ulong *)(param_1 + 0x68);
    lVar11 = (long)puVar23 - *(long *)(param_1 + 0x48) >> 6;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    uVar1 = lVar11 * -0x5555555555555555 + 1;
    if (uVar16 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar20 = (long)*(undefined8 **)(param_1 + 0x58) - *(long *)(param_1 + 0x48) >> 6;
    uVar15 = lVar20 * 0x5555555555555556;
    if (uVar1 <= uVar15) {
      uVar1 = uVar15;
    }
    if (uVar16 >> 1 <= (ulong)(lVar20 * -0x5555555555555555)) {
      uVar1 = uVar16;
    }
    if (uVar1 == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                         (*(long **)(param_1 + 0x60),uVar1 * 0xc0,0x10);
      if (lVar20 == 0) {
        (**(code **)(**(long **)(param_1 + 0x60) + 0xe8))();
      }
    }
    uVar22 = *(undefined8 *)(param_1 + 0x60);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 != 0) {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0169c5ec;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar22;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    }
    puVar23 = (undefined8 *)(lVar20 + lVar11 * 0x40);
    *puVar23 = 0;
    puVar23[1] = 0;
    FUN_00ca1a48(puVar23,param_2);
    lVar13 = lVar20 + lVar11 * 0x40;
    *(byte *)(lVar13 + 0x10) = param_3 & 1;
    *(undefined1 *)(lVar13 + 0x11) = 0;
    *(undefined4 *)(lVar13 + 0x20) = 0;
    *(undefined8 *)(lVar13 + 0x50) = 0;
    *(undefined8 *)(lVar13 + 0x58) = 0;
    if (lVar12 != 0) {
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    puVar19 = *(undefined8 **)(param_1 + 0x48);
    if (*(undefined8 **)(param_1 + 0x50) == puVar19) {
      puVar14 = puVar23;
      puVar26 = puVar19;
    }
    else {
      puVar24 = *(undefined8 **)(param_1 + 0x50);
      puVar26 = (undefined8 *)(lVar20 + lVar11 * 0x40);
      do {
        puVar14 = puVar26 + -0x18;
        uVar22 = *(undefined8 *)(param_1 + 0x60);
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        puVar21 = puVar24 + -0x18;
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar11 == 0) {
          *puVar14 = 0;
          puVar26[-0x17] = 0;
          FUN_00ca1ea4(puVar14,puVar21);
          memcpy(puVar26 + -0x16,puVar24 + -0x16,0xb0);
        }
        else {
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_0169c5ec;
          *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar22;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          *puVar14 = 0;
          puVar26[-0x17] = 0;
          FUN_00ca1ea4(puVar14,puVar21);
          memcpy(puVar26 + -0x16,puVar24 + -0x16,0xb0);
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        puVar24 = puVar21;
        puVar26 = puVar14;
      } while (puVar19 != puVar21);
      puVar19 = *(undefined8 **)(param_1 + 0x48);
      puVar26 = *(undefined8 **)(param_1 + 0x50);
    }
    lVar11 = *(long *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = lVar20 + uVar1 * 0xc0;
    *(undefined8 **)(param_1 + 0x48) = puVar14;
    *(undefined8 **)(param_1 + 0x50) = puVar23 + 0x18;
    puVar9 = PTR_DAT_047d3918;
    puVar8 = PTR_DAT_047d3910;
    if (puVar26 != puVar19) {
      pbVar17 = PTR_DAT_047d3908;
      do {
        puVar26 = puVar26 + -0x18;
        puVar23 = (undefined8 *)*puVar26;
        if (puVar23 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar23 + 3);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)puVar23 + 0x1c);
            do {
              iVar10 = *piVar3;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar5) {
                *piVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != -1) {
              if (((*pbVar17 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar20 = *(long *)puVar8;
              *(long *)puVar9 = lVar20;
              local_68 = *puVar23;
              FUN_00c44438(lVar20 + 0x8040,&local_68);
              pbVar17 = PTR_DAT_047d3908;
            }
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      } while (puVar26 != puVar19);
    }
    if (puVar19 != (undefined8 *)0x0) {
      plVar18 = *(long **)(param_1 + 0x60);
      lVar11 = lVar11 - (long)puVar19;
      uVar16 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar16 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,puVar19,lVar11,0x10);
      }
      else {
        FUN_00c48fe8(plVar18,puVar19,lVar11,0x10);
      }
    }
  }
  if (!bVar7) {
    *plVar25 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar25 + 1));
  }
  return;
code_r0x0169c084:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
  if (bVar7) {
    *plVar25 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0169c08c;
  goto LAB_0169c07c;
}


