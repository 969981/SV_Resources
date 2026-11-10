/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030e2f8; name: FUN_0030e2f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0030e2f8(long *param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  double local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  param_1[2] = 0xffff;
  param_1[1] = 0xffff;
  puVar1 = PTR_DAT_047ccaf8;
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = param_3 & 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[3] = 0xffff;
  param_1[4] = param_2;
                    /* try { // try from 0030e340 to 0030e343 has its CatchHandler @ 0030e498 */
  FUN_003748fc(param_1 + 7,*(undefined8 *)(param_2 + 0x18));
  local_50 = 0;
  local_48 = 0.0;
  uStack_38 = _UNK_03cab368;
  local_40 = _DAT_03cab360;
  local_30 = 0x7fefffffffffffff;
  uStack_58 = _UNK_03cabf08;
  local_60 = _DAT_03cabf00;
                    /* try { // try from 0030e370 to 0030e453 has its CatchHandler @ 0030e4a0 */
  FUN_00350f70(*(undefined8 *)(param_1[4] + 0x10));
  uVar3 = FUN_00359920();
  dVar5 = log2((double)param_1[9]);
  dVar6 = (double)FUN_00359110(uVar3);
  local_48 = dVar5 + 1.0;
  bVar2 = false;
  if ((local_48 < 22.0) && (bVar2 = false, !NAN(dVar6))) {
    bVar2 = dVar6 < 0.1;
  }
  if (bVar2) {
    local_48 = (dVar6 * (local_48 + -22.0)) / 0.1 + 22.0;
  }
  else if (0.8 < dVar6) {
    dVar5 = (dVar6 + -0.8) / 0.09999999999999998;
    if (1.0 < dVar5) {
      dVar5 = 1.0;
    }
    local_48 = local_48 * (1.0 - dVar5);
  }
  local_30 = 0x4024000000000000;
  uStack_38 = _UNK_03cabf18;
  local_40 = _DAT_03cabf10;
  FUN_00377d60(param_1 + 0xf,&local_60);
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 0030e460 to 0030e463 has its CatchHandler @ 0030e49c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar4 = tpidr_el0;
                    /* try { // try from 0030e47c to 0030e47f has its CatchHandler @ 0030e49c */
  lVar4 = FUN_0035347c(*(undefined8 *)(lVar4 + 0x48));
  param_1[0x1a] = lVar4;
  return;
}


