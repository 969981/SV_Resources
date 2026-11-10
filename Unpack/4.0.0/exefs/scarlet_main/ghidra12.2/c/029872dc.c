/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029872dc; name: FUN_029872dc
 */


void FUN_029872dc(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [32];
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5e;
  undefined1 auStack_58 [40];
  
  local_5e = 0;
  local_60 = 0;
  local_90 = 0x3100000000;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_01246154(auStack_58);
  local_90 = CONCAT44(local_90._4_4_,param_2);
  uVar3 = FUN_0124e480(param_1);
  uVar4 = FUN_01582534(param_1);
  FUN_01247754(auStack_b8,uVar3,uVar4);
  uVar5 = FUN_01460dbc(auStack_b8,&local_98);
  iVar6 = 0;
  if ((uVar5 & 1) != 0) {
    iVar6 = 0;
    do {
      uVar2 = (**(code **)(*local_98 + 0x98))();
      uVar5 = FUN_016c04a4(param_1,uVar2,param_2);
      if ((uVar5 & 1) != 0) {
        uVar2 = (**(code **)(*local_98 + 0x98))();
        lVar1 = (long)iVar6;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(auStack_58 + lVar1 * 4 + -0x30) = uVar2;
      }
      uVar5 = FUN_01460dbc(auStack_b8,&local_98);
    } while ((uVar5 & 1) != 0);
  }
  local_90 = CONCAT44(0x32,(undefined4)local_90);
  local_60 = (undefined1)iVar6;
  local_5e = CONCAT13(1,(undefined3)local_5e);
  FUN_01461214(param_1);
  uVar3 = FUN_018cdf0c();
  FUN_018cdf14(uVar3,auStack_c8,&local_90);
  return;
}


