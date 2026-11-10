/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00978130; name: FUN_00978130
 */


undefined8 FUN_00978130(undefined8 param_1)

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
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long *local_70;
  long *local_68;
  
  puVar7 = (undefined8 *)FUN_00c41a10(param_1,1);
  if (puVar7 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = (long *)*puVar7;
  }
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar17 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar17;
  if (plVar16 != (long *)0x0) {
    if ((char)*plVar16 == '\x01') {
      lVar12 = plVar16[1];
      plVar16[1] = 0;
      if (lVar12 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar8 = FUN_00c4e600();
        iVar2 = *(int *)(lVar8 + 0x12c8);
        iVar6 = iVar2 + 1;
        *(int *)(lVar8 + 0x12c8) = iVar6;
        if (*(int *)(lVar8 + 0x12cc) <= iVar2) {
          *(int *)(lVar8 + 0x12cc) = iVar6;
        }
        plVar10 = (long *)plVar16[2];
        lVar8 = plVar16[3];
        lVar13 = plVar16[4];
        uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar8,lVar13);
        }
        else {
          FUN_00c48fe8(plVar10,lVar12,lVar8,lVar13);
        }
        lVar12 = FUN_00c4e600();
        iVar6 = *(int *)(lVar12 + 0x12c8) + -1;
        *(int *)(lVar12 + 0x12c8) = iVar6;
        if (iVar6 == 0) {
          plVar10 = (long *)FUN_00c4e600();
          if (plVar10[600] != 0) {
            local_70 = plVar10 + plVar10[600] * 3;
            local_68 = plVar10;
            FUN_00c4ea30(&local_68,&local_70);
            plVar14 = (long *)*plVar10;
            plVar1 = plVar10;
            if (plVar10[600] != 0) {
              plVar1 = plVar10 + plVar10[600] * 3;
            }
            if (plVar1 == plVar10) {
              lVar13 = 0;
              lVar8 = 0;
            }
            else {
              lVar8 = 0;
              lVar13 = 0;
              plVar15 = plVar10;
              do {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + lVar13 * 3,plVar15);
                  plVar14 = (long *)*plVar15;
                  lVar13 = lVar8;
                }
                plVar15 = plVar15 + 3;
                lVar8 = lVar8 + 1;
              } while (plVar1 != plVar15);
            }
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + lVar13 * 3,plVar10 + lVar8 * 3);
            plVar10[600] = 0;
          }
          *(undefined4 *)(lVar12 + 0x12cc) = 0;
        }
      }
    }
    puVar5 = PTR_DAT_047d38f8;
    lVar8 = *(long *)PTR_DAT_047d38f8;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 == lVar8) {
      bVar4 = true;
    }
    else {
      uVar18 = nn::os::GetCurrentThread();
      do {
        if (*(long *)puVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
            while (*(long *)puVar5 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar4) {
                *(undefined8 *)puVar5 = uVar18;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00978320;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *(undefined8 *)puVar5 = uVar18;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00978320:
      bVar4 = false;
    }
    puVar7 = *(undefined8 **)(lVar17 + 0x30);
    local_68 = plVar16;
    if (puVar7 < *(undefined8 **)(lVar17 + 0x38)) {
      uVar18 = *(undefined8 *)(lVar17 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar12 == 0) {
        *puVar7 = plVar16;
      }
      else {
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar18;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        *puVar7 = local_68;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      *(undefined8 **)(lVar17 + 0x30) = puVar7 + 1;
    }
    else {
      FUN_00dac804(lVar17 + 0x28,&local_68);
    }
    if (!bVar4) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
  }
  return 0;
}


