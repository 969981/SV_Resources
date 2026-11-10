/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017237f0; name: FUN_017237f0
 */


undefined1  [16] FUN_017237f0(long param_1)

{
  ulong *puVar1;
  int *piVar2;
  short *psVar3;
  undefined1 **ppuVar4;
  short sVar5;
  char cVar6;
  ulong *puVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  short sVar16;
  long lVar17;
  undefined4 uVar18;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined8 in_d3;
  undefined8 local_100;
  undefined1 *local_f0;
  undefined1 *local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  char *local_c8;
  char *local_c0;
  long *local_b8;
  long *local_b0;
  undefined1 *local_a8;
  char *local_a0;
  undefined1 *local_98;
  long *local_90;
  long *local_88;
  char *local_80;
  undefined1 *puStack_78;
  long *local_70;
  long *local_68;
  ulong *local_60;
  undefined8 uStack_58;
  
  local_a8 = (undefined1 *)0x5ea3c39f1d490bbf;
  local_a0 = "EnableTarget";
  local_98 = (undefined1 *)0xc;
  local_90 = (long *)0x0;
  uVar9 = FUN_0141f968(param_1,&local_a8);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_c8 = &DAT_94ed70272cac328;
  local_c0 = "Target";
  local_b8 = (long *)0x6;
  local_b0 = (long *)0x0;
  FUN_01315eac(&local_a8,param_1,&local_c8);
  local_e8 = &DAT_03c886bc;
  bVar8 = (char)local_a8 != '\0';
  ppuVar4 = &local_e8;
  if (bVar8) {
    ppuVar4 = &local_98;
  }
  puStack_78 = *ppuVar4;
  local_80 = &DAT_cbf29ce484222645;
  if (bVar8) {
    local_80 = local_a0;
  }
  local_70 = (long *)0x0;
  if (bVar8) {
    local_70 = local_90;
  }
  local_68 = (long *)0x0;
  if (bVar8) {
    local_68 = local_88;
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_60 = (ulong *)0x0;
    uStack_58 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_60,param_1 + 0x30,&local_80);
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((char)local_a8 != '\0') {
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    local_a8 = (undefined1 *)((ulong)local_a8 & 0xffffffffffffff00);
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if ((((uVar9 & 0xff) == 0 || uVar9 < 0x100) || (local_60 == (ulong *)0x0)) ||
     (*(short *)((long)local_60 + 0x1a) == 0)) {
    local_a8 = (undefined1 *)0x9032e3042aa230d6;
    local_a0 = "PositionX";
    local_98 = (undefined1 *)0x9;
    local_90 = (long *)0x0;
    uVar12 = FUN_01180d38(param_1,&local_a8);
    uVar18 = 0x3f000000;
    if ((uVar12 & 0xff) != 0) {
      uVar18 = (int)(uVar12 >> 0x20);
    }
    local_c8 = (char *)0x9032e4042aa23289;
    local_c0 = "PositionY";
    local_b8 = (long *)&DAT_00000009;
    local_b0 = (long *)0x0;
    uVar12 = FUN_01180d38(param_1,&local_c8);
    uVar20 = 0x3f000000;
    if ((uVar12 & 0xff) != 0) {
      uVar20 = (int)(uVar12 >> 0x20);
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))(0);
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    auVar19._4_4_ = uVar20;
    auVar19._0_4_ = uVar18;
    auVar19._8_8_ = 0;
  }
  else {
    local_e8 = (undefined1 *)0x766d139b068c180e;
    pcStack_e0 = "NodeName";
    local_d8 = 8;
    local_d0 = (long *)0x0;
    FUN_01315eac(&local_a8,param_1,&local_e8);
    bVar8 = (char)local_a8 != '\0';
    local_f0 = &DAT_03c886bc;
    ppuVar4 = &local_f0;
    if (bVar8) {
      ppuVar4 = &local_98;
    }
    local_c0 = *ppuVar4;
    local_c8 = &DAT_cbf29ce484222645;
    if (bVar8) {
      local_c8 = local_a0;
    }
    local_b8 = (long *)0x0;
    if (bVar8) {
      local_b8 = local_90;
    }
    local_b0 = (long *)0x0;
    if (bVar8) {
      local_b0 = local_88;
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x18))();
    }
    if ((char)local_a8 != '\0') {
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      local_a8 = (undefined1 *)((ulong)local_a8 & 0xffffffffffffff00);
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    local_100 = 0;
    if ((local_60 != (ulong *)0x0) && (*(short *)((long)local_60 + 0x1a) != 0)) {
      psVar3 = (short *)((long)local_60 + 0x1a);
      sVar16 = *(short *)((long)local_60 + 0x1a);
      do {
        sVar5 = *psVar3;
        if (sVar5 == sVar16) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar8) {
            *psVar3 = sVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_01723ca4;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01723ca4:
          bVar8 = false;
        }
        if (bVar8) {
          uVar12 = local_60[2];
          plVar15 = (long *)(uVar12 - 0x28);
          if (uVar12 != 0) {
            if (*local_c0 == '\0') goto LAB_01723e70;
            plVar13 = (long *)(uVar12 + 0xe8);
            lVar17 = *plVar13;
            lVar14 = nn::os::GetCurrentThread();
            if (lVar14 == lVar17) {
              bVar8 = true;
              goto LAB_01723d08;
            }
            lVar14 = nn::os::GetCurrentThread();
            goto LAB_01723cf4;
          }
          break;
        }
        sVar16 = sVar5;
      } while (sVar5 != 0);
    }
LAB_01723ac4:
    auVar19 = FUN_01723e9c(local_100);
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  puVar7 = local_60;
  if (local_60 != (ulong *)0x0) {
    puVar1 = local_60 + 3;
    do {
      sVar16 = (short)*puVar1;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar8) {
        *(short *)puVar1 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
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
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_a8 = (undefined1 *)*puVar7;
        FUN_00c44438(lVar14 + 0x8040,&local_a8);
      }
    }
    else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return auVar19;
LAB_01723cf4:
  if (*plVar13 == 0) goto code_r0x01723cfc;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(uVar12 + 0xf0));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(uVar12 + 0xf0));
        while (*plVar13 == 0) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar8) {
            *plVar13 = lVar14;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01723d04;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar8) {
      *plVar13 = lVar14;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01723d04:
  bVar8 = false;
LAB_01723d08:
  plVar13 = (long *)FUN_0212a420(*(undefined8 *)(uVar12 + 0x100),*(undefined8 *)(uVar12 + 0x108));
  if ((*(long **)(uVar12 + 0x108) == plVar13) || (*plVar13 == 0)) {
    plVar13 = (long *)FUN_0212a420(*(undefined8 *)(uVar12 + 0x138),*(undefined8 *)(uVar12 + 0x140));
    local_100 = extraout_d0_00;
    if (*(long **)(uVar12 + 0x140) == plVar13) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      if (*plVar13 != 0) {
        lVar14 = *plVar13 + -0x20;
      }
    }
  }
  else {
    lVar14 = *plVar13 + -0x20;
    local_100 = extraout_d0;
  }
  if (!bVar8) {
    *(undefined8 *)(uVar12 + 0xe8) = 0;
    local_100 = nn::os::SignalLightEvent((LightEventType *)(uVar12 + 0xf0));
  }
  if (lVar14 == 0) {
LAB_01723e70:
    lVar14 = (**(code **)(*plVar15 + 0x68))(local_100,plVar15);
    local_100 = *(undefined8 *)(lVar14 + 0x30);
  }
  else {
    local_a8 = &DAT_afc4d6c05abef19e;
    local_a0 = "default";
    local_98 = (undefined1 *)0x7;
    local_90 = (long *)0x0;
    uVar11 = FUN_01407a7c(lVar14,&local_c8,&local_a8);
    local_100 = extraout_d0_01;
    if (local_90 != (long *)0x0) {
      local_100 = (**(code **)(*local_90 + 0x20))();
    }
    if ((~uVar11 & 0xffff) == 0) goto LAB_01723e70;
    local_a8 = &DAT_afc4d6c05abef19e;
    local_a0 = "default";
    local_98 = (undefined1 *)0x7;
    local_90 = (long *)0x0;
    FUN_00e7c820(lVar14,uVar11,&local_a8);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    local_100 = in_d3;
  }
  (**(code **)(*plVar15 + 0x60))(plVar15);
  goto LAB_01723ac4;
code_r0x01723cfc:
  cVar6 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar8) {
    *plVar13 = lVar14;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01723d04;
  goto LAB_01723cf4;
}


