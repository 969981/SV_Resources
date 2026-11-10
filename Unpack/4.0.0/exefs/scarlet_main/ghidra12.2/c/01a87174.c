/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a87174; name: FUN_01a87174
 */


undefined1  [16]
FUN_01a87174(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5,long param_6,undefined4 param_7)

{
  float fVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = param_4._12_4_;
  fVar9 = param_4._8_4_;
  fVar8 = param_4._4_4_;
  fVar7 = param_4._0_4_;
  fVar6 = param_2._12_4_;
  fVar5 = param_2._8_4_;
  fVar4 = param_2._4_4_;
  fVar3 = param_2._0_4_;
  if ((short)param_7 <
      (short)((short)((uint)(*(int *)(param_6 + 0x250) - *(int *)(param_6 + 0x248)) >> 4) * -0x5555)
     ) {
    FUN_00e6fc34(param_6,param_7);
    fVar1 = (float)*(undefined8 *)(param_5 + 0x260) + 0.0;
    fVar3 = (float)((ulong)*(undefined8 *)(param_5 + 0x260) >> 0x20) +
            -(fVar3 * fVar7 + fVar4 * fVar8 + fVar5 * fVar9 + fVar6 * fVar10);
    fVar4 = (float)*(undefined8 *)(param_5 + 0x268) + 0.0;
    fVar5 = (float)((ulong)*(undefined8 *)(param_5 + 0x268) >> 0x20) + 0.0;
  }
  else {
    fVar4 = (float)*(undefined8 *)(param_5 + 0x268);
    fVar5 = (float)((ulong)*(undefined8 *)(param_5 + 0x268) >> 0x20);
    fVar1 = (float)*(undefined8 *)(param_5 + 0x260);
    fVar3 = (float)((ulong)*(undefined8 *)(param_5 + 0x260) >> 0x20);
  }
  auVar2._4_4_ = fVar3;
  auVar2._0_4_ = fVar1;
  auVar2._8_4_ = fVar4;
  auVar2._12_4_ = fVar5;
  return auVar2;
}


