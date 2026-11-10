/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00273e64; name: FUN_00273e64
 */


void FUN_00273e64(undefined8 param_1,undefined8 param_2)

{
  byte local_28;
  char local_27 [8];
  undefined7 uStack_1f;
  undefined4 uStack_18;
  uint uStack_14;
  
  local_28 = 0x26;
  uStack_1f = s_grpc_service_config_03c4010c._8_7_;
  uStack_18 = CONCAT31(0x676966,s_grpc_service_config_03c4010c[0xf]);
  local_27 = (char  [8])s_grpc_service_config_03c4010c._0_8_;
  uStack_14 = uStack_14 & 0xffffff00;
                    /* try { // try from 00273e98 to 00273e9f has its CatchHandler @ 00273ec4 */
  FUN_002734c8(param_1,&local_28,param_2);
  if ((local_28 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_14,uStack_18));
  }
  return;
}


