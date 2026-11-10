/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00460720; name: FUN_00460720
 */


void FUN_00460720(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  *(int *)(param_1 + 0x18) = (int)param_2[2];
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)((long)param_2 + 0x14);
  *(int *)(param_1 + 0x19) = (int)param_2[3];
  *(undefined4 *)((long)param_1 + 0xcc) = *(undefined4 *)((long)param_2 + 0x1c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = *param_2 & 0xffffffc0fffffff;
  uVar1 = param_2[1];
  param_1[0x1c] = 0;
  param_1[4] = uVar1 & 0xffffffc0ffffffc;
  return;
}


