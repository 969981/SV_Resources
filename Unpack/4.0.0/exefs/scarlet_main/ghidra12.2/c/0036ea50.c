/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036ea50; name: FUN_0036ea50
 */


uint * FUN_0036ea50(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  void *__ptr;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  ulong unaff_x24;
  ulong uVar14;
  ulong unaff_x26;
  undefined8 *puVar15;
  char *__s1;
  uint *local_68;
  
  FUN_00344910();
  __ptr = (void *)FUN_0038ccb0();
  FUN_00344980(param_1);
  puVar8 = (ulong *)FUN_003438f0();
  uVar9 = FUN_003449e0(param_1);
  uVar10 = FUN_00344b40(param_1,0x78,1,&LAB_0036ecd0,0,&local_68);
  if (uVar10 == 0) {
    *(void **)(local_68 + 0x1c) = __ptr;
    *(undefined8 *)(local_68 + 8) = uVar9;
    uVar6 = FUN_00370c70(param_2);
    puVar4 = local_68;
    *local_68 = uVar6 & 1;
    FUN_0038db00(local_68 + 10);
    puVar5 = local_68;
    puVar12 = puVar4 + 0x14;
    puVar12[0] = 0;
    puVar12[1] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    *(uint **)(puVar4 + 0x12) = puVar12;
    puVar4[0x18] = 0;
    lVar13 = *(long *)(local_68 + 0x34);
    lVar11 = FUN_0036ada0();
    *(long *)(puVar5 + 6) = lVar11 + lVar13;
    FUN_0034c840(local_68 + 1);
    if (*puVar8 != 0) {
      uVar10 = 0;
      do {
        uVar14 = puVar8[1];
        lVar11 = uVar14 + uVar10 * 0x20;
        __s1 = *(char **)(lVar11 + 8);
        iVar7 = strcmp(__s1,"grpc.default_compression_level");
        if (iVar7 == 0) {
          local_68[2] = 1;
          unaff_x26 = unaff_x26 & 0xffffffff00000000 | 3;
          uVar6 = FUN_00343f80(lVar11,0,unaff_x26);
          local_68[3] = uVar6;
        }
        else {
          iVar7 = strcmp(__s1,"grpc.default_compression_algorithm");
          if (iVar7 == 0) {
            local_68[4] = 1;
            unaff_x24 = unaff_x24 & 0xffffffff00000000 | 3;
            uVar6 = FUN_00343f80(lVar11,0,unaff_x24);
            local_68[5] = uVar6;
          }
          else {
            iVar7 = strcmp(__s1,"grpc.compression_enabled_algorithms_bitset");
            if (iVar7 == 0) {
              local_68[1] = *(uint *)(lVar11 + 0x10) | 1;
            }
            else {
              iVar7 = strcmp(__s1,"grpc.channelz_channel_node");
              puVar4 = local_68;
              if ((iVar7 == 0) && (*(int *)(uVar14 + uVar10 * 0x20) == 2)) {
                lVar11 = *(long *)(lVar11 + 0x10);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                plVar1 = (long *)(lVar11 + 8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar3) {
                    *plVar1 = *plVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                puVar15 = *(undefined8 **)(local_68 + 0x1a);
                if (puVar15 != (undefined8 *)0x0) {
                  plVar1 = puVar15 + 1;
                  do {
                    lVar13 = *plVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar3) {
                      *plVar1 = lVar13 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar13 + -1 == 0) {
                    (**(code **)*puVar15)(puVar15);
                    FUN_0049e790(PTR_LAB_047cba48,puVar15);
                  }
                }
                *(long *)(puVar4 + 0x1a) = lVar11;
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *puVar8);
    }
  }
  else {
    if (4 < uVar10) {
      FUN_00350fd0();
    }
    free(__ptr);
  }
  FUN_00343d90(puVar8);
  return local_68;
}


