/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b15f0; name: FUN_003b15f0
 */


undefined8 FUN_003b15f0(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      if ((int)plVar4[1] != 0) {
        uVar2 = *(uint *)(*plVar4 + 0x44);
        if ((int)*(uint *)(*plVar4 + 0x44) <= (int)uVar12) {
          uVar2 = uVar12;
        }
        uVar12 = uVar2;
      }
      plVar4 = (long *)plVar4[2];
    } while (plVar4 != (long *)0x0);
  }
  lVar3 = FUN_00452ce0(-(ulong)(uVar12 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar12 + 1) << 2,
                       "external/openssl/ssl/ssl_ciph.c",0x3a1);
  if (lVar3 == 0) {
    FUN_004806c0(0x14,0xe7,0x41,"external/openssl/ssl/ssl_ciph.c",0x3a3);
    return 0;
  }
  for (plVar4 = (long *)*param_1; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
    if ((int)plVar4[1] != 0) {
      lVar10 = (long)*(int *)(*plVar4 + 0x44) * 4;
      *(int *)(lVar3 + lVar10) = *(int *)(lVar3 + lVar10) + 1;
    }
  }
  if (-1 < (int)uVar12) {
    uVar5 = (ulong)uVar12;
    do {
      if (0 < *(int *)(lVar3 + uVar5 * 4)) {
        plVar4 = (long *)*param_1;
        plVar6 = (long *)*param_2;
        plVar7 = plVar6;
        if ((plVar4 != (long *)0x0) && (plVar6 != (long *)0x0)) {
          plVar11 = plVar4;
          plVar8 = plVar4;
          do {
            plVar9 = (long *)plVar8[2];
            plVar4 = plVar11;
            if (((uVar5 == *(uint *)(*plVar8 + 0x44)) && ((int)plVar8[1] != 0)) &&
               (plVar8 != plVar7)) {
              lVar10 = plVar8[3];
              plVar4 = plVar9;
              if (plVar8 != plVar11) {
                plVar4 = plVar11;
              }
              plVar11 = plVar9;
              if (lVar10 != 0) {
                *(long **)(lVar10 + 0x10) = plVar9;
                plVar11 = (long *)plVar8[2];
              }
              if (plVar11 != (long *)0x0) {
                plVar11[3] = lVar10;
              }
              plVar7[2] = (long)plVar8;
              plVar8[2] = 0;
              plVar8[3] = (long)plVar7;
              plVar7 = plVar8;
            }
            if (plVar8 == plVar6) break;
            plVar11 = plVar4;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        *param_1 = (long)plVar4;
        *param_2 = (long)plVar7;
      }
      bVar1 = 0 < (long)uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  FUN_00452f80(lVar3,"external/openssl/ssl/ssl_ciph.c",0x3b9);
  return 1;
}


