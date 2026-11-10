/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ef2ad0; name: FUN_02ef2ad0
 */


void FUN_02ef2ad0(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long *local_38;
  
  if (param_3 == (long *)0x0) {
    lVar6 = *(long *)(param_2 + 0x40);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 + param_2 + 0x40;
    }
    (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar5 + 0x18) * 0x200 + 0x50))
              (&local_38,lVar5,0,0);
    plVar11 = local_38;
  }
  else {
    plVar10 = (long *)(param_2 + 0x40);
    local_38 = (long *)0x0;
    if (*plVar10 != 0) {
      local_38 = (long *)(*plVar10 + (long)plVar10);
    }
    lVar5 = FUN_02e8d824(param_3,&local_38);
    if (lVar5 == 0) {
      uVar9 = 0;
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(uint *)(lVar5 + 4);
      uVar9 = ((int)lVar5 - (int)param_3[2]) * 0x20000000;
    }
    if ((int)(uVar4 | uVar9) < 0) {
      lVar5 = 0;
      if (*plVar10 != 0) {
        lVar5 = *plVar10 + (long)plVar10;
      }
      (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar5 + 0x18) * 0x200 + 0x50))
                (&local_38,lVar5,0,param_3);
      plVar11 = local_38;
      local_38 = (long *)0x0;
      if (*plVar10 != 0) {
        local_38 = (long *)(*plVar10 + (long)plVar10);
      }
      uVar4 = FUN_02e8d8b4(param_3,&local_38);
      if (*(uint *)(param_3 + 1) == uVar4) {
        iVar1 = uVar4 + 1;
        if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= (int)uVar4) {
          FUN_02e8db54(param_3,PTR_PTR_047d1a50,(long)iVar1);
          uVar4 = *(uint *)(param_3 + 1);
        }
        plVar10 = (long *)(*param_3 + (long)(int)uVar4 * 0x10);
        *plVar10 = (long)local_38;
        plVar10[1] = (long)plVar11;
        if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
          plVar10 = plVar11 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = *plVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(int *)(param_3 + 1) = iVar1;
      }
      else {
        plVar8 = (long *)(*param_3 + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8);
        plVar10 = (long *)*plVar8;
        if (plVar10 != plVar11) {
          if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
            plVar10 = plVar11 + 2;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar3) {
                *plVar10 = *plVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            plVar10 = (long *)*plVar8;
          }
          *plVar8 = (long)plVar11;
          if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
            plVar8 = plVar10 + 2;
            do {
              lVar5 = *plVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = lVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar5 + -1 == 0) {
              (**(code **)(*plVar10 + 0x18))();
            }
          }
        }
      }
    }
    else {
      local_38 = (long *)0x0;
      if (*plVar10 != 0) {
        local_38 = (long *)(*plVar10 + (long)plVar10);
      }
      lVar5 = FUN_02e8d824(param_3,&local_38);
      if (lVar5 == 0) {
        plVar11 = (long *)0x0;
      }
      else {
        puVar7 = (undefined8 *)(*param_3 + (long)*(int *)(lVar5 + 4) * 0x10 + 8);
        plVar11 = (long *)*puVar7;
        if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
          plVar11 = plVar11 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = *plVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar11 = (long *)*puVar7;
        }
      }
    }
  }
  *param_1 = plVar11;
  return;
}


