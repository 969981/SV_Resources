/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01680e50; name: FUN_01680e50
 */


void FUN_01680e50(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5e;
  undefined1 auStack_58 [40];
  
  uVar2 = (**(code **)(*param_2 + 0x220))(param_2,0x1b);
  if ((uVar2 & 1) != 0) {
    local_5e = 0;
    local_90 = 0x3100000000;
    local_88 = 0;
    local_60 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_01246154(auStack_58);
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    local_90 = CONCAT44(0x1b,uVar1);
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    local_88 = CONCAT44(local_88._4_4_,uVar1);
    local_60 = 1;
    local_5e = CONCAT13(1,(undefined3)local_5e);
    FUN_01461214(param_1);
    uVar3 = FUN_018cdf0c();
    FUN_018cdf14(uVar3,auStack_a0,&local_90);
    (**(code **)(*param_2 + 0x508))(param_2,0xb);
  }
  return;
}


