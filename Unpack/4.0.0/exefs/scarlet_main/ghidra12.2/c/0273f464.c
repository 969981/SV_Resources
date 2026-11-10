/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0273f464; name: FUN_0273f464
 */


void FUN_0273f464(undefined1 param_1 [16],long *param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  float fVar4;
  undefined1 auVar3 [16];
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  ulong uStack_38;
  undefined8 local_30;
  ulong local_28;
  
  fVar4 = param_1._12_4_;
  if (0.0 <= fVar4) {
    local_40 = CONCAT44(param_1._4_4_ - fVar4,param_1._0_4_ - fVar4);
    uStack_38 = (ulong)(uint)(param_1._8_4_ - fVar4);
    local_28 = (ulong)(uint)(param_1._8_4_ + fVar4);
    local_30 = CONCAT44(param_1._4_4_ + fVar4,param_1._0_4_ + fVar4);
    puVar1 = (undefined8 *)*param_2;
    fVar4 = (float)puVar1[3] - (float)puVar1[1];
    uVar5 = (ulong)(uint)fVar4;
    uVar6 = 0;
    if (((fVar4 <= 0.0) || ((float)puVar1[2] - (float)*puVar1 <= 0.0)) ||
       ((float)((ulong)puVar1[2] >> 0x20) - (float)((ulong)*puVar1 >> 0x20) <= 0.0)) {
      puVar1[1] = uStack_38;
      puVar1[3] = local_28;
      puVar1[2] = local_30;
      *puVar1 = local_40;
    }
    else {
      auVar3 = FUN_00f1eae4(puVar1,&local_40);
      pauVar2 = (undefined1 (*) [16])*param_2;
      *pauVar2 = auVar3;
      *(undefined8 *)(pauVar2[1] + 8) = uVar6;
      *(ulong *)pauVar2[1] = uVar5;
    }
  }
  return;
}


