/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314becc; name: FUN_0314becc
 */


undefined8 FUN_0314becc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  void *__dest;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined4 *puVar21;
  undefined4 *local_70;
  undefined8 local_68;
  
  puVar7 = PTR_PTR_047d1a50;
  local_70 = (undefined4 *)0x0;
  local_68 = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
    local_70 = (undefined4 *)0x0;
    local_68 = -0x8000000000000000;
  }
  else {
    puVar19 = (undefined4 *)*param_2;
    local_70 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar2 * 0x28)
    ;
    uVar18 = 0;
    local_68 = CONCAT44(uVar2,uVar2);
    puVar16 = local_70;
    do {
      *puVar16 = *puVar19;
      *(undefined8 *)(puVar16 + 2) = 0;
      *(undefined8 *)(puVar16 + 4) = 0x8000000000000000;
      uVar3 = puVar19[4];
      if ((int)uVar3 < 1) {
        *(undefined8 *)(puVar16 + 2) = 0;
        *(undefined8 *)(puVar16 + 4) = 0x8000000000000000;
      }
      else {
        puVar21 = *(undefined4 **)(puVar19 + 2);
        puVar8 = (undefined4 *)(**(code **)(*(long *)puVar7 + 0x18))(puVar7,(ulong)uVar3 << 4);
        *(undefined4 **)(puVar16 + 2) = puVar8;
        puVar16[4] = uVar3;
        puVar16[5] = uVar3;
        if (uVar3 != 1) {
          uVar11 = uVar3 & 0xfffffffe;
          puVar15 = puVar8;
          do {
            *puVar15 = *puVar21;
            lVar12 = *(long *)(puVar21 + 2);
            *(long *)(puVar15 + 2) = lVar12;
            if ((lVar12 != 0) && (*(long *)(lVar12 + 8) != 0)) {
              plVar9 = (long *)(lVar12 + 0x10);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = *plVar9 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            puVar15[4] = puVar21[4];
            lVar12 = *(long *)(puVar21 + 6);
            puVar8 = puVar15 + 8;
            puVar21 = puVar21 + 8;
            *(long *)(puVar15 + 6) = lVar12;
            if ((lVar12 != 0) && (*(long *)(lVar12 + 8) != 0)) {
              plVar9 = (long *)(lVar12 + 0x10);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = *plVar9 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            uVar11 = uVar11 - 2;
            puVar15 = puVar8;
          } while (uVar11 != 0);
        }
        if ((uVar3 & 1) != 0) {
          *puVar8 = *puVar21;
          lVar12 = *(long *)(puVar21 + 2);
          *(long *)(puVar8 + 2) = lVar12;
          if ((lVar12 != 0) && (*(long *)(lVar12 + 8) != 0)) {
            plVar9 = (long *)(lVar12 + 0x10);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = *plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
      }
      if (*(int *)(*(long *)(puVar19 + 6) + 4) == -2) {
        *(undefined **)(puVar16 + 6) = &DAT_03d7702c;
        puVar16[8] = 0;
      }
      else {
        puVar16[8] = puVar19[8];
        __dest = (void *)(**(code **)(*(long *)puVar7 + 0x18))(puVar7,(long)(int)puVar19[8] * 8 + 8)
        ;
        *(void **)(puVar16 + 6) = __dest;
        memcpy(__dest,*(void **)(puVar19 + 6),(long)(int)puVar19[8] * 8 + 8);
      }
      uVar18 = uVar18 + 1;
      puVar16 = puVar16 + 10;
      puVar19 = puVar19 + 10;
    } while (uVar18 != uVar2);
  }
  puVar6 = PTR_DAT_047d1a08;
  if (&local_70 != (undefined4 **)param_1) {
    if ((int)param_1[1] != 0) {
      lVar17 = *param_1;
      lVar12 = lVar17 + (long)(int)param_1[1] * 0x28;
      do {
        lVar10 = *(long *)(lVar12 + -0x10);
        if ((lVar10 != 0) && (*(int *)(lVar10 + 4) != -2)) {
          (**(code **)(puVar6 + 8))(puVar7[8],lVar10,0);
          *(undefined **)(lVar12 + -0x10) = &DAT_03d7702c;
          *(undefined4 *)(lVar12 + -8) = 0;
        }
        if (*(int *)(lVar12 + -0x18) != 0) {
          lVar20 = *(long *)(lVar12 + -0x20);
          lVar10 = lVar20 + (long)*(int *)(lVar12 + -0x18) * 0x10;
          do {
            plVar9 = *(long **)(lVar10 + -8);
            lVar10 = lVar10 + -0x10;
            if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
              plVar1 = plVar9 + 2;
              do {
                lVar14 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar14 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar14 + -1 == 0) {
                (**(code **)(*plVar9 + 0x18))();
              }
            }
          } while (lVar10 != lVar20);
        }
        lVar10 = lVar12 + -0x28;
        *(undefined4 *)(lVar12 + -0x18) = 0;
        if ((-1 < (int)*(uint *)(lVar12 + -0x14)) && (*(long *)(lVar12 + -0x20) != 0)) {
          (**(code **)(*(long *)puVar7 + 0x20))
                    (puVar7,*(long *)(lVar12 + -0x20),(ulong)*(uint *)(lVar12 + -0x14) << 4);
        }
        *(undefined8 *)(lVar12 + -0x20) = 0;
        *(undefined4 *)(lVar12 + -0x14) = 0x80000000;
        lVar12 = lVar10;
      } while (lVar10 != lVar17);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar7 + 0x20))
                (puVar7,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x28);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_03157970(&local_70);
    *param_1 = (long)local_70;
    *(int *)(param_1 + 1) = (int)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = (undefined4 *)0x0;
    local_68 = 0;
  }
  FUN_03157860(param_1);
  puVar16 = local_70;
  if ((int)local_68 != 0) {
    puVar19 = local_70 + (long)(int)local_68 * 10;
    do {
      lVar12 = *(long *)(puVar19 + -4);
      if ((lVar12 != 0) && (*(int *)(lVar12 + 4) != -2)) {
        (**(code **)(puVar6 + 8))(puVar7[8],lVar12,0);
        *(undefined **)(puVar19 + -4) = &DAT_03d7702c;
        puVar19[-2] = 0;
      }
      if (puVar19[-6] != 0) {
        lVar17 = *(long *)(puVar19 + -8);
        lVar12 = lVar17 + (long)(int)puVar19[-6] * 0x10;
        do {
          plVar9 = *(long **)(lVar12 + -8);
          lVar12 = lVar12 + -0x10;
          if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
            plVar1 = plVar9 + 2;
            do {
              lVar10 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar10 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))();
            }
          }
        } while (lVar12 != lVar17);
      }
      puVar8 = puVar19 + -10;
      puVar19[-6] = 0;
      if ((-1 < (int)puVar19[-5]) && (*(long *)(puVar19 + -8) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x20))
                  (puVar7,*(long *)(puVar19 + -8),(ulong)(uint)puVar19[-5] << 4);
      }
      *(undefined8 *)(puVar19 + -8) = 0;
      puVar19[-5] = 0x80000000;
      puVar19 = puVar8;
    } while (puVar8 != puVar16);
  }
  lVar12 = local_68;
  uVar13 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_70 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar7 + 0x20))(puVar7,local_70,uVar13 * 0x28);
  }
  return 1;
}


