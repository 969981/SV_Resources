/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0310ada0; name: FUN_0310ada0
 */


void FUN_0310ada0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar6 = FUN_03113858();
  if (*(uint *)(param_1 + 1) == uVar6) {
    iVar2 = uVar6 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar6) {
      FUN_03113974(param_1,(long)iVar2);
      uVar6 = *(uint *)(param_1 + 1);
    }
    puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar6 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = *param_3;
    *param_3 = 0;
    *(int *)(param_1 + 1) = iVar2;
  }
  else {
    lVar9 = *param_1 + ((long)((ulong)uVar6 << 0x20) >> 0x1c);
    uVar8 = *param_3;
    *param_3 = 0;
    plVar7 = *(long **)(lVar9 + 8);
    *(undefined8 *)(lVar9 + 8) = uVar8;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar3 = plVar7 + 2;
      do {
        lVar9 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0310ae68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x18))();
        return;
      }
    }
  }
  return;
}


