/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f2561c; name: FUN_00f2561c
 */


bool FUN_00f2561c(long param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  short sVar19;
  bool bVar20;
  long *plVar21;
  int local_17c;
  undefined8 local_178;
  char *local_170;
  undefined8 uStack_168;
  long *local_160;
  undefined8 *local_158 [2];
  long *local_148;
  undefined1 auStack_140 [48];
  long *local_110;
  int local_e8;
  undefined1 auStack_d8 [104];
  undefined4 local_70;
  undefined4 auStack_6c [3];
  
  local_70 = param_4;
  auStack_6c[0] = param_3;
  uVar16 = FUN_00f25300(param_1 + (long)param_2 * 0x68 + 0xcf0,auStack_6c);
  FUN_00ff0754(auStack_d8,uVar16);
  uVar16 = FUN_01499e84(auStack_d8,&local_70);
  FUN_00ff0bd4(auStack_140,uVar16);
  puVar11 = PTR_DAT_047d4930;
  puVar10 = PTR_DAT_047d4928;
  puVar9 = PTR_LAB_047d3de8;
  puVar8 = PTR_DAT_047d3910;
  puVar7 = PTR_DAT_047d3908;
  if (local_110 == (long *)0x0) {
    local_17c = 0;
LAB_00f25ad8:
    FUN_011a55fc(auStack_140);
    FUN_011a5404(auStack_d8);
    return local_17c == local_e8;
  }
  local_17c = 0;
  plVar21 = local_110;
LAB_00f256c0:
  if ((plVar21[3] != 0) && (FUN_00e28240(local_158), local_158[0] != (undefined8 *)0x0)) {
    if (*(short *)((long)local_158[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_158[0] + 0x1a);
      sVar19 = *(short *)((long)local_158[0] + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar19) {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00f25720;
          bVar13 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f25720:
          bVar13 = false;
        }
        if (bVar13) {
          if (local_158[0][2] != 0) {
            plVar6 = (long *)*local_148;
            goto joined_r0x00f2574c;
          }
          break;
        }
        sVar19 = sVar4;
      } while (sVar4 != 0);
    }
    goto LAB_00f25838;
  }
  goto LAB_00f256d8;
  while( true ) {
    lVar18 = *plVar6;
    plVar3 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar18 + 8) != 0) {
      plVar3 = (long *)(*(long *)(lVar18 + 8) + 0x30);
    }
    plVar6 = plVar6 + 1;
    if (*plVar3 == 0x292204c8a040e8c1) break;
joined_r0x00f2574c:
    if (plVar6 == (long *)local_148[1]) goto LAB_00f25790;
  }
  if ((*(char *)(lVar18 + 0x10) == '\x01') && (*(long **)(lVar18 + 0x18) != (long *)0x0)) {
    bVar13 = **(long **)(lVar18 + 0x18) != 0;
    bVar20 = false;
  }
  else {
LAB_00f25790:
    bVar13 = false;
    bVar20 = true;
  }
  (**(code **)(*(long *)(local_158[0][2] + -8) + 0x18))();
  if ((!bVar20) && (bVar13)) {
    local_160 = (long *)0x0;
    local_178 = 0x80cdcd836abb01f7;
    local_170 = "FSYS_RIDE_CLIMB_ENABLE";
    uStack_168 = 0x16;
    if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
      FUN_00100190(&LAB_02af32dc,puVar11,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar10);
    }
    lVar18 = *(long *)puVar11;
    *(long *)PTR_DAT_047d4938 = lVar18;
    uVar17 = FUN_00fb1cf4(&local_178,lVar18 + 0x198);
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    if ((uVar17 & 1) == 0) {
      local_17c = local_17c + 1;
      goto LAB_00f25868;
    }
  }
LAB_00f25838:
  if (local_158[0] == (undefined8 *)0x0) goto LAB_00f256d8;
  if (*(short *)((long)local_158[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_158[0] + 0x1a);
    sVar19 = *(short *)((long)local_158[0] + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar19) {
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00f25948;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f25948:
        bVar13 = false;
      }
      if (bVar13) {
        if (local_158[0][2] != 0) {
          plVar6 = (long *)*local_148;
          goto joined_r0x00f25974;
        }
        break;
      }
      sVar19 = sVar4;
    } while (sVar4 != 0);
  }
  goto LAB_00f25868;
joined_r0x00f25974:
  do {
    if (plVar6 == (long *)local_148[1]) goto LAB_00f25a90;
    lVar18 = *plVar6;
    plVar3 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar18 + 8) != 0) {
      plVar3 = (long *)(*(long *)(lVar18 + 8) + 0x30);
    }
    plVar6 = plVar6 + 1;
  } while (*plVar3 != 0x46bfc6bf3eadf8f6);
  if ((*(char *)(lVar18 + 0x10) == '\x01') && (*(long **)(lVar18 + 0x18) != (long *)0x0)) {
    bVar13 = **(long **)(lVar18 + 0x18) != 0;
    bVar20 = false;
  }
  else {
LAB_00f25a90:
    bVar13 = false;
    bVar20 = true;
  }
  (**(code **)(*(long *)(local_158[0][2] + -8) + 0x18))();
  if ((!bVar20) && (bVar13)) {
    local_160 = (long *)0x0;
    local_178 = 0xd68ff27f76ff4af0;
    local_170 = "FSYS_RIDE_SWIM_ENABLE";
    uStack_168 = 0x15;
    if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
      FUN_00100190(&LAB_02af32dc,puVar11,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar10);
    }
    lVar18 = *(long *)puVar11;
    *(long *)PTR_DAT_047d4938 = lVar18;
    uVar14 = FUN_00fb1cf4(&local_178,lVar18 + 0x198);
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    local_17c = local_17c + (~uVar14 & 1);
  }
LAB_00f25868:
  puVar12 = local_158[0];
  if (local_158[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_158[0] + 3);
    do {
      sVar19 = *psVar1;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar19 == 1) {
      piVar2 = (int *)((long)local_158[0] + 0x1c);
      do {
        iVar15 = *piVar2;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar7), iVar15 != 0)) {
          FUN_00100190(puVar9,puVar8,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar7);
        }
        lVar18 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_178 = *puVar12;
        FUN_00c44438(lVar18 + 0x8040,&local_178);
      }
    }
    else if (sVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_00f256d8:
  plVar21 = (long *)*plVar21;
  if (plVar21 == (long *)0x0) goto LAB_00f25ad8;
  goto LAB_00f256c0;
}


