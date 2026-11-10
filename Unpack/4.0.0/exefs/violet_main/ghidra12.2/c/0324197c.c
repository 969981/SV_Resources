/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324197c; name: FUN_0324197c
 */


void FUN_0324197c(undefined1 (*param_1) [16],long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined4 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar9 = *param_1;
  auVar8 = param_1[1];
  if (0 < (int)param_3) {
    uVar6 = (ulong)param_3;
    puVar7 = (undefined4 *)(param_2 + 8);
    do {
      uVar2 = *puVar7;
      uVar6 = uVar6 - 1;
      puVar1 = (undefined8 *)(puVar7 + -2);
      puVar7 = puVar7 + 3;
      uVar3 = CONCAT44(uVar2,uVar2);
      auVar4._8_8_ = uVar3;
      auVar4._0_8_ = *puVar1;
      auVar9 = NEON_fmin(auVar9,auVar4,4);
      auVar5._8_8_ = uVar3;
      auVar5._0_8_ = *puVar1;
      auVar8 = NEON_fmax(auVar8,auVar5,4);
    } while (uVar6 != 0);
  }
  *(long *)(*param_1 + 8) = auVar9._8_8_;
  *(long *)*param_1 = auVar9._0_8_;
  *(long *)(param_1[1] + 8) = auVar8._8_8_;
  *(long *)param_1[1] = auVar8._0_8_;
  return;
}


