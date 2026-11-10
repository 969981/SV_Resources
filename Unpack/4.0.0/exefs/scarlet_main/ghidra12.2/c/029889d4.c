/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029889d4; name: FUN_029889d4
 */


void FUN_029889d4(long param_1,long *param_2,uint param_3)

{
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined1 auStack_28 [8];
  
  local_58 = (**(code **)(*param_2 + 0x98))(param_2);
  local_54 = 0;
  local_48 = param_3 & 0xff;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_50 = 0x1020114;
  uStack_4c = local_58;
  FUN_0124aab0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xd80),auStack_28,&local_58);
  return;
}


