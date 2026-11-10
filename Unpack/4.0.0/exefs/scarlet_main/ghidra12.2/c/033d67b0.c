/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033d67b0; name: FUN_033d67b0
 */


undefined8 FUN_033d67b0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1[0x18] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[0x18] = 0;
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x1b] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[0x1b] = 0;
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x1e] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[0x1e] = 0;
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x21] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[0x21] = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(char *)(param_1 + 0x27) != '\0') &&
     (puVar2 = (undefined4 *)param_1[0x2a], puVar2 != (undefined4 *)0x0)) {
    if (*(long *)(puVar2 + 2) != 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      *(undefined8 *)(puVar2 + 2) = 0;
    }
    *puVar2 = 0;
    if (param_1[0x2a] != 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
    }
    param_1[0x2a] = 0;
  }
  if (param_1[0x29] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[0x29] = 0;
  }
  puVar2 = (undefined4 *)param_1[0x28];
  if (puVar2 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x25) != 0) {
      if (*(long *)(puVar2 + 2) != 0) {
        (**(code **)(*param_2 + 0x18))(param_2);
        *(undefined8 *)(puVar2 + 2) = 0;
      }
      *puVar2 = 0;
      if (*(long *)(puVar2 + 8) != 0) {
        (**(code **)(*param_2 + 0x18))(param_2);
        *(undefined8 *)(puVar2 + 8) = 0;
      }
      puVar2[6] = 0;
      if (*(long *)(puVar2 + 0xe) != 0) {
        (**(code **)(*param_2 + 0x18))(param_2);
        *(undefined8 *)(puVar2 + 0xe) = 0;
      }
      puVar2[0xc] = 0;
      if (*(long *)(puVar2 + 0x14) != 0) {
        (**(code **)(*param_2 + 0x18))(param_2);
        *(undefined8 *)(puVar2 + 0x14) = 0;
      }
      puVar2[0x12] = 0;
      lVar3 = param_1[0x28];
      if (*(long *)(lVar3 + 0x98) != 0) {
        (**(code **)(*param_2 + 0x18))(param_2);
        *(undefined8 *)(lVar3 + 0x98) = 0;
      }
      *(undefined4 *)(lVar3 + 0x90) = 0;
      if (1 < *(uint *)(param_1 + 0x25)) {
        uVar4 = 1;
        lVar3 = 0xa8;
        do {
          puVar2 = (undefined4 *)(param_1[0x28] + lVar3);
          if (*(long *)(puVar2 + 2) != 0) {
            (**(code **)(*param_2 + 0x18))(param_2);
            *(undefined8 *)(puVar2 + 2) = 0;
          }
          *puVar2 = 0;
          if (*(long *)(puVar2 + 8) != 0) {
            (**(code **)(*param_2 + 0x18))(param_2);
            *(undefined8 *)(puVar2 + 8) = 0;
          }
          puVar2[6] = 0;
          if (*(long *)(puVar2 + 0xe) != 0) {
            (**(code **)(*param_2 + 0x18))(param_2);
            *(undefined8 *)(puVar2 + 0xe) = 0;
          }
          puVar2[0xc] = 0;
          if (*(long *)(puVar2 + 0x14) != 0) {
            (**(code **)(*param_2 + 0x18))(param_2);
            *(undefined8 *)(puVar2 + 0x14) = 0;
          }
          puVar2[0x12] = 0;
          lVar1 = param_1[0x28] + lVar3;
          if (*(long *)(lVar1 + 0x98) != 0) {
            (**(code **)(*param_2 + 0x18))(param_2);
            *(undefined8 *)(lVar1 + 0x98) = 0;
          }
          *(undefined4 *)(lVar1 + 0x90) = 0;
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0xa8;
        } while (uVar4 < *(uint *)(param_1 + 0x25));
      }
      puVar2 = (undefined4 *)param_1[0x28];
    }
    (**(code **)(*param_2 + 0x18))(param_2,puVar2);
    param_1[0x28] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[2] = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_1[5] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_1[8] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[8] = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (param_1[0xb] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[0xb] = 0;
  }
  puVar2 = (undefined4 *)param_1[0xd];
  *(undefined4 *)(param_1 + 10) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    if (*(int *)((long)param_1 + 300) != 0) {
      if (*(long *)(puVar2 + 2) != 0) {
        (**(code **)(*param_2 + 0x18))(param_2);
        *(undefined8 *)(puVar2 + 2) = 0;
      }
      *puVar2 = 0;
      if (1 < *(uint *)((long)param_1 + 300)) {
        lVar3 = 0;
        uVar4 = 1;
        do {
          lVar1 = param_1[0xd] + lVar3;
          if (*(long *)(lVar1 + 0x20) != 0) {
            (**(code **)(*param_2 + 0x18))(param_2);
            *(undefined8 *)(lVar1 + 0x20) = 0;
          }
          *(undefined4 *)(lVar1 + 0x18) = 0;
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x18;
        } while (uVar4 < *(uint *)((long)param_1 + 300));
      }
      puVar2 = (undefined4 *)param_1[0xd];
    }
    (**(code **)(*param_2 + 0x18))(param_2,puVar2);
    param_1[0xd] = 0;
    *(undefined4 *)((long)param_1 + 300) = 0;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return 1;
}


