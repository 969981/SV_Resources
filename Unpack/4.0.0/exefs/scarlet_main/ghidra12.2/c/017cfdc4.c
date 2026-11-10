/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017cfdc4; name: FUN_017cfdc4
 */


void FUN_017cfdc4(undefined8 *param_1)

{
  short *psVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  ulong uVar13;
  int *piVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  short sVar18;
  ushort *puVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 uStack_88;
  undefined2 uStack_87;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined4 local_3c;
  int local_38;
  uint auStack_34 [3];
  int local_28;
  int local_24;
  undefined8 *local_18;
  
  piVar14 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 0x38);
  puVar19 = (ushort *)((long)piVar14 - (long)*piVar14);
  uVar3 = *puVar19;
  if (uVar3 < 0xb) {
    local_24 = 0;
    local_28 = 0;
    uVar12 = 0;
    iVar9 = 0;
    if (uVar3 < 9) goto LAB_017cfe6c;
  }
  else {
    iVar9 = 0;
    if ((ulong)puVar19[5] != 0) {
      iVar9 = *(int *)((long)piVar14 + (ulong)puVar19[5]);
    }
  }
  local_24 = iVar9;
  local_28 = 0;
  if ((ulong)puVar19[4] != 0) {
    local_28 = *(int *)((long)piVar14 + (ulong)puVar19[4]);
  }
  if (((0x16 < uVar3) && ((ulong)puVar19[0xb] != 0)) &&
     (puVar15 = (uint *)((long)piVar14 + (ulong)puVar19[0xb]),
     piVar14 = (int *)((long)puVar15 + (ulong)*puVar15), *piVar14 != 0)) {
    puVar15 = (uint *)(piVar14 + 1);
    piVar14 = (int *)((long)puVar15 + (ulong)*puVar15);
    puVar15 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (8 - (long)*piVar14)));
    piVar14 = (int *)((long)puVar15 + (ulong)*puVar15);
    if ((4 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
       (uVar20 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar20 != 0)) {
      uVar12 = *(undefined4 *)((long)piVar14 + uVar20);
      goto LAB_017cfe6c;
    }
  }
  uVar12 = 0;
LAB_017cfe6c:
  if (((*PTR_DAT_047d3be0 & 1) == 0) &&
     (local_18 = param_1, iVar9 = __cxa_guard_acquire(PTR_DAT_047d3be0), param_1 = local_18,
     iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
    param_1 = local_18;
  }
  uVar20 = (ulong)uVar2;
  local_38 = local_24 - local_28;
  lVar10 = *(long *)PTR_DAT_047d3be8;
  *(long *)PTR_DAT_047dcd80 = lVar10;
  uVar13 = *(ulong *)(lVar10 + 0x50);
  if (uVar13 != 0) {
    uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = (ulong)((int)uVar13 - 1U & uVar2);
    }
    else {
      uVar17 = uVar20;
      if (uVar13 <= uVar20) {
        uVar17 = 0;
        if (uVar13 != 0) {
          uVar17 = uVar20 / uVar13;
        }
        uVar17 = uVar20 - uVar17 * uVar13;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar10 + 0x48) + uVar17 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar21[1] == uVar20) {
            if (*(uint *)(plVar21 + 2) == uVar2) goto LAB_017cffdc;
          }
          else if ((plVar21[1] & uVar13 - 1) != uVar17) {
            return;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar21[1];
          if (uVar16 == uVar20) {
            if (*(uint *)(plVar21 + 2) == uVar2) goto LAB_017cffdc;
          }
          else {
            if (uVar13 <= uVar16) {
              uVar7 = 0;
              if (uVar13 != 0) {
                uVar7 = uVar16 / uVar13;
              }
              uVar16 = uVar16 - uVar7 * uVar13;
            }
            if (uVar16 != uVar17) {
              return;
            }
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  return;
LAB_017cffdc:
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  local_70 = param_1[0x22];
  uStack_68 = param_1[0x23];
  local_60 = param_1[0x24];
  local_58 = (long *)param_1[0x25];
  local_3c = uVar12;
  auStack_34[0] = uVar2;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    local_8c = 0;
    local_8a = 0;
    local_89 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_98,param_1 + 6,&local_70);
  }
  FUN_00d0a34c(&local_50,&local_98);
  puVar8 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar18 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar14 = (int *)((long)local_98 + 0x1c);
      do {
        iVar9 = *piVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_18 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_18);
      }
    }
    else if (sVar18 == 0) goto LAB_017d0164;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_00d0a71c(&local_80,&local_50);
  puVar11 = (undefined8 *)FUN_01180e7c(param_1,&local_80);
  puVar8 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80 + 3);
    do {
      sVar18 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar14 = (int *)((long)local_80 + 0x1c);
      do {
        iVar9 = *piVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_98 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_98);
      }
    }
    else if (sVar18 == 0) goto LAB_017d0164;
  }
  local_18 = puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    uStack_87 = 0;
    uStack_88 = 0x31;
    local_89 = 0x33;
    local_8a = 0x45;
    local_8c = 0x3835;
    local_90 = 0x43363939;
    local_98 = (undefined8 *)0x3841344135383253;
    lVar10 = plVar21[5];
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar18 = *(short *)(lVar10 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar18) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar18 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_017d0314;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_017d0314:
          bVar6 = false;
        }
        if (bVar6) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 != 0) {
            plVar22 = (long *)(lVar10 + -0x28);
            FUN_0210f4a0(plVar22,&local_98,plVar21 + 3,auStack_34,param_1 + 0x22,&local_18,&local_38
                         ,&local_3c);
            lVar10 = *(long *)(lVar10 + 8);
            psVar1 = (short *)(lVar10 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar18 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar10 + 0x10) = 0;
              (**(code **)(*plVar22 + 0x50))(plVar22);
            }
            else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar18 = sVar4;
      } while (sVar4 != 0);
    }
  }
  puVar8 = local_50;
  if (local_50 == (undefined8 *)0x0) {
    return;
  }
  psVar1 = (short *)(local_50 + 3);
  do {
    sVar18 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar18 == 1) {
    piVar14 = (int *)((long)local_50 + 0x1c);
    do {
      iVar9 = *piVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar6) {
        *piVar14 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar10 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar10;
    local_98 = (undefined8 *)*puVar8;
    FUN_00c44438(lVar10 + 0x8040,&local_98);
    return;
  }
  if (sVar18 != 0) {
    return;
  }
LAB_017d0164:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
}


