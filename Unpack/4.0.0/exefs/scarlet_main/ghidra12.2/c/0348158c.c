/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0348158c; name: FUN_0348158c
 */


void FUN_0348158c(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = (long)&PTR_FUN_047c26e8;
  plVar3 = param_1 + 3;
  *plVar3 = (long)&PTR_LAB_047c2730;
  puVar1 = PTR_DAT_047e2fd0;
  lVar4 = param_1[10];
  lVar5 = lVar4;
  if ((int)param_1[0xb] != 0) {
    do {
      if (*(long *)(lVar5 + 0x10) != 0) {
        (**(code **)(puVar1 + 0x30))(0);
        *(undefined8 *)(lVar5 + 0x10) = 0;
      }
      *(undefined8 *)(lVar5 + 0x18) = 0;
      lVar4 = param_1[10];
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != lVar4 + (ulong)*(uint *)(param_1 + 0xb) * 0x28);
  }
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar4);
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  plVar2 = (long *)param_1[7];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,PTR_PTR_047e6fa8);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xe));
  plVar2 = (long *)param_1[5];
  param_1[3] = (long)(PTR_DAT_047e71e8 + 0x10);
  if (plVar2 == (long *)0x0) goto LAB_0348172c;
  if (*plVar2 == 0) {
LAB_034816e4:
    *plVar2 = 0;
    if (plVar2[1] != 0) {
      *(undefined4 *)(plVar2 + 2) = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      plVar2[1] = 0;
      *(undefined4 *)((long)plVar2 + 0x14) = 0;
    }
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2,plVar2);
  }
  else {
    FUN_034db9b8(plVar3);
    FUN_034dac54(plVar3,0);
    plVar2 = (long *)param_1[5];
    if (plVar2 != (long *)0x0) goto LAB_034816e4;
  }
  param_1[5] = 0;
LAB_0348172c:
  *param_1 = (long)(PTR_DAT_047e70a0 + 0x10);
  return;
}


