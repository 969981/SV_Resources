/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01245c10; name: FUN_01245c10
 */


void FUN_01245c10(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 auStack_2508 [96];
  undefined1 auStack_24a8 [48];
  undefined1 auStack_2478 [8];
  undefined1 auStack_2470 [140];
  undefined1 auStack_23e4 [9100];
  byte local_58;
  
  FUN_013708f4(auStack_2478);
  pbVar1 = (byte *)(param_2 + 0x2420);
  uVar4 = (ulong)*pbVar1;
  if (*pbVar1 != 0) {
    if ((*(int *)(param_2 + 0xc) == 1) && (*(char *)(param_2 + 0x1a) != '\0')) {
      FUN_01246154(auStack_24a8);
      FUN_01249638(param_1,auStack_2508,param_2 + 8);
      FUN_01246164(auStack_2478,auStack_2508);
      uVar4 = (ulong)*pbVar1;
    }
    if (1 < (uint)uVar4) {
      lVar5 = param_2 + 0x94;
      if ((uint)uVar4 < 2) {
        lVar5 = 0;
      }
      if ((*(int *)(lVar5 + 4) == 1) && (*(char *)(lVar5 + 0x12) != '\0')) {
        FUN_01246154(auStack_24a8);
        FUN_01249638(param_1,auStack_2508,lVar5);
        FUN_01246164(auStack_2478,auStack_2508);
        uVar4 = (ulong)*pbVar1;
      }
      if (2 < (uint)uVar4) {
        lVar5 = param_2 + 0x120;
        if ((uint)uVar4 < 3) {
          lVar5 = 0;
        }
        if ((*(int *)(lVar5 + 4) == 1) && (*(char *)(lVar5 + 0x12) != '\0')) {
          FUN_01246154(auStack_24a8);
          FUN_01249638(param_1,auStack_2508,lVar5);
          FUN_01246164(auStack_2478,auStack_2508);
          uVar4 = (ulong)*pbVar1;
        }
        if (3 < (uint)uVar4) {
          lVar5 = param_2 + 0x1ac;
          uVar7 = 3;
          do {
            lVar3 = lVar5;
            if (uVar4 <= uVar7) {
              lVar3 = 0;
            }
            if ((*(int *)(lVar3 + 4) == 1) && (*(char *)(lVar3 + 0x12) != '\0')) {
              FUN_01246154(auStack_24a8);
              FUN_01249638(param_1,auStack_2508,lVar3);
              FUN_01246164(auStack_2478,auStack_2508);
              uVar4 = (ulong)*pbVar1;
            }
            uVar7 = uVar7 + 1;
            lVar5 = lVar5 + 0x8c;
          } while (uVar7 < uVar4);
        }
      }
    }
  }
  if (local_58 != 0) {
    FUN_01246164(param_2,auStack_2470);
    uVar4 = (ulong)local_58;
    if (1 < local_58) {
      puVar6 = auStack_23e4;
      uVar7 = 1;
      do {
        puVar2 = puVar6;
        if (uVar4 <= uVar7) {
          puVar2 = (undefined1 *)0x0;
        }
        FUN_01246164(param_2,puVar2);
        uVar4 = (ulong)local_58;
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 0x8c;
      } while (uVar7 < uVar4);
    }
  }
  return;
}


