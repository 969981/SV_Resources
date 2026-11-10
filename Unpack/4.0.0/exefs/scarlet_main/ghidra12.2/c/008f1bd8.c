/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f1bd8; name: FUN_008f1bd8
 */


void FUN_008f1bd8(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_70 [64];
  
  (**(code **)PTR_DAT_047d2f60)(auStack_70,*param_2);
  FUN_008f1978(auStack_70,param_3);
  if ((*(byte *)((long)param_2 + 0x300c) & 1) == 0) {
    (**(code **)PTR_DAT_047d2fb8)(auStack_70,0);
  }
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (**(code **)PTR_DAT_047d3028)(param_1 + 0x10,auStack_70);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}


