/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f934a4; name: FUN_01f934a4
 */


void FUN_01f934a4(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 extraout_s0;
  undefined4 uVar7;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  
  if ((param_2 & 1) == 0) {
    lVar5 = FUN_00da75d8();
  }
  else {
    lVar5 = FUN_00d3ccd4();
  }
  bVar4 = (param_2 & 1) == 0;
  lVar1 = 0x2c4;
  if (bVar4) {
    lVar1 = 0x2c0;
  }
  lVar2 = param_1 + 0x3a0;
  if (bVar4) {
    lVar2 = param_1 + 0x330;
  }
  if (*(int *)(param_1 + lVar1) - 1U < 2) {
    lVar1 = param_1 + 0x160;
    lVar3 = param_1 + 0x418;
    if ((param_2 & 1) == 0) {
      lVar3 = param_1 + 0x410;
    }
    FUN_01f94510(lVar1,lVar5);
    *(undefined8 *)(lVar2 + 0x38) = extraout_var_01;
    *(ulong *)(lVar2 + 0x30) = CONCAT44(extraout_var,extraout_s0);
    uVar7 = FUN_01f94558(lVar1,lVar5);
    *(undefined4 *)(lVar2 + 0x50) = uVar7;
    uVar6 = FUN_00e06b88(param_1);
    FUN_01f945cc(uVar6,lVar2,lVar3,lVar1,lVar5);
    *(undefined8 *)(lVar2 + 0x48) = extraout_var_02;
    *(ulong *)(lVar2 + 0x40) = CONCAT44(extraout_var_00,extraout_s0_00);
  }
  else if ((lVar5 != 0) && (*(int *)(param_1 + lVar1) == 3)) {
    *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(lVar5 + 0x128);
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar5 + 0x120);
    *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(lVar5 + 0x130);
    *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar5 + 0xf8);
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar5 + 0xf0);
  }
  return;
}


