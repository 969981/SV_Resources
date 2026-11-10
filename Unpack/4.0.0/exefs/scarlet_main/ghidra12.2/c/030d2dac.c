/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d2dac; name: FUN_030d2dac
 */


void FUN_030d2dac(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_047d1a08;
  local_38 = 0x60;
  plVar5 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar5,"hkDynamicBlockStreamAllocator");
  }
  plVar5[2] = 1;
  *plVar5 = (long)(PTR_DAT_047e5150 + 0x10);
  plVar5[1] = 0xffffffff;
  nn::os::InitializeMutex((MutexType *)(plVar5 + 3),true,0);
  plVar5[7] = 0;
  plVar5[8] = -0x8000000000000000;
  plVar5[0xb] = 0;
  plVar5[9] = 0;
  plVar5[10] = -0x8000000000000000;
  plVar6 = *(long **)(param_1 + 0x4c8);
  *(long **)(param_1 + 0x4c8) = plVar5;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar5 = plVar6 + 2;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  local_38 = 0x60;
  puVar7 = (undefined8 *)(**(code **)puVar3)(0,&local_38,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(puVar7,"hkThreadLocalBlockStreamAllocator");
  }
  plVar5 = *(long **)(param_1 + 0x4c8);
  *puVar7 = plVar5;
  puVar7[1] = puVar7 + 3;
  puVar7[2] = 0x8000000800000000;
  *(undefined4 *)(puVar7 + 0xb) = 0;
  iVar4 = (**(code **)(*plVar5 + 0x50))();
  if (7 < iVar4) {
    iVar4 = 8;
  }
  *(int *)((long)puVar7 + 0x5c) = iVar4;
  if ((int)(*(uint *)((long)puVar7 + 0x14) & 0x7fffffff) < iVar4) {
    FUN_031c2ad4(puVar7 + 1,PTR_PTR_047d1a50,(long)iVar4);
  }
  if (*(int *)(puVar7 + 2) != iVar4) {
    *(int *)(puVar7 + 2) = iVar4;
  }
  *(undefined8 **)(param_1 + 0x4d0) = puVar7;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  return;
}


