/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ea5cc; name: FUN_007ea5cc
 */


void FUN_007ea5cc(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  long lVar10;
  uint uVar11;
  
  FUN_007eaaf4("[Analysis] ------ BEGIN(%s, %d.%03d sec. passed) ------",param_1 + 0x602,
               (int)param_1[0x601] / 1000,(int)param_1[0x601] % 1000);
  FUN_007eaaf4(
              "[Analysis] ProtocolId(EmulationId), TotalNum, TotalSize, AverageSize, Protocol(port)"
              );
  uVar1 = param_1[0x60a];
  uVar2 = param_1[0x60b];
  if (uVar1 == 0) {
    FUN_007eaaf4("[Analysis]         0xffffffff(---), %8d,  %8d,    %8d, Packet",0,uVar2,0);
  }
  else {
    uVar11 = 0;
    if (uVar1 != 0) {
      uVar11 = uVar2 / uVar1;
    }
    FUN_007eaaf4("[Analysis]         0xffffffff(---), %8d,  %8d,    %8d, Packet",uVar1,uVar2,uVar11)
    ;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = param_1[0x60c];
    if (uVar1 != 0) {
      uVar2 = param_1[0x60a];
      if (uVar2 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        if (uVar2 != 0) {
          uVar11 = uVar1 / uVar2;
        }
      }
      FUN_007eaaf4("[Analysis]                                     %8d,    %8d, NetworkHeader",uVar1
                   ,uVar11);
    }
    uVar1 = param_1[0x60d];
    if (uVar1 != 0) {
      uVar2 = param_1[0x60a];
      if (uVar2 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        if (uVar2 != 0) {
          uVar11 = uVar1 / uVar2;
        }
      }
      FUN_007eaaf4("[Analysis]                                     %8d,    %8d, PiaHeader",uVar1,
                   uVar11);
    }
    uVar1 = param_1[0x60e];
    if (uVar1 != 0) {
      uVar2 = param_1[0x60a];
      if (uVar2 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        if (uVar2 != 0) {
          uVar11 = uVar1 / uVar2;
        }
      }
      FUN_007eaaf4("[Analysis]                                     %8d,    %8d, Footer",uVar1,uVar11
                  );
    }
    uVar1 = param_1[0x60f];
    if (uVar1 != 0) {
      uVar2 = param_1[0x60a];
      if (uVar2 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        if (uVar2 != 0) {
          uVar11 = uVar1 / uVar2;
        }
      }
      FUN_007eaaf4("[Analysis]                                     %8d,    %8d, Crypto",uVar1,uVar11
                  );
    }
  }
  puVar5 = PTR_DAT_047d1170;
  puVar8 = param_1 + 0x610;
  lVar10 = -0x18;
  do {
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = puVar8[0x18] / uVar1;
      }
      FUN_007eaaf4("[Analysis]         0xffffffff(%3u), %8d,  %8d,    %8d, Packet",
                   (int)lVar10 + (uint)(byte)*puVar5 + 0x18,uVar1,puVar8[0x18],uVar2);
    }
    bVar6 = lVar10 != -1;
    lVar10 = lVar10 + 1;
    puVar8 = puVar8 + 1;
  } while (bVar6);
  if (0 < (int)param_1[0x600]) {
    lVar10 = 0;
    puVar9 = param_1;
    do {
      uVar1 = puVar9[1];
      if (uVar1 != 0) {
        uVar2 = puVar9[2];
        uVar11 = 0;
        if (uVar1 != 0) {
          uVar11 = uVar2 / uVar1;
        }
        uVar3 = *puVar9;
        cVar4 = *(char *)((long)puVar9 + 2);
        if (cVar4 == '\0') {
          uVar7 = FUN_007ec570(uVar3);
          FUN_007eaaf4("[Analysis]         0x%08x(---), %8d,  %8d,    %8d, %s(%u)",uVar3,uVar1,uVar2
                       ,uVar11,uVar7,*(undefined2 *)puVar9);
        }
        else {
          uVar7 = FUN_007ec570(uVar3);
          FUN_007eaaf4("[Analysis]         0x%08x(%3u), %8d,  %8d,    %8d, %s(%u)",uVar3,cVar4,uVar1
                       ,uVar2,uVar11,uVar7,*(undefined2 *)puVar9);
        }
        if ((param_2 & 1) != 0) {
          if (puVar9[4] != 0 || puVar9[6] != 0) {
            uVar1 = (puVar9[1] - puVar9[4]) - puVar9[6];
            uVar2 = ((puVar9[2] - puVar9[5]) - puVar9[7]) - puVar9[3];
            if (uVar1 == 0) {
              uVar11 = 0xffffffff;
            }
            else {
              uVar11 = 0;
              if (uVar1 != 0) {
                uVar11 = uVar2 / uVar1;
              }
            }
            uVar7 = FUN_007ec570(*puVar9);
            FUN_007eaaf4("[Analysis]                          %8d,  %8d,    %8d, %sFirstSend",uVar1,
                         uVar2,uVar11,uVar7);
            uVar1 = puVar9[4];
            if (uVar1 != 0) {
              uVar2 = puVar9[5];
              uVar11 = 0;
              if (uVar1 != 0) {
                uVar11 = uVar2 / uVar1;
              }
              uVar7 = FUN_007ec570(*puVar9);
              FUN_007eaaf4("[Analysis]                          %8d,  %8d,    %8d, %sResend",uVar1,
                           uVar2,uVar11,uVar7);
            }
          }
          uVar1 = puVar9[6];
          if (uVar1 != 0) {
            uVar2 = puVar9[7];
            uVar11 = 0;
            if (uVar1 != 0) {
              uVar11 = uVar2 / uVar1;
            }
            uVar7 = FUN_007ec570(*puVar9);
            FUN_007eaaf4("[Analysis]                          %8d,  %8d,    %8d, %sAck",uVar1,uVar2,
                         uVar11,uVar7);
          }
          uVar1 = puVar9[3];
          uVar2 = puVar9[1];
          if (uVar2 == 0) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = 0;
            if (uVar2 != 0) {
              uVar11 = uVar1 / uVar2;
            }
          }
          uVar7 = FUN_007ec570(*puVar9);
          FUN_007eaaf4("[Analysis]                                     %8d,    %8d, %sHeader",uVar1,
                       uVar11,uVar7);
        }
      }
      lVar10 = lVar10 + 1;
      puVar9 = puVar9 + 0xc;
    } while (lVar10 < (int)param_1[0x600]);
  }
  FUN_007eaaf4("[Analysis] ---------------------------- END ----------------------------");
  return;
}


