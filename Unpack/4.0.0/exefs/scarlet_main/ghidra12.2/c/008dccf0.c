/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dccf0; name: FUN_008dccf0
 */


undefined8 FUN_008dccf0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  uVar1 = FUN_008f1cbc(param_2,5,3,"sysViewUniformBlock");
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar1 = FUN_008f1cbc(*param_1,5,3,"sysEmitterDynamicUniformBlock");
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  uVar1 = FUN_008f1cbc(*param_1,5,3,"sysEmitterStaticUniformBlock");
  *(undefined4 *)(param_1 + 2) = uVar1;
  uVar1 = FUN_008f1cbc(*param_1,5,3,"sysEmitterFieldUniformBlock");
  *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  uVar1 = FUN_008f1cbc(*param_1,5,2,"sysCurlNoiseTextureArray");
  *(undefined4 *)(param_1 + 3) = uVar1;
  uVar1 = FUN_008f1cbc(*param_1,5,4,"sysPosBuff");
  *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
  uVar1 = FUN_008f1cbc(*param_1,5,4,"sysVecBuff");
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_008f1cbc(*param_1,5,4,"sysPosDeltaBuff");
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  uVar1 = FUN_008f1cbc(*param_1,5,4,"sysScaleBuff");
  *(undefined4 *)(param_1 + 5) = uVar1;
  uVar1 = FUN_008f1cbc(*param_1,5,4,"sysRandomBuff");
  *(undefined4 *)((long)param_1 + 0x2c) = uVar1;
  uVar1 = FUN_008f1cbc(*param_1,5,4,"sysEmtMat0Buff");
  *(undefined4 *)(param_1 + 6) = uVar1;
  uVar1 = FUN_008f1cbc(*param_1,5,4,"sysEmtMat1Buff");
  *(undefined4 *)((long)param_1 + 0x34) = uVar1;
  uVar1 = FUN_008f1cbc(*param_1,5,4,"sysEmtMat2Buff");
  *(undefined4 *)(param_1 + 7) = uVar1;
  return 1;
}


