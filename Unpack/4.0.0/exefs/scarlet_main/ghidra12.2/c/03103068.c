/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03103068; name: FUN_03103068
 */


void FUN_03103068(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 uVar14;
  long local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 auStack_68 [16];
  long local_58;
  
  iVar4 = *(int *)(*(long *)(param_1 + 0x478) + 0x28);
  plVar13 = *(long **)(*(long *)(param_1 + 0x478) + 0x20);
  local_78 = auStack_68;
  local_70 = -0x7fffffff00000000;
  if (iVar4 < 2) {
    local_70._0_4_ = 0;
  }
  else {
    FUN_03103324(&local_78,PTR_PTR_047d1a50,iVar4);
  }
  if ((int)local_70 != iVar4) {
    local_70 = CONCAT44(local_70._4_4_,iVar4);
  }
  local_58 = 0;
  if (iVar4 != 0) {
    plVar1 = plVar13 + iVar4;
    do {
      lVar11 = *plVar13;
      local_80 = lVar11;
      lVar7 = FUN_031034a0(param_2,&local_80);
      if (lVar7 == 0) {
        uVar8 = 0;
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = (ulong)*(uint *)(lVar7 + 4);
        uVar8 = (lVar7 - param_2[2]) * 0x20000000;
      }
      if ((int)(uVar9 | uVar8) < 0) {
        lVar7 = *(long *)(lVar11 + 0x178);
        if (lVar7 != 0) {
          uVar14 = *(undefined8 *)(lVar11 + 0x30);
          *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar11 + 0x38);
          *(undefined8 *)(lVar7 + 0x20) = uVar14;
          *(undefined4 *)(*(long *)(lVar11 + 0x178) + 0x58) = *(undefined4 *)(lVar11 + 400);
          plVar12 = *(long **)(lVar11 + 0x178);
          if (plVar12 != (long *)0x0) {
            if (plVar12[1] != 0) {
              plVar2 = plVar12 + 2;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *plVar2 = *plVar2 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            FUN_03102f44(lVar11,plVar12,param_3,&local_78);
            if (plVar12[1] != 0) {
              plVar2 = plVar12 + 2;
              do {
                lVar7 = *plVar2 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *plVar2 = lVar7;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_03103258:
              if (lVar7 == 0) {
                (**(code **)(*plVar12 + 0x18))(plVar12);
              }
            }
          }
        }
      }
      else {
        lVar7 = *(long *)(*param_2 + ((long)((uVar9 | uVar8) << 0x20) >> 0x1c) + 8);
        cVar5 = *(char *)(lVar7 + 0x5c);
        if (cVar5 == '\x01') {
LAB_03103164:
          FUN_031012d8(lVar11,*(undefined8 *)(lVar7 + 0x60));
        }
        else if (cVar5 == '\x04') {
          lVar7 = *(long *)(lVar11 + 0x178);
          if (lVar7 != 0) {
            uVar14 = *(undefined8 *)(lVar11 + 0x30);
            *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar11 + 0x38);
            *(undefined8 *)(lVar7 + 0x20) = uVar14;
            *(undefined4 *)(*(long *)(lVar11 + 0x178) + 0x58) = *(undefined4 *)(lVar11 + 400);
            plVar12 = *(long **)(lVar11 + 0x178);
            if (plVar12 != (long *)0x0) {
              if (plVar12[1] != 0) {
                plVar2 = plVar12 + 2;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar6) {
                    *plVar2 = *plVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              FUN_03102f44(lVar11,plVar12,param_3,&local_78);
              if (plVar12[1] != 0) {
                plVar2 = plVar12 + 2;
                do {
                  lVar7 = *plVar2 + -1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar6) {
                    *plVar2 = lVar7;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                goto LAB_03103258;
              }
            }
          }
        }
        else if (cVar5 == '\x03') goto LAB_03103164;
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
  }
  FUN_030d10b4(param_4,local_78,local_78 + local_58 * 0x10);
  if (local_58 != 0) {
    puVar3 = local_78 + local_58 * 0x10;
    puVar10 = local_78;
    do {
      plVar13 = *(long **)(puVar10 + 8);
      if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
        plVar1 = plVar13 + 2;
        do {
          lVar7 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7 + -1;
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
  lVar7 = local_70;
  uVar8 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_78 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_78,uVar8 << 4);
  }
  return;
}


