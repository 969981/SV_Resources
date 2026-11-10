/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02989108; name: FUN_02989108
 */


undefined8 FUN_02989108(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  uint local_6e;
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [16];
  
  uVar2 = (**(code **)(*param_2 + 0x200))(param_2);
  if (((uVar2 & 1) == 0) && (uVar2 = (**(code **)(*param_2 + 0x220))(param_2,2), (uVar2 & 1) != 0))
  {
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    local_6e = 0;
    local_70 = 0;
    local_a0 = 0x3100000000;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    FUN_01246154(auStack_68);
    uVar4 = 1;
    uStack_98 = CONCAT44(uStack_98._4_4_,uVar1);
    local_70 = 1;
    local_a0 = CONCAT44(2,uVar1);
    local_6e = local_6e & 0xffffff;
    FUN_01461214(param_1);
    uVar3 = FUN_018cdf0c();
    FUN_018cdf14(uVar3,auStack_40,&local_a0);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


