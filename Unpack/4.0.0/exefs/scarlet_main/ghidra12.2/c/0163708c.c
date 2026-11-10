/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0163708c; name: FUN_0163708c
 */


undefined1 FUN_0163708c(undefined8 param_1,long *param_2,undefined2 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_70 [8];
  undefined4 uStack_68;
  undefined2 local_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  uint uStack_5e;
  undefined4 local_5a;
  undefined1 auStack_54 [36];
  
  local_5a = 0x1000101;
  uStack_60 = 0;
  uStack_5e = 0;
  uStack_68 = 0;
  local_64 = 0;
  uStack_62 = 0;
  FUN_01246154(auStack_54);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  local_64 = (undefined2)uVar1;
  uStack_62 = (undefined2)((uint)uVar1 >> 0x10);
  local_5a = CONCAT13(local_5a._3_1_,CONCAT12(param_4,(undefined2)local_5a)) & 0xff01ffff;
  uStack_5e = uStack_5e & 0xffffff;
  uStack_60 = param_3;
  FUN_01461214(param_1);
  uVar2 = FUN_01637120();
  FUN_016372e8(uVar2,local_70,&uStack_68);
  return local_70[0];
}


