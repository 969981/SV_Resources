/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029fe164; name: FUN_029fe164
 */


void FUN_029fe164(undefined8 *param_1,undefined4 param_2)

{
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    FUN_030bb974(param_1,1);
  }
  if (*(int *)(param_1 + 1) != 1) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  *(undefined4 *)*param_1 = param_2;
  if ((*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) == 0) {
    FUN_00cb59d4(param_1 + 2,PTR_PTR_047d1a50,1);
  }
  if (*(int *)(param_1 + 3) != 1) {
    *(undefined4 *)(param_1 + 3) = 1;
  }
  *(undefined4 *)param_1[2] = 0;
  return;
}


