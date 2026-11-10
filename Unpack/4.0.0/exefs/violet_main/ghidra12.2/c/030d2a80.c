/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d2a80; name: FUN_030d2a80
 */


void FUN_030d2a80(long param_1,uint param_2,uint param_3,code *param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined4 local_70 [2];
  long *local_68;
  
  local_68 = (long *)0x0;
  while( true ) {
    puVar1 = (undefined4 *)(param_1 + (long)((int)(param_2 + param_3) >> 1) * 0x10);
    local_70[0] = *puVar1;
    puVar10 = (undefined8 *)(puVar1 + 2);
    plVar11 = (long *)*puVar10;
    plVar7 = local_68;
    if (local_68 != plVar11) {
      if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
        plVar11 = plVar11 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar11 = (long *)*puVar10;
      }
      plVar7 = plVar11;
      if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
        plVar2 = local_68 + 2;
        do {
          lVar12 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 + -1 == 0) {
          lVar12 = *local_68;
          local_68 = plVar11;
          (**(code **)(lVar12 + 0x18))();
          plVar7 = local_68;
        }
      }
    }
    local_68 = plVar7;
    uVar15 = (ulong)param_3;
    uVar19 = param_2;
    do {
      puVar1 = (undefined4 *)(param_1 + (long)(int)uVar19 * 0x10);
      do {
        uVar17 = uVar19;
        puVar16 = puVar1;
        uVar8 = (*param_4)(puVar16,local_70);
        puVar1 = puVar16 + 4;
        uVar19 = uVar17 + 1;
      } while ((uVar8 & 1) != 0);
      uVar8 = -(uVar15 >> 0x1f) & 0xfffffff000000000 | uVar15 << 4;
      uVar15 = (ulong)((int)uVar15 + 1);
      do {
        uVar9 = (*param_4)(local_70,param_1 + uVar8);
        uVar8 = uVar8 - 0x10;
        iVar14 = (int)uVar15;
        uVar6 = iVar14 - 1;
        uVar15 = (ulong)uVar6;
      } while ((uVar9 & 1) != 0);
      uVar19 = uVar17;
      if ((int)uVar17 <= (int)uVar6) {
        if (uVar17 != uVar6) {
          lVar12 = param_1 + uVar8;
          uVar18 = *(undefined8 *)(lVar12 + 0x18);
          *(undefined8 *)(lVar12 + 0x18) = 0;
          uVar3 = *(undefined4 *)(lVar12 + 0x10);
          *(undefined4 *)(lVar12 + 0x10) = *puVar16;
          uVar13 = *(undefined8 *)(puVar16 + 2);
          *(undefined8 *)(puVar16 + 2) = 0;
          plVar11 = *(long **)(lVar12 + 0x18);
          *(undefined8 *)(lVar12 + 0x18) = uVar13;
          if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
            plVar7 = plVar11 + 2;
            do {
              lVar12 = *plVar7;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar5) {
                *plVar7 = lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar12 + -1 == 0) {
              (**(code **)(*plVar11 + 0x18))();
            }
          }
          plVar11 = *(long **)(puVar16 + 2);
          *puVar16 = uVar3;
          *(undefined8 *)(puVar16 + 2) = uVar18;
          if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
            plVar7 = plVar11 + 2;
            do {
              lVar12 = *plVar7;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar5) {
                *plVar7 = lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar12 + -1 == 0) {
              (**(code **)(*plVar11 + 0x18))();
            }
          }
        }
        uVar15 = (ulong)(iVar14 - 2);
        uVar19 = uVar17 + 1;
      }
    } while ((int)uVar19 <= (int)uVar15);
    if ((int)param_2 < (int)uVar15) {
      FUN_030d2a80(param_1,param_2,uVar15,param_4);
    }
    if ((int)param_3 <= (int)uVar19) break;
    param_2 = uVar19;
  }
  if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
    plVar11 = local_68 + 2;
    do {
      lVar12 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  return;
}


