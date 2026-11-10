/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036d0e0; name: FUN_0036d0e0
 */


undefined8
FUN_0036d0e0(long param_1,int param_2,long param_3,uint param_4,int param_5,long param_6,int param_7
            )

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  
  uVar2 = param_7 + param_2;
  if ((int)uVar2 < 1) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    uVar14 = 0;
    lVar11 = param_3;
    do {
      uVar13 = (uint)uVar14;
      lVar12 = lVar11;
      if ((long)param_2 <= (long)uVar14) {
        lVar12 = param_6 + (long)(int)(uVar13 - param_2) * 0x68;
      }
      if (lVar12 == 0) goto LAB_0036d3cc;
      lVar7 = FUN_003746c0(lVar12);
      if ((((lVar7 != 0) &&
           (uVar8 = FUN_00352b40("validate_metadata",lVar7,
                                 "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x391)
           , (uVar8 & 1) == 0)) ||
          ((iVar5 = FUN_003748a0(lVar12), iVar5 == 0 &&
           ((lVar7 = FUN_00374880(lVar12 + 0x20), lVar7 != 0 &&
            (uVar8 = FUN_00352b40("validate_metadata",lVar7,
                                  "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x396
                                 ), (uVar8 & 1) == 0)))))) ||
         ((*(long *)(lVar12 + 0x20) != 0 && (0xfffffffe < *(ulong *)(lVar12 + 0x28))))) {
        if (uVar2 != uVar13) {
          if (uVar13 == 0) {
            return 0;
          }
          uVar8 = 0;
          while( true ) {
            lVar11 = param_3 + uVar8 * 0x68;
            if ((long)param_2 <= (long)uVar8) {
              lVar11 = param_6 + (long)((int)uVar8 - param_2) * 0x68;
            }
            if (lVar11 == 0) break;
            uVar2 = (uint)*(ulong *)(lVar11 + 0x48) & 3;
            if (1 < uVar2) {
              uVar10 = *(ulong *)(lVar11 + 0x48) & 0xfffffffffffffffc;
              plVar1 = (long *)(uVar10 + 0x40);
              do {
                lVar11 = *plVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 + -1 == 0) {
                FUN_00376de0(uVar2,uVar10,*(undefined4 *)(uVar10 + 0x48));
              }
            }
            uVar8 = uVar8 + 1;
            if (uVar14 == uVar8) {
              return 0;
            }
          }
          goto LAB_0036d3cc;
        }
        break;
      }
      uVar6 = FUN_00376b80(lVar12);
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x68;
      *(undefined8 *)(lVar12 + 0x48) = uVar6;
    } while (uVar2 != uVar14);
  }
  lVar11 = param_1 + (ulong)param_4 * 0xe8 + 400;
  if ((param_5 != 0) && (0 < *(int *)(param_1 + 0x6b0))) {
    lVar7 = 0;
    lVar12 = param_1 + 0x650;
    do {
      lVar9 = FUN_00377370(lVar11,lVar12);
      if (lVar9 != 0) {
        FUN_00352b40("prepare_application_metadata",lVar9,
                     "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x3ae);
      }
      lVar7 = lVar7 + 1;
      lVar12 = lVar12 + 0x20;
    } while (lVar7 < *(int *)(param_1 + 0x6b0));
  }
  if (0 < (int)uVar2) {
    uVar14 = 0;
    do {
      lVar12 = param_3 + uVar14 * 0x68;
      if ((long)param_2 <= (long)uVar14) {
        lVar12 = param_6 + (long)((int)uVar14 - param_2) * 0x68;
      }
      if (lVar12 == 0) {
LAB_0036d3cc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = FUN_00377370(lVar11,(ulong *)(lVar12 + 0x48));
      if (lVar7 != 0) {
        uVar8 = *(ulong *)(lVar12 + 0x48);
        uVar13 = (uint)uVar8 & 3;
        if (1 < uVar13) {
          uVar8 = uVar8 & 0xfffffffffffffffc;
          plVar1 = (long *)(uVar8 + 0x40);
          do {
            lVar12 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 + -1 == 0) {
            FUN_00376de0(uVar13,uVar8,*(undefined4 *)(uVar8 + 0x48));
          }
        }
        FUN_00352b40("prepare_application_metadata",lVar7,
                     "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x3b9);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  return 1;
}


