/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a62324; name: FUN_01a62324
 */


ulong FUN_01a62324(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined1 uVar14;
  long lVar15;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined1 local_5c [4];
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  if (param_1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar10 = FUN_01a62708();
    if ((uVar10 & 1) == 0) {
      lVar15 = *param_2;
      plVar12 = (long *)(lVar15 + 0x110);
      lVar13 = *plVar12;
      lVar11 = nn::os::GetCurrentThread();
      if (lVar11 != lVar13) {
        lVar11 = nn::os::GetCurrentThread();
        bVar6 = false;
LAB_01a626a8:
        if (*plVar12 == 0) goto code_r0x01a626b0;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
        bVar6 = false;
        do {
          if (*plVar12 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
              while (*plVar12 == 0) {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar6) {
                  *plVar12 = lVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                bVar6 = false;
                if (cVar4 == '\0') goto LAB_01a6236c;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_01a6236c;
      }
      bVar6 = true;
LAB_01a6236c:
      plVar12 = (long *)FUN_01f5f0b0(*(undefined8 *)(lVar15 + 0x128),*(undefined8 *)(lVar15 + 0x130)
                                    );
      if ((*(long **)(lVar15 + 0x130) == plVar12) || (*plVar12 == 0)) {
        plVar12 = (long *)FUN_01f5f0b0(*(undefined8 *)(lVar15 + 0x160),
                                       *(undefined8 *)(lVar15 + 0x168));
        if (*(long **)(lVar15 + 0x168) == plVar12) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*plVar12 != 0) {
            lVar11 = *plVar12 + -0x20;
          }
        }
      }
      else {
        lVar11 = *plVar12 + -0x20;
      }
      if (!bVar6) {
        *(undefined8 *)(lVar15 + 0x110) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x118));
      }
      uVar8 = 0;
      if (lVar11 != 0) {
        uVar10 = FUN_01896cc0(lVar11,param_1 + 0xf9);
        return uVar10;
      }
      goto LAB_01a623d4;
    }
    local_58[0] = (undefined8 *)((ulong)local_58[0] & 0xffffffffffffff00);
    lVar11 = FUN_01f34298(local_58);
    if ((lVar11 == 0) || (uVar14 = 0, lVar11 != param_1)) {
      uVar14 = 1;
      local_58[0] = (undefined8 *)CONCAT71(local_58[0]._1_7_,1);
      lVar11 = FUN_01f34298(local_58);
      if ((lVar11 == 0) || (lVar11 != param_1)) {
        uVar14 = 2;
        local_58[0] = (undefined8 *)CONCAT71(local_58[0]._1_7_,2);
        lVar11 = FUN_01f34298(local_58);
        if ((lVar11 == 0) || (lVar11 != param_1)) {
          uVar14 = 3;
          local_58[0] = (undefined8 *)CONCAT71(local_58[0]._1_7_,3);
          lVar11 = FUN_01f34298(local_58);
          uVar8 = 0;
          if ((lVar11 == 0) || (lVar11 != param_1)) goto LAB_01a623d4;
        }
      }
    }
    param_2 = (long *)*param_2;
    local_5c[0] = uVar14;
    (**(code **)(*param_2 + 0x18))(local_58,param_2);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    plVar12 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      plVar12 = param_2 + 5;
    }
    if ((long *)local_58[0][2] == plVar12) {
      FUN_00cbc6dc(&local_70,local_58);
    }
    puVar7 = local_58[0];
    if (local_58[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58[0] + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_58[0] + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_48 = *puVar7;
          FUN_00c44438(lVar11 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_01a62514;
    }
    uVar8 = FUN_01c67320(local_5c,&local_70);
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_58[0] = (undefined8 *)*puVar7;
          FUN_00c44438(lVar11 + 0x8040,local_58);
        }
      }
      else if (sVar3 == 0) {
LAB_01a62514:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_01a623d4:
  return (ulong)(uVar8 & 1);
code_r0x01a626b0:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar5) {
    *plVar12 = lVar11;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01a6236c;
  goto LAB_01a626a8;
}


