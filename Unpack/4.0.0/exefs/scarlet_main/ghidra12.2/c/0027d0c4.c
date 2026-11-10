/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0027d0c4; name: FUN_0027d0c4
 */


void FUN_0027d0c4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *local_68;
  
  uVar8 = *(ulong *)(param_1 + 0x20);
  if (1 < uVar8) {
    lVar11 = 0;
    uVar12 = 0;
    do {
      lVar10 = param_1 + 0x28;
      if ((uVar8 & 1) != 0) {
        lVar10 = *(long *)(param_1 + 0x28);
      }
      lVar10 = lVar10 + lVar11;
      if (*(long *)(lVar10 + 0x18) != 0) goto switchD_0027d1d8_caseD_4;
      iVar4 = (**(code **)(**(long **)(lVar10 + 0x10) + 0x10))();
      *(int *)(lVar10 + 0x20) = iVar4;
      if (iVar4 != 0) {
        lVar10 = param_1 + 0x28;
        if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
          lVar10 = *(long *)(param_1 + 0x28);
        }
        lVar10 = lVar10 + lVar11;
        lVar5 = *(long *)(lVar10 + 8);
        if (*(char *)(lVar10 + 0x28) == '\0') {
          if (iVar4 != 3) {
            FUN_0027deb0(lVar5,*(undefined4 *)(lVar10 + 0x24),iVar4);
            goto LAB_0027d118;
          }
          *(undefined1 *)(lVar10 + 0x28) = 1;
          switch(*(undefined4 *)(lVar10 + 0x24)) {
          case 1:
            lVar9 = *(long *)(lVar5 + 0x218);
            if (lVar9 == 0) goto switchD_0027d1d8_caseD_4;
            plVar14 = (long *)(lVar5 + 0x218);
            break;
          case 2:
            lVar9 = *(long *)(lVar5 + 0x210);
            if (lVar9 == 0) goto switchD_0027d1d8_caseD_4;
            plVar14 = (long *)(lVar5 + 0x210);
            break;
          case 3:
            lVar9 = *(long *)(lVar5 + 0x220);
            if (lVar9 == 0) goto switchD_0027d1d8_caseD_4;
            plVar14 = (long *)(lVar5 + 0x220);
            break;
          case 4:
            goto switchD_0027d1d8_caseD_4;
          default:
            goto switchD_0027d1d8_default;
          }
          *plVar14 = lVar9 + -1;
switchD_0027d1d8_default:
          *(long *)(lVar5 + 0x220) = *(long *)(lVar5 + 0x220) + 1;
        }
        else if (iVar4 == 2) {
          *(undefined1 *)(lVar10 + 0x28) = 0;
          if (*(long *)(lVar5 + 0x220) == 0) goto switchD_0027d1d8_caseD_4;
          *(long *)(lVar5 + 0x220) = *(long *)(lVar5 + 0x220) + -1;
          *(long *)(lVar5 + 0x210) = *(long *)(lVar5 + 0x210) + 1;
        }
LAB_0027d118:
        *(int *)(lVar10 + 0x24) = iVar4;
      }
      puVar3 = PTR_FUN_047cba38;
      uVar8 = *(ulong *)(param_1 + 0x20);
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x30;
    } while (uVar12 < uVar8 >> 1);
    if (1 < uVar8) {
      uVar12 = 0;
      lVar11 = param_1 + 0x28;
      do {
        if ((uVar8 & 1) == 0) {
          lVar5 = *(long *)(lVar11 + uVar12 * 0x30 + 0x10);
          lVar10 = lVar11;
        }
        else {
          lVar5 = *(long *)(*(long *)(param_1 + 0x28) + uVar12 * 0x30 + 0x10);
          lVar10 = *(long *)(param_1 + 0x28);
        }
        if (lVar5 != 0) {
          lVar5 = lVar10 + uVar12 * 0x30;
          plVar14 = (long *)(lVar5 + 0x18);
          if (*plVar14 != 0) {
switchD_0027d1d8_caseD_4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          plVar13 = *(long **)(lVar10 + uVar12 * 0x30 + 8);
          plVar7 = plVar13 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          puVar6 = (undefined8 *)FUN_0049e770(puVar3,0x18);
          if (puVar6 == (undefined8 *)0x0) {
            *plVar14 = 0;
            if (plVar13 != (long *)0x0) {
              do {
                lVar5 = *plVar7;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar2) {
                  *plVar7 = lVar5 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar5 + -1 == 0) {
                (**(code **)(*plVar13 + 8))(plVar13);
                FUN_0049e790(PTR_LAB_047cba48,plVar13);
              }
            }
          }
          else {
            *puVar6 = &PTR_FUN_0448cdd8;
            puVar6[1] = lVar5;
            puVar6[2] = plVar13;
            *plVar14 = (long)puVar6;
          }
          lVar10 = lVar10 + uVar12 * 0x30;
          plVar7 = *(long **)(lVar10 + 0x10);
          local_68 = (undefined8 *)*plVar14;
                    /* try { // try from 0027d340 to 0027d347 has its CatchHandler @ 0027d3b0 */
          (**(code **)(*plVar7 + 0x18))(plVar7,*(undefined4 *)(lVar10 + 0x20),&local_68);
          puVar6 = local_68;
          local_68 = (undefined8 *)0x0;
          if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6);
            FUN_0049e790(PTR_LAB_047cba48,puVar6);
          }
          lVar10 = lVar11;
          if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
            lVar10 = *(long *)(param_1 + 0x28);
          }
          (**(code **)(**(long **)(lVar10 + uVar12 * 0x30 + 0x10) + 0x28))();
          uVar8 = *(ulong *)(param_1 + 0x20);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar8 >> 1);
    }
    FUN_0027d9f0(param_1);
  }
  return;
}


