/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02231190; name: FUN_02231190
 */


void FUN_02231190(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  bool bVar12;
  short sVar13;
  long lVar14;
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  long *local_128;
  undefined1 auStack_120 [96];
  char local_c0 [8];
  undefined1 auStack_b8 [8];
  char *local_b0;
  long *local_a0;
  char local_98 [8];
  undefined1 auStack_90 [24];
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  local_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  local_60 = *(undefined8 *)(param_1 + 0x120);
  plVar10 = *(long **)(param_1 + 0x128);
  local_58 = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_50,param_1 + 0x30,&local_70);
    plVar10 = local_58;
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (local_50 != (undefined8 *)0x0) {
    if (*(short *)((long)local_50 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50 + 0x1a);
      sVar13 = *(short *)((long)local_50 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar13) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02231264;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02231264:
          bVar12 = false;
        }
        if (bVar12) {
          lVar11 = local_50[2];
          if (lVar11 == 0) goto LAB_022314c0;
          plVar10 = (long *)(lVar11 + 0xe8);
          lVar14 = *plVar10;
          lVar9 = nn::os::GetCurrentThread();
          if (lVar9 != lVar14) {
            lVar9 = nn::os::GetCurrentThread();
            goto LAB_022312a8;
          }
          bVar12 = true;
          goto LAB_022312bc;
        }
        sVar13 = sVar3;
      } while (sVar3 != 0);
LAB_022314bc:
      if (local_50 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_022314c0:
    puVar6 = local_50;
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar13 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_140 = *puVar6;
        FUN_00c44438(lVar11 + 0x8040,&local_140);
      }
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_022312a8:
  if (*plVar10 == 0) goto code_r0x022312b0;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar12) {
            *plVar10 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_022312b8;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar12) {
      *plVar10 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_022312b8:
  bVar12 = false;
LAB_022312bc:
  plVar10 = (long *)FUN_02231640(*(undefined8 *)(lVar11 + 0x100),*(undefined8 *)(lVar11 + 0x108));
  if ((*(long **)(lVar11 + 0x108) == plVar10) || (*plVar10 == 0)) {
    plVar10 = (long *)FUN_02231640(*(undefined8 *)(lVar11 + 0x138),*(undefined8 *)(lVar11 + 0x140));
    if (*(long **)(lVar11 + 0x140) == plVar10) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      if (*plVar10 != 0) {
        lVar9 = *plVar10 + -0x20;
      }
    }
  }
  else {
    lVar9 = *plVar10 + -0x20;
  }
  if (!bVar12) {
    *(undefined8 *)(lVar11 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
  }
  if (lVar9 != 0) {
    local_140 = 0xa5d87c9ff14c683c;
    local_138 = (code *)0x3c2f425;
    local_130 = 9;
    local_128 = (long *)0x0;
    FUN_01315eac(local_98,param_1,&local_140);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    if (local_98[0] != '\0') {
      local_140 = 0x352b79c017918034;
      local_138 = (code *)0x3c56c55;
      local_130 = 9;
      local_128 = (long *)0x0;
      FUN_01315eac(local_c0,param_1,&local_140);
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      local_140 = 0x6bfdff25f365b50;
      local_138 = (code *)0x3be3349;
      local_130 = 6;
      local_128 = (long *)0x0;
      uVar7 = FUN_0141f968(param_1,&local_140);
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      if ((((uVar7 & 0xff) == 0) || (local_c0[0] == '\0')) || (*local_b0 == '\0')) {
        memset(&local_140,0,0x80);
        FUN_0131fc3c(lVar9,auStack_90,&local_140,100);
        pcVar5 = local_138;
        if (local_138 != (code *)0x0) {
          local_130 = 0;
          local_128 = (long *)0x0;
          local_140 = 0;
          local_138 = (code *)0x0;
          (*pcVar5)(auStack_120);
        }
      }
      else {
        FUN_020e0d5c(lVar9,auStack_90,auStack_b8,0xff < uVar7,100);
      }
      if (local_c0[0] != '\0') {
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        local_c0[0] = '\0';
      }
      if (local_98[0] != '\0') {
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        local_98[0] = '\0';
      }
    }
  }
  (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))((long *)(lVar11 + -0x28));
  goto LAB_022314bc;
code_r0x022312b0:
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar12) {
    *plVar10 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_022312b8;
  goto LAB_022312a8;
}


