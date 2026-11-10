/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02249c28; name: FUN_02249c28
 */


void FUN_02249c28(undefined8 *param_1)

{
  (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,1);
  (**(code **)(*(long *)*param_1 + 0xd8))();
  *(undefined1 *)((long)param_1 + 0x31) = 0;
  if ((undefined1 *)param_1[7] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[7] = 1;
  }
  return;
}


