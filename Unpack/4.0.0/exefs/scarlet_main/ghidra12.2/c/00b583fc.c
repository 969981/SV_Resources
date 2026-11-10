/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b583fc; name: FUN_00b583fc
 */


undefined2 FUN_00b583fc(long param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  short sVar1;
  ulong *puVar2;
  int *piVar3;
  long *plVar4;
  int iVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  ulong *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong *local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  undefined8 local_48;
  
  plVar13 = (long *)*param_2;
  local_64 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x18))(&local_98,param_3);
    local_78 = (long *)0x0;
    uStack_70 = 0;
    if ((long *)local_98[2] == param_3 + 5) {
      FUN_00cbc6dc(&local_78,&local_98);
    }
    puVar9 = local_98;
    if (local_98 != (ulong *)0x0) {
      puVar2 = local_98 + 3;
      do {
        sVar1 = (short)*puVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar8) {
          *(short *)puVar2 = sVar1 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar1 == 1) {
        piVar3 = (int *)((long)local_98 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_48 = (long *)*puVar9;
          FUN_00c44438(lVar12 + 0x8040,&local_48);
        }
      }
      else if (sVar1 == 0) goto LAB_00b58834;
    }
    FUN_015ede48(&local_48,&local_78);
    plVar4 = local_78;
    if (local_78 != (long *)0x0) {
      plVar14 = local_78 + 3;
      do {
        sVar1 = (short)*plVar14;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar8) {
          *(short *)plVar14 = sVar1 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar1 == 1) {
        piVar3 = (int *)((long)local_78 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_98 = (ulong *)*plVar4;
          FUN_00c44438(lVar12 + 0x8040,&local_98);
        }
      }
      else if (sVar1 == 0) {
LAB_00b58834:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if ((char)local_48 != '\0') {
      *(undefined2 *)((long)plVar13 + 0x4c) = local_48._2_2_;
      local_48 = (long *)((ulong)local_48 & 0xffffffffffffff00);
    }
  }
  sVar1 = *(short *)(param_1 + 0x1c2) + 1;
  *(short *)(param_1 + 0x1c2) = sVar1;
  *(short *)((long)plVar13 + 0x42) = sVar1;
  (**(code **)(*plVar13 + 0x68))(&local_98,plVar13,&local_64);
  plVar13 = *(long **)(param_1 + 0x198);
  if (plVar13 == (long *)0x0) {
    if ((*(long *)(param_1 + 0x1a8) == 0) ||
       (lVar12 = *(long *)(*(long *)(param_1 + 0x1a8) + 0x10), lVar12 == 0)) goto LAB_00b5854c;
    plVar13 = (long *)(lVar12 + -0x28);
  }
  if (*param_4 == 0) {
    (**(code **)(*plVar13 + 0x70))(plVar13,local_98,local_64);
  }
  else {
    (**(code **)(*plVar13 + 0x68))();
  }
LAB_00b5854c:
  puVar9 = local_98;
  uVar6 = *(undefined2 *)(param_1 + 0x1c2);
  local_98 = (ulong *)0x0;
  if (puVar9 != (ulong *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar5 = *(int *)(lVar12 + 0x12c8);
    iVar10 = iVar5 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar10;
    if (*(int *)(lVar12 + 0x12cc) <= iVar5) {
      *(int *)(lVar12 + 0x12cc) = iVar10;
    }
    uVar11 = (**(code **)(*local_90 + 0xf8))(local_90);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*local_90 + 0x18))(local_90,puVar9,uStack_88,local_80);
    }
    else {
      FUN_00c48fe8(local_90,puVar9,uStack_88,local_80);
    }
    lVar12 = FUN_00c4e600();
    iVar10 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_48 = plVar13 + plVar13[600] * 3;
        local_78 = plVar13;
        FUN_00c4ea30(&local_78,&local_48);
        plVar14 = (long *)*plVar13;
        plVar4 = plVar13;
        if (plVar13[600] != 0) {
          plVar4 = plVar13 + plVar13[600] * 3;
        }
        if (plVar4 == plVar13) {
          lVar17 = 0;
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          lVar17 = 0;
          plVar15 = plVar13;
          do {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            if ((long *)*plVar15 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + lVar17 * 3,plVar15);
              plVar14 = (long *)*plVar15;
              lVar17 = lVar16;
            }
            plVar15 = plVar15 + 3;
            lVar16 = lVar16 + 1;
          } while (plVar4 != plVar15);
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + lVar17 * 3,plVar13 + lVar16 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  return uVar6;
}


