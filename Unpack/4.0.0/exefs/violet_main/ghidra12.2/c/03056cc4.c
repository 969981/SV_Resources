/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03056cc4; name: FUN_03056cc4
 */


void FUN_03056cc4(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_LAB_0464c3c8;
  puVar1 = (ulong *)(param_1 + 0x150);
  FUN_03056c30(puVar1);
  if (*PTR_DAT_047e3360 != '\0') {
    plVar6 = (long *)(*puVar1 & 0xfffffffffffffffc);
    if (plVar6 != (long *)0x0) {
      if ((*puVar1 & 3) == 0) {
        *puVar1 = (ulong)plVar6 | 1;
        do {
          lVar7 = *plVar6;
          plVar6 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          (**(code **)(lVar7 + 8))();
        } while (plVar6 != (long *)0x0);
        *puVar1 = 0;
      }
      else {
        do {
          plVar2 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          plVar6[1] = (ulong)plVar2 | 1;
          plVar6 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  plVar6 = (long *)param_1[0x147];
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar2 = plVar6 + 2;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x137) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9bc)) && (param_1[0x136] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x136],(ulong)*(uint *)((long)param_1 + 0x9bc) << 4);
  }
  param_1[0x136] = 0;
  puVar5 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x9bc) = 0x80000000;
  *param_1 = (long)(puVar5 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x03056df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


