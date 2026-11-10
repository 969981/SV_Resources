/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033bcd4; name: FUN_0033bcd4
 */


int FUN_0033bcd4(long param_1,char *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  FUN_0038db40(param_1 + 0x20);
  if (param_2 == (char *)0x0) {
    iVar3 = *(int *)(param_1 + 0x94);
joined_r0x0033bd70:
    if ((param_3 != (long *)0x0) && (iVar3 == 2)) {
      if (*(long *)(param_1 + 0x88) == 0) {
        lVar6 = 0;
        puVar5 = (undefined8 *)*param_3;
      }
      else {
        plVar8 = (long *)(*(long *)(param_1 + 0x88) + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar6 = *(long *)(param_1 + 0x88);
        puVar5 = (undefined8 *)*param_3;
      }
      if (puVar5 != (undefined8 *)0x0) {
        plVar8 = puVar5 + 1;
        do {
          lVar4 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 + -1 == 0) {
          (**(code **)*puVar5)(puVar5);
          FUN_0049e790(PTR_LAB_047cba48,puVar5);
        }
      }
      *param_3 = lVar6;
      iVar3 = 2;
    }
  }
  else {
    plVar8 = (long *)(param_1 + 0xb8);
    plVar9 = (long *)*plVar8;
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar8;
      do {
        iVar3 = strcmp((char *)plVar9[4],param_2);
        if (iVar3 >= 0) {
          plVar7 = plVar9;
        }
        plVar9 = (long *)plVar9[iVar3 < 0];
      } while (plVar9 != (long *)0x0);
      if ((plVar7 != plVar8) && (iVar3 = strcmp(param_2,(char *)plVar7[4]), -1 < iVar3)) {
        iVar3 = *(int *)(plVar7[5] + 0x38);
        goto joined_r0x0033bd70;
      }
    }
    iVar3 = *(int *)(param_1 + 0x94);
    if (iVar3 == 2) {
      iVar3 = 1;
    }
  }
                    /* try { // try from 0033bdd4 to 0033bddb has its CatchHandler @ 0033be18 */
  FUN_0038db60(param_1 + 0x20);
  return iVar3;
}


