/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03326384; name: FUN_03326384
 */


void FUN_03326384(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  char *__s;
  uint local_60 [2];
  undefined8 local_58;
  ulong *puStack_50;
  ulong local_48;
  char *local_40;
  char *local_38;
  
  lVar9 = *param_2;
  do {
    uVar5 = *param_4;
    if (((uint)uVar5 >> 3 & 1) != 0) {
      if (param_4 != (ulong *)0x0) {
        __s = (char *)param_4[(ulong)(byte)POPCOUNT((byte)uVar5 & 7) + 2];
        local_40 = __s;
        if (__s == (char *)0x0) {
          local_38 = (char *)0x0;
        }
        else {
          sVar4 = strlen(__s);
          local_38 = __s + sVar4;
        }
        goto LAB_03326400;
      }
      break;
    }
  } while (((uVar5 & 1) == 0) && (param_4 = (ulong *)param_4[1], param_4 != (ulong *)0x0));
  local_38 = (char *)0x0;
  local_40 = (char *)0x0;
LAB_03326400:
  local_60[0] = FUN_03326538(lVar9,&local_40);
  lVar9 = *param_2;
  puVar6 = (undefined8 *)(*(long *)(lVar9 + 0x218) + (long)(int)local_60[0] * 0x18);
  local_58 = *puVar6;
  puStack_50 = (ulong *)puVar6[1];
  if (puStack_50 != (ulong *)0x0) {
    puVar7 = puStack_50;
    do {
      uVar5 = *puVar7;
      if (((uint)uVar5 >> 2 & 1) != 0) {
        local_48 = puVar7[(uVar5 >> 1 & 1) + (uVar5 & 1) + 2];
        if ((local_48 & 1) != 0) {
          piVar2 = (int *)((local_48 & 0xfffffffffffffffe) + 8);
          do {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar9 = *param_2;
          bVar10 = false;
          goto LAB_0332644c;
        }
        goto LAB_03326440;
      }
      puVar7 = (ulong *)puVar7[1];
    } while (puVar7 != (ulong *)0x0);
  }
  local_48 = 0;
LAB_03326440:
  bVar10 = true;
LAB_0332644c:
  uVar5 = local_48;
  local_60[0] = local_60[0] & 0x7fffffff;
  FUN_03326184(param_1,&local_58,lVar9,local_60);
  if (!bVar10) {
    plVar8 = (long *)(uVar5 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar9 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar9 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  return;
}


