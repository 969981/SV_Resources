/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d79554; name: FUN_00d79554
 */


void FUN_00d79554(long param_1,long param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  plVar11 = (long *)(param_1 + 0x1d8);
  local_90 = param_2;
  lVar10 = nn::os::GetCurrentThread();
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
        while (*plVar11 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d7959c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *plVar11 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d7959c:
  plVar11 = *(long **)(param_1 + 0xf0);
  plVar4 = *(long **)(param_1 + 0xf8);
  if ((plVar11 != plVar4) && (*plVar11 != param_3)) {
    do {
      plVar11 = plVar11 + 1;
      if (plVar4 == plVar11) {
        plVar11 = plVar4;
        goto LAB_00d79604;
      }
    } while (*plVar11 != param_3);
  }
LAB_00d79604:
  if (plVar4 != plVar11) {
    uVar3 = *(ulong *)(param_1 + 0x1a8);
    puVar19 = (undefined8 *)(param_1 + 0x1b8);
    if (uVar3 < *(ulong *)(param_1 + 0x1b0)) {
      FUN_0219d700(puVar19,uVar3,&local_90);
      *(ulong *)(param_1 + 0x1a8) = uVar3 + 8;
    }
    else {
      uVar17 = *(ulong *)(param_1 + 0x1c0);
      lVar10 = (long)(uVar3 - *(long *)(param_1 + 0x1a0)) >> 3;
      uVar3 = lVar10 + 1;
      if (0x7ffffffffffffffe < uVar17) {
        uVar17 = 0x7fffffffffffffff;
      }
      if (uVar17 < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar14 = *(ulong *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a0);
      uVar15 = lVar14 >> 2;
      local_70 = 0;
      if (uVar3 <= uVar15) {
        uVar3 = uVar15;
      }
      if (uVar17 >> 1 <= (ulong)(lVar14 >> 3)) {
        uVar3 = uVar17;
      }
      puStack_68 = puVar19;
      if (uVar3 == 0) {
        local_88 = 0;
      }
      else {
        local_88 = (**(code **)(*(long *)*puVar19 + 0x10))((long *)*puVar19,uVar3 << 3,8);
        if (local_88 == 0) {
          (**(code **)(*(long *)*puVar19 + 0xe8))();
        }
      }
      lVar10 = local_88 + lVar10 * 8;
      lVar14 = local_88 + uVar3 * 8;
      local_80 = lVar10;
      local_70 = lVar14;
      FUN_0219d700(puVar19,lVar10,&local_90);
      puVar7 = PTR_LAB_047d3900;
      local_78 = lVar10 + 8;
      lVar16 = *(long *)(param_1 + 0x1a0);
      lVar21 = *(long *)(param_1 + 0x1a8);
      if (lVar21 == lVar16) {
        lVar21 = lVar16;
      }
      else {
        do {
          uVar13 = *puVar19;
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(puVar7,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar14 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar14 == 0) {
            uVar13 = *(undefined8 *)(lVar21 + -8);
            *(undefined8 *)(lVar21 + -8) = 0;
            *(undefined8 *)(lVar10 + -8) = uVar13;
          }
          else {
            if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar13;
            *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
            uVar13 = *(undefined8 *)(lVar21 + -8);
            *(undefined8 *)(lVar21 + -8) = 0;
            *(undefined8 *)(lVar10 + -8) = uVar13;
            *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
          }
          lVar21 = lVar21 + -8;
          lVar10 = local_80 + -8;
          local_80 = lVar10;
        } while (lVar16 != lVar21);
        lVar16 = *(long *)(param_1 + 0x1a0);
        lVar14 = local_70;
        lVar21 = *(long *)(param_1 + 0x1a8);
      }
      *(long *)(param_1 + 0x1a0) = lVar10;
      *(long *)(param_1 + 0x1a8) = local_78;
      local_70 = *(undefined8 *)(param_1 + 0x1b0);
      *(long *)(param_1 + 0x1b0) = lVar14;
      local_88 = lVar16;
      local_80 = lVar16;
      local_78 = lVar21;
      FUN_0219d5d4(&local_88);
    }
  }
  lVar10 = local_90;
  puVar19 = *(undefined8 **)(param_1 + 0x168);
  puVar18 = *(undefined8 **)(param_1 + 0x170);
  if ((puVar19 != puVar18) && (puVar19[1] != local_90)) {
    do {
      if (puVar18 + -2 == puVar19) {
        puVar19 = puVar18;
        goto LAB_00d7971c;
      }
      plVar11 = puVar19 + 3;
      puVar19 = puVar19 + 2;
    } while (*plVar11 != local_90);
  }
  if (puVar19 != puVar18) {
    puVar8 = puVar19 + 2;
    puVar20 = puVar19;
    if (puVar19 + 2 != puVar18) {
      do {
        puVar12 = puVar8;
        if (puVar20[3] != lVar10) {
          plVar11 = (long *)puVar19[1];
          *puVar19 = *puVar12;
          puVar19[1] = 0;
          if (plVar11 != (long *)0x0) {
            lVar14 = plVar11[6];
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*plVar11 + 0x50))();
            }
            else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          uVar13 = puVar20[3];
          puVar20[3] = 0;
          puVar19[1] = uVar13;
          puVar19 = puVar19 + 2;
        }
        puVar8 = puVar12 + 2;
        puVar20 = puVar12;
      } while (puVar12 + 2 != puVar18);
      puVar18 = *(undefined8 **)(param_1 + 0x170);
    }
  }
LAB_00d7971c:
  FUN_02b4e3d8(param_1 + 0x168,puVar19,puVar18);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1e0));
  return;
}


