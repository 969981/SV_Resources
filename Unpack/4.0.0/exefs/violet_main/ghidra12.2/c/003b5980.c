/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b5980; name: FUN_003b5980
 */


undefined8 FUN_003b5980(long param_1,long *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined2 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined2 *puVar11;
  long lVar12;
  
  uVar9 = param_2[1];
  if (uVar9 == 0) {
    uVar6 = 0x2f;
    uVar7 = 0xb7;
    uVar8 = 0x155b;
  }
  else {
    uVar1 = 2;
    if (param_3 != 0) {
      uVar1 = 3;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar9 / uVar1;
    }
    if (uVar9 == uVar2 * uVar1) {
      FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2a8),
                   "external/openssl/ssl/ssl_lib.c",0x1565);
      lVar12 = *(long *)(param_1 + 0xa8);
      *(undefined8 *)(lVar12 + 0x2b0) = 0;
      *(undefined8 *)(lVar12 + 0x2a8) = 0;
      if (param_3 == 0) {
        FUN_00452f80(0,"external/openssl/ssl/packet_local.h",0x1a4);
        *(long *)(lVar12 + 0x2a8) = 0;
        *(undefined8 *)(lVar12 + 0x2b0) = 0;
        lVar10 = param_2[1];
        if (lVar10 == 0) {
          return 1;
        }
        lVar5 = FUN_0045ace0(*param_2,lVar10,"external/openssl/ssl/packet_local.h",0x1ad);
        *(long *)(lVar12 + 0x2a8) = lVar5;
        if (lVar5 != 0) {
          *(long *)(lVar12 + 0x2b0) = lVar10;
          return 1;
        }
        uVar6 = 0x50;
        uVar7 = 0x44;
        uVar8 = 0x1593;
      }
      else {
        lVar12 = *param_2;
        uVar9 = param_2[1];
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar9 / uVar1;
        }
        puVar4 = (undefined2 *)FUN_00452c30(uVar2 << 1,"external/openssl/ssl/ssl_lib.c",0x1576);
        lVar10 = *(long *)(param_1 + 0xa8);
        *(undefined2 **)(lVar10 + 0x2a8) = puVar4;
        if (puVar4 != (undefined2 *)0x0) {
          *(undefined8 *)(lVar10 + 0x2b0) = 0;
          if (uVar9 == 0) {
            return 1;
          }
          puVar11 = (undefined2 *)(lVar12 + 1);
          uVar9 = uVar9 - 1;
          do {
            if (*(char *)((long)puVar11 + -1) == '\0') {
              if (uVar9 < 2) {
LAB_003b5b30:
                FUN_003c3950(param_1,0x32,0x208,0xf0,"external/openssl/ssl/ssl_lib.c",0x1587);
                FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2a8),
                             "external/openssl/ssl/ssl_lib.c",0x1588);
                lVar12 = *(long *)(param_1 + 0xa8);
                *(undefined8 *)(lVar12 + 0x2b0) = 0;
                *(undefined8 *)(lVar12 + 0x2a8) = 0;
                return 0;
              }
              *puVar4 = *puVar11;
              *(long *)(*(long *)(param_1 + 0xa8) + 0x2b0) =
                   *(long *)(*(long *)(param_1 + 0xa8) + 0x2b0) + 2;
            }
            else if (uVar9 < 2) goto LAB_003b5b30;
            puVar4 = puVar4 + 1;
            puVar11 = (undefined2 *)((long)puVar11 + 3);
            bVar3 = uVar9 == 2;
            uVar9 = uVar9 - 3;
            if (bVar3) {
              return 1;
            }
          } while( true );
        }
        uVar6 = 0x50;
        uVar7 = 0x41;
        uVar8 = 0x157a;
      }
    }
    else {
      uVar6 = 0x32;
      uVar7 = 0x97;
      uVar8 = 0x1561;
    }
  }
  FUN_003c3950(param_1,uVar6,0x208,uVar7,"external/openssl/ssl/ssl_lib.c",uVar8);
  return 0;
}


