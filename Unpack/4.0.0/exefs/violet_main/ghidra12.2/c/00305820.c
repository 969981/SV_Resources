/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00305820; name: FUN_00305820
 */


long FUN_00305820(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *__ptr;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_e8;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined1 auStack_70 [32];
  void *local_48;
  
  puVar3 = PTR___tls_init_047cc328;
  puVar2 = PTR_DAT_047cc320;
  local_98 = 1;
  local_8c = 0;
  local_90 = 0xffffffff;
  local_c0 = PTR_DAT_047cc320 + 0x10;
  uStack_b0 = 0;
  local_b8 = 0;
  local_88 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar4 = PTR_DAT_047cc330;
  lVar1 = tpidr_el0;
  local_80 = *(undefined8 *)(lVar1 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
    FUN_0038e994();
  }
  if (puVar3 == (undefined *)0x0) {
    *(undefined ***)(lVar1 + 0x48) = &local_c0;
  }
  else {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
    *(undefined ***)(lVar1 + 0x48) = &local_c0;
  }
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00305a58 to 00305a5b has its CatchHandler @ 00305a78 */
    abort();
  }
                    /* try { // try from 003058d4 to 003058e7 has its CatchHandler @ 00305a78 */
  FUN_0038dcd0(&DAT_047ef3b0,&LAB_00305b00);
                    /* try { // try from 003058f0 to 003058f7 has its CatchHandler @ 00305a74 */
  FUN_0032b7dc(auStack_e0,DAT_047ef3b8);
  local_e8 = local_d8;
                    /* try { // try from 00305900 to 00305917 has its CatchHandler @ 00305a70 */
  uVar5 = FUN_003435b0(param_2,&local_e8,1,auStack_e0,1);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
                    /* try { // try from 00305920 to 0030592b has its CatchHandler @ 00305a9c */
    FUN_00330eac(&local_48,param_1);
                    /* try { // try from 00305930 to 00305943 has its CatchHandler @ 00305a6c */
    FUN_00344220(auStack_70,"grpc.server_uri",local_48);
    local_78 = "grpc.server_uri";
                    /* try { // try from 00305948 to 0030595f has its CatchHandler @ 00305a68 */
    uVar6 = FUN_003435b0(uVar5,&local_78,1,auStack_70,1);
                    /* try { // try from 00305964 to 00305987 has its CatchHandler @ 00305a7c */
    lVar7 = FUN_0036ee70(param_1,uVar6,0,0,0);
    FUN_00343d90(uVar6);
    __ptr = local_48;
    local_48 = (void *)0x0;
    if (__ptr != (void *)0x0) {
                    /* try { // try from 00305994 to 00305997 has its CatchHandler @ 00305a64 */
      free(__ptr);
    }
  }
                    /* try { // try from 003059a0 to 003059bf has its CatchHandler @ 00305a9c */
  FUN_00343d90(uVar5);
  if (lVar7 == 0) {
    lVar7 = FUN_003424d0(param_1,0xd,"Failed to create client channel");
  }
  local_c0 = puVar2 + 0x10;
  local_98 = local_98 | 1;
                    /* try { // try from 003059d8 to 003059eb has its CatchHandler @ 00305a98 */
  FUN_003533a0(&local_c0);
  uVar5 = local_80;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar5;
  if ((((byte)local_98 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 00305a5c to 00305a5f has its CatchHandler @ 00305a98 */
    FUN_0038ea60();
  }
  return lVar7;
}


