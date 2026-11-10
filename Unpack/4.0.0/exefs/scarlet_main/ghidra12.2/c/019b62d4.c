/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b62d4; name: FUN_019b62d4
 */


void FUN_019b62d4(long param_1,code *param_2,ulong param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_88;
  undefined8 uStack_80;
  long local_78;
  char local_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_047d3918;
  if ((param_3 & 1) != 0 || param_2 != (code *)0x0) {
    lVar12 = *(long *)(param_1 + 0x28);
    lVar4 = lVar12;
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar4 = lVar12 + *(long *)(param_1 + 0x30) * 0x20;
    }
    if (lVar12 != lVar4) {
      if ((param_3 & 1) == 0) {
        do {
          local_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          FUN_00c43ef0(&local_88,lVar12);
          local_78 = *(long *)(lVar12 + 0x10);
          local_70 = *(char *)(lVar12 + 0x18);
          if (local_70 == '\0') {
            if (local_88 != (undefined8 *)0x0) {
              if (*(short *)((long)local_88 + 0x1a) != 0) goto LAB_019b6368;
              goto LAB_019b637c;
            }
          }
          else {
LAB_019b6368:
            if (local_78 != 0) {
              (*param_2)(local_78 + ((long)param_3 >> 1),param_4);
            }
LAB_019b637c:
            puVar9 = local_88;
            if (local_88 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_88 + 3);
              do {
                sVar5 = *psVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar7) {
                  *psVar1 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                piVar2 = (int *)((long)local_88 + 0x1c);
                do {
                  iVar10 = *piVar2;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar7) {
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
                  lVar11 = *(long *)PTR_DAT_047d3910;
                  *(long *)puVar8 = lVar11;
                  local_68 = *puVar9;
                  FUN_00c44438(lVar11 + 0x8040,&local_68);
                }
              }
              else if (sVar5 == 0) {
LAB_019b65b0:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
            }
          }
          lVar12 = lVar12 + 0x20;
        } while (lVar12 != lVar4);
      }
      else {
        do {
          local_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          FUN_00c43ef0(&local_88,lVar12);
          local_78 = *(long *)(lVar12 + 0x10);
          local_70 = *(char *)(lVar12 + 0x18);
          if (local_70 == '\0') {
            if (local_88 != (undefined8 *)0x0) {
              if (*(short *)((long)local_88 + 0x1a) != 0) goto LAB_019b648c;
              goto LAB_019b64a8;
            }
          }
          else {
LAB_019b648c:
            if (local_78 != 0) {
              plVar3 = (long *)(local_78 + ((long)param_3 >> 1));
              (**(code **)(param_2 + *plVar3))(plVar3,param_4);
            }
LAB_019b64a8:
            puVar9 = local_88;
            if (local_88 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_88 + 3);
              do {
                sVar5 = *psVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar7) {
                  *psVar1 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                piVar2 = (int *)((long)local_88 + 0x1c);
                do {
                  iVar10 = *piVar2;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar7) {
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
                  lVar11 = *(long *)PTR_DAT_047d3910;
                  *(long *)puVar8 = lVar11;
                  local_68 = *puVar9;
                  FUN_00c44438(lVar11 + 0x8040,&local_68);
                }
              }
              else if (sVar5 == 0) goto LAB_019b65b0;
            }
          }
          lVar12 = lVar12 + 0x20;
        } while (lVar12 != lVar4);
      }
    }
  }
  return;
}


