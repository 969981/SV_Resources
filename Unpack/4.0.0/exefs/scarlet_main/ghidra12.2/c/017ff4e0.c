/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017ff4e0; name: FUN_017ff4e0
 */


ulong FUN_017ff4e0(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  void *param_5,byte param_6)

{
  short *psVar1;
  int *piVar2;
  ulong *puVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  long lVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  if (((DAT_0483b210 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0483b210), iVar10 != 0)) {
    FUN_00100190(&LAB_02a427cc,&DAT_0483b200,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b210);
  }
  lVar7 = DAT_0483b200;
  DAT_0483b218 = DAT_0483b200;
  plVar16 = (long *)*param_1;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x58))(plVar16);
  }
  FUN_0104fb74(&local_70,plVar16 + 0x33,&DAT_03bdface,param_2);
  puVar3 = (ulong *)PTR_DAT_047d8b70;
  if (local_70 != (long *)0x0) {
    puVar3 = (ulong *)(local_70 + 6);
  }
  uVar18 = *puVar3;
  for (lVar13 = *(long *)(lVar7 + 0x68); lVar13 != lVar7 + 0x60; lVar13 = *(long *)(lVar13 + 8)) {
    if (*(ulong *)(lVar13 + 0x10) == uVar18) goto LAB_017ff828;
  }
  plVar12 = (long *)(lVar7 + 0x30);
  plVar14 = (long *)*plVar12;
  if (plVar14 == (long *)0x0) {
LAB_017ff5b4:
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
  }
  else {
    plVar15 = (long *)plVar14[(ulong)plVar14[4] < uVar18];
    plVar11 = plVar12;
    if ((ulong)plVar14[4] >= uVar18) {
      plVar11 = plVar14;
    }
    for (; plVar15 != (long *)0x0; plVar15 = (long *)plVar15[(ulong)plVar15[4] < uVar18]) {
      if ((ulong)plVar15[4] >= uVar18) {
        plVar11 = plVar15;
      }
    }
    if ((plVar11 == plVar12) || (uVar18 < (ulong)plVar11[4])) goto LAB_017ff5b4;
    if (*(long *)(plVar11[5] + 0x28) == 0) {
LAB_017ff784:
      if (plVar14 != (long *)0x0) {
        bVar9 = uVar18 <= (ulong)plVar14[4];
        plVar11 = plVar12;
        if (bVar9) {
          plVar11 = plVar14;
        }
        while (plVar14 = (long *)plVar14[!bVar9], plVar14 != (long *)0x0) {
          bVar9 = uVar18 <= (ulong)plVar14[4];
          if (bVar9) {
            plVar11 = plVar14;
          }
        }
        if ((plVar11 != plVar12) && ((ulong)plVar11[4] <= uVar18)) {
          FUN_01484e2c(lVar7 + 0x28);
        }
      }
      goto LAB_017ff5b4;
    }
    if (*(short *)(*(long *)(plVar11[5] + 0x28) + 0x1a) == 0) {
      plVar14 = (long *)*plVar12;
      goto LAB_017ff784;
    }
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00ca1a48(&local_80,plVar11[5] + 0x28);
    puVar8 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      sVar4 = *(short *)((long)local_80 + 0x1a);
      if (local_80 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_80 + 3);
        do {
          sVar5 = *psVar1;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_80 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_68 = *puVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_68);
          }
        }
        else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (sVar4 != 0) {
LAB_017ff828:
        uVar18 = 0;
        goto LAB_017ff704;
      }
    }
  }
  plVar12 = (long *)(**(code **)(**(long **)(lVar7 + 0x78) + 0x10))
                              (*(long **)(lVar7 + 0x78),0xd0,0x10);
  if (plVar12 == (long *)0x0) {
    (**(code **)(**(long **)(lVar7 + 0x78) + 0xe8))();
  }
  *plVar12 = 0;
  uVar17 = *(undefined8 *)(lVar7 + 0x78);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar13 != 0) {
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar17;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  }
  plVar12[2] = uVar18;
  plVar12[4] = (long)plVar16;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x58))(plVar16);
  }
  FUN_00daf940(plVar12 + 5,param_2);
  plVar14 = (long *)*param_3;
  plVar12[6] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))();
  }
  plVar14 = (long *)param_3[1];
  plVar12[7] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))();
  }
  plVar14 = (long *)param_3[2];
  plVar12[8] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))();
  }
  *(int *)(plVar12 + 9) = (int)param_3[3];
  FUN_00daf940(plVar12 + 10,param_4);
  memcpy(plVar12 + 0xc,param_5,0x30);
  *(byte *)(plVar12 + 0x12) = param_6 & 1;
  *(undefined4 *)(plVar12 + 0x18) = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0;
  if (lVar13 != 0) {
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  plVar12[1] = lVar7 + 0x60;
  lVar13 = *(long *)(lVar7 + 0x60);
  *plVar12 = lVar13;
  *(long **)(lVar13 + 8) = plVar12;
  *(long **)(lVar7 + 0x60) = plVar12;
  *(long *)(lVar7 + 0x70) = *(long *)(lVar7 + 0x70) + 1;
LAB_017ff704:
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x60))(plVar16);
  }
  return uVar18;
}


