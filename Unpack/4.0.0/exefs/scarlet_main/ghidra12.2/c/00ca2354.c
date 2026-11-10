/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca2354; name: FUN_00ca2354
 */


long * FUN_00ca2354(long param_1,long *param_2)

{
  long *plVar1;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long lStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  plVar1 = (long *)(**(code **)(*param_2 + 0x30))(param_2);
  (**(code **)(*plVar1 + 0xd8))(plVar1,0);
  if (*(long *)(param_1 + 0x78) == 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      lStack_38 = *(long *)(param_1 + 0xb0);
      if (lStack_38 == 0) {
        return plVar1;
      }
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_c0 = PTR_DAT_047de148 + 0x10;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      puStack_78 = PTR_DAT_047e31b0 + 0x10;
      local_30 = 0;
      local_80 = 0;
      local_28 = 1;
      local_40 = 0;
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_c0);
      goto LAB_00ca240c;
    }
    FUN_00ca3744(&local_c0,param_1 + 0x30);
  }
  else {
    FUN_00ca3924(&local_c0,param_1 + 0x70);
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_c0);
LAB_00ca240c:
  FUN_00ca25d0(&puStack_78);
  FUN_00ca246c(&local_c0);
  return plVar1;
}


