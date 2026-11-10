/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c12cbc; name: FUN_00c12cbc
 */


void FUN_00c12cbc(long param_1)

{
  long *plVar1;
  ulong in_x9;
  ulong uVar2;
  int iVar3;
  int local_80 [2];
  long *local_78;
  long lStack_70;
  ulong local_68;
  long lStack_60;
  long *local_58;
  int local_50 [2];
  long *local_48;
  long lStack_40;
  ulong local_38;
  long lStack_30;
  long *local_28;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    lStack_70 = *(long *)(param_1 + 0x10);
    in_x9 = *(ulong *)(lStack_70 + 0x18);
    uVar2 = *(ulong *)(lStack_70 + 8);
    if (in_x9 < uVar2) {
      do {
        local_78 = *(long **)(*(long *)(lStack_70 + 0x20) + in_x9 * 8);
        if (local_78 != (long *)0x0) {
          if (local_78 == *(long **)(*(long *)(lStack_70 + 0x20) + (in_x9 ^ 1) * 8)) {
            lStack_60 = *local_78;
            local_78 = *(long **)(lStack_60 + 0x20);
          }
          else {
            lStack_60 = 0;
          }
          goto LAB_00c12d60;
        }
        in_x9 = in_x9 + 1;
      } while (uVar2 != in_x9);
      local_78 = (long *)0x0;
      lStack_60 = 0;
      in_x9 = uVar2;
    }
    else {
      lStack_60 = 0;
      local_78 = (long *)0x0;
    }
LAB_00c12d60:
    local_58 = (long *)0x0;
    iVar3 = 2;
  }
  else {
    lStack_70 = *(long *)(param_1 + 0x10);
    lStack_60 = 0;
    local_78 = (long *)0x0;
    iVar3 = 1;
    local_58 = *(long **)(lStack_70 + 0x18);
  }
  local_68 = in_x9;
  local_80[0] = iVar3;
  while ((local_80[0] != iVar3 ||
         (((plVar1 = local_58, iVar3 == 1 || (plVar1 = local_78, iVar3 != 0)) &&
          (plVar1 != (long *)0x0))))) {
    FUN_00c13d90(local_50,param_1,local_80);
    lStack_70 = lStack_40;
    local_68 = local_38;
    local_78 = local_48;
    lStack_60 = lStack_30;
    local_58 = local_28;
    local_80[0] = local_50[0];
  }
  return;
}


