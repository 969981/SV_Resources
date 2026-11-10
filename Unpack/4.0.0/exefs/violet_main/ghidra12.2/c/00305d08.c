/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00305d08; name: FUN_00305d08
 */


void FUN_00305d08(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_50 [32];
  
  plVar1 = param_1 + 2;
  FUN_0038db40(plVar1);
  if (*(char *)((long)param_1 + 0x59) != '\x01') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00305e94 to 00305e9b has its CatchHandler @ 00305eac */
    abort();
  }
  *(undefined1 *)((long)param_1 + 0x59) = 0;
  if (param_2 == 0) {
    if ((char)param_1[0xb] == '\0') {
      if (param_1[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
                    /* try { // try from 00305e30 to 00305e37 has its CatchHandler @ 00305eac */
      FUN_00306170(param_1);
                    /* try { // try from 00305e38 to 00305e3f has its CatchHandler @ 00305e9c */
      FUN_0038db60(plVar1);
      return;
    }
                    /* try { // try from 00305d5c to 00305d87 has its CatchHandler @ 00305ea0 */
    FUN_003673f0(auStack_50,"connector shutdown");
    param_2 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                           ,0x65,auStack_50,0,0);
  }
  else if (4 < param_2) {
                    /* try { // try from 00305d48 to 00305d4f has its CatchHandler @ 00305eac */
    param_2 = FUN_00350fb0(param_2);
  }
  lVar7 = param_1[0xc];
  if (lVar7 != 0) {
    uVar5 = param_2;
    if (4 < param_2) {
                    /* try { // try from 00305da0 to 00305db3 has its CatchHandler @ 00305eac */
      uVar5 = FUN_00350fb0(param_2,param_2);
    }
    FUN_00350f30(lVar7,uVar5);
  }
  puVar6 = (undefined8 *)param_1[9];
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar8 = (undefined8 *)puVar6[2];
  if (puVar8 != (undefined8 *)0x0) {
    plVar2 = puVar8 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*puVar8)(puVar8);
      FUN_0049e790(PTR_LAB_047cba48,puVar8);
    }
  }
  puVar6[2] = 0;
  lVar7 = param_1[10];
  param_1[10] = 0;
                    /* try { // try from 00305de8 to 00305df3 has its CatchHandler @ 00305ea8 */
  FUN_0035351c(auStack_50,lVar7,param_2);
                    /* try { // try from 00305df4 to 00305dfb has its CatchHandler @ 00305ea4 */
  FUN_0038db60(plVar1);
  plVar1 = param_1 + 1;
  do {
    lVar7 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 + -1 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    FUN_0049e790(PTR_LAB_047cba48,param_1);
  }
  return;
}


