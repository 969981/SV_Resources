/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00914c80; name: FUN_00914c80
 */


undefined8 FUN_00914c80(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *local_70;
  long *local_68;
  
  puVar7 = (undefined8 *)FUN_00c41a10(param_1,1);
  if (puVar7 == (undefined8 *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    plVar17 = (long *)*puVar7;
  }
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar18 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar18;
  if (plVar17 != (long *)0x0) {
    if ((char)*plVar17 == '\x01') {
      lVar13 = plVar17[1];
      plVar17[1] = 0;
      if (lVar13 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar8 = FUN_00c4e600();
        iVar2 = *(int *)(lVar8 + 0x12c8);
        iVar6 = iVar2 + 1;
        *(int *)(lVar8 + 0x12c8) = iVar6;
        if (*(int *)(lVar8 + 0x12cc) <= iVar2) {
          *(int *)(lVar8 + 0x12cc) = iVar6;
        }
        plVar10 = (long *)plVar17[2];
        lVar8 = plVar17[3];
        lVar14 = plVar17[4];
        uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,lVar8,lVar14);
        }
        else {
          FUN_00c48fe8(plVar10,lVar13,lVar8,lVar14);
        }
        lVar13 = FUN_00c4e600();
        iVar6 = *(int *)(lVar13 + 0x12c8) + -1;
        *(int *)(lVar13 + 0x12c8) = iVar6;
        if (iVar6 == 0) {
          plVar10 = (long *)FUN_00c4e600();
          if (plVar10[600] != 0) {
            local_70 = plVar10 + plVar10[600] * 3;
            local_68 = plVar10;
            FUN_00c4ea30(&local_68,&local_70);
            plVar15 = (long *)*plVar10;
            plVar1 = plVar10;
            if (plVar10[600] != 0) {
              plVar1 = plVar10 + plVar10[600] * 3;
            }
            if (plVar1 == plVar10) {
              lVar14 = 0;
              lVar8 = 0;
            }
            else {
              lVar8 = 0;
              lVar14 = 0;
              plVar16 = plVar10;
              do {
                (**(code **)(*(long *)*plVar16 + 0xd0))();
                if ((long *)*plVar16 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + lVar14 * 3,plVar16);
                  plVar15 = (long *)*plVar16;
                  lVar14 = lVar8;
                }
                plVar16 = plVar16 + 3;
                lVar8 = lVar8 + 1;
              } while (plVar1 != plVar16);
            }
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + lVar14 * 3,plVar10 + lVar8 * 3);
            plVar10[600] = 0;
          }
          *(undefined4 *)(lVar13 + 0x12cc) = 0;
        }
      }
    }
    puVar5 = PTR_DAT_047d38f8;
    lVar8 = *(long *)PTR_DAT_047d38f8;
    lVar13 = nn::os::GetCurrentThread();
    if (lVar13 == lVar8) {
      local_68 = plVar17;
      FUN_00900f88(lVar18 + 0x28,&local_68);
    }
    else {
      uVar11 = nn::os::GetCurrentThread();
      do {
        if (*(long *)puVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
            while (*(long *)puVar5 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar4) {
                *(undefined8 *)puVar5 = uVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00914e0c;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *(undefined8 *)puVar5 = uVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00914e0c:
      local_68 = plVar17;
      FUN_00900f88(lVar18 + 0x28,&local_68);
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
  }
  return 0;
}


