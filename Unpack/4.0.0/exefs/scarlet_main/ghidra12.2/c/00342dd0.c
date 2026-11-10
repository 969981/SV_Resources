/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00342dd0; name: thunk_FUN_00342a80
 */


void thunk_FUN_00342a80(undefined8 *param_1,void *param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((param_2 == (void *)0x0) || (iVar1 = FUN_0038dac0(param_2), iVar1 == 0)) {
    return;
  }
  (*(code *)*param_1)(*(undefined8 *)((long)param_2 + 8),param_3);
  (*(code *)param_1[3])(*(undefined8 *)((long)param_2 + 0x10),param_3);
  FUN_00342a80(param_1,*(undefined8 *)((long)param_2 + 0x18),param_3);
  FUN_00342a80(param_1,*(undefined8 *)((long)param_2 + 0x20),param_3);
  free(param_2);
  return;
}


