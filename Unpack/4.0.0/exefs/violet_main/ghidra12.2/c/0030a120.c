/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030a120; name: FUN_0030a120
 */


void FUN_0030a120(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  auVar4 = FUN_0030a230(param_3,param_2,"Pending writes failed due to stream closure");
  auVar4._0_8_ = auVar4._0_8_;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  if (4 < auVar4._0_8_) {
    auVar4 = FUN_00350fb0(auVar4._0_8_);
  }
  FUN_00308360(param_1,auVar4._8_8_,param_2 + 0xb0,auVar4._0_8_);
  auVar4._8_8_ = extraout_x1;
  auVar4._0_8_ = auVar4._0_8_;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  if (4 < auVar4._0_8_) {
    auVar4 = FUN_00350fb0(auVar4._0_8_);
  }
  FUN_00308360(param_1,auVar4._8_8_,param_2 + 200,auVar4._0_8_);
  puVar1 = *(undefined8 **)(param_2 + 0xd0);
  *(undefined8 *)(param_2 + 0xd0) = 0;
  uVar3 = extraout_x1_00;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0030a1b8 to 0030a1bb has its CatchHandler @ 0030a22c */
    (**(code **)*puVar1)();
    uVar3 = extraout_x1_01;
  }
  if (auVar4._0_8_ < 5) {
    FUN_00308360(param_1,uVar3,param_2 + 0x138,auVar4._0_8_);
    uVar2 = auVar4._0_8_;
  }
  else {
    auVar4 = FUN_00350fb0(auVar4._0_8_);
    FUN_00308360(param_1,auVar4._8_8_,param_2 + 0x138,auVar4._0_8_);
    uVar2 = FUN_00350fb0(auVar4._0_8_);
  }
  FUN_0030a330(param_1,param_2 + 0xaa0,uVar2);
  FUN_0030a330(param_1,param_2 + 0xa98,auVar4._0_8_);
  return;
}


