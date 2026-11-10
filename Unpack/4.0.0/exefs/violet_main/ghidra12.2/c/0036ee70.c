/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036ee70; name: FUN_0036ee70
 */


long FUN_0036ee70(undefined8 param_1,long *param_2,undefined4 param_3,undefined8 param_4,
                 long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  void *__ptr;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  char *__s1;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  FUN_002747e0();
  uVar6 = FUN_003448b0();
  if ((param_2 == (long *)0x0) || (lVar14 = *param_2, lVar14 == 0)) {
LAB_0036ef7c:
    __ptr = (void *)0x0;
LAB_0036ef80:
    uVar11 = 0;
    bVar16 = true;
  }
  else {
    lVar15 = 0;
    bVar16 = false;
    lVar13 = 0;
    do {
      lVar12 = param_2[1];
      __s1 = *(char **)(lVar12 + lVar15 + 8);
      iVar5 = strcmp(__s1,"grpc.default_authority");
      if (iVar5 == 0) {
        bVar16 = true;
      }
      else {
        iVar5 = strcmp(__s1,"grpc.ssl_target_name_override");
        if (iVar5 == 0) {
          lVar13 = FUN_00344040(lVar12 + lVar15);
        }
      }
      lVar15 = lVar15 + 0x20;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if ((lVar13 == 0) || (bVar16)) goto LAB_0036ef7c;
    __ptr = (void *)FUN_0038ccb0(lVar13);
    if (__ptr == (void *)0x0) goto LAB_0036ef80;
                    /* try { // try from 0036ef50 to 0036ef63 has its CatchHandler @ 0036f280 */
    FUN_00344220(&local_b8,"grpc.default_authority",__ptr);
    bVar16 = false;
    uVar11 = 1;
    uStack_88 = uStack_b0;
    local_90 = local_b8;
    uStack_78 = uStack_a0;
    uStack_80 = local_a8;
  }
                    /* try { // try from 0036ef88 to 0036ef9f has its CatchHandler @ 0036f2e8 */
  uVar11 = FUN_00343590(param_2,&local_90,uVar11);
  uVar7 = FUN_00370c70(param_3);
                    /* try { // try from 0036efa4 to 0036efbf has its CatchHandler @ 0036f2e4 */
  if (((uVar7 & 1) != 0) && (pcVar8 = (code *)FUN_00344270(), pcVar8 != (code *)0x0)) {
    uVar11 = (*pcVar8)(param_1,uVar11,param_3);
  }
                    /* try { // try from 0036efc4 to 0036f097 has its CatchHandler @ 0036f2e8 */
  FUN_00344940(uVar6,uVar11);
  FUN_00343d90(uVar11);
  FUN_003448e0(uVar6,param_1);
  FUN_00344990(uVar6,param_4);
  FUN_003449c0(uVar6,param_5);
  uVar7 = FUN_00370bb0(uVar6,param_3);
  if ((uVar7 & 1) == 0) {
                    /* try { // try from 0036f198 to 0036f1b3 has its CatchHandler @ 0036f2e8 */
    FUN_00344ae0(uVar6);
    if (param_5 != 0) {
      FUN_00359d00(param_5,0xc800);
    }
    FUN_00274c30();
  }
  else {
    uVar7 = FUN_00370c70(param_3);
    if ((uVar7 & 1) != 0) {
      uVar11 = FUN_00344980(uVar6);
      uVar9 = FUN_00343a90(uVar11,"grpc.enable_channelz");
      uVar7 = FUN_003440e0(uVar9,1);
      if ((uVar7 & 1) != 0) {
        uVar9 = FUN_00343a90(uVar11,"grpc.max_channel_trace_event_memory_per_node");
        iVar5 = FUN_00343f80(uVar9,0x1000,0x7fffffff);
        local_b8 = (undefined8 *)(long)iVar5;
        local_68 = FUN_00345f40(uVar11);
        puVar10 = (undefined8 *)FUN_00344910(uVar6);
        local_90 = (undefined8 *)&DAT_03c886bc;
        if (puVar10 != (undefined8 *)0x0) {
          local_90 = puVar10;
        }
        puVar10 = (undefined8 *)FUN_00370608(&local_90,&local_b8,&local_68);
                    /* try { // try from 0036f09c to 0036f0bb has its CatchHandler @ 0036f290 */
        FUN_003673f0(&local_90,"Channel created");
        FUN_00344ea0(puVar10 + 0x14,1,&local_90);
        lVar14 = local_68;
        if (0 < local_68) {
                    /* try { // try from 0036f0c8 to 0036f0d7 has its CatchHandler @ 0036f28c */
          uVar9 = FUN_0034ad58();
          FUN_0034af84(&local_90,uVar9,lVar14);
                    /* try { // try from 0036f0e4 to 0036f0e7 has its CatchHandler @ 0036f238 */
          if ((local_90 != (undefined8 *)0x0) &&
             (FUN_0034825c(local_90,puVar10[3]), puVar4 = local_90, local_90 != (undefined8 *)0x0))
          {
            plVar1 = local_90 + 1;
            do {
              lVar14 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar14 + -1 == 0) {
              (**(code **)*local_90)(local_90);
              FUN_0049e790(PTR_LAB_047cba48,puVar4);
            }
          }
        }
                    /* try { // try from 0036f108 to 0036f123 has its CatchHandler @ 0036f288 */
        FUN_00344250(&local_90,"grpc.channelz_channel_node",puVar10,&PTR_LAB_04496700);
        local_98 = "grpc.channelz_parent_uuid";
                    /* try { // try from 0036f130 to 0036f15f has its CatchHandler @ 0036f294 */
        uVar11 = FUN_003435b0(uVar11,&local_98,1,&local_90,1);
        FUN_00344940(uVar6,uVar11);
        FUN_00343d90(uVar11);
        if (puVar10 != (undefined8 *)0x0) {
          plVar1 = puVar10 + 1;
          do {
            lVar14 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 + -1 == 0) {
            (**(code **)*puVar10)(puVar10);
            FUN_0049e790(PTR_LAB_047cba48,puVar10);
          }
        }
      }
    }
                    /* try { // try from 0036f17c to 0036f187 has its CatchHandler @ 0036f2e0 */
    lVar14 = FUN_0036ea50(uVar6,param_3);
    if (lVar14 != 0) goto joined_r0x0036f1c0;
                    /* try { // try from 0036f1b8 to 0036f1bb has its CatchHandler @ 0036f2e0 */
    FUN_00274c30();
  }
  lVar14 = 0;
joined_r0x0036f1c0:
  if (!bVar16) {
                    /* try { // try from 0036f1c4 to 0036f1cb has its CatchHandler @ 0036f2dc */
    free(__ptr);
  }
  return lVar14;
}


