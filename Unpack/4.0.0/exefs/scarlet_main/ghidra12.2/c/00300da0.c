/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00300da0; name: FUN_00300da0
 */


undefined8 FUN_00300da0(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  void *local_28;
  
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 == 0) {
    return 2;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 2;
  }
  if (param_4 == (undefined8 *)0x0) {
    return 2;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    *param_3 = 0;
    *param_4 = 0;
    return 0;
  }
  uVar2 = FUN_00302e90(*(undefined8 *)(param_1 + 0x18));
  if ((uVar2 & 1) != 0) {
    local_28 = (void *)0x0;
    local_38 = 0;
    iVar1 = FUN_00301190(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x28),
                         *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38),&local_38,
                         &local_28);
    *(undefined8 *)(param_1 + 0x38) = local_38;
    if (iVar1 != 0) {
      free(local_28);
      return 7;
    }
    uVar2 = FUN_00302d40(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
    if ((uVar2 & 1) == 0) {
      return 7;
    }
  }
  local_28 = (void *)*param_3;
  uVar2 = FUN_00302d90(*(undefined8 *)(param_1 + 0x18),param_2,&local_28);
  if ((uVar2 & 1) == 0) {
    return 7;
  }
  *param_3 = local_28;
  uVar3 = FUN_00302ec0(*(undefined8 *)(param_1 + 0x18));
  *param_4 = uVar3;
  uVar2 = FUN_00302e90(*(undefined8 *)(param_1 + 0x18));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


