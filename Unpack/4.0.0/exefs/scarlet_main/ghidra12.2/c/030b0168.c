/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030b0168; name: FUN_030b0168
 */


void FUN_030b0168(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [16];
  long local_68;
  
  iVar4 = *(int *)(*(long *)(param_1 + 0x438) + 0x28);
  plVar13 = *(long **)(*(long *)(param_1 + 0x438) + 0x20);
  local_88 = auStack_78;
  local_80 = -0x7fffffff00000000;
  if (iVar4 < 2) {
    local_80._0_4_ = 0;
  }
  else {
    FUN_030b0564(&local_88,PTR_PTR_047d1a50,iVar4);
  }
  if ((int)local_80 != iVar4) {
    local_80 = CONCAT44(local_80._4_4_,iVar4);
  }
  local_68 = 0;
  if (iVar4 != 0) {
    plVar2 = plVar13 + iVar4;
    do {
      lVar11 = *plVar13;
      local_90 = lVar11;
      lVar7 = FUN_030b06e0(param_2,&local_90);
      if (lVar7 == 0) {
        uVar8 = 0;
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = (ulong)*(uint *)(lVar7 + 4);
        uVar8 = (lVar7 - param_2[2]) * 0x20000000;
      }
      if ((int)(uVar9 | uVar8) < 0) {
        plVar12 = *(long **)(lVar11 + 0x228);
        if (plVar12 != (long *)0x0) {
          if (*(int *)(lVar11 + 0x40) == 1) {
            *(undefined1 *)(plVar12 + 6) = 1;
            lVar7 = *(long *)(lVar11 + 0x30);
            plVar12[5] = *(long *)(lVar11 + 0x38);
            plVar12[4] = lVar7;
            *(undefined4 *)(*(long *)(lVar11 + 0x228) + 0x60) = *(undefined4 *)(lVar11 + 0x234);
            plVar12 = *(long **)(lVar11 + 0x228);
            if (plVar12 == (long *)0x0) goto switchD_030b0274_default;
          }
          if (plVar12[1] != 0) {
            plVar1 = plVar12 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          FUN_030af8fc(plVar12,param_3,param_4,&local_88);
          if ((*(byte *)((long)plVar12 + 100) & 0xfd) == 1) {
            FUN_030ac454(lVar11,plVar12[0xd]);
          }
          if ((int)plVar12[0xf] != 0) {
            FUN_030ac578(lVar11,plVar12[0xe],plVar12[0xe] + (long)(int)plVar12[0xf] * 4,0);
            *(undefined4 *)(plVar12 + 0xf) = 0;
          }
          if (plVar12[1] != 0) {
            plVar1 = plVar12 + 2;
            do {
              lVar7 = *plVar1 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_030b0424:
            if (lVar7 == 0) {
              (**(code **)(*plVar12 + 0x18))(plVar12);
            }
          }
        }
      }
      else {
        lVar7 = *(long *)(*param_2 + ((long)((uVar9 | uVar8) << 0x20) >> 0x1c) + 8);
        switch(*(undefined1 *)(lVar7 + 100)) {
        case 1:
        case 3:
          FUN_030ac454(lVar11,*(undefined8 *)(lVar7 + 0x68));
        case 0:
        case 2:
          if (*(int *)(lVar7 + 0x78) != 0) {
            FUN_030ac578(lVar11,*(long *)(lVar7 + 0x70),
                         *(long *)(lVar7 + 0x70) + (long)*(int *)(lVar7 + 0x78) * 4,0);
            *(undefined4 *)(lVar7 + 0x78) = 0;
          }
          break;
        case 4:
          plVar12 = *(long **)(lVar11 + 0x228);
          if (plVar12 != (long *)0x0) {
            if (*(int *)(lVar11 + 0x40) == 1) {
              *(undefined1 *)(plVar12 + 6) = 1;
              lVar7 = *(long *)(lVar11 + 0x30);
              plVar12[5] = *(long *)(lVar11 + 0x38);
              plVar12[4] = lVar7;
              *(undefined4 *)(*(long *)(lVar11 + 0x228) + 0x60) = *(undefined4 *)(lVar11 + 0x234);
              plVar12 = *(long **)(lVar11 + 0x228);
              if (plVar12 == (long *)0x0) break;
            }
            if (plVar12[1] != 0) {
              plVar1 = plVar12 + 2;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = *plVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            FUN_030af8fc(plVar12,param_3,param_4,&local_88);
            if ((*(byte *)((long)plVar12 + 100) & 0xfd) == 1) {
              FUN_030ac454(lVar11,plVar12[0xd]);
            }
            if ((int)plVar12[0xf] != 0) {
              FUN_030ac578(lVar11,plVar12[0xe],plVar12[0xe] + (long)(int)plVar12[0xf] * 4,0);
              *(undefined4 *)(plVar12 + 0xf) = 0;
            }
            if (plVar12[1] != 0) {
              plVar1 = plVar12 + 2;
              do {
                lVar7 = *plVar1 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar7;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              goto LAB_030b0424;
            }
          }
        }
      }
switchD_030b0274_default:
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
  }
  FUN_030d0f5c(param_5,local_88,local_88 + local_68 * 0x10);
  if (local_68 != 0) {
    puVar3 = local_88 + local_68 * 0x10;
    puVar10 = local_88;
    do {
      plVar13 = *(long **)(puVar10 + 8);
      if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
        plVar2 = plVar13 + 2;
        do {
          lVar7 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar13 + 0x18))();
        }
      }
      puVar10 = puVar10 + 0x10;
    } while (puVar10 != puVar3);
  }
  lVar7 = local_80;
  uVar8 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_88 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar8 << 4);
  }
  return;
}


