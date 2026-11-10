/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5e7c8; name: FUN_00c5e7c8
 */


undefined1  [16] FUN_00c5e7c8(undefined8 param_1,long param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  uint uVar6;
  
  if (((((*(long **)(param_2 + 0x90) == (long *)0x0) ||
        (uVar1 = (**(code **)(**(long **)(param_2 + 0x90) + 0x40))(), (uVar1 & 1) == 0)) &&
       ((*(long **)(param_2 + 0xe8) == (long *)0x0 ||
        (uVar1 = (**(code **)(**(long **)(param_2 + 0xe8) + 0x40))(), (uVar1 & 1) == 0)))) &&
      ((*(long **)(param_2 + 0x140) == (long *)0x0 ||
       (uVar1 = (**(code **)(**(long **)(param_2 + 0x140) + 0x40))(), (uVar1 & 1) == 0)))) &&
     ((*(long **)(param_2 + 0x198) == (long *)0x0 ||
      (uVar1 = (**(code **)(**(long **)(param_2 + 0x198) + 0x40))(), (uVar1 & 1) == 0)))) {
    uVar1 = (ulong)*param_3;
    uVar5 = 0;
  }
  else {
    uVar1 = CONCAT44(0,*param_3);
    uVar5 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar1;
    if ((*(long **)(param_2 + 0x90) != (long *)0x0) &&
       (uVar2 = (**(code **)(**(long **)(param_2 + 0x90) + 0x40))(), auVar3._8_8_ = uVar5,
       (uVar2 & 1) != 0)) {
      auVar3 = (**(code **)(**(long **)(param_2 + 0x90) + 0x28))(param_1,uVar1);
    }
    uVar5 = auVar3._8_8_;
    uVar1 = auVar3._0_8_;
    uVar6 = param_3[1];
    if ((*(long **)(param_2 + 0xe8) != (long *)0x0) &&
       (uVar2 = (**(code **)(**(long **)(param_2 + 0xe8) + 0x40))(), (uVar2 & 1) != 0)) {
      (**(code **)(**(long **)(param_2 + 0xe8) + 0x28))(param_1,uVar6);
    }
    uVar6 = param_3[2];
    if ((*(long **)(param_2 + 0x140) != (long *)0x0) &&
       (uVar2 = (**(code **)(**(long **)(param_2 + 0x140) + 0x40))(), (uVar2 & 1) != 0)) {
      (**(code **)(**(long **)(param_2 + 0x140) + 0x28))(param_1,uVar6);
    }
    uVar6 = param_3[3];
    if ((*(long **)(param_2 + 0x198) != (long *)0x0) &&
       (uVar2 = (**(code **)(**(long **)(param_2 + 0x198) + 0x40))(), (uVar2 & 1) != 0)) {
      (**(code **)(**(long **)(param_2 + 0x198) + 0x28))(param_1,uVar6);
    }
  }
  auVar4._8_8_ = uVar5;
  auVar4._0_8_ = uVar1;
  return auVar4;
}


