/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00371520; name: FUN_00371520
 */


undefined8 * FUN_00371520(ulong param_1,uint param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long lVar11;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar5 = PTR___tls_init_047cc328;
  puVar4 = PTR_DAT_047cc320;
  uStack_98 = 0;
  local_a0 = 0;
  puVar2 = &DAT_047f0fe0 + (param_1 & 0xffffffff) * 0x50;
  if (param_2 != 2) {
    puVar2 = &DAT_04496740 + (param_1 & 0xffffffff) * 0x50;
  }
  local_74 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_70 = 0;
  local_a8 = PTR_DAT_047cc320 + 0x10;
  local_80 = 1;
  local_78 = 0xffffffff;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar6 = PTR_DAT_047cc330;
  lVar3 = tpidr_el0;
  local_68 = *(undefined8 *)(lVar3 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
    FUN_0038e994();
  }
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar3 + 0x48) = &local_a8;
  lVar11 = *(long *)(puVar2 + 8);
                    /* try { // try from 00371614 to 0037168f has its CatchHandler @ 00371730 */
  lVar8 = (*(code *)(&PTR_FUN_04496838)[(ulong)param_2 * 7])();
  puVar9 = (undefined8 *)FUN_0038c7b0(lVar11 + lVar8 + 0x50);
  puVar9[2] = puVar2;
  puVar9[3] = (ulong)param_2 * 0x38 + 0x4496830;
  *puVar9 = 2;
  puVar1 = puVar9 + 10;
  (**(code **)(puVar2 + 0x10))(puVar1,param_3);
  pcVar10 = *(code **)(puVar9[2] + 0x48);
  if (pcVar10 == (code *)0x0) {
    lVar11 = *(long *)(puVar9[2] + 8);
    lVar8 = (long)puVar1 + lVar11;
  }
  else {
    lVar8 = (*pcVar10)(puVar9);
    lVar11 = *(long *)(puVar9[2] + 8);
  }
  puVar9[4] = lVar8;
  (**(code **)(puVar9[3] + 0x10))((long)puVar1 + lVar11,puVar9 + 1);
  puVar9[8] = 0;
  puVar9[6] = &LAB_00371790;
  puVar9[7] = puVar9;
  local_a8 = puVar4 + 0x10;
  local_80 = local_80 | 1;
                    /* try { // try from 003716b4 to 003716c7 has its CatchHandler @ 0037172c */
  FUN_003533a0(&local_a8);
  uVar7 = local_68;
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar3 + 0x48) = uVar7;
  if ((((byte)local_80 >> 2 & 1) == 0) && ((*puVar6 & 1) != 0)) {
                    /* try { // try from 00371724 to 00371727 has its CatchHandler @ 0037172c */
    FUN_0038ea60();
  }
  return puVar9;
}


