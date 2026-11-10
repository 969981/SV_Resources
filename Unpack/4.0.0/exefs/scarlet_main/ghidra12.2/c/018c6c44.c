/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018c6c44; name: FUN_018c6c44
 */


void FUN_018c6c44(long param_1)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  bool bVar13;
  short sVar14;
  long lVar15;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
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
      sVar14 = *(short *)((long)local_50 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar14) {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_018c6d18;
          bVar13 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_018c6d18:
          bVar13 = false;
        }
        if (bVar13) {
          lVar12 = local_50[2];
          if (lVar12 == 0) goto LAB_018c6e88;
          plVar10 = (long *)(lVar12 + 0xe8);
          lVar15 = *plVar10;
          lVar9 = nn::os::GetCurrentThread();
          if (lVar9 != lVar15) {
            lVar9 = nn::os::GetCurrentThread();
            goto LAB_018c6d5c;
          }
          bVar13 = true;
          goto LAB_018c6d70;
        }
        sVar14 = sVar4;
      } while (sVar4 != 0);
LAB_018c6e84:
      if (local_50 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_018c6e88:
    puVar11 = local_50;
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar14 = *psVar1;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_90 = *puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_90);
      }
    }
    else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_018c6d5c:
  if (*plVar10 == 0) goto code_r0x018c6d64;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
        while (*plVar10 == 0) {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar13) {
            *plVar10 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_018c6d6c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar13) {
      *plVar10 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_018c6d6c:
  bVar13 = false;
LAB_018c6d70:
  plVar10 = (long *)FUN_021334c0(*(undefined8 *)(lVar12 + 0x100),*(undefined8 *)(lVar12 + 0x108));
  if ((*(long **)(lVar12 + 0x108) == plVar10) || (*plVar10 == 0)) {
    plVar10 = (long *)FUN_021334c0(*(undefined8 *)(lVar12 + 0x138),*(undefined8 *)(lVar12 + 0x140));
    if (*(long **)(lVar12 + 0x140) == plVar10) {
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
  if (!bVar13) {
    *(undefined8 *)(lVar12 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0xf0));
  }
  if (lVar9 != 0) {
    local_90 = 0xf63038921d0742ce;
    pcStack_88 = "Enable";
    local_80 = 6;
    local_78 = (long *)0x0;
    uVar7 = FUN_0141f968(param_1,&local_90);
    uVar3 = 0;
    if ((uVar7 & 0xff) != 0) {
      uVar3 = uVar7 >> 8 & 0xff;
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    uVar7 = FUN_02121210(lVar9);
    if (uVar3 != (uVar7 & 1)) {
      local_90 = 0x9ca0b799c2c122f1;
      pcStack_88 = "Restore";
      local_80 = 7;
      local_78 = (long *)0x0;
      uVar6 = FUN_0141f968(param_1,&local_90);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if ((uVar6 & 0xff) != 0 && 0xff < uVar6) {
        local_90 = 0xcd812505d81da756;
        puVar11 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_90);
        *(char *)(puVar11 + 2) = (char)(uVar7 & 1);
        *puVar11 = PTR_LAB_047dcd90;
      }
      FUN_0119cc40(lVar9,uVar3 != 0);
    }
  }
  (**(code **)(*(long *)(lVar12 + -0x28) + 0x60))((long *)(lVar12 + -0x28));
  goto LAB_018c6e84;
code_r0x018c6d64:
  cVar5 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar13) {
    *plVar10 = lVar9;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_018c6d6c;
  goto LAB_018c6d5c;
}


