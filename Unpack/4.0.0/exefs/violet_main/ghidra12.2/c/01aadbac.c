/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aadbac; name: FUN_01aadbac
 */


void FUN_01aadbac(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 auVar16 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  code *local_f0;
  code *local_e8;
  undefined1 auStack_d0 [104];
  ulong local_68;
  ulong local_48;
  
  if (*(long *)(param_1 + 0x120) == 0) {
    lVar9 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x120) + 0x10);
    lVar9 = 0;
    if (lVar10 != 0) {
      lVar9 = lVar10 + -0x28;
    }
  }
  if (*(long *)(param_1 + 0x130) == 0) {
    lVar10 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x130) + 0x10);
    lVar10 = 0;
    if (lVar8 != 0) {
      lVar10 = lVar8 + -0x28;
    }
  }
  if ((lVar9 == 0) && (lVar10 == 0)) {
    FUN_011920ec(param_1);
    return;
  }
  if (lVar9 == 0) {
    lVar8 = (**(code **)(**(long **)(*(long *)(param_1 + 0xe8) + 0x48) + 0x68))();
    puVar11 = (undefined8 *)(lVar8 + 0x30);
  }
  else {
    puVar11 = (undefined8 *)(lVar9 + 0x1d0);
  }
  uVar20 = puVar11[1];
  uVar19 = *puVar11;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar8 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar8;
  fVar15 = (float)uVar19 - *(float *)(lVar8 + 0xb170);
  fVar17 = (float)((ulong)uVar19 >> 0x20) - *(float *)(lVar8 + 0xb174);
  fVar18 = (float)uVar20 - *(float *)(lVar8 + 0xb178);
  fVar15 = fVar15 * fVar15;
  fVar17 = fVar17 * fVar17;
  fVar18 = fVar18 * fVar18;
  auVar16._0_4_ = fVar15 + fVar17;
  auVar16._4_4_ = fVar18 + 0.0;
  auVar16._8_4_ = fVar15 + fVar17;
  auVar16._12_4_ = fVar18 + 0.0;
  auVar16 = NEON_ext(auVar16,auVar16,4,1);
  fVar15 = SQRT(auVar16._0_4_ + auVar16._4_4_);
  if ((lVar9 == 0) || (plVar13 = *(long **)(lVar9 + 0x120), plVar13 == (long *)0x0)) {
LAB_01aaddf4:
    if (lVar10 == 0) {
      return;
    }
    plVar13 = (long *)(param_1 + 0x240);
    lVar9 = nn::os::GetCurrentThread();
    while (*plVar13 == 0) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_01aadf6c;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x248));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x248));
          while (*plVar13 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01aadf6c;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01aadf6c:
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    if (*(code **)(param_1 + 0x150) != (code *)0x0) {
      (**(code **)(param_1 + 0x150))(param_1 + 0x160,auStack_d0);
      local_e8 = *(code **)(param_1 + 0x148);
      local_f0 = *(code **)(param_1 + 0x140);
    }
    *(undefined8 *)(param_1 + 0x240) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x248));
    local_48 = CONCAT44(local_48._4_4_,fVar15);
    iVar6 = (*local_f0)(auStack_d0,&local_48);
    iVar7 = FUN_01aae0cc(lVar10);
    if (iVar6 != iVar7) {
      FUN_00ff4890(lVar10,iVar6);
    }
    if (local_e8 == (code *)0x0) {
      return;
    }
    (*local_e8)(auStack_d0);
    return;
  }
  plVar1 = plVar13 + 5;
  do {
    lVar9 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = (int)lVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((int)lVar9 != -1) {
    if (((*PTR_DAT_047daf58 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047daf58);
    }
    puVar11 = (undefined8 *)PTR_DAT_047daf60;
    if (plVar13[0x18] != 0) {
      puVar11 = (undefined8 *)(plVar13[0x18] + 0x70);
    }
    plVar14 = (long *)*puVar11;
    if (plVar14 == (long *)0x0) {
LAB_01aadddc:
      do {
        lVar9 = *plVar1;
        iVar6 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      else if ((int)lVar9 == 0) {
LAB_01aae080:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
      goto LAB_01aaddf4;
    }
    plVar2 = plVar14 + 5;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar9 != -1) {
      plVar3 = (long *)(param_1 + 600);
      lVar9 = nn::os::GetCurrentThread();
LAB_01aadcec:
      if (*plVar3 == 0) goto code_r0x01aadcf4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x260));
      do {
        if (*plVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x260));
            while (*plVar3 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *plVar3 = lVar9;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01aadcfc;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01aadcfc:
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      if (*(code **)(param_1 + 0x1d0) != (code *)0x0) {
        (**(code **)(param_1 + 0x1d0))(param_1 + 0x1e0,auStack_d0);
        local_e8 = *(code **)(param_1 + 0x1c8);
        local_f0 = *(code **)(param_1 + 0x1c0);
      }
      *(undefined8 *)(param_1 + 600) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x260));
      local_48 = CONCAT44(local_48._4_4_,fVar15);
      local_68 = (*local_f0)(auStack_d0,&local_48);
      if ((local_68 & 0xff) == 0) {
        local_68 = (ulong)(*(int *)((long)plVar13 + 0x194) < 3) |
                   (ulong)(2 - *(int *)((long)plVar13 + 0x194)) << 0x20;
      }
      local_48 = plVar14[0x86];
      plVar14[0x85] = local_68;
      if ((local_48 & 0xff) == 0) {
        puVar12 = &local_68;
      }
      else {
        puVar12 = &local_48;
        if (((local_68 & 0xff) != 0) &&
           (puVar12 = &local_68, (uint)(local_48 >> 0x20) <= (uint)(local_68 >> 0x20))) {
          puVar12 = &local_48;
        }
      }
      plVar14[0x84] = *puVar12;
      if (local_e8 != (code *)0x0) {
        (*local_e8)(auStack_d0);
      }
      do {
        lVar9 = *plVar2;
        iVar6 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      else if ((int)lVar9 == 0) goto LAB_01aae080;
      goto LAB_01aadddc;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x53,"Reference counter overflows.");
code_r0x01aadcf4:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar5) {
    *plVar3 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01aadcfc;
  goto LAB_01aadcec;
}


