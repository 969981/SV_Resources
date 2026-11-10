/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010407a8; name: FUN_010407a8
 */


void FUN_010407a8(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  long local_80;
  long local_78;
  long local_70;
  long *local_68;
  
  puVar1 = PTR_DAT_047d3e30;
  if (*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) == 8) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)puVar1;
    *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(puVar1 + 8);
    plVar11 = *(long **)(puVar1 + 0x18);
    *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(puVar1 + 0x10);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    plVar12 = *(long **)(param_1 + 0x3d0);
    *(long **)(param_1 + 0x3d0) = plVar11;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  lVar14 = *(long *)(param_1 + 0x518);
  if (lVar14 != 0) {
    plVar11 = (long *)(lVar14 + 0x158);
    lVar10 = nn::os::GetCurrentThread();
LAB_010407fc:
    if (*plVar11 == 0) goto code_r0x01040804;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x160));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x160));
          while (*plVar11 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = lVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_0104080c;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0104080c:
    *(undefined1 *)(lVar14 + 0x249) = 1;
    *(undefined8 *)(lVar14 + 0x158) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x160));
  }
  if (*(long *)(param_1 + 0x498) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x498) + 0x2e0) = 1;
    for (lVar14 = *param_2; lVar14 != param_2[1]; lVar14 = lVar14 + 0x10) {
      if (*(char *)(lVar14 + 0xc) != '\0') goto LAB_01040af8;
    }
    *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_1 + 0x590);
    FUN_01043348(param_1 + 0x590,*(undefined8 *)(*(long *)(param_1 + 0x498) + 0x250));
    lVar14 = *(long *)(param_1 + 0x498);
    if (*(long *)(lVar14 + 0x250) != 0) {
      uVar18 = 0;
      iVar9 = 1;
LAB_010408c4:
      plVar11 = *(long **)(lVar14 + 0x228);
      if (plVar11 != (long *)0x0) {
        plVar12 = plVar11;
        iVar8 = iVar9;
        do {
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) {
            lVar10 = plVar12[2];
            if (lVar10 < 0x9f348a9a6a8de1a) {
              if (lVar10 < -0x3b859442ba6778b2) {
                if ((lVar10 == -0x5ded90f6941543fc) || (lVar10 == -0x779d955d28406c6c))
                goto LAB_01040a5c;
                lVar13 = -0x6f9e0d57cd0e555e;
              }
              else {
                if ((lVar10 == -0x29c9cc6699211de6) || (lVar10 == -0x1b7d854a7b351234))
                goto LAB_01040a5c;
                lVar13 = -0x3b859442ba6778b2;
              }
            }
            else if (lVar10 < 0x320968092c9f1a9a) {
              if ((lVar10 == 0x9f348a9a6a8de1a) || (lVar10 == 0x14b123ca0436bac0))
              goto LAB_01040a5c;
              lVar13 = 0x236e2c46bca7c58d;
            }
            else if (lVar10 < 0x5c463c353242eb3b) {
              if (lVar10 == 0x320968092c9f1a9a) goto LAB_01040a5c;
              lVar13 = 0x47be5e4a33151278;
            }
            else {
              if (lVar10 == 0x7dd7bc0956f28b42) goto LAB_01040a5c;
              lVar13 = 0x5c463c353242eb3b;
            }
            if (lVar10 == lVar13) goto LAB_01040a5c;
            break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      goto LAB_01040a18;
    }
  }
LAB_01040af8:
  lVar14 = *(long *)(param_1 + 0x488);
  if (lVar14 != 0) {
    plVar11 = *(long **)(lVar14 + 0x120);
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 5;
      do {
        lVar14 = *plVar12;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *(int *)plVar12 = (int)lVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar14 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      lVar14 = *(long *)(param_1 + 0x488);
    }
    *(char *)(param_1 + 0x480) = (char)plVar11[0x42];
    if (*(long *)(lVar14 + 0x120) != 0) {
      *(undefined1 *)(*(long *)(lVar14 + 0x120) + 0x210) = 0;
    }
    *(undefined1 *)(param_1 + 0x481) = 1;
    puVar3 = (uint *)param_2[1];
    for (puVar15 = (uint *)*param_2; puVar15 != puVar3; puVar15 = puVar15 + 4) {
      if ((ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 3) <= (ulong)*puVar15)
      goto LAB_01040f64;
      local_80 = param_1;
      FUN_010416d0(*(undefined8 *)(*(long *)(param_1 + 0x138) + (ulong)*puVar15 * 8),&local_80);
    }
    if (((*PTR_DAT_047daf58 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047daf58);
    }
    plVar12 = *(long **)(param_1 + 0x448);
    puVar1 = PTR_DAT_047daf60;
    if (plVar11[0x18] != 0) {
      puVar1 = (undefined *)(plVar11[0x18] + 0x70);
    }
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      FUN_010418d4(plVar12[6],puVar1);
    }
    FUN_01041838(param_1 + 0x418);
    puVar7 = PTR_DAT_047d8b70;
    puVar1 = PTR_PTR_047d4508;
    lVar14 = *(long *)(param_1 + 0x518);
    if (lVar14 != 0) {
      plVar12 = *(long **)(param_1 + 0x138);
      plVar4 = *(long **)(param_1 + 0x140);
      if (plVar12 != plVar4) {
        do {
          lVar14 = local_80;
          for (plVar19 = *(long **)(*plVar12 + 0x170); plVar19 != (long *)0x0;
              plVar19 = (long *)*plVar19) {
            plVar16 = *(long **)(plVar19[6] + 8);
            plVar2 = (long *)puVar7;
            if (plVar16 != (long *)0x0) {
              plVar2 = plVar16 + 6;
            }
            local_80 = *plVar2;
            if (local_80 != *(long *)(param_1 + 0x3b8)) {
              uVar17 = *(undefined8 *)(param_1 + 0x518);
              plVar2 = (long *)puVar1;
              if (plVar16 != (long *)0x0) {
                plVar2 = plVar16 + 7;
              }
              local_78 = *plVar2;
              if (plVar16 == (long *)0x0) {
                local_70 = 0;
              }
              else {
                local_70 = plVar16[8];
                local_68 = (long *)0x0;
                (**(code **)(*plVar16 + 0x18))(plVar16);
              }
              local_68 = plVar16;
              FUN_010411a8(uVar17,&local_80);
              lVar14 = local_80;
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
                lVar14 = local_80;
              }
            }
            local_80 = lVar14;
            lVar14 = local_80;
          }
          plVar12 = plVar12 + 1;
          local_80 = lVar14;
        } while (plVar12 != plVar4);
        lVar14 = *(long *)(param_1 + 0x518);
      }
      if (lVar14 == *(long *)(param_1 + 0x490)) {
        puVar3 = (uint *)param_2[1];
        for (puVar15 = (uint *)*param_2; puVar15 != puVar3; puVar15 = puVar15 + 4) {
          if ((ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 3) <=
              (ulong)*puVar15) goto LAB_01040f64;
          local_80 = param_1;
          FUN_01040fc0(*(undefined8 *)(*(long *)(param_1 + 0x138) + (ulong)*puVar15 * 8),&local_80);
        }
      }
    }
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 5;
      do {
        lVar14 = *plVar12;
        iVar9 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *(int *)plVar12 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      else if ((int)lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  lVar14 = *(long *)(param_1 + 0x4a0);
  if (lVar14 != 0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_0118b534(lVar14,PTR_DAT_047d3e30);
  }
  puVar15 = (uint *)*param_2;
  puVar3 = (uint *)param_2[1];
  while( true ) {
    if (puVar15 == puVar3) {
      return;
    }
    if ((ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 3) <= (ulong)*puVar15)
    break;
    FUN_01043974(*(undefined8 *)(*(long *)(param_1 + 0x138) + (ulong)*puVar15 * 8),
                 *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(puVar15 + 1),
                 *(undefined4 *)(param_1 + 0x39c),*(undefined4 *)(param_1 + 0x390));
    puVar15 = puVar15 + 4;
  }
LAB_01040f64:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
code_r0x01040804:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar6) {
    *plVar11 = lVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0104080c;
  goto LAB_010407fc;
  while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
LAB_01040a5c:
    if (plVar11[2] == lVar10) {
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)((long)plVar11 + 0x7c));
      plVar11 = *(long **)(param_1 + 0x598);
      local_80 = lVar10;
      if (plVar11 < *(long **)(param_1 + 0x5a0)) {
        uVar17 = *(undefined8 *)(param_1 + 0x5a8);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar14 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar14 == 0) {
          *plVar11 = local_80;
          plVar11[1] = local_78;
        }
        else {
          if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar17;
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
          *plVar11 = local_80;
          plVar11[1] = local_78;
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
        }
        *(long **)(param_1 + 0x598) = plVar11 + 2;
      }
      else {
        FUN_01048e94(param_1 + 0x590,&local_80);
      }
      lVar14 = *(long *)(param_1 + 0x498);
      break;
    }
  }
LAB_01040a18:
  uVar18 = (ulong)((int)uVar18 + 1);
  iVar9 = iVar9 + 1;
  if (*(ulong *)(lVar14 + 0x250) <= uVar18) goto LAB_01040af8;
  goto LAB_010408c4;
}


