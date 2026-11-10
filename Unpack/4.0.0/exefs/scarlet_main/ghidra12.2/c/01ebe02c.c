/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebe02c; name: FUN_01ebe02c
 */


void FUN_01ebe02c(long param_1,long *param_2)

{
  ushort uVar1;
  ulong uVar2;
  ushort uVar3;
  ushort local_40 [4];
  ushort local_38 [4];
  byte local_18 [2];
  ushort local_16;
  byte local_14;
  short local_12;
  
  local_18[0] = 0;
  local_16 = 0;
  local_14 = 0;
  local_12 = 0;
  if ((*param_2 != 0) &&
     (uVar2 = FUN_01ebf39c(*param_2,local_18), uVar1 = local_16, (uVar2 & 1) != 0)) {
    uVar3 = (ushort)local_18[0];
    local_38[0] = local_18[0] & 3 | local_16 << 2;
    local_40[0] = local_14 & 3 | local_12 << 2;
    FUN_01695a1c(param_1,local_38,local_40,1);
    if ((*(char *)(param_1 + 0x3e0) != '\0') &&
       (((*(ushort *)(param_1 + 0x3f0) & 3) == uVar3 && (*(ushort *)(param_1 + 0x3f0) >> 2 == uVar1)
        ))) {
      *(undefined1 *)(param_1 + 0x3e0) = 0;
    }
  }
  return;
}


