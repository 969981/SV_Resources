/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c047c; name: FUN_004c047c
 */


void FUN_004c047c(long *param_1)

{
  int iVar1;
  long extraout_x1;
  
  if (((*param_1 == 0) && (param_1[1] != 0)) &&
     (iVar1 = FUN_004bfd3c(*(undefined8 *)(param_1[3] + 0x10),param_1[1],0), iVar1 == 1)) {
    *param_1 = extraout_x1;
    return;
  }
  return;
}


