/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033aee20; name: FUN_033aee20
 */


void FUN_033aee20(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_28;
  
  puVar4 = PTR_DAT_047d1a08;
  DAT_0488e320 = 1;
  local_28 = 0x48;
  puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(puVar5,"XmlWriteFormat");
  }
  *puVar5 = &PTR_LAB_047b32e8;
  puVar5[1] = 0xffffffff;
  puVar5[2] = 1;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 8) = 0;
  puVar5[6] = 0x8000000000000000;
  puVar5[7] = &DAT_03d7702c;
  local_28 = 0x30;
  puVar6 = (undefined8 *)(**(code **)puVar4)(0,&local_28,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(puVar6,"TypeWriter");
  }
  puVar6[1] = 0xffffffff;
  puVar6[2] = 1;
  *puVar6 = &PTR_LAB_047b3368;
  local_28 = 0x90;
  uVar7 = (**(code **)puVar4)(0,&local_28,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(uVar7,&DAT_03c41cd3);
  }
  FUN_03376114(uVar7,0,0);
  puVar6[3] = uVar7;
  puVar6[4] = puVar5;
  *(undefined4 *)(puVar6 + 5) = 0;
  plVar8 = (long *)puVar5[4];
  puVar5[4] = puVar6;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  *param_1 = puVar5;
  return;
}


