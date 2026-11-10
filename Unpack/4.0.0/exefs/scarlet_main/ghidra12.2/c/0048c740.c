/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048c740; name: FUN_0048c740
 */


undefined8
FUN_0048c740(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *(undefined8 *)*param_5;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_5[1] + 8);
    *param_3 = *(undefined4 *)param_5[1];
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *param_5;
  }
  return 1;
}


