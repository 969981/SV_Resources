/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02999edc; name: FUN_02999edc
 */


void FUN_02999edc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) == 0) {
    FUN_02999f2c((long)param_1 + 10);
    *(undefined1 *)((long)param_1 + 0x14) = 0;
  }
  else {
    FUN_02999f2c(param_1);
    if (*(char *)((long)param_1 + 0x14) != '\0') {
      *(undefined8 *)((long)param_1 + 10) = *param_1;
      *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)(param_1 + 1);
    }
  }
  return;
}


