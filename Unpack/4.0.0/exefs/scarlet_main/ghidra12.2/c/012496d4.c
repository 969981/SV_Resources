/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012496d4; name: FUN_012496d4
 */


void FUN_012496d4(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  char local_18 [8];
  
  bVar1 = FUN_012499a4(param_2,0,local_18);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0x1b);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)bVar3;
        pcVar5 = (char *)(param_1 + 0x10);
        uVar6 = uVar4;
        do {
          if (*pcVar5 == local_18[uVar2]) goto LAB_012497bc;
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
      *(char *)(param_1 + uVar4 + 0x10) = local_18[uVar2];
      bVar3 = *(char *)(param_1 + 0x1b) + 1;
      *(byte *)(param_1 + 0x1b) = bVar3;
LAB_012497bc:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  bVar1 = FUN_012499a4(param_2,1,local_18);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0x1b);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)bVar3;
        pcVar5 = (char *)(param_1 + 0x10);
        uVar6 = uVar4;
        do {
          if (*pcVar5 == local_18[uVar2]) goto LAB_01249828;
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
      *(char *)(param_1 + uVar4 + 0x10) = local_18[uVar2];
      bVar3 = *(char *)(param_1 + 0x1b) + 1;
      *(byte *)(param_1 + 0x1b) = bVar3;
LAB_01249828:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  bVar1 = FUN_012499a4(param_2,2,local_18);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0x1b);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)bVar3;
        pcVar5 = (char *)(param_1 + 0x10);
        uVar6 = uVar4;
        do {
          if (*pcVar5 == local_18[uVar2]) goto LAB_01249894;
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
      *(char *)(param_1 + uVar4 + 0x10) = local_18[uVar2];
      bVar3 = *(char *)(param_1 + 0x1b) + 1;
      *(byte *)(param_1 + 0x1b) = bVar3;
LAB_01249894:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  bVar1 = FUN_012499a4(param_2,3,local_18);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0x1b);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)bVar3;
        pcVar5 = (char *)(param_1 + 0x10);
        uVar6 = uVar4;
        do {
          if (*pcVar5 == local_18[uVar2]) goto LAB_01249900;
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
      *(char *)(param_1 + uVar4 + 0x10) = local_18[uVar2];
      bVar3 = *(char *)(param_1 + 0x1b) + 1;
      *(byte *)(param_1 + 0x1b) = bVar3;
LAB_01249900:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  bVar1 = FUN_012499a4(param_2,4,local_18);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0x1b);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)bVar3;
        pcVar5 = (char *)(param_1 + 0x10);
        uVar6 = uVar4;
        do {
          if (*pcVar5 == local_18[uVar2]) goto LAB_0124996c;
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
      *(char *)(param_1 + uVar4 + 0x10) = local_18[uVar2];
      bVar3 = *(char *)(param_1 + 0x1b) + 1;
      *(byte *)(param_1 + 0x1b) = bVar3;
LAB_0124996c:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  return;
}


