/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b3eb0; name: FUN_008b3eb0
 */


void FUN_008b3eb0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  uVar1 = (**(code **)PTR_DAT_047d2420)
                    (param_1 + 0x18,param_1 + 0x20,param_1 + 0x28,param_3,param_4,
                     *(undefined8 *)PTR_DAT_047d2428,param_5);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 0x28);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_008f053c(&local_70);
  uVar2 = 6;
  if (*(ushort *)(param_4 + 8) < 2) {
    uVar2 = 1;
  }
  local_70 = CONCAT71(local_70._1_7_,uVar2);
  local_68 = 0x100000000;
  local_70 = CONCAT44(*(undefined4 *)(param_4 + 0xc),(undefined4)local_70);
  local_58 = *(undefined8 *)(param_1 + 0x18);
  FUN_008f27e0(param_1 + 0x40,param_2,&local_70);
  local_80 = (undefined1 *)0x0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = (undefined8 *)0x0;
  FUN_008f04f4(&local_90);
  local_50 = 0;
  uStack_48 = 0;
  local_90 = local_90 | 1;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_00c6b824(&local_70);
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_68 = CONCAT44((float)*(int *)(param_4 + 0x18),(float)*(int *)(param_4 + 0x14));
  FUN_00c6b810(&local_b0);
  local_b0 = 0;
  local_a8 = *(undefined8 *)(param_4 + 0x14);
  local_90._0_6_ = CONCAT42(0x10001,(undefined2)local_90);
  local_88 = &local_70;
  local_80 = (undefined1 *)&local_b0;
  FUN_008f2564(param_1 + 0x88,param_2,&local_90);
  uVar1 = *(undefined4 *)(param_4 + 0x18);
  *(short *)(param_1 + 0x10) = (short)*(undefined4 *)(param_4 + 0x14);
  *(short *)(param_1 + 0x12) = (short)uVar1;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_4 + 0xc);
  return;
}


