/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fdfd0; name: FUN_004fdfd0
 */


void FUN_004fdfd0(long *param_1)

{
  ulong uVar1;
  long *local_38;
  long lStack_30;
  ulong local_28;
  
  *param_1 = (long)(PTR_DAT_047cdaf0 + 0x10);
  lStack_30 = param_1[10];
  local_28 = *(ulong *)(lStack_30 + 0x18);
  uVar1 = *(ulong *)(lStack_30 + 8);
  if (local_28 < uVar1) {
    do {
      local_38 = *(long **)(*(long *)(lStack_30 + 0x20) + local_28 * 8);
      if (local_38 != (long *)0x0) {
        if (local_38 == *(long **)(*(long *)(lStack_30 + 0x20) + (local_28 ^ 1) * 8)) {
          local_38 = *(long **)(*local_38 + 0x20);
        }
        while (local_38 != (long *)0x0) {
          FUN_004fe0e4(local_38[1] + 0x20);
                    /* try { // try from 004fe074 to 004fe07b has its CatchHandler @ 004fe0c8 */
          FUN_005008d4(&local_38);
        }
        goto LAB_004fe084;
      }
      local_28 = local_28 + 1;
    } while (uVar1 != local_28);
    local_38 = (long *)0x0;
    local_28 = uVar1;
  }
  else {
    local_38 = (long *)0x0;
  }
LAB_004fe084:
                    /* try { // try from 004fe084 to 004fe08b has its CatchHandler @ 004fe0c4 */
  FUN_004fe180(param_1 + 8);
  FUN_004fe26c(param_1 + 8);
  FUN_005004ec(param_1);
  return;
}


