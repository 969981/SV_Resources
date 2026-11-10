/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e956ac; name: FUN_00e956ac
 */


void FUN_00e956ac(float param_1,long param_2)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  float *pfVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  ulong *puVar8;
  int iVar9;
  undefined8 *puVar10;
  float *pfVar11;
  undefined8 uVar12;
  short sVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  float local_54;
  float local_50;
  undefined4 uStack_4c;
  ulong local_38;
  
  FUN_00e95abc(&local_50);
  puVar8 = (ulong *)CONCAT44(uStack_4c,local_50);
  if (puVar8 != (ulong *)0x0) {
    if (*(short *)((long)puVar8 + 0x1a) != 0) {
      psVar1 = (short *)((long)puVar8 + 0x1a);
      sVar13 = *(short *)((long)puVar8 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar13) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00e95728;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00e95728:
          bVar7 = false;
        }
        if (bVar7) {
          plVar14 = (long *)0x0;
          if (puVar8[2] != 0) {
            plVar14 = (long *)(puVar8[2] - 0x28);
          }
          goto LAB_00e95750;
        }
        sVar13 = sVar5;
      } while (sVar5 != 0);
    }
    plVar14 = (long *)0x0;
LAB_00e95750:
    puVar2 = puVar8 + 3;
    do {
      sVar13 = (short)*puVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *(short *)puVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)puVar8 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_38 = *puVar8;
        FUN_00c44438(lVar16 + 0x8040,&local_38);
      }
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar14 == (long *)0x0) {
      return;
    }
    puVar10 = (undefined8 *)FUN_010fee00(plVar14);
    plVar15 = (long *)*puVar10;
    if (plVar15 != (long *)0x0) {
      lVar16 = plVar15[6];
      if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar16 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar13 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
        *(undefined8 *)(lVar16 + 8) = uVar12;
        *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
      }
      else if (sVar13 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      if (*(char *)(param_2 + 0x3b0) == '\0') {
        cVar6 = *(char *)(param_2 + 0x3b5);
        pfVar11 = (float *)FUN_01dfad74(plVar15);
        fVar17 = -pfVar11[1];
        if (cVar6 != '\0') {
          fVar17 = *pfVar11;
        }
        local_38 = local_38 & 0xffffffff00000000;
        local_54 = 100.0;
        local_50 = *(float *)(param_2 + 0x6c4) + fVar17 * param_1;
        pfVar11 = &local_54;
        if (local_50 <= 100.0) {
          pfVar11 = &local_50;
        }
        pfVar4 = (float *)&local_38;
        if (0.0 <= local_50) {
          pfVar4 = pfVar11;
        }
        *(float *)(param_2 + 0x6c4) = *pfVar4;
      }
      if (*(char *)(param_2 + 0x3b1) == '\0') {
        cVar6 = *(char *)(param_2 + 0x3b6);
        pfVar11 = (float *)FUN_01dfad7c(plVar15);
        fVar17 = -pfVar11[1];
        if (cVar6 != '\0') {
          fVar17 = *pfVar11;
        }
        local_38 = local_38 & 0xffffffff00000000;
        local_54 = 100.0;
        local_50 = *(float *)(param_2 + 0x6cc) + fVar17 * param_1;
        pfVar11 = &local_54;
        if (local_50 <= 100.0) {
          pfVar11 = &local_50;
        }
        pfVar4 = (float *)&local_38;
        if (0.0 <= local_50) {
          pfVar4 = pfVar11;
        }
        *(float *)(param_2 + 0x6cc) = *pfVar4;
      }
      if (*(char *)(param_2 + 0x3b2) == '\0') {
        cVar6 = *(char *)(param_2 + 0x3b7);
        pfVar11 = (float *)FUN_01dfad84(plVar15);
        fVar17 = -pfVar11[1];
        if (cVar6 != '\0') {
          fVar17 = *pfVar11;
        }
        local_38 = local_38 & 0xffffffff00000000;
        local_54 = 100.0;
        local_50 = *(float *)(param_2 + 0x6c8) + fVar17 * param_1;
        pfVar11 = &local_54;
        if (local_50 <= 100.0) {
          pfVar11 = &local_50;
        }
        pfVar4 = (float *)&local_38;
        if (0.0 <= local_50) {
          pfVar4 = pfVar11;
        }
        *(float *)(param_2 + 0x6c8) = *pfVar4;
      }
      lVar16 = plVar15[6];
      psVar1 = (short *)(lVar16 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar13 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar13 == 0) goto LAB_00e95934;
    }
    lVar16 = plVar14[0x13];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar13 == 0) {
LAB_00e95934:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


