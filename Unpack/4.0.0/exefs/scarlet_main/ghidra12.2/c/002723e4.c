/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002723e4; name: FUN_002723e4
 */


void FUN_002723e4(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 002723fc to 00272417 has its CatchHandler @ 00272614 */
    FUN_0036b880();
  }
  (**(code **)(*DAT_047ee700 + 0x18))(DAT_047ee700,param_1);
  puVar5 = PTR_LAB_047cba48;
  puVar9 = *(undefined8 **)(param_1 + 0x170);
  if (puVar9 != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x178);
    if (puVar10 == puVar9) {
      puVar10 = puVar9;
    }
    else {
      do {
        puVar10 = puVar10 + -1;
        puVar8 = (undefined8 *)*puVar10;
        *puVar10 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8);
          FUN_0049e790(puVar5,puVar8);
        }
      } while (puVar9 != puVar10);
      puVar10 = *(undefined8 **)(param_1 + 0x170);
    }
    *(undefined8 **)(param_1 + 0x178) = puVar9;
    FUN_0049e790(PTR_LAB_047cba48,puVar10);
  }
  if ((*(byte *)(param_1 + 0x138) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x148));
  }
  puVar5 = PTR_DAT_047cbb08;
                    /* try { // try from 002724b8 to 002724bb has its CatchHandler @ 00272600 */
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x198))(*(long **)PTR_DAT_047cbb08,param_1 + 0xf0);
  FUN_00272980(param_1 + 0x108,*(undefined8 *)(param_1 + 0x110));
  plVar6 = *(long **)puVar5;
                    /* try { // try from 002724d8 to 002724db has its CatchHandler @ 002725f4 */
  (**(code **)(*plVar6 + 0x198))(plVar6,param_1 + 0xb8);
  FUN_00272980(param_1 + 0xd0,*(undefined8 *)(param_1 + 0xd8));
  FUN_00270cb0(param_1 + 0x98,*(undefined8 *)(param_1 + 0xa0));
  plVar6 = *(long **)(param_1 + 0x88);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar6 = *(long **)(param_1 + 0x78);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      bVar2 = *(byte *)(param_1 + 0x58);
      goto joined_r0x00272550;
    }
  }
  bVar2 = *(byte *)(param_1 + 0x58);
joined_r0x00272550:
  if ((bVar2 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x68));
  }
  plVar6 = *(long **)puVar5;
                    /* try { // try from 00272574 to 00272577 has its CatchHandler @ 002725f0 */
  (**(code **)(*plVar6 + 0x78))(plVar6,param_1 + 0x18);
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


