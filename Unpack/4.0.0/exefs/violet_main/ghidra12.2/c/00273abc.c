/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00273abc; name: FUN_00273abc
 */


void FUN_00273abc(long *param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar6 = PTR___tls_init_047cc328;
  puVar5 = PTR_DAT_047cc320;
  local_54 = 0;
  local_60 = 1;
  uStack_78 = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_88 = PTR_DAT_047cc320 + 0x10;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 00273b14 to 00273b17 has its CatchHandler @ 00273c94 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar7 = PTR_DAT_047cc330;
  lVar2 = tpidr_el0;
  local_48 = *(undefined8 *)(lVar2 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
                    /* try { // try from 00273c84 to 00273c87 has its CatchHandler @ 00273c94 */
    FUN_0038e994();
  }
  if (puVar6 != (undefined *)0x0) {
                    /* try { // try from 00273b48 to 00273b4b has its CatchHandler @ 00273c94 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar2 + 0x48) = &local_88;
  piVar3 = (int *)param_1[1];
  for (piVar1 = (int *)*param_1; piVar1 != piVar3; piVar1 = piVar1 + 8) {
    if (*piVar1 == 2) {
                    /* try { // try from 00273c18 to 00273c1b has its CatchHandler @ 00273ca0 */
      (**(code **)(*(long *)(piVar1 + 6) + 8))(*(undefined8 *)(piVar1 + 4));
    }
  }
  local_88 = puVar5 + 0x10;
  local_60 = local_60 | 1;
                    /* try { // try from 00273b84 to 00273b97 has its CatchHandler @ 00273c9c */
  FUN_003533a0(&local_88);
  uVar8 = local_48;
  if (puVar6 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar2 + 0x48) = uVar8;
  if ((((byte)local_60 >> 2 & 1) == 0) && ((*puVar7 & 1) != 0)) {
                    /* try { // try from 00273c8c to 00273c8f has its CatchHandler @ 00273c9c */
    FUN_0038ea60();
  }
  if (param_1[5] != 0) {
    lVar2 = param_1[3];
    plVar4 = (long *)param_1[4];
    lVar9 = *plVar4;
    *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar9;
    param_1[5] = 0;
    puVar5 = PTR_LAB_047cba48;
    while (plVar4 != param_1 + 3) {
      plVar10 = (long *)plVar4[1];
      if ((*(byte *)(plVar4 + 2) & 1) != 0) {
        FUN_0049e790(puVar5,plVar4[4]);
      }
      FUN_0049e790(puVar5,plVar4);
      plVar4 = plVar10;
    }
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


