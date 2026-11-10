/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324cc1c; name: FUN_0324cc1c
 */


void FUN_0324cc1c(long *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  uVar2 = *(uint *)(param_1 + 0xd);
  *param_1 = (long)(PTR_DAT_047e60f8 + 0x10);
  if (0 < (int)uVar2) {
    uVar8 = 0;
    do {
      plVar6 = *(long **)(param_1[0xc] + uVar8 * 8);
      if (plVar6[1] != 0) {
        plVar1 = plVar6 + 2;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
  }
  plVar6 = (long *)param_1[0xf];
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  if ((param_1[0x10] & 1U) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[0x10] - 1,0);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xc],(ulong)*(uint *)((long)param_1 + 0x6c) << 3);
  }
  param_1[0xc] = 0;
  puVar5 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *param_1 = (long)(puVar5 + 0x10);
  return;
}


