/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ccb6d8; name: FUN_00ccb6d8
 */


void FUN_00ccb6d8(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_008f05a0();
  *(undefined1 *)(param_1 + 0x601) = 1;
  *(byte *)((long)param_1 + 0x3009) = *(byte *)((long)param_1 + 0x3009) | 1;
  *param_1 = param_2;
  uVar1 = FUN_008f1400(param_2);
  *(undefined4 *)((long)param_1 + 0x300c) = uVar1;
  return;
}


