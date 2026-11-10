/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01245e40; name: FUN_01245e40
 */


void FUN_01245e40(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined1 auStack_70 [48];
  
  bVar1 = *(byte *)(param_3 + 0x46);
  if ((ulong)bVar1 != 0) {
    FUN_01246154(auStack_70);
    local_e0 = *param_3;
    uStack_d8 = param_3[1];
    uVar2 = FUN_012461b4(param_1,auStack_d0,&local_e0,0);
    if ((uVar2 & 1) != 0) {
      FUN_01246164(param_2,auStack_d0);
    }
    if (bVar1 != 1) {
      lVar3 = (ulong)bVar1 - 1;
      puVar4 = param_3 + 3;
      do {
        FUN_01246154(auStack_70);
        local_e0 = puVar4[-1];
        uStack_d8 = *puVar4;
        uVar2 = FUN_012461b4(param_1,auStack_d0,&local_e0,0);
        if ((uVar2 & 1) != 0) {
          FUN_01246164(param_2,auStack_d0);
        }
        lVar3 = lVar3 + -1;
        puVar4 = puVar4 + 2;
      } while (lVar3 != 0);
    }
  }
  bVar1 = *(byte *)((long)param_3 + 0x231);
  if ((ulong)bVar1 != 0) {
    FUN_01246154(auStack_70);
    local_e0 = param_3[0xe];
    uStack_d8 = param_3[0xf];
    uVar2 = FUN_012461b4(param_1,auStack_d0,&local_e0,1);
    if ((uVar2 & 1) != 0) {
      FUN_01246164(param_2,auStack_d0);
    }
    if (bVar1 != 1) {
      lVar3 = (ulong)bVar1 - 1;
      puVar4 = param_3 + 0x11;
      do {
        FUN_01246154(auStack_70);
        local_e0 = puVar4[-1];
        uStack_d8 = *puVar4;
        uVar2 = FUN_012461b4(param_1,auStack_d0,&local_e0,1);
        if ((uVar2 & 1) != 0) {
          FUN_01246164(param_2,auStack_d0);
        }
        lVar3 = lVar3 + -1;
        puVar4 = puVar4 + 2;
      } while (lVar3 != 0);
    }
  }
  bVar1 = *(byte *)((long)param_3 + 0x232);
  if ((ulong)bVar1 != 0) {
    FUN_01246154(auStack_70);
    local_e0 = param_3[0x1c];
    uStack_d8 = param_3[0x1d];
    uVar2 = FUN_012461b4(param_1,auStack_d0,&local_e0,2);
    if ((uVar2 & 1) != 0) {
      FUN_01246164(param_2,auStack_d0);
    }
    if (bVar1 != 1) {
      lVar3 = (ulong)bVar1 - 1;
      puVar4 = param_3 + 0x1f;
      do {
        FUN_01246154(auStack_70);
        local_e0 = puVar4[-1];
        uStack_d8 = *puVar4;
        uVar2 = FUN_012461b4(param_1,auStack_d0,&local_e0,2);
        if ((uVar2 & 1) != 0) {
          FUN_01246164(param_2,auStack_d0);
        }
        lVar3 = lVar3 + -1;
        puVar4 = puVar4 + 2;
      } while (lVar3 != 0);
    }
  }
  bVar1 = *(byte *)((long)param_3 + 0x233);
  if ((ulong)bVar1 != 0) {
    FUN_01246154(auStack_70);
    local_e0 = param_3[0x2a];
    uStack_d8 = param_3[0x2b];
    uVar2 = FUN_012461b4(param_1,auStack_d0,&local_e0,3);
    if ((uVar2 & 1) != 0) {
      FUN_01246164(param_2,auStack_d0);
    }
    if (bVar1 != 1) {
      lVar3 = (ulong)bVar1 - 1;
      puVar4 = param_3 + 0x2d;
      do {
        FUN_01246154(auStack_70);
        local_e0 = puVar4[-1];
        uStack_d8 = *puVar4;
        uVar2 = FUN_012461b4(param_1,auStack_d0,&local_e0,3);
        if ((uVar2 & 1) != 0) {
          FUN_01246164(param_2,auStack_d0);
        }
        lVar3 = lVar3 + -1;
        puVar4 = puVar4 + 2;
      } while (lVar3 != 0);
    }
  }
  bVar1 = *(byte *)((long)param_3 + 0x234);
  if ((ulong)bVar1 != 0) {
    FUN_01246154(auStack_70);
    local_e0 = param_3[0x38];
    uStack_d8 = param_3[0x39];
    uVar2 = FUN_012461b4(param_1,auStack_d0,&local_e0,4);
    if ((uVar2 & 1) != 0) {
      FUN_01246164(param_2,auStack_d0);
    }
    if (bVar1 != 1) {
      lVar3 = (ulong)bVar1 - 1;
      param_3 = param_3 + 0x3b;
      do {
        FUN_01246154(auStack_70);
        local_e0 = param_3[-1];
        uStack_d8 = *param_3;
        uVar2 = FUN_012461b4(param_1,auStack_d0,&local_e0,4);
        if ((uVar2 & 1) != 0) {
          FUN_01246164(param_2,auStack_d0);
        }
        lVar3 = lVar3 + -1;
        param_3 = param_3 + 2;
      } while (lVar3 != 0);
    }
  }
  return;
}


