/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030ac134; name: FUN_030ac134
 */


void FUN_030ac134(long param_1,undefined4 param_2,undefined8 param_3)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  
  lVar8 = *(long *)(param_1 + 0x228);
  if (lVar8 != 0) {
    pcVar1 = (char *)(lVar8 + 100);
    do {
      cVar3 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x04';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar3 == '\x01') {
      *(undefined1 *)(*(long *)(lVar8 + 0x68) + 0x20) = 3;
      plVar6 = *(long **)(lVar8 + 0x68);
      *(undefined8 *)(lVar8 + 0x68) = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar2 = plVar6 + 2;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    }
    plVar6 = *(long **)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x228) = 0;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar2 = plVar6 + 2;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  if (*(char *)(param_1 + 0x198) == '\0') {
    *(undefined1 *)(param_1 + 0x198) = 1;
    iVar7 = *(int *)(param_1 + 0x250);
    lVar8 = (long)iVar7;
    if ((int)(*(uint *)(param_1 + 0x254) & 0x7fffffff) <= iVar7) {
      FUN_030ae1bc(param_1 + 0x248,PTR_PTR_047d1a50,lVar8 + 1);
      iVar7 = *(int *)(param_1 + 0x250);
    }
    puVar9 = (undefined4 *)(*(long *)(param_1 + 0x248) + (long)iVar7 * 0xa0);
    *(int *)(param_1 + 0x250) = (int)(lVar8 + 1);
    puVar9[4] = param_2;
    *(undefined8 *)(puVar9 + 0x24) = 0;
    *(undefined8 *)(puVar9 + 0x26) = 0x8000000000000000;
    *puVar9 = 4;
    if ((*(int *)(param_1 + 0x40) == 1) && (*(int *)(param_1 + 0x28) != 0)) {
      FUN_030aaba4(param_1,param_3);
      return;
    }
  }
  return;
}


