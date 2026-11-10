/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cba750; name: FUN_00cba750
 */


undefined8 FUN_00cba750(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 local_8;
  
  uVar2 = *param_2;
  if (uVar2 < *param_1) {
    uVar1 = *param_1;
    local_8 = (undefined1)param_1[1];
    if (*param_3 < uVar2) {
      uVar2 = *param_3;
      *(char *)(param_1 + 1) = (char)param_3[1];
      *param_1 = uVar2;
      *(undefined1 *)(param_3 + 1) = local_8;
      *param_3 = uVar1;
    }
    else {
      uVar2 = *param_2;
      *(char *)(param_1 + 1) = (char)param_2[1];
      *param_1 = uVar2;
      *(undefined1 *)(param_2 + 1) = local_8;
      *param_2 = uVar1;
      if (*param_3 < *param_2) {
        uVar2 = *param_2;
        uVar1 = param_2[1];
        uVar3 = *param_3;
        *(char *)(param_2 + 1) = (char)param_3[1];
        *param_2 = uVar3;
        local_8 = (undefined1)uVar1;
        *(undefined1 *)(param_3 + 1) = local_8;
        *param_3 = uVar2;
        return 2;
      }
    }
  }
  else {
    if (uVar2 <= *param_3) {
      return 0;
    }
    uVar2 = *param_2;
    uVar1 = param_2[1];
    uVar3 = *param_3;
    *(char *)(param_2 + 1) = (char)param_3[1];
    *param_2 = uVar3;
    local_8 = (undefined1)uVar1;
    *(undefined1 *)(param_3 + 1) = local_8;
    *param_3 = uVar2;
    if (*param_2 < *param_1) {
      uVar2 = *param_1;
      uVar1 = param_1[1];
      uVar3 = *param_2;
      *(char *)(param_1 + 1) = (char)param_2[1];
      *param_1 = uVar3;
      local_8 = (undefined1)uVar1;
      *(undefined1 *)(param_2 + 1) = local_8;
      *param_2 = uVar2;
      return 2;
    }
  }
  return 1;
}


