/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0211ee98; name: FUN_0211ee98
 */


void FUN_0211ee98(long param_1)

{
  int *piVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  bool bVar12;
  short sVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  code *local_110;
  code *local_108;
  undefined1 *local_100;
  long *local_f8;
  long alStack_f0 [13];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_88 = *(undefined8 *)(param_1 + 0x110);
  uStack_80 = *(undefined8 *)(param_1 + 0x118);
  local_78 = *(undefined8 *)(param_1 + 0x120);
  plVar9 = *(long **)(param_1 + 0x128);
  local_70 = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_68,param_1 + 0x30,&local_88);
    plVar9 = local_70;
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if ((local_68 != (undefined8 *)0x0) && (*(short *)((long)local_68 + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_68 + 0x1a);
    sVar13 = *(short *)((long)local_68 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar13) {
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_0211f0fc;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0211f0fc:
        bVar12 = false;
      }
      if (bVar12) {
        lVar10 = local_68[2];
        if (lVar10 != 0) {
          plVar9 = (long *)(lVar10 + 0xe8);
          lVar15 = *plVar9;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 != lVar15) {
            lVar8 = nn::os::GetCurrentThread();
            goto LAB_0211f140;
          }
          bVar12 = true;
          goto LAB_0211f154;
        }
        break;
      }
      sVar13 = sVar4;
    } while (sVar4 != 0);
  }
LAB_0211ef0c:
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  uVar14 = *(undefined8 *)PTR_DAT_047d3be8;
  *(undefined8 *)PTR_DAT_047dcd80 = uVar14;
  local_110 = (code *)0xe7a956670844d542;
  local_108 = (code *)0x3c212c6;
  local_100 = (undefined1 *)0xc;
  local_f8 = (long *)0x0;
  uVar6 = FUN_0141f968(param_1,&local_110);
  FUN_021113dc(uVar14,param_1,param_1 + 0x110,(uVar6 & 0xff) != 0 && 0xff < uVar6);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  puVar16 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_68 + 3);
    do {
      sVar13 = *psVar2;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar12) {
        *psVar2 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar1 = (int *)((long)local_68 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_110 = (code *)*puVar16;
        FUN_00c44438(lVar10 + 0x8040,&local_110);
      }
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_0211f140:
  if (*plVar9 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
          while (*plVar9 == 0) {
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar12) {
              *plVar9 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_0211f150;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar12) {
        *plVar9 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0211f150:
    bVar12 = false;
LAB_0211f154:
    plVar9 = (long *)FUN_0211f360(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
    if ((*(long **)(lVar10 + 0x108) == plVar9) || (*plVar9 == 0)) {
      plVar9 = (long *)FUN_0211f360(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140))
      ;
      if (*(long **)(lVar10 + 0x140) == plVar9) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if (*plVar9 != 0) {
          lVar8 = *plVar9 + -0x20;
        }
      }
    }
    else {
      lVar8 = *plVar9 + -0x20;
    }
    if (!bVar12) {
      *(undefined8 *)(lVar10 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
    }
    if (lVar8 != 0) {
      local_110 = FUN_0211f470;
      local_108 = FUN_02b2093c;
      local_100 = &LAB_02b20940;
      local_f8 = (long *)&LAB_02b2094c;
      puVar16 = *(undefined8 **)(lVar8 + 0x178);
      puVar3 = *(undefined8 **)(lVar8 + 0x180);
      pcVar11 = FUN_02b2093c;
      alStack_f0[0] = param_1;
      if (puVar16 != puVar3) {
        local_58 = *puVar16;
        FUN_0211f470(alStack_f0,&local_58);
        if (puVar16 + 1 != puVar3) {
          local_58 = puVar16[1];
          (*local_110)(alStack_f0,&local_58);
          if (puVar16 + 2 != puVar3) {
            local_58 = puVar16[2];
            (*local_110)(alStack_f0,&local_58);
            if (puVar16 + 3 != puVar3) {
              local_58 = puVar16[3];
              (*local_110)(alStack_f0,&local_58);
              for (puVar16 = puVar16 + 4; puVar16 != puVar3; puVar16 = puVar16 + 1) {
                local_58 = *puVar16;
                (*local_110)(alStack_f0,&local_58);
              }
            }
          }
        }
        pcVar11 = local_108;
        if (local_108 == (code *)0x0) goto LAB_0211f27c;
      }
      local_100 = (undefined1 *)0x0;
      local_f8 = (long *)0x0;
      local_110 = (code *)0x0;
      local_108 = (code *)0x0;
      (*pcVar11)(alStack_f0);
    }
LAB_0211f27c:
    (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
    goto LAB_0211ef0c;
  }
  cVar5 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar12) {
    *plVar9 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0211f150;
  goto LAB_0211f140;
}


