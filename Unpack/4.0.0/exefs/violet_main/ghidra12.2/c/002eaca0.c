/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002eaca0; name: FUN_002eaca0
 */


long FUN_002eaca0(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *__ptr;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [40];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined1 auStack_78 [32];
  void *local_58;
  
  puVar3 = PTR___tls_init_047cc328;
  puVar2 = PTR_DAT_047cc320;
  local_a0 = 1;
  local_94 = 0;
  local_98 = 0xffffffff;
  local_c8 = PTR_DAT_047cc320 + 0x10;
  uStack_b8 = 0;
  local_c0 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar4 = PTR_DAT_047cc330;
  lVar1 = tpidr_el0;
  local_88 = *(undefined8 *)(lVar1 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) == 0) {
    if (puVar3 != (undefined *)0x0) goto LAB_002eaef0;
LAB_002ead3c:
    *(undefined ***)(lVar1 + 0x48) = &local_c8;
  }
  else {
    FUN_0038e994();
    if (puVar3 == (undefined *)0x0) goto LAB_002ead3c;
LAB_002eaef0:
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
    *(undefined ***)(lVar1 + 0x48) = &local_c8;
  }
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002eaf10 to 002eaf13 has its CatchHandler @ 002eaf1c */
    abort();
  }
  if (param_1 != (long *)0x0) {
                    /* try { // try from 002ead5c to 002ead6f has its CatchHandler @ 002eaf50 */
    FUN_0038dcd0(&DAT_047ef1e8,&LAB_002eafc0);
                    /* try { // try from 002ead78 to 002ead7f has its CatchHandler @ 002eaf30 */
    FUN_0032b7dc(&local_e8,DAT_047ef1f0);
    uStack_128 = uStack_e0;
    local_130 = local_e8;
    uStack_118 = uStack_d0;
    uStack_120 = local_d8;
                    /* try { // try from 002ead94 to 002ead9b has its CatchHandler @ 002eaf2c */
    FUN_002ed990(auStack_110,param_1);
    local_138 = uStack_e0;
                    /* try { // try from 002eada4 to 002eade3 has its CatchHandler @ 002eaf58 */
    uVar5 = FUN_003435b0(param_3,&local_138,1,&local_130,2);
    uVar5 = (**(code **)(*param_1 + 0x20))(param_1,uVar5);
    if (param_2 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_00330eac(&local_58,param_2);
                    /* try { // try from 002eade8 to 002eadfb has its CatchHandler @ 002eaf28 */
      FUN_00344220(auStack_78,"grpc.server_uri",local_58);
      local_80 = "grpc.server_uri";
                    /* try { // try from 002eae00 to 002eae17 has its CatchHandler @ 002eaf24 */
      uVar6 = FUN_003435b0(uVar5,&local_80,1,auStack_78,1);
                    /* try { // try from 002eae1c to 002eae3f has its CatchHandler @ 002eaf34 */
      lVar7 = FUN_0036ee70(param_2,uVar6,0,0,0);
      FUN_00343d90(uVar6);
      __ptr = local_58;
      local_58 = (void *)0x0;
      if (__ptr != (void *)0x0) {
                    /* try { // try from 002eae4c to 002eae4f has its CatchHandler @ 002eaf20 */
        free(__ptr);
      }
    }
                    /* try { // try from 002eae58 to 002eae5f has its CatchHandler @ 002eaf58 */
    FUN_00343d90(uVar5);
    if (lVar7 != 0) goto LAB_002eae7c;
  }
                    /* try { // try from 002eae64 to 002eae77 has its CatchHandler @ 002eaf50 */
  lVar7 = FUN_003424d0(param_2,0xd,"Failed to create secure client channel");
LAB_002eae7c:
  local_c8 = puVar2 + 0x10;
  local_a0 = local_a0 | 1;
                    /* try { // try from 002eae90 to 002eaea3 has its CatchHandler @ 002eaf54 */
  FUN_003533a0(&local_c8);
  uVar5 = local_88;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar5;
  if ((((byte)local_a0 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 002eaf14 to 002eaf17 has its CatchHandler @ 002eaf54 */
    FUN_0038ea60();
  }
  return lVar7;
}


