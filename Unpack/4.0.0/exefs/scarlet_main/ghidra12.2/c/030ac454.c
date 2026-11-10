/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030ac454; name: FUN_030ac454
 */


void FUN_030ac454(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  
  plVar4 = *(long **)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x228) = 0;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (*(long *)(param_1 + 0x210) == 0) {
    if ((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) {
      *(long *)(param_1 + 0x210) = param_2;
    }
    else {
      plVar4 = (long *)(param_2 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4 = *(long **)(param_1 + 0x210);
      *(long *)(param_1 + 0x210) = param_2;
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar1 = plVar4 + 2;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x198) == '\0') {
    *(undefined1 *)(param_1 + 0x198) = 1;
    iVar5 = *(int *)(param_1 + 0x250);
    lVar7 = (long)iVar5;
    if ((int)(*(uint *)(param_1 + 0x254) & 0x7fffffff) <= iVar5) {
      FUN_030ae1bc(param_1 + 0x248,PTR_PTR_047d1a50,lVar7 + 1);
      iVar5 = *(int *)(param_1 + 0x250);
    }
    puVar6 = (undefined4 *)(*(long *)(param_1 + 0x248) + (long)iVar5 * 0xa0);
    *(int *)(param_1 + 0x250) = (int)(lVar7 + 1);
    *(undefined8 *)(puVar6 + 0x24) = 0;
    *(undefined8 *)(puVar6 + 0x26) = 0x8000000000000000;
    *puVar6 = 4;
    puVar6[4] = 0;
  }
  return;
}


