/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0348b400; name: FUN_0348b400
 */


undefined8 FUN_0348b400(undefined8 *param_1)

{
  int iVar1;
  
  param_1 = (undefined8 *)*param_1;
  iVar1 = *(int *)((long)param_1 + 0x74) + -1;
  *(int *)((long)param_1 + 0x74) = iVar1;
  *(undefined4 *)(param_1 + 0xf) = 3;
  if (iVar1 == 0) {
    (**(code **)*param_1)(param_1);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
  }
  return 1;
}


