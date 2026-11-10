/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebe3a4; name: FUN_01ebe3a4
 */


void FUN_01ebe3a4(long param_1,short *param_2)

{
  long lVar1;
  short *psVar2;
  short *psVar3;
  long lVar4;
  
  psVar3 = *(short **)(param_1 + 0x50);
  psVar2 = *(short **)(param_1 + 0x58);
  if (psVar3 != psVar2) {
    if (*psVar3 != *param_2) {
      do {
        psVar3 = psVar3 + 0x68;
        if (psVar2 == psVar3) {
          psVar3 = psVar2;
          goto LAB_01ebe400;
        }
      } while (*psVar3 != *param_2);
    }
  }
LAB_01ebe400:
  if (psVar2 == psVar3) {
    psVar3 = *(short **)(param_1 + 0x88);
    psVar2 = *(short **)(param_1 + 0x90);
    if (psVar3 != psVar2) {
      if (*psVar3 != *param_2) {
        do {
          psVar3 = psVar3 + 0x60;
          if (psVar2 == psVar3) {
            psVar3 = psVar2;
            goto LAB_01ebe4b4;
          }
        } while (*psVar3 != *param_2);
      }
    }
LAB_01ebe4b4:
    if (psVar2 != psVar3) {
      if (*(code **)(param_1 + 0x1c0) != (code *)0x0) {
        (**(code **)(param_1 + 0x1c0))(param_1 + 0x1e0,psVar3);
        psVar2 = *(short **)(param_1 + 0x90);
      }
      lVar1 = FUN_01ebe260(psVar3 + 0x60,psVar2);
      lVar4 = *(long *)(param_1 + 0x90);
      while (lVar4 != lVar1) {
        lVar4 = lVar4 + -0xc0;
        FUN_01a0b710(lVar4);
      }
      *(long *)(param_1 + 0x90) = lVar1;
    }
  }
  else {
    if (*(code **)(param_1 + 0x1c0) != (code *)0x0) {
      (**(code **)(param_1 + 0x1c0))(param_1 + 0x1e0,psVar3);
      psVar2 = *(short **)(param_1 + 0x58);
    }
    lVar1 = FUN_0159ec20(psVar3 + 0x68,psVar2);
    lVar4 = *(long *)(param_1 + 0x58);
    while (lVar4 != lVar1) {
      lVar4 = lVar4 + -0xd0;
      FUN_0159e7d4(lVar4);
    }
    *(long *)(param_1 + 0x58) = lVar1;
  }
  return;
}


