/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03376fa8; name: FUN_03376fa8
 */


void FUN_03376fa8(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = (long)(PTR_DAT_047e5b98 + 0x10);
  if ((int)param_1[2] != 0) {
    lVar7 = param_1[1];
    lVar8 = lVar7 + (long)(int)param_1[2] * 0x18;
    do {
      puVar1 = (ulong *)(lVar8 + -8);
      lVar8 = lVar8 + -0x18;
      if ((*puVar1 & 1) != 0) {
        plVar6 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar2 = plVar6 + 1;
        do {
          lVar5 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    } while (lVar8 != lVar7);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[1],(ulong)*(uint *)((long)param_1 + 0x14) * 0x18);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
                    /* WARNING: Could not recover jumptable at 0x03377084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


