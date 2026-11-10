/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f0810; name: FUN_008f0810
 */


void FUN_008f0810(undefined1 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined1 auStack_80 [64];
  
  (**(code **)PTR_DAT_047d2738)(auStack_80);
  (**(code **)PTR_DAT_047d2740)(auStack_80,*param_2);
  (**(code **)PTR_DAT_047d2748)(auStack_80,*param_4,param_5,*param_3);
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (**(code **)PTR_DAT_047d2750)(param_1 + 0x10,auStack_80);
  uVar1 = (**(code **)PTR_DAT_047d2758)(*param_4);
  param_1[1] = (byte)(uVar1 >> 1) & 2 | param_1[1] & 0xfc;
  *param_1 = 1;
  return;
}


