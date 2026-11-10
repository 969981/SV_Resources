/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e5ccf0; name: FUN_01e5ccf0
 */


void FUN_01e5ccf0(long param_1,long param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_88 = 0;
  uStack_80 = 0;
  FUN_00d0a34c(&local_88,param_1);
  local_78 = 0;
  uStack_70 = 0;
  FUN_00c93a38(&local_78,param_1 + 0x10);
  local_68 = 0;
  uStack_60 = 0;
  FUN_00f5a410(&local_68,param_1 + 0x20);
  local_58 = *(undefined8 *)(param_1 + 0x30);
  FUN_00d0a34c(param_1,param_2);
  FUN_00c93a38(param_1 + 0x10,param_2 + 0x10);
  FUN_00f5a410(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  FUN_00d0a34c(param_2,&local_88);
  FUN_00c93a38(param_2 + 0x10,&local_78);
  FUN_00f5a410(param_2 + 0x20,&local_68);
  *(undefined8 *)(param_2 + 0x30) = local_58;
  FUN_011753e0(&local_88);
  return;
}


