/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b1240; name: FUN_002b1240
 */


void FUN_002b1240(char *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined1 *local_c8;
  long lStack_c0;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 uStack_90;
  char *local_68;
  size_t local_60;
  byte local_38 [16];
  undefined8 local_28;
  
  if (param_2 != (undefined4 *)0x0) {
    local_60 = 0;
    local_68 = param_1;
    if (param_1 != (char *)0x0) {
      local_60 = strlen(param_1);
    }
    local_98 = " { value: ";
    uStack_90 = 10;
    lStack_c0 = FUN_00394a70(*param_2,auStack_b8);
    lStack_c0 = lStack_c0 - (long)auStack_b8;
    local_f8 = &DAT_03c470f5;
    uStack_f0 = 2;
    local_c8 = auStack_b8;
    FUN_00395b50(local_38,&local_68,&local_98,&local_c8,&local_f8);
                    /* try { // try from 002b12bc to 002b12c7 has its CatchHandler @ 002b12f0 */
    FUN_002acaf4(param_3,local_38);
    if ((local_38[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_28);
    }
  }
  return;
}


