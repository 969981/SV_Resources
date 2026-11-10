/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002cacfc; name: FUN_002cacfc
 */


void FUN_002cacfc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *local_38;
  
  *param_1 = 0;
  if ((*param_2 & 1) == 0) {
    local_38 = param_2 + 1;
                    /* try { // try from 002cad30 to 002cad3f has its CatchHandler @ 002cad7c */
    FUN_002cae00(param_1,param_1 + 1,&local_38,*param_2 >> 1);
    *param_1 = *param_2 & 0xfffffffffffffffe;
  }
  else {
    uVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
    *param_1 = *param_2 | 1;
    *param_2 = 0;
  }
  return;
}


