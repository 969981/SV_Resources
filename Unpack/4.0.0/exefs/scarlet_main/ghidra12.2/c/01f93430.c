/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f93430; name: FUN_01f93430
 */


void FUN_01f93430(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  
  lVar1 = FUN_00da75d8();
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(lVar1 + 0x558);
    *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(lVar1 + 0x550);
    fVar2 = *(float *)(lVar1 + 0x550) - (float)*(undefined8 *)(lVar1 + 0x530);
    fVar4 = *(float *)(lVar1 + 0x554) - (float)((ulong)*(undefined8 *)(lVar1 + 0x530) >> 0x20);
    fVar5 = *(float *)(lVar1 + 0x558) - (float)*(undefined8 *)(lVar1 + 0x538);
    fVar2 = fVar2 * fVar2;
    fVar4 = fVar4 * fVar4;
    fVar5 = fVar5 * fVar5;
    auVar3._0_4_ = fVar2 + fVar4;
    auVar3._4_4_ = fVar5 + 0.0;
    auVar3._8_4_ = fVar2 + fVar4;
    auVar3._12_4_ = fVar5 + 0.0;
    auVar3 = NEON_ext(auVar3,auVar3,4,1);
    *(float *)(param_1 + 0x350) = SQRT(auVar3._0_4_ + auVar3._4_4_);
    *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(lVar1 + 0x548);
    *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(lVar1 + 0x540);
  }
  return;
}


