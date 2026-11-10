/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0061a334; name: FUN_0061a334
 */


void FUN_0061a334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_1 + 8);
  plVar4 = *(long **)(lVar3 + 8);
  uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
  (**(code **)(*plVar4 + 0x18))(&local_60,plVar4,lVar3 + 0x40,param_2,uVar2);
  puVar1 = PTR_DAT_047cbb08;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x118))(*(long **)PTR_DAT_047cbb08,local_50);
  uVar2 = (**(code **)(**(long **)puVar1 + 0x128))(*(long **)puVar1,local_50,0x5d8);
  uStack_68 = uStack_38;
  local_70 = local_40;
  uStack_88 = uStack_58;
  local_90 = local_60;
  uStack_78 = uStack_48;
  uStack_80 = local_50;
  FUN_0062598c(uVar2,&local_90,param_2,param_3,param_4);
  return;
}


