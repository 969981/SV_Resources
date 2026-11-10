/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030bea0; name: FUN_0030bea0
 */


void FUN_0030bea0(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined1 auStack_88 [32];
  long local_68;
  
  if (*(long *)(param_1 + 0xd80) == 0) {
    if (-1 < *(int *)(param_1 + 0xe04)) {
      pcVar4 = (char *)(param_1 + 0x11e1);
      lVar2 = param_1 + 0xa0;
      plVar3 = (long *)(param_1 + 8);
      do {
        uVar8 = FUN_00319950(lVar2);
        if ((*(uint *)(param_1 + 0xd9c) <= uVar8) ||
           (uVar8 = FUN_003193e0(param_1,&local_68), (uVar8 & 1) == 0)) {
          if (*(uint *)(param_1 + 0xe04) < 0x7fffffff) {
            return;
          }
          break;
        }
        if (*(int *)(local_68 + 0xa0) != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = *(int *)(param_1 + 0xe04) + 2;
        *(int *)(local_68 + 0xa0) = *(int *)(param_1 + 0xe04);
        *(uint *)(param_1 + 0xe04) = uVar1;
        if (uVar1 < 0x7fffffff) {
          FUN_00319780(lVar2);
          if (*pcVar4 == '\0') goto LAB_0030c01c;
LAB_0030bfe8:
          lVar10 = *(long *)(param_1 + 0x40);
          lVar7 = local_68;
        }
        else {
          FUN_003752d8(param_1 + 0x288,3,"no_more_stream_ids");
          FUN_00319780(lVar2,*(undefined4 *)(local_68 + 0xa0));
          if (*pcVar4 != '\0') goto LAB_0030bfe8;
LAB_0030c01c:
          *pcVar4 = '\x01';
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar6) {
              *plVar3 = *plVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          *(undefined1 **)(param_1 + 0x1210) = &LAB_0030c820;
          *(long *)(param_1 + 0x1218) = param_1;
          *(undefined8 *)(param_1 + 0x1220) = 0;
          uVar9 = FUN_00350f70(*(undefined8 *)(param_1 + 0x10));
          FUN_00359df0(uVar9,1,param_1 + 0x1208);
          lVar10 = *(long *)(param_1 + 0x40);
          lVar7 = local_68;
        }
        local_68 = lVar7;
        if ((lVar10 == 0) && (uVar8 = FUN_003191f0(param_1,lVar7), (uVar8 & 1) != 0)) {
          plVar11 = *(long **)(lVar7 + 0x10);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = *plVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (*(int *)(param_1 + 0x38) == 1) {
          *(undefined4 *)(param_1 + 0x38) = 2;
        }
        else if (*(int *)(param_1 + 0x38) == 0) {
          *(undefined4 *)(param_1 + 0x38) = 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar6) {
              *plVar3 = *plVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          *(undefined8 *)(param_1 + 0xe0) = 0;
          *(undefined1 **)(param_1 + 0xd0) = &LAB_003080d0;
          *(long *)(param_1 + 0xd8) = param_1;
          thunk_FUN_00350da0(*(undefined8 *)(param_1 + 0x28),param_1 + 200,0);
        }
      } while (-1 < *(int *)(param_1 + 0xe04));
    }
    uVar8 = FUN_003193e0(param_1,&local_68);
    lVar2 = local_68;
    while ((uVar8 & 1) != 0) {
      local_68 = lVar2;
      FUN_003673f0(auStack_88,"Stream IDs exhausted");
      uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x487,auStack_88,0,0);
      uVar9 = FUN_00351770(uVar9,3,0xe);
      FUN_00308f80(param_1,lVar2,uVar9);
      uVar8 = FUN_003193e0(param_1,&local_68);
      lVar2 = local_68;
    }
  }
  else {
    uVar8 = FUN_003193e0(param_1,&local_68);
    lVar2 = local_68;
    while ((uVar8 & 1) != 0) {
      local_68 = lVar2;
      FUN_003673f0(auStack_88,"GOAWAY received");
      uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x461,auStack_88,0,0);
      uVar9 = FUN_00351770(uVar9,3,0xe);
      FUN_00308f80(param_1,lVar2,uVar9);
      uVar8 = FUN_003193e0(param_1,&local_68);
      lVar2 = local_68;
    }
  }
  return;
}


