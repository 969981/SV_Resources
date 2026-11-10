/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


