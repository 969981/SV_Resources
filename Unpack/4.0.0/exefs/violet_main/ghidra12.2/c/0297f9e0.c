/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297f9e0; name: FUN_0297f9e0
 */


void FUN_0297f9e0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6e;
  undefined1 auStack_68 [40];
  
  *param_2 = 0;
  uVar2 = (**(code **)(*(long *)*param_3 + 0x4d0))((long *)*param_3,*(undefined4 *)(param_3 + 1));
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_01243584(param_1);
    FUN_01240198(uVar3,*param_3,*(undefined4 *)(param_3 + 1));
    uVar2 = (**(code **)(*(long *)*param_3 + 0x220))((long *)*param_3,0x1b);
    if ((uVar2 & 1) != 0) {
      plVar4 = (long *)*param_3;
      local_6e = 0;
      local_70 = 0;
      local_a0 = 0x3100000000;
      local_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_01246154(auStack_68);
      uVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
      local_a0 = CONCAT44(0x1b,uVar1);
      uVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
      local_98 = CONCAT44(local_98._4_4_,uVar1);
      local_70 = 1;
      local_6e = CONCAT13(1,(undefined3)local_6e);
      FUN_01461214(param_1);
      uVar3 = FUN_018cdf0c();
      FUN_018cdf14(uVar3,auStack_b0,&local_a0);
    }
    uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
    uVar3 = FUN_01243584(param_1);
    FUN_01681080(uVar3,uVar1,0);
    if (*(char *)((long)param_3 + 0xc) == '\0') {
      uVar3 = FUN_01249340(param_1);
      FUN_01248894(uVar3,uVar1);
    }
    *param_2 = 1;
  }
  return;
}


