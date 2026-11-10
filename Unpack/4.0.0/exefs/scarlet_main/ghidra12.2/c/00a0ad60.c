/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a0ad60; name: FUN_00a0ad60
 */


undefined8 FUN_00a0ad60(undefined8 param_1)

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
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long *local_70;
  long *local_68;
  
  puVar7 = (undefined8 *)FUN_00c41a10(param_1,1);
  if (puVar7 == (undefined8 *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = (long *)*puVar7;
  }
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar15 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar15;
  if (plVar14 != (long *)0x0) {
    if ((char)*plVar14 == '\x01') {
      puVar7 = (undefined8 *)plVar14[1];
      plVar14[1] = 0;
      if (puVar7 != (undefined8 *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar8 = FUN_00c4e600();
        iVar2 = *(int *)(lVar8 + 0x12c8);
        iVar6 = iVar2 + 1;
        *(int *)(lVar8 + 0x12c8) = iVar6;
        if (*(int *)(lVar8 + 0x12cc) <= iVar2) {
          *(int *)(lVar8 + 0x12cc) = iVar6;
        }
        (**(code **)*puVar7)(puVar7);
        plVar10 = (long *)plVar14[2];
        lVar8 = plVar14[3];
        lVar11 = plVar14[4];
        uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar9 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,puVar7,lVar8,lVar11);
        }
        else {
          FUN_00c48fe8(plVar10,puVar7,lVar8,lVar11);
        }
        lVar8 = FUN_00c4e600();
        iVar6 = *(int *)(lVar8 + 0x12c8) + -1;
        *(int *)(lVar8 + 0x12c8) = iVar6;
        if (iVar6 == 0) {
          plVar10 = (long *)FUN_00c4e600();
          if (plVar10[600] != 0) {
            local_70 = plVar10 + plVar10[600] * 3;
            local_68 = plVar10;
            FUN_00c4ea30(&local_68,&local_70);
            plVar12 = (long *)*plVar10;
            plVar1 = plVar10;
            if (plVar10[600] != 0) {
              plVar1 = plVar10 + plVar10[600] * 3;
            }
            if (plVar1 == plVar10) {
              lVar17 = 0;
              lVar11 = 0;
            }
            else {
              lVar11 = 0;
              lVar17 = 0;
              plVar13 = plVar10;
              do {
                (**(code **)(*(long *)*plVar13 + 0xd0))();
                if ((long *)*plVar13 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + lVar17 * 3,plVar13);
                  plVar12 = (long *)*plVar13;
                  lVar17 = lVar11;
                }
                plVar13 = plVar13 + 3;
                lVar11 = lVar11 + 1;
              } while (plVar1 != plVar13);
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + lVar17 * 3,plVar10 + lVar11 * 3);
            plVar10[600] = 0;
          }
          *(undefined4 *)(lVar8 + 0x12cc) = 0;
        }
      }
    }
    puVar5 = PTR_DAT_047d38f8;
    lVar11 = *(long *)PTR_DAT_047d38f8;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 == lVar11) {
      bVar4 = true;
    }
    else {
      uVar16 = nn::os::GetCurrentThread();
      do {
        if (*(long *)puVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
            while (*(long *)puVar5 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar4) {
                *(undefined8 *)puVar5 = uVar16;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00a0af60;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *(undefined8 *)puVar5 = uVar16;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00a0af60:
      bVar4 = false;
    }
    puVar7 = *(undefined8 **)(lVar15 + 0x30);
    local_68 = plVar14;
    if (puVar7 < *(undefined8 **)(lVar15 + 0x38)) {
      uVar16 = *(undefined8 *)(lVar15 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        *puVar7 = plVar14;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar16;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *puVar7 = local_68;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      *(undefined8 **)(lVar15 + 0x30) = puVar7 + 1;
    }
    else {
      FUN_01a9cef8(lVar15 + 0x28,&local_68);
    }
    if (!bVar4) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
  }
  return 0;
}


