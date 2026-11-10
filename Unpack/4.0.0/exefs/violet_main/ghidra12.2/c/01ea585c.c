/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea585c; name: FUN_01ea585c
 */


undefined8 FUN_01ea585c(long param_1,uint *param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  uint *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint *local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  if (param_2 != (uint *)0x0) {
    local_90 = 0x4000000000;
    uStack_88 = 0xf424000000000;
    lStack_98 = (ulong)*param_2 + 4;
    local_80 = 0;
    local_78 = 1;
    if ((*param_2 != 0) && (local_a0 = param_2, uVar10 = FUN_028ff9b8(&local_a0), (uVar10 & 1) != 0)
       ) {
      uVar10 = (ulong)param_2[1];
      piVar3 = (int *)((long)(param_2 + 1) + uVar10);
      plVar1 = (long *)(param_1 + 0x120);
      lVar11 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB_01ea58e8;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x128));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x128));
            while (*plVar1 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar11;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_01ea58e8;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_01ea58e8:
      lVar11 = (long)*piVar3;
      puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (10 - lVar11)));
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      puVar20 = puVar4 + 1;
      uVar13 = (ulong)*puVar4;
      if (uVar13 == 0) goto LAB_01ea5a7c;
      puVar4 = puVar20 + uVar13;
      pLVar2 = (LightEventType *)(param_1 + 0x128);
      do {
        piVar5 = (int *)((long)puVar20 + (ulong)*puVar20);
        puVar14 = (ushort *)((long)piVar5 - (long)*piVar5);
        if (*puVar14 < 5) {
          uVar22 = 0;
LAB_01ea5958:
          uVar21 = 0;
        }
        else {
          if ((ulong)puVar14[2] == 0) {
            uVar22 = 0;
          }
          else {
            uVar22 = *(undefined4 *)((long)piVar5 + (ulong)puVar14[2]);
          }
          if ((*puVar14 < 7) || ((ulong)puVar14[3] == 0)) goto LAB_01ea5958;
          uVar21 = *(undefined4 *)((long)piVar5 + (ulong)puVar14[3]);
        }
        lVar18 = *plVar1;
        lVar11 = nn::os::GetCurrentThread();
        if (lVar11 != lVar18) {
          lVar11 = nn::os::GetCurrentThread();
LAB_01ea5974:
          if (*plVar1 == 0) goto code_r0x01ea597c;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar2);
          do {
            if (*plVar1 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent(pLVar2);
                while (*plVar1 == 0) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar7) {
                    *plVar1 = lVar11;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_01ea5984;
                }
              } while( true );
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar11;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_01ea5984:
          local_70 = CONCAT44(uVar21,uVar22);
          local_68 = CONCAT31(local_68._1_3_,1);
          local_64 = CONCAT31(local_64._1_3_,1);
          FUN_014fb000(param_1,&local_70);
          *plVar1 = 0;
          nn::os::SignalLightEvent(pLVar2);
          goto LAB_01ea59ac;
        }
        local_70 = CONCAT44(uVar21,uVar22);
        local_68 = CONCAT31(local_68._1_3_,1);
        local_64 = CONCAT31(local_64._1_3_,1);
        FUN_014fb000(param_1,&local_70);
LAB_01ea59ac:
        puVar20 = puVar20 + 1;
        if (puVar20 == puVar4) {
          lVar11 = (long)*piVar3;
LAB_01ea5a7c:
          lVar11 = -lVar11;
          uVar13 = (ulong)*(ushort *)((long)piVar3 + lVar11 + 0xc);
          puVar20 = (uint *)((long)piVar3 + uVar13);
          uVar15 = (ulong)*puVar20;
          uVar16 = (ulong)*(uint *)((long)puVar20 + uVar15);
          if (uVar16 != 0) {
            lVar18 = uVar15 + uVar13 + uVar10;
            lVar11 = 0;
            do {
              uVar10 = (ulong)*(uint *)((long)param_2 + lVar11 + lVar18 + 8);
              lVar12 = lVar11 + uVar10 + lVar18;
              lVar8 = lVar11 + (uVar10 - (long)*(int *)((long)param_2 + lVar12 + 8)) + lVar18;
              if (*(ushort *)((long)param_2 + lVar8 + 8) < 5) {
                local_70 = 0;
              }
              else {
                uVar13 = (ulong)*(ushort *)((long)param_2 + lVar8 + 0xc);
                local_70 = 0;
                if (uVar13 != 0) {
                  local_70 = *(undefined8 *)((long)param_2 + lVar11 + uVar10 + uVar13 + lVar18 + 8);
                }
              }
              lVar12 = lVar11 + (uVar10 - (long)*(int *)((long)param_2 + lVar12 + 8)) + lVar18;
              if ((*(ushort *)((long)param_2 + lVar12 + 8) < 7) ||
                 (uVar13 = (ulong)*(ushort *)((long)param_2 + lVar12 + 0xe), uVar13 == 0)) {
                local_68 = 0;
              }
              else {
                local_68 = *(undefined4 *)((long)param_2 + lVar11 + uVar10 + uVar13 + lVar18 + 8);
              }
              puVar19 = *(undefined8 **)(param_1 + 0x598);
              if (puVar19 < *(undefined8 **)(param_1 + 0x5a0)) {
                uVar17 = *(undefined8 *)(param_1 + 0x5a8);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar12 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar12 == 0) {
                  *puVar19 = local_70;
                  puVar19[1] = CONCAT44(local_64,local_68);
                }
                else {
                  if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar17;
                  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                  *puVar19 = local_70;
                  puVar19[1] = CONCAT44(local_64,local_68);
                  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
                }
                *(undefined8 **)(param_1 + 0x598) = puVar19 + 2;
              }
              else {
                FUN_01048e94(param_1 + 0x590,&local_70);
              }
              lVar11 = lVar11 + 4;
            } while (uVar16 * 4 != lVar11);
            lVar11 = -(long)*piVar3;
          }
          if (*(ushort *)((long)piVar3 + lVar11) < 5) {
            uVar22 = 0;
          }
          else {
            uVar10 = (ulong)((ushort *)((long)piVar3 + lVar11))[2];
            uVar22 = 0;
            if (uVar10 != 0) {
              uVar22 = *(undefined4 *)((long)piVar3 + uVar10);
            }
          }
          *(undefined4 *)(param_1 + 0x394) = uVar22;
          if (*(ushort *)((long)piVar3 - (long)*piVar3) < 7) {
            uVar22 = 0;
          }
          else {
            uVar10 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
            uVar22 = 0;
            if (uVar10 != 0) {
              uVar22 = *(undefined4 *)((long)piVar3 + uVar10);
            }
          }
          *(undefined4 *)(param_1 + 0x390) = uVar22;
          if (*(ushort *)((long)piVar3 - (long)*piVar3) < 9) {
            uVar22 = 0;
          }
          else {
            uVar10 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4];
            uVar22 = 0;
            if (uVar10 != 0) {
              uVar22 = *(undefined4 *)((long)piVar3 + uVar10);
            }
          }
          *(undefined4 *)(param_1 + 0x39c) = uVar22;
          *(undefined8 *)(param_1 + 0x120) = 0;
          nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x128));
          return 1;
        }
      } while( true );
    }
  }
  return 0;
code_r0x01ea597c:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar7) {
    *plVar1 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01ea5984;
  goto LAB_01ea5974;
}


