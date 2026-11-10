/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013a380; name: FUN_0013a380
 */


void FUN_0013a380(uint *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  
  uVar3 = *param_1;
  lVar5 = **(long **)(param_1 + 0x10);
  **(long **)(param_1 + 0x10) = lVar5 + -1;
  if (lVar5 == 0) {
    uVar2 = FUN_00145730();
  }
  else {
    pbVar4 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
    *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar4 + 1;
    uVar2 = (uint)*pbVar4;
  }
  *param_1 = uVar2;
  if ((uVar2 == 0xd || uVar2 == 10) && uVar2 != uVar3) {
    lVar5 = **(long **)(param_1 + 0x10);
    **(long **)(param_1 + 0x10) = lVar5 + -1;
    if (lVar5 == 0) {
      uVar3 = FUN_00145730();
    }
    else {
      pbVar4 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
      *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar4 + 1;
      uVar3 = (uint)*pbVar4;
    }
    *param_1 = uVar3;
  }
  uVar3 = param_1[1];
  param_1[1] = uVar3 + 1;
  if (0x7ffffffd < (int)uVar3) {
    FUN_00138780(param_1,"chunk has too many lines",0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x13a444);
    (*pcVar1)();
  }
  return;
}


