/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e6964; name: FUN_034e6964
 */


void FUN_034e6964(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047e2fd0;
  plVar2 = (long *)*param_1;
  plVar3 = plVar2;
  if ((int)param_1[1] != 0) {
    do {
      lVar4 = *plVar3;
      FUN_034e62b0(lVar4,*(int *)(lVar4 + 0x1c) + *(int *)(lVar4 + 0x18));
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x28) != 0) {
          *(undefined4 *)(lVar4 + 0x30) = 0;
          (**(code **)(puVar1 + 0x30))(0);
          *(undefined8 *)(lVar4 + 0x28) = 0;
          *(undefined4 *)(lVar4 + 0x34) = 0;
        }
        (**(code **)(puVar1 + 0x30))(0,lVar4);
      }
      plVar2 = (long *)*param_1;
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + *(uint *)(param_1 + 1));
  }
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (**(code **)(puVar1 + 0x30))(0,plVar2);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  plVar2 = (long *)param_1[2];
  plVar3 = plVar2;
  if ((int)param_1[3] != 0) {
    do {
      lVar4 = *plVar3;
      FUN_034e62b0(lVar4,*(int *)(lVar4 + 0x1c) + *(int *)(lVar4 + 0x18));
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x28) != 0) {
          *(undefined4 *)(lVar4 + 0x30) = 0;
          (**(code **)(puVar1 + 0x30))(0);
          *(undefined8 *)(lVar4 + 0x28) = 0;
          *(undefined4 *)(lVar4 + 0x34) = 0;
        }
        (**(code **)(puVar1 + 0x30))(0,lVar4);
      }
      plVar2 = (long *)param_1[2];
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + *(uint *)(param_1 + 3));
  }
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    (**(code **)(puVar1 + 0x30))(0,plVar2);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}


