/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01495768; name: FUN_01495768
 */


void FUN_01495768(long param_1,long *param_2,ulong param_3,long *param_4,int param_5)

{
  short *psVar1;
  int *piVar2;
  code *pcVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  code *pcVar13;
  short sVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint uVar18;
  code *local_1f0;
  code *local_1e8;
  code *local_1e0;
  undefined1 *local_1d8;
  undefined1 auStack_1d0 [104];
  undefined8 local_168;
  char *pcStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  char *pcStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined2 local_103;
  undefined1 local_101;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined2 local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b3;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined2 local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined2 local_7c;
  undefined1 local_7a;
  long *local_78 [3];
  
  lVar10 = *param_2;
  if (lVar10 == 0) {
    return;
  }
  if (*(short *)(lVar10 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar10 + 0x1a);
  sVar14 = *(short *)(lVar10 + 0x1a);
  do {
    sVar4 = *psVar1;
    if (sVar4 == sVar14) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_014957fc;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_014957fc:
      bVar6 = false;
    }
    if (bVar6) {
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 == 0) {
        return;
      }
      lVar11 = *param_4;
      plVar12 = (long *)(lVar10 + -0x28);
      if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) {
        plVar15 = (long *)0x0;
        goto LAB_01495840;
      }
      psVar1 = (short *)(lVar11 + 0x1a);
      sVar14 = *(short *)(lVar11 + 0x1a);
      break;
    }
    param_3 = param_3 & 0xffffffff;
    sVar14 = sVar4;
    if (sVar4 == 0) {
      return;
    }
  } while( true );
  while( true ) {
    plVar15 = (long *)0x0;
    sVar14 = sVar4;
    if (sVar4 == 0) break;
    sVar4 = *psVar1;
    if (sVar4 == sVar14) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01495e80;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01495e80:
      bVar6 = false;
    }
    if (bVar6) {
      plVar15 = (long *)0x0;
      if (*(long *)(lVar11 + 0x10) != 0) {
        plVar15 = (long *)(*(long *)(lVar11 + 0x10) + -0x28);
      }
      break;
    }
  }
LAB_01495840:
  uVar8 = FUN_00e75364(plVar12,*(undefined8 *)(lVar10 + -0x20));
  uVar9 = uVar8;
  if (plVar15 != (long *)0x0) {
    uVar9 = FUN_00e75364(plVar15,plVar15[1]);
  }
  if ((param_3 & 1) != 0) {
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    FUN_00ca1a48(&local_1f0,param_2);
    if ((*param_4 != 0) && (*(short *)(*param_4 + 0x1a) != 0)) {
      FUN_00ca1a48(&local_1f0,param_4);
    }
    if (param_5 == 0) {
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      FUN_00ca1a48(&local_98,&local_1f0);
      local_d8 = 0xec275cf90293e392;
      pcStack_d0 = "PokeBodyCol";
      local_c8 = 0xb;
      uStack_c0 = 0;
      local_b8 = 7;
      local_b4 = 1;
      local_b3 = local_7c;
      local_a0 = 1;
      local_b1 = local_7a;
      local_b0 = 0x3f000000bf800000;
      uStack_a8 = 0x13f000000;
      FUN_01e3b40c(&local_88,param_1,&local_98,uVar9,0,&local_d8);
      plVar17 = local_88;
      local_88 = (long *)0x0;
      if (local_98 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_98 + 3);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 != 1) goto LAB_01495ba0;
        piVar2 = (int *)((long)local_98 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          puVar16 = local_98;
        } while (cVar5 != '\0');
LAB_01495db4:
        local_88 = (long *)0x0;
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_78[0] = (long *)*puVar16;
          FUN_00c44438(lVar11 + 0x8040,local_78);
        }
      }
    }
    else if (param_5 == 1) {
      local_e8 = (undefined8 *)0x0;
      uStack_e0 = 0;
      FUN_00ca1a48(&local_e8,&local_1f0);
      local_128 = 0xec275cf90293e392;
      pcStack_120 = "PokeBodyCol";
      local_118 = 0xb;
      uStack_110 = 0;
      local_108 = 7;
      local_104 = 1;
      local_103 = local_7c;
      local_f0 = 1;
      local_101 = local_7a;
      local_100 = 0x3f000000bf800000;
      uStack_f8 = 0x13f000000;
      FUN_01e3b40c(&local_88,param_1,&local_e8,uVar9,2,&local_128);
      plVar17 = local_88;
      local_88 = (long *)0x0;
      if (local_e8 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_e8 + 3);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 1) {
          piVar2 = (int *)((long)local_e8 + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            puVar16 = local_e8;
          } while (cVar5 != '\0');
          goto LAB_01495db4;
        }
LAB_01495ba0:
        local_88 = (long *)0x0;
        if (sVar14 == 0) goto LAB_01495ba4;
      }
    }
    else {
      plVar17 = (long *)0x0;
    }
    if ((*param_4 == 0) || (*(short *)(*param_4 + 0x1a) == 0)) {
      *(undefined1 *)((long)plVar17 + 0x71) = 0;
    }
    if (plVar17 != (long *)0x0) {
      lVar11 = plVar17[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar17 + 0x50))(plVar17);
      }
      else if (sVar14 == 0) goto LAB_01495ad8;
    }
    pcVar13 = local_1f0;
    if (local_1f0 != (code *)0x0) {
      pcVar3 = local_1f0 + 0x18;
      do {
        sVar14 = *(short *)pcVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar6) {
          *(short *)pcVar3 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        pcVar3 = local_1f0 + 0x1c;
        do {
          iVar7 = *(int *)pcVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar6) {
            *(int *)pcVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_78[0] = *(long **)pcVar13;
          FUN_00c44438(lVar11 + 0x8040,local_78);
        }
      }
      else if (sVar14 == 0) goto LAB_01495ba4;
    }
  }
  local_138 = (undefined8 *)0x0;
  uStack_130 = 0;
  FUN_00ca1a48(&local_138,param_2);
  local_168 = 0x6a80aa644050026b;
  pcStack_160 = "PokeCharaCol";
  local_158 = 0xc;
  uStack_150 = 0;
  local_148 = 5;
  local_144 = 1;
  local_140 = 0x42340000;
  FUN_01e3b7d0(local_78,param_1,&local_138,uVar8,&local_168);
  puVar16 = local_138;
  if (local_138 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_138 + 3);
    do {
      sVar14 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      piVar2 = (int *)((long)local_138 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_1f0 = (code *)*puVar16;
        FUN_00c44438(lVar11 + 0x8040,&local_1f0);
      }
    }
    else if (sVar14 == 0) {
LAB_01495ba4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_78[0] != (long *)0x0) {
    lVar11 = local_78[0][6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_78[0] + 0x50))();
    }
    else if (sVar14 == 0) goto LAB_01495ad8;
  }
  lVar11 = FUN_01453138(plVar12,*(undefined8 *)(lVar10 + -0x20));
  *(undefined4 *)(lVar11 + 0x140) = 1;
  uVar18 = *(uint *)(param_1 + 0xcc);
  *(ulong *)(lVar11 + 0x138) = (ulong)uVar18;
  *(ulong *)(lVar11 + 0x130) = CONCAT44(uVar18,uVar18);
  local_1f0 = FUN_01e3bff4;
  local_1e8 = FUN_00aa62dc;
  local_1e0 = FUN_00aa62e0;
  local_1d8 = &LAB_00aa62e4;
  pcVar13 = *(code **)(lVar11 + 0x158);
  if (pcVar13 == (code *)0x0) {
LAB_01495a68:
    (*local_1e0)(auStack_1d0,lVar11 + 0x170);
    *(undefined1 **)(lVar11 + 0x168) = local_1d8;
    *(undefined8 *)(lVar11 + 0x150) = local_1f0;
    *(code **)(lVar11 + 0x158) = local_1e8;
    *(code **)(lVar11 + 0x160) = local_1e0;
  }
  else {
    *(undefined8 *)(lVar11 + 0x160) = 0;
    *(undefined8 *)(lVar11 + 0x168) = 0;
    *(undefined8 *)(lVar11 + 0x150) = 0;
    *(undefined8 *)(lVar11 + 0x158) = 0;
    (*pcVar13)(lVar11 + 0x170);
    if (local_1e0 != (code *)0x0) goto LAB_01495a68;
  }
  pcVar13 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (code *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar13)(auStack_1d0);
  }
  if (plVar15 != (long *)0x0) {
    lVar11 = plVar15[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar14 == 0) goto LAB_01495ad8;
  }
  lVar10 = *(long *)(lVar10 + 8);
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar12 + 0x50))();
  }
  else if (sVar14 == 0) {
LAB_01495ad8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


