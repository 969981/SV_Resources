/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02755fa0; name: FUN_02755fa0
 */


undefined1  [16] FUN_02755fa0(long param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong uVar5;
  undefined8 uVar7;
  undefined1 auVar6 [16];
  
  if ((((*(long **)(param_1 + 0x90) == (long *)0x0) ||
       (uVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x40))(), uVar5 = extraout_d0,
       (uVar1 & 1) == 0)) &&
      ((*(long **)(param_1 + 0xe8) == (long *)0x0 ||
       (uVar1 = (**(code **)(**(long **)(param_1 + 0xe8) + 0x40))(), uVar5 = extraout_d0_00,
       (uVar1 & 1) == 0)))) &&
     ((*(long **)(param_1 + 0x140) == (long *)0x0 ||
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x140) + 0x40))(), uVar5 = extraout_d0_01,
      (uVar1 & 1) == 0)))) {
    uVar7 = 0;
    if (*(long **)(param_1 + 0x198) == (long *)0x0) {
      uVar7 = 0;
      uVar5 = 0;
      goto LAB_0275600c;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x198) + 0x40))();
    uVar5 = 0;
    if ((uVar1 & 1) == 0) goto LAB_0275600c;
  }
  fVar2 = (float)FUN_02755f50(uVar5,param_1 + 0x48);
  fVar3 = (float)FUN_02755f50(param_1 + 0xa0);
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  fVar4 = (float)FUN_02755f50(param_1 + 0xf8);
  fVar2 = (float)FUN_02755f50(param_1 + 0x150);
  if (fVar2 <= fVar4) {
    fVar2 = fVar4;
  }
  uVar5 = (ulong)(uint)fVar2;
  uVar7 = 0;
  if (fVar2 <= fVar3) {
    uVar5 = (ulong)(uint)fVar3;
    uVar7 = 0;
  }
LAB_0275600c:
  auVar6._8_8_ = uVar7;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


