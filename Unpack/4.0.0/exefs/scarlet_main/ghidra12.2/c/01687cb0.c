/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01687cb0; name: FUN_01687cb0
 */


undefined8 FUN_01687cb0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_01687d20(&local_40,*(undefined8 *)(param_1 + 8));
  uVar1 = local_40;
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x20) = uStack_30;
    *(undefined8 *)(param_1 + 0x28) = local_28;
  }
  else {
    FUN_0274c0e4(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = uStack_30;
    *(undefined8 *)(param_1 + 0x28) = local_28;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = local_38;
  return uVar1;
}


