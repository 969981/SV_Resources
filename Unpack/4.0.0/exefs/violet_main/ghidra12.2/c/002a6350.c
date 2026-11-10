/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a6350; name: FUN_002a6350
 */


void FUN_002a6350(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *local_f0;
  size_t local_e8;
  undefined *local_c0;
  undefined8 uStack_b8;
  char *local_90;
  undefined8 uStack_88;
  char *local_60;
  undefined8 uStack_58;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  local_60 = "gRPC C-core ";
  uStack_58 = 0xc;
  local_90 = "nintendo";
  uStack_88 = 8;
  local_c0 = &DAT_03bf391f;
  uStack_b8 = 1;
  local_f0 = (char *)FUN_003748f0();
  local_e8 = 0;
  if (local_f0 != (char *)0x0) {
    local_e8 = strlen(local_f0);
  }
  FUN_00395b50(param_1 + 3,&local_60,&local_90,&local_c0,&local_f0);
  local_60 = "gRPC C-core ";
  uStack_58 = 0xc;
  local_90 = "nintendo";
  uStack_88 = 8;
                    /* try { // try from 002a63e0 to 002a63eb has its CatchHandler @ 002a6400 */
  FUN_003959c0(param_1 + 6,&local_60,&local_90);
  return;
}


