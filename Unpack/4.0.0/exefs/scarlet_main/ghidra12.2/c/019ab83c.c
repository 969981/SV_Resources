/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019ab83c; name: FUN_019ab83c
 */


void FUN_019ab83c(undefined8 *param_1,long param_2,void *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_c8 [18];
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined8 local_18;
  
  if ((*(long *)(param_2 + 0xb8) == 0) || (*(char *)(*(long *)(param_2 + 0xb8) + 0x42) != '\0')) {
    local_34[0] = 0;
    local_38 = 0;
    uVar1 = FUN_019abd88(*(undefined8 *)(param_2 + 8),local_34,&local_38);
    FUN_019ab988(&local_18,uVar1);
    local_c8[0] = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_2 + 0xb8) = 0;
    FUN_019ab920(local_c8);
    uVar1 = local_18;
    local_18 = 0;
    *(undefined8 *)(param_2 + 0xb8) = uVar1;
    FUN_019ab920(&local_18);
    if (*(long *)(param_2 + 0xb8) != 0) {
      memcpy(local_c8,param_3,0x8e);
      uVar2 = FUN_019d58b8(param_2,local_c8);
      if ((uVar2 & 1) != 0) {
        FUN_01aa2cf0(param_1,*(undefined8 *)(param_2 + 0xb8));
        return;
      }
      local_18 = *(undefined8 *)(param_2 + 0xb8);
      *(undefined8 *)(param_2 + 0xb8) = 0;
      FUN_019ab920(&local_18);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


