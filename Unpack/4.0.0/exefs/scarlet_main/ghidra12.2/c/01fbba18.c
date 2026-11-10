/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fbba18; name: FUN_01fbba18
 */


void FUN_01fbba18(long *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  *param_1 = (long)(PTR_DAT_047db180 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_01fdb454(param_1 + 3);
  param_1[8] = 0;
  param_1[9] = -1;
  param_1[10] = 0;
  puVar2 = (undefined1 *)FUN_00f6866c();
  uVar1 = *puVar2;
  *param_1 = (long)&PTR_FUN_0456d028;
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  *(undefined1 *)((long)param_1 + 0x59) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 100) = 0xffffffff;
  return;
}


