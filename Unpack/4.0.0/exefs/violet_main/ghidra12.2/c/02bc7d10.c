/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bc7d10; name: FUN_02bc7d10
 */


undefined1  [16]
FUN_02bc7d10(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  bool bVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long local_90;
  long *local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  long *plStack_68;
  
  FUN_02bc7530(&local_90,param_2,param_3,param_4,param_5);
  if (local_90 == 0) {
    uVar10 = 0;
  }
  else {
    plVar6 = param_1 + 0xe;
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar6 != 0 || param_1[0xf] != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar6 == 0 && param_1[0xf] == 0) {
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar9) {
              *plVar6 = lVar3;
              param_1[0xf] = 0;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_02bc7d74;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar9) {
        *plVar6 = lVar3;
        param_1[0xf] = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02bc7d74:
    uVar10 = *(undefined8 *)(local_90 + 0x40);
    uVar11 = *(undefined8 *)(local_90 + 0x60);
    if (*(char *)(local_90 + 0x90) != '\0') {
      if (param_1[0x1a] == param_1[0x1b]) {
        iVar13 = (int)param_1[0x21];
        *(int *)(param_1 + 0x21) = iVar13 + 1;
      }
      else {
        piVar8 = (int *)(param_1[0x1b] + -4);
        iVar13 = *piVar8;
        param_1[0x1b] = (long)piVar8;
      }
      (**(code **)PTR_DAT_047e1e08)(param_1 + 0x16,iVar13,uVar10,uVar11);
      *(int *)(local_90 + 0x88) = iVar13;
    }
    if (*(char *)(local_90 + 0x91) != '\0') {
      if (param_1[0x1a] == param_1[0x1b]) {
        iVar13 = (int)param_1[0x21];
        *(int *)(param_1 + 0x21) = iVar13 + 1;
      }
      else {
        piVar8 = (int *)(param_1[0x1b] + -4);
        iVar13 = *piVar8;
        param_1[0x1b] = (long)piVar8;
      }
      (**(code **)PTR_DAT_047e1e10)(param_1 + 0x16,iVar13,uVar10,uVar11);
      *(int *)(local_90 + 0x8c) = iVar13;
    }
    *param_1 = local_90;
    plVar4 = (long *)FUN_00d575b4(param_1 + 1,param_1);
    lVar3 = local_90;
    local_90 = 0;
    lVar12 = *plVar4;
    *plVar4 = lVar3;
    if (lVar12 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar3 = FUN_00c4e600();
      iVar1 = *(int *)(lVar3 + 0x12c8);
      iVar13 = iVar1 + 1;
      *(int *)(lVar3 + 0x12c8) = iVar13;
      if (*(int *)(lVar3 + 0x12cc) <= iVar1) {
        *(int *)(lVar3 + 0x12cc) = iVar13;
      }
      FUN_00d58900(lVar12);
      plVar14 = (long *)plVar4[1];
      lVar3 = plVar4[2];
      lVar18 = plVar4[3];
      uVar5 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar5 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar12,lVar3,lVar18);
      }
      else {
        FUN_00c48fe8(plVar14,lVar12,lVar3,lVar18);
      }
      lVar3 = FUN_00c4e600();
      iVar13 = *(int *)(lVar3 + 0x12c8) + -1;
      *(int *)(lVar3 + 0x12c8) = iVar13;
      if (iVar13 == 0) {
        plVar14 = (long *)FUN_00c4e600();
        if (plVar14[600] != 0) {
          local_70 = plVar14 + plVar14[600] * 3;
          plStack_68 = plVar14;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar15 = (long *)*plVar14;
          plVar16 = plVar14;
          if (plVar14[600] != 0) {
            plVar16 = plVar14 + plVar14[600] * 3;
          }
          if (plVar16 == plVar14) {
            lVar18 = 0;
            lVar12 = 0;
          }
          else {
            lVar12 = 0;
            lVar18 = 0;
            plVar17 = plVar14;
            do {
              (**(code **)(*(long *)*plVar17 + 0xd0))();
              if ((long *)*plVar17 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + lVar18 * 3,plVar17);
                plVar15 = (long *)*plVar17;
                lVar18 = lVar12;
              }
              plVar17 = plVar17 + 3;
              lVar12 = lVar12 + 1;
            } while (plVar16 != plVar17);
          }
          (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + lVar18 * 3,plVar14 + lVar12 * 3);
          plVar14[600] = 0;
        }
        *(undefined4 *)(lVar3 + 0x12cc) = 0;
      }
    }
    plVar4[2] = lStack_80;
    plVar4[3] = local_78;
    plVar4[1] = (long)local_88;
    unaff_x20 = *param_1;
    do {
      lVar3 = *plVar6;
      lVar12 = param_1[0xf];
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar9) {
        *plVar6 = lVar3;
        param_1[0xf] = lVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      lVar18 = *plVar6;
      lVar7 = param_1[0xf];
      if (lVar18 != lVar3 || lVar7 != lVar12) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x02bc7e44;
      }
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar9) {
        *plVar6 = 0;
        *(long *)((long)param_1 + 0x74) = lVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar9 = true;
joined_r0x02bc7e44:
    if (!bVar9) {
      do {
        lVar3 = *plVar6;
        lVar12 = param_1[0xf];
        if (lVar3 != lVar18 || lVar12 != lVar7) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar18 = lVar3;
          lVar7 = lVar12;
          goto joined_r0x02bc7e44;
        }
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar9) {
          *plVar6 = 0;
          *(long *)((long)param_1 + 0x74) = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar9 = true;
      lVar18 = lVar3;
      lVar7 = lVar12;
      goto joined_r0x02bc7e44;
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
    lVar3 = local_90;
    local_90 = 0;
    if (lVar3 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar1 = *(int *)(lVar12 + 0x12c8);
      iVar13 = iVar1 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar13;
      if (*(int *)(lVar12 + 0x12cc) <= iVar1) {
        *(int *)(lVar12 + 0x12cc) = iVar13;
      }
      FUN_00d58900(lVar3);
      uVar5 = (**(code **)(*local_88 + 0xf8))(local_88);
      if (((uVar5 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*local_88 + 0x18))(local_88,lVar3,lStack_80,local_78);
      }
      else {
        FUN_00c48fe8(local_88,lVar3,lStack_80,local_78);
      }
      lVar3 = FUN_00c4e600();
      iVar13 = *(int *)(lVar3 + 0x12c8) + -1;
      *(int *)(lVar3 + 0x12c8) = iVar13;
      if (iVar13 == 0) {
        plVar6 = (long *)FUN_00c4e600();
        if (plVar6[600] != 0) {
          local_70 = plVar6 + plVar6[600] * 3;
          plStack_68 = plVar6;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar14 = (long *)*plVar6;
          plVar4 = plVar6;
          if (plVar6[600] != 0) {
            plVar4 = plVar6 + plVar6[600] * 3;
          }
          if (plVar4 == plVar6) {
            lVar18 = 0;
            lVar12 = 0;
          }
          else {
            lVar12 = 0;
            lVar18 = 0;
            plVar16 = plVar6;
            do {
              (**(code **)(*(long *)*plVar16 + 0xd0))();
              if ((long *)*plVar16 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar6 + lVar18 * 3,plVar16);
                plVar14 = (long *)*plVar16;
                lVar18 = lVar12;
              }
              plVar16 = plVar16 + 3;
              lVar12 = lVar12 + 1;
            } while (plVar4 != plVar16);
          }
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar6 + lVar18 * 3,plVar6 + lVar12 * 3);
          plVar6[600] = 0;
        }
        *(undefined4 *)(lVar3 + 0x12cc) = 0;
      }
    }
    uVar10 = 1;
  }
  auVar19._8_8_ = unaff_x20;
  auVar19._0_8_ = uVar10;
  return auVar19;
}


