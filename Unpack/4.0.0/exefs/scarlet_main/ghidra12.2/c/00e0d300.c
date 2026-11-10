/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0d300; name: FUN_00e0d300
 */


void FUN_00e0d300(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar5 = FUN_0307d71c();
  }
  FUN_03092640(uVar5,param_2,param_3);
  puVar4 = PTR_DAT_047d1a08;
  local_18 = 0x28;
  uVar5 = (**(code **)PTR_DAT_047d1a08)(0,&local_18,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(uVar5,"hkaiNavMeshInstanceQueryMediator");
  }
  FUN_0308b66c(uVar5,param_1);
  plVar6 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
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
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  return;
}


