/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006ec960; name: FUN_006ec960
 */


void FUN_006ec960(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
                    /* try { // try from 006ec980 to 006ec987 has its CatchHandler @ 006ec990 */
  FUN_006fe080(*(undefined8 *)PTR_PTR_047cbcf8,pbVar1);
  return;
}


