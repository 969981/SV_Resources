/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f60060; name: FUN_02f60060
 */


void FUN_02f60060(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 3);
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    plVar2 = (long *)param_1[2];
    if ((int)uVar1 < 1) {
      plVar4 = plVar2;
    }
    else {
      plVar4 = plVar2;
      if (uVar1 != 1) {
        iVar5 = -(uVar1 & 0xfffffffe);
        do {
          plVar3 = plVar2;
          if (*plVar4 != 0) {
            plVar3 = plVar2 + 1;
            *plVar2 = *plVar4;
          }
          plVar2 = plVar3;
          if (plVar4[1] != 0) {
            plVar2 = plVar3 + 1;
            *plVar3 = plVar4[1];
          }
          plVar4 = plVar4 + 2;
          iVar5 = iVar5 + 2;
        } while (iVar5 != 0);
      }
      plVar3 = plVar2;
      if (((uVar1 & 1) != 0) && (*plVar4 != 0)) {
        plVar3 = plVar2 + 1;
        *plVar2 = *plVar4;
      }
      plVar2 = plVar3;
      plVar4 = (long *)param_1[2];
    }
    uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
    *(undefined1 *)((long)param_1 + 0xc) = 0;
  }
  if (uVar1 != 0) {
    if (param_2 == 0) {
      (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,param_1[2]);
    }
    else {
      FUN_031c2998(param_2,param_1[2]);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x23);
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(char *)((long)param_1 + 0x10c) != '\0') {
    plVar2 = (long *)param_1[0x22];
    if ((int)uVar1 < 1) {
      plVar4 = plVar2;
    }
    else {
      plVar4 = plVar2;
      if (uVar1 != 1) {
        iVar5 = -(uVar1 & 0xfffffffe);
        do {
          plVar3 = plVar2;
          if (*plVar4 != 0) {
            plVar3 = plVar2 + 1;
            *plVar2 = *plVar4;
          }
          plVar2 = plVar3;
          if (plVar4[1] != 0) {
            plVar2 = plVar3 + 1;
            *plVar3 = plVar4[1];
          }
          plVar4 = plVar4 + 2;
          iVar5 = iVar5 + 2;
        } while (iVar5 != 0);
      }
      plVar3 = plVar2;
      if (((uVar1 & 1) != 0) && (*plVar4 != 0)) {
        plVar3 = plVar2 + 1;
        *plVar2 = *plVar4;
      }
      plVar2 = plVar3;
      plVar4 = (long *)param_1[0x22];
    }
    uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
    *(undefined1 *)((long)param_1 + 0x10c) = 0;
  }
  if (uVar1 != 0) {
    if (param_2 == 0) {
      (**(code **)(*(long *)param_1[0x20] + 0x28))((long *)param_1[0x20],param_1[0x22]);
    }
    else {
      FUN_031c2998(param_2,param_1[0x22]);
    }
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  return;
}


