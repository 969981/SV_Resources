/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0027329c; name: FUN_0027329c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0027329c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  byte local_98 [16];
  undefined8 local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  local_50 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  uVar2 = s_grpc_primary_user_agent_03c6e57a._0_8_;
  uStack_58 = _UNK_03cab718;
  local_60 = _DAT_03cab710;
  uVar1 = CONCAT17(s_grpc_primary_user_agent_03c6e57a[0xf],s_grpc_primary_user_agent_03c6e57a._8_7_)
  ;
  *(ulong *)(local_50 + 0xf) =
       CONCAT71(s_grpc_primary_user_agent_03c6e57a._16_7_,s_grpc_primary_user_agent_03c6e57a[0xf]);
  local_50[0x17] = '\0';
  *(undefined8 *)(local_50 + 8) = uVar1;
  *(undefined8 *)local_50 = uVar2;
                    /* try { // try from 00273300 to 00273307 has its CatchHandler @ 00273428 */
  FUN_00274670(local_98);
                    /* try { // try from 00273308 to 0027331f has its CatchHandler @ 00273400 */
  puVar3 = (ulong *)FUN_00273ff4(local_98,0,"grpc-c++/",9);
  uStack_78 = puVar3[1];
  local_80 = *puVar3;
  local_70 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 00273338 to 00273347 has its CatchHandler @ 002733bc */
  FUN_002734c8(param_1,&local_60,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  if ((local_98[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_88);
  }
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  return;
}


