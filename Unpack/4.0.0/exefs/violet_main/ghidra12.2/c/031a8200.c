/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031a8200; name: FUN_031a8200
 */


undefined4 FUN_031a8200(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  uint uVar17;
  long *plVar18;
  byte *pbVar19;
  undefined1 auVar20 [16];
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  byte *local_d8;
  ulong local_d0;
  byte local_c8 [128];
  undefined4 local_48;
  long *local_28;
  
  local_d8 = local_c8;
  local_d0 = 0x8000008000000000;
  local_48 = 1;
  FUN_031c6afc(&local_d8,param_2,0xffffffff);
  FUN_031c7c08(&local_d8);
  if (local_d8 == (byte *)0x0) {
    pbVar19 = (byte *)0x0;
  }
  else {
    pbVar19 = local_d8 + 1;
    if (*local_d8 != 0x2e) {
      pbVar19 = local_d8;
    }
  }
  plVar18 = *(long **)PTR_DAT_047e58b8;
  uVar11 = 0x80040200;
  do {
    if (plVar18 == (long *)0x0) {
LAB_031a842c:
      uVar9 = local_d0;
      local_d0 = local_d0 & 0xffffffff00000000;
      if ((-1 < (long)uVar9) && (local_d8 != (byte *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      return uVar11;
    }
    auVar20 = (**(code **)(*plVar18 + 0x18))(plVar18);
    for (puVar12 = auVar20._0_8_; puVar12 != auVar20._8_8_; puVar12 = puVar12 + 1) {
      pbVar14 = (byte *)*puVar12;
      pbVar15 = pbVar19;
      do {
        bVar4 = *pbVar14;
        bVar5 = *pbVar15;
        if (bVar4 == 0) {
          if (bVar5 == 0) {
            if (plVar18 != (long *)0x0) {
              FUN_03228864(&local_28,*(undefined8 *)PTR_DAT_047e58c0,param_2,1);
              plVar10 = local_28;
              puVar8 = PTR_DAT_047d1a08;
              local_28 = (long *)0x0;
              if (plVar10 == (long *)0x0) {
                plVar13 = (long *)0x0;
              }
              else {
                local_f0 = (long *)0x28;
                plVar13 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_f0,0);
                if (*(code **)(puVar8 + 0x10) != (code *)0x0) {
                  (**(code **)(puVar8 + 0x10))(plVar13,"StreamReaderImpl");
                }
                *plVar13 = (long)(PTR_DAT_047e58c8 + 0x10);
                plVar13[1] = (long)plVar10;
                if (plVar10[1] != 0) {
                  plVar1 = plVar10 + 2;
                  do {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar7) {
                      *plVar1 = *plVar1 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                plVar13[2] = 0;
                plVar13[3] = -0x8000000000000000;
                plVar13[4] = -1;
                if (plVar10[1] != 0) {
                  plVar1 = plVar10 + 2;
                  do {
                    lVar16 = *plVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar7) {
                      *plVar1 = lVar16 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar16 + -1 == 0) {
                    (**(code **)(*plVar10 + 0x18))(plVar10);
                  }
                }
              }
              uStack_e8 = 0;
              local_e0 = 0;
              local_f0 = plVar13;
              uVar11 = (**(code **)(*plVar18 + 8))(plVar18,&local_f0,param_1);
              if (local_f0 != (long *)0x0) {
                (**(code **)(*local_f0 + 8))();
              }
            }
            goto LAB_031a842c;
          }
          break;
        }
        if (bVar5 == 0) break;
        uVar17 = (uint)bVar5;
        uVar2 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar2 = (uint)bVar4;
        }
        uVar3 = uVar17 + 0x20;
        if (0x19 < uVar17 - 0x41) {
          uVar3 = uVar17;
        }
        if ((uVar2 & 0xff) < (uVar3 & 0xff)) break;
        pbVar15 = pbVar15 + 1;
        pbVar14 = pbVar14 + 1;
      } while ((uVar2 & 0xff) <= (uVar3 & 0xff));
    }
    plVar18 = (long *)plVar18[1];
  } while( true );
}


