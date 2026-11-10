/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b27a0; name: FUN_003b27a0
 */


long FUN_003b27a0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  void *__dest;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == (long *)0x0) {
    uVar7 = 0xc3;
    uVar8 = 0x2dc;
    goto LAB_003b2b04;
  }
  if (*param_1 == 0) {
    uVar7 = 0xe4;
    uVar8 = 0x2e0;
    goto LAB_003b2b04;
  }
  lVar5 = FUN_00452ce0(0x1990,"external/openssl/ssl/ssl_lib.c",0x2e4);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x690) = 1;
    lVar6 = FUN_0047e540();
    *(long *)(lVar5 + 0x1950) = lVar6;
    if (lVar6 == 0) {
      FUN_00452f80(lVar5,"external/openssl/ssl/ssl_lib.c",0x2eb);
      lVar5 = 0;
    }
    else {
      FUN_003a4470(lVar5 + 0x948,lVar5);
      *(long *)(lVar5 + 0x110) = param_1[0x6c];
      lVar6 = param_1[0x25];
      *(long *)(lVar5 + 0x69c) = param_1[0x26];
      *(long *)(lVar5 + 0x694) = lVar6;
      *(long *)(lVar5 + 0x6a8) = param_1[0x27];
      *(long *)(lVar5 + 0x1928) = param_1[0x71];
      *(long *)(lVar5 + 0x1958) = param_1[0x78];
      *(int *)(lVar5 + 0x89c) = (int)param_1[0x7b];
      lVar6 = FUN_0047da00(param_1[3]);
      *(long *)(lVar5 + 0x130) = lVar6;
      if (lVar6 != 0) {
        lVar6 = FUN_003ade40(param_1[0x28]);
        *(long *)(lVar5 + 0x550) = lVar6;
        if (lVar6 != 0) {
          *(int *)(lVar5 + 0x950) = (int)param_1[0x29];
          lVar6 = param_1[0x2a];
          *(long *)(lVar5 + 0xc0) = param_1[0x2b];
          *(long *)(lVar5 + 0xb8) = lVar6;
          *(int *)(lVar5 + 0x620) = (int)param_1[0x2c];
          *(long *)(lVar5 + 0x940) = param_1[0x6e];
          lVar6 = param_1[0x72];
          *(long *)(lVar5 + 0x1940) = param_1[0x73];
          *(long *)(lVar5 + 0x1938) = lVar6;
          *(long *)(lVar5 + 0x1948) = param_1[0x74];
          uVar9 = param_1[0x2d];
          *(ulong *)(lVar5 + 0x5a8) = uVar9;
          if (uVar9 < 0x21) {
            lVar10 = param_1[0x2f];
            lVar6 = param_1[0x2e];
            lVar11 = param_1[0x30];
            *(long *)(lVar5 + 0x5c8) = param_1[0x31];
            *(long *)(lVar5 + 0x5c0) = lVar11;
            *(long *)(lVar5 + 0x5b8) = lVar10;
            *(long *)(lVar5 + 0x5b0) = lVar6;
            *(long *)(lVar5 + 0x628) = param_1[0x32];
            *(long *)(lVar5 + 0x5f0) = param_1[0x33];
            lVar6 = FUN_00489cf0();
            *(long *)(lVar5 + 0xd0) = lVar6;
            if (lVar6 != 0) {
              FUN_00489df0(lVar6,param_1[0x34]);
              *(int *)(lVar5 + 0x40) = (int)param_1[0x35];
              *(undefined1 *)(lVar5 + 0x7f4) = *(undefined1 *)((long)param_1 + 0x224);
              lVar6 = param_1[0x36];
              *(long *)(lVar5 + 0x6c0) = param_1[0x37];
              *(long *)(lVar5 + 0x6b8) = lVar6;
              uVar9 = param_1[0x38];
              *(ulong *)(lVar5 + 0x6c8) = uVar9;
              if (1 < uVar9) {
                *(undefined4 *)(lVar5 + 0x950) = 1;
              }
              if (param_1[0x39] != 0) {
                FUN_003a4650(lVar5);
              }
              piVar1 = (int *)((long)param_1 + 0x9c);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              *(long **)(lVar5 + 0x660) = param_1;
              *(undefined4 *)(lVar5 + 0x740) = 0;
              *(undefined8 *)(lVar5 + 0x6f8) = 0;
              *(undefined8 *)(lVar5 + 0x6f0) = 0;
              *(int *)(lVar5 + 0x708) = (int)param_1[0x44];
              *(undefined4 *)(lVar5 + 0x73c) = 0;
              *(undefined8 *)(lVar5 + 0x724) = 0;
              *(undefined8 *)(lVar5 + 0x71c) = 0;
              *(undefined8 *)(lVar5 + 0x734) = 0;
              *(undefined8 *)(lVar5 + 0x72c) = 0;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              *(long **)(lVar5 + 0x878) = param_1;
              if (param_1[0x46] != 0) {
                lVar6 = FUN_0045ace0(param_1[0x46],param_1[0x45],"external/openssl/ssl/ssl_lib.c",
                                     0x33e);
                *(long *)(lVar5 + 0x750) = lVar6;
                if (lVar6 == 0) {
                  *(undefined8 *)(lVar5 + 0x748) = 0;
                  goto LAB_003b2ae4;
                }
                *(long *)(lVar5 + 0x748) = param_1[0x45];
              }
              if (param_1[0x48] != 0) {
                lVar6 = FUN_0045ace0(param_1[0x48],param_1[0x47] << 1,
                                     "external/openssl/ssl/ssl_lib.c",0x34a);
                *(long *)(lVar5 + 0x770) = lVar6;
                if (lVar6 == 0) {
                  *(undefined8 *)(lVar5 + 0x768) = 0;
                  goto LAB_003b2ae4;
                }
                *(long *)(lVar5 + 0x768) = param_1[0x47];
              }
              *(undefined8 *)(lVar5 + 0x7c0) = 0;
              if (*(long *)(*(long *)(lVar5 + 0x660) + 600) != 0) {
                __dest = (void *)FUN_00452c30(*(undefined8 *)(*(long *)(lVar5 + 0x660) + 0x260),
                                              "external/openssl/ssl/ssl_lib.c",0x357);
                *(void **)(lVar5 + 0x7b0) = __dest;
                if (__dest == (void *)0x0) {
                  *(undefined8 *)(lVar5 + 0x7b8) = 0;
                  goto LAB_003b2ae4;
                }
                memcpy(__dest,*(void **)(*(long *)(lVar5 + 0x660) + 600),
                       *(size_t *)(*(long *)(lVar5 + 0x660) + 0x260));
                *(undefined8 *)(lVar5 + 0x7b8) = *(undefined8 *)(*(long *)(lVar5 + 0x660) + 0x260);
              }
              *(undefined8 *)(lVar5 + 0x670) = 0;
              *(undefined8 *)(lVar5 + 0x668) = 0;
              lVar6 = param_1[0x16];
              *(long *)(lVar5 + 0x1908) = param_1[0x17];
              *(long *)(lVar5 + 0x1900) = lVar6;
              lVar6 = *param_1;
              *(long *)(lVar5 + 8) = lVar6;
              *(undefined4 *)(lVar5 + 0x894) = 0xffffffff;
              lVar10 = param_1[0x79];
              *(long *)(lVar5 + 0x1978) = param_1[0x7a];
              *(long *)(lVar5 + 0x1970) = lVar10;
              iVar4 = (**(code **)(lVar6 + 0x10))(lVar5);
              if (iVar4 != 0) {
                *(uint *)(lVar5 + 0x38) =
                     (uint)(*(undefined **)(*param_1 + 0x28) != PTR_LAB_047cd0b0);
                iVar4 = FUN_003b24d0(lVar5);
                if ((iVar4 != 0) && (iVar4 = FUN_00444640(0,lVar5,lVar5 + 0x678), iVar4 != 0)) {
                  lVar6 = param_1[0x55];
                  *(long *)(lVar5 + 0x648) = param_1[0x56];
                  *(long *)(lVar5 + 0x640) = lVar6;
                  lVar10 = param_1[0x58];
                  lVar6 = param_1[0x57];
                  *(undefined8 *)(lVar5 + 0x1910) = 0;
                  *(long *)(lVar5 + 0x658) = lVar10;
                  *(long *)(lVar5 + 0x650) = lVar6;
                  *(long *)(lVar5 + 0x860) = param_1[0x7c];
                  return lVar5;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_003b2ae4:
  FUN_003b2b40(lVar5);
  uVar7 = 0x41;
  uVar8 = 0x38e;
LAB_003b2b04:
  FUN_004806c0(0x14,0xba,uVar7,"external/openssl/ssl/ssl_lib.c",uVar8);
  return 0;
}


