/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003065d4; name: FUN_003065d4
 */


void FUN_003065d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined1 auStack_40 [32];
  
  puVar7 = *(undefined8 **)(param_1 + 0x1360);
  if (puVar7 != (undefined8 *)0x0) {
    plVar1 = puVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)*puVar7)(puVar7);
      FUN_0049e790(PTR_LAB_047cba48,puVar7);
    }
    *(undefined8 *)(param_1 + 0x1360) = 0;
  }
                    /* try { // try from 00306614 to 0030662f has its CatchHandler @ 0030683c */
  FUN_00350f40(*(undefined8 *)(param_1 + 0x10));
  FUN_00368470(param_1 + 0xc50);
  FUN_00368470(param_1 + 0x2b0);
  FUN_00310640(param_1 + 0x3d8);
                    /* try { // try from 00306630 to 0030665b has its CatchHandler @ 00306834 */
  FUN_003673f0(auStack_40,"Transport destroyed");
  uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                       ,0xc0,auStack_40,0,0);
                    /* try { // try from 00306664 to 0030671f has its CatchHandler @ 00306840 */
  FUN_0030df54(*(undefined8 *)(param_1 + 0x1358),0,uVar4);
  if (4 < uVar4) {
    FUN_00350fd0(uVar4);
  }
  *(undefined8 *)(param_1 + 0x1358) = 0;
  FUN_00368470(param_1 + 0x148);
  FUN_00312fa0(param_1 + 0xef8);
  FUN_0030fc10(param_1 + 0x1030);
  if (*(long *)(param_1 + 0x50) != 0) {
LAB_00306828:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00306828 to 00306833 has its CatchHandler @ 00306840 */
    abort();
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    if (*(long *)(param_1 + 0x60) != 0) goto LAB_00306828;
    if (*(long *)(param_1 + 0x68) == 0) {
      if (*(long *)(param_1 + 0x70) != 0) goto LAB_00306828;
      if (*(long *)(param_1 + 0x78) == 0) {
        if (*(long *)(param_1 + 0x80) != 0) goto LAB_00306828;
        if (*(long *)(param_1 + 0x88) == 0) {
          if (*(long *)(param_1 + 0x90) != 0) goto LAB_00306828;
          if (*(long *)(param_1 + 0x98) == 0) {
            if (4 < *(ulong *)(param_1 + 0xd80)) {
              FUN_00350fd0();
            }
            lVar6 = FUN_00319950(param_1 + 0xa0);
            if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            FUN_00319760(param_1 + 0xa0);
            FUN_003507c0(*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 00306720 to 00306757 has its CatchHandler @ 00306838 */
            FUN_003673f0(auStack_40,"Transport destroyed");
            uVar5 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                 ,0xd9,auStack_40,0,0);
            FUN_00306860(param_1,uVar5);
            __ptr = *(void **)(param_1 + 0x1160);
            while (__ptr != (void *)0x0) {
              pvVar8 = *(void **)((long)__ptr + 0x10);
                    /* try { // try from 00306764 to 00306767 has its CatchHandler @ 00306844 */
              free(__ptr);
              *(void **)(param_1 + 0x1160) = pvVar8;
              __ptr = pvVar8;
            }
            (*(code *)**(undefined8 **)(param_1 + 0x1050))(param_1 + 0x1050);
            if (4 < *(ulong *)(param_1 + 0x40)) {
                    /* try { // try from 00306794 to 003067a7 has its CatchHandler @ 00306840 */
              FUN_00350fd0();
            }
            free(*(void **)(param_1 + 0xee0));
            free(*(void **)(param_1 + 0x18));
            puVar7 = *(undefined8 **)(param_1 + 0x1360);
            if (puVar7 != (undefined8 *)0x0) {
              plVar1 = puVar7 + 1;
              do {
                lVar6 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar6 + -1 == 0) {
                (**(code **)*puVar7)(puVar7);
                FUN_0049e790(PTR_LAB_047cba48,puVar7);
              }
            }
            FUN_003750c8(param_1 + 0x288);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


