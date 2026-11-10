/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00359980; name: FUN_00359980
 */


void FUN_00359980(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  plVar1 = param_1 + 10;
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    uVar7 = *(undefined8 *)(*param_1 + 0x10);
    puVar5 = (undefined8 *)FUN_0038c780(0x30);
    puVar4 = PTR_FUN_047cc978;
    puVar5[4] = puVar5;
    puVar5[5] = 0;
    *puVar5 = &LAB_00359a00;
    puVar5[1] = param_1;
    puVar5[3] = puVar4;
    FUN_00350c0c(uVar7,puVar5 + 2,0);
    return;
  }
  return;
}


