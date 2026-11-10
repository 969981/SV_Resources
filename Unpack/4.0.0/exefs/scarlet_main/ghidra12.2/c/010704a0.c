/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010704a0; name: FUN_010704a0
 */


void FUN_010704a0(long param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  local_48 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
  FUN_01071060(&local_40,*(undefined8 *)(param_1 + 8),&local_8,&local_48);
  uVar1 = local_40;
  local_40 = 0;
  FUN_01070c60(param_1 + 0xf8,uVar1);
  *(undefined8 *)(param_1 + 0x100) = local_38;
  *(undefined8 *)(param_1 + 0x108) = uStack_30;
  *(undefined8 *)(param_1 + 0x110) = local_28;
  FUN_01070c60(&local_40,0);
  return;
}


