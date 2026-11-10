/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033ad00; name: FUN_0033ad00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0033ad00(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  void *__ptr;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  ulong unaff_x22;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  char *__s1;
  ulong uVar11;
  ulong unaff_x29;
  long local_b8 [4];
  long local_98;
  ulong *local_90;
  void *local_88;
  ulong local_80;
  undefined8 local_78;
  void *pvStack_70;
  ulong local_68;
  
  *param_1 = 0;
  param_1[1] = param_2;
                    /* try { // try from 0033ad30 to 0033ad37 has its CatchHandler @ 0033b11c */
  FUN_0038db00(param_1 + 4);
  uVar4 = *param_3;
  *param_3 = 0;
  param_1[0x17] = 0;
  uVar10 = 120000;
  param_1[0x16] = param_1 + 0x17;
  param_1[9] = uVar4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  puVar8 = param_1 + 0x13;
  *puVar8 = param_1 + 0x14;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x20] = 20000;
  if ((param_4 == (ulong *)0x0) || (*param_4 == 0)) {
    uVar9 = 1000;
  }
  else {
    uVar11 = 0;
    uVar9 = 1000;
    bVar6 = false;
    lVar7 = 0;
    do {
      lVar5 = param_4[1] + lVar7;
      __s1 = *(char **)(lVar5 + 8);
      iVar3 = strcmp(__s1,"grpc.testing.fixed_reconnect_backoff_ms");
      if (iVar3 == 0) {
        puVar8 = (undefined8 *)((ulong)puVar8 & 0xffffffff00000000 | 0x7fffffff);
        iVar3 = FUN_00343f80(lVar5,uVar9 & 0xffffffff | 0x6400000000,puVar8);
        uVar9 = (ulong)iVar3;
        param_1[0x20] = uVar9;
        bVar6 = true;
        uVar10 = uVar9;
      }
      else {
        iVar3 = strcmp(__s1,"grpc.min_reconnect_backoff_ms");
        if (iVar3 == 0) {
          unaff_x22 = unaff_x22 & 0xffffffff00000000 | 0x7fffffff;
          iVar3 = FUN_00343f80(lVar5,(ulong)*(uint *)(param_1 + 0x20) | 0x6400000000,unaff_x22);
          bVar6 = false;
          param_1[0x20] = (long)iVar3;
        }
        else {
          iVar3 = strcmp(__s1,"grpc.max_reconnect_backoff_ms");
          if (iVar3 == 0) {
            unaff_x29 = unaff_x29 & 0xffffffff00000000 | 0x7fffffff;
                    /* try { // try from 0033adc8 to 0033aecf has its CatchHandler @ 0033b18c */
            iVar3 = FUN_00343f80(lVar5,uVar10 & 0xffffffff | 0x6400000000,unaff_x29);
            bVar6 = false;
            uVar10 = (long)iVar3;
          }
          else {
            iVar3 = strcmp(__s1,"grpc.initial_reconnect_backoff_ms");
            if (iVar3 == 0) {
              iVar3 = FUN_00343f80(lVar5,uVar9 & 0xffffffff | 0x6400000000);
              bVar6 = false;
              uVar9 = (ulong)iVar3;
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
      lVar7 = lVar7 + 0x20;
    } while (uVar11 < *param_4);
    if (bVar6) {
      local_78 = _DAT_03caab50;
      pvStack_70 = _UNK_03caab58;
      goto LAB_0033af04;
    }
  }
  local_78 = _DAT_03cab600;
  pvStack_70 = _UNK_03cab608;
LAB_0033af04:
                    /* try { // try from 0033af14 to 0033af1b has its CatchHandler @ 0033b108 */
  local_80 = uVar9;
  local_68 = uVar10;
  FUN_0034345c(param_1 + 0x19,&local_80);
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[8] = 0x10000;
                    /* try { // try from 0033af30 to 0033af33 has its CatchHandler @ 0033b104 */
  uVar4 = FUN_003581e0();
  param_1[3] = uVar4;
                    /* try { // try from 0033af38 to 0033af4f has its CatchHandler @ 0033b130 */
  __ptr = (void *)FUN_0038c780(0x84);
  FUN_0033b2b0(param_4,__ptr);
  local_90 = (ulong *)0x0;
  local_88 = (void *)0x0;
                    /* try { // try from 0033af54 to 0033af7b has its CatchHandler @ 0033b128 */
  uVar10 = FUN_0032fe64(__ptr,param_4,&local_88,&local_90);
  if ((uVar10 & 1) != 0) {
    if (local_88 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0033b0f0 to 0033b0f3 has its CatchHandler @ 0033b128 */
      abort();
    }
    free(__ptr);
    __ptr = local_88;
  }
                    /* try { // try from 0033af80 to 0033afcf has its CatchHandler @ 0033b134 */
  FUN_0033b344(&local_80,__ptr);
  free(__ptr);
  if (local_90 != (ulong *)0x0) {
    param_4 = local_90;
  }
  uVar4 = FUN_003435b0(param_4,&PTR_s_grpc_subchannel_address_04495bd0,1,&local_80,1);
  param_1[2] = uVar4;
  free(pvStack_70);
  if (local_90 != (ulong *)0x0) {
    FUN_00343d90();
  }
  param_1[0xe] = PTR_LAB_047ccca8;
  param_1[0xf] = param_1;
  param_1[0x10] = 0;
                    /* try { // try from 0033afe4 to 0033afef has its CatchHandler @ 0033b100 */
  uVar4 = FUN_00343a90(param_1[2],"grpc.enable_channelz");
                    /* try { // try from 0033aff0 to 0033b00b has its CatchHandler @ 0033b12c */
  uVar10 = FUN_003440e0(uVar4,1);
  uVar4 = FUN_00343a90(param_1[2],"grpc.max_channel_trace_event_memory_per_node");
                    /* try { // try from 0033b00c to 0033b017 has its CatchHandler @ 0033b0fc */
  iVar3 = FUN_00343f80(uVar4,0x1000,0x7fffffff);
  local_98 = (long)iVar3;
  if ((uVar10 & 1) != 0) {
                    /* try { // try from 0033b028 to 0033b04b has its CatchHandler @ 0033b124 */
    FUN_00343a90(param_1[2],"grpc.subchannel_address");
    local_b8[0] = FUN_00344040();
    if (local_b8[0] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0033b0f4 to 0033b0f7 has its CatchHandler @ 0033b124 */
      abort();
    }
    lVar7 = FUN_0033e244(local_b8,&local_98);
    puVar8 = (undefined8 *)param_1[0x2d];
    if (puVar8 != (undefined8 *)0x0) {
      plVar1 = puVar8 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)*puVar8)(puVar8);
        FUN_0049e790(PTR_LAB_047cba48,puVar8);
      }
    }
    param_1[0x2d] = lVar7;
                    /* try { // try from 0033b074 to 0033b093 has its CatchHandler @ 0033b0f8 */
    FUN_003673f0(local_b8,"subchannel created");
    FUN_00344ea0(lVar7 + 0xd0,1,local_b8);
  }
  return;
}


