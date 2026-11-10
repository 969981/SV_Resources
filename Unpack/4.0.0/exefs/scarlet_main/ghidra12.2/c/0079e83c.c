/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079e83c; name: FUN_0079e83c
 */


void FUN_0079e83c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 auStack_68 [16];
  undefined *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar1 = FUN_00796784(param_1 + 0xb8);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00796784(param_1 + 0x98);
    if (((uVar1 & 1) != 0) &&
       (uVar1 = FUN_007967e8(param_1 + 0x98,param_1 + 0xb8), (uVar1 & 1) != 0)) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x1118) != 1) {
    local_48 = *(undefined4 *)((long)param_2 + 0xc);
    uStack_50 = *param_2;
    local_38 = 0;
    local_44 = '@';
    local_58 = PTR_DAT_047d0a70 + 0x10;
    local_40 = 4;
    uVar1 = FUN_007a3154(&local_58);
    if ((uVar1 & 1) != 0) {
      if ((*(int *)((long)param_2 + 0xc) == local_40._4_4_ + (int)local_40) && (local_44 == '@')) {
        FUN_0079c98c(auStack_68,param_1);
      }
    }
  }
  return;
}


