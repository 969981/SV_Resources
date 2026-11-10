/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003162e0; name: FUN_003162e0
 */


undefined8 FUN_003162e0(uint *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  byte local_88 [16];
  ulong local_78;
  undefined1 auStack_70 [32];
  ulong local_50;
  undefined *puStack_48;
  ulong local_40;
  undefined *puStack_38;
  
  if (param_1[4] == param_2) {
    return 0;
  }
  local_40 = (ulong)param_1[3];
  local_50 = (ulong)param_2;
  if (param_1[3] < param_2) {
    puStack_38 = PTR_FUN_047cc7b0;
    puStack_48 = PTR_FUN_047cc7b0;
    FUN_00391b20(local_88,"Attempt to make hpack table %d bytes when max is %d bytes",0x39,&local_50
                 ,2);
    uVar11 = (ulong)local_88 | 1;
    if ((local_88[0] & 1) != 0) {
      uVar11 = local_78;
    }
                    /* try { // try from 00316360 to 00316383 has its CatchHandler @ 00316574 */
    FUN_00367770(auStack_70,uVar11);
    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                         ,0x7f,auStack_70,0,0);
    if ((local_88[0] & 1) == 0) {
      return uVar6;
    }
    FUN_0049e790(PTR_LAB_047cba48,local_78);
    return uVar6;
  }
  do {
    uVar13 = param_1[2];
    if (uVar13 <= param_2) {
      uVar10 = param_1[6];
      uVar13 = param_2 + 0x1f >> 5;
      param_1[4] = param_2;
      param_1[5] = uVar13;
      if (uVar10 < uVar13) {
        if (uVar13 <= uVar10 * 2) {
          uVar13 = uVar10 * 2;
        }
        puVar7 = (undefined8 *)FUN_0038c780((ulong)uVar13 << 3);
        uVar11 = (ulong)param_1[1];
        pvVar8 = *(void **)(param_1 + 8);
        if (param_1[1] != 0) {
          uVar10 = *param_1;
          uVar3 = param_1[6];
          puVar14 = puVar7;
          do {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar10 / uVar3;
            }
            uVar11 = uVar11 - 1;
            uVar2 = uVar10 - uVar2 * uVar3;
            uVar10 = uVar10 + 1;
            *puVar14 = *(undefined8 *)((long)pvVar8 + (ulong)uVar2 * 8);
            puVar14 = puVar14 + 1;
          } while (uVar11 != 0);
        }
        free(pvVar8);
        *(undefined8 **)(param_1 + 8) = puVar7;
        param_1[6] = uVar13;
      }
      else {
        if (uVar10 / 3 <= uVar13) {
          return 0;
        }
        if (uVar13 < 0x11) {
          uVar13 = 0x10;
        }
        if (uVar13 == uVar10) {
          return 0;
        }
        puVar7 = (undefined8 *)FUN_0038c780(uVar13 << 3);
        uVar11 = (ulong)param_1[1];
        pvVar8 = *(void **)(param_1 + 8);
        if (param_1[1] != 0) {
          uVar10 = *param_1;
          uVar3 = param_1[6];
          puVar14 = puVar7;
          do {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar10 / uVar3;
            }
            uVar11 = uVar11 - 1;
            uVar2 = uVar10 - uVar2 * uVar3;
            uVar10 = uVar10 + 1;
            *puVar14 = *(undefined8 *)((long)pvVar8 + (ulong)uVar2 * 8);
            puVar14 = puVar14 + 1;
          } while (uVar11 != 0);
        }
        free(pvVar8);
        *(undefined8 **)(param_1 + 8) = puVar7;
        param_1[6] = uVar13;
      }
      *param_1 = 0;
      return 0;
    }
    uVar11 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)*param_1 * 8);
    plVar9 = (long *)(uVar11 & 0xfffffffffffffffc);
    if (*plVar9 == 0) {
      uVar15 = (ulong)*(byte *)(plVar9 + 1);
      if (plVar9[4] == 0) goto LAB_003163f8;
LAB_003163d4:
      uVar15 = uVar15 + plVar9[5] + 0x20;
      if (uVar13 < uVar15) {
LAB_00316570:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      uVar15 = plVar9[1];
      if (plVar9[4] != 0) goto LAB_003163d4;
LAB_003163f8:
      uVar15 = uVar15 + *(byte *)(plVar9 + 5) + 0x20;
      if (uVar13 < uVar15) goto LAB_00316570;
    }
    uVar3 = param_1[6];
    uVar10 = *param_1 + 1;
    param_1[2] = uVar13 - (int)uVar15;
    uVar13 = 0;
    if (uVar3 != 0) {
      uVar13 = uVar10 / uVar3;
    }
    uVar2 = (uint)uVar11 & 3;
    *param_1 = uVar10 - uVar13 * uVar3;
    param_1[1] = param_1[1] - 1;
    if (1 < uVar2) {
      plVar1 = plVar9 + 8;
      do {
        lVar12 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 + -1 == 0) {
        FUN_00376de0(uVar2,plVar9,(int)plVar9[9]);
      }
    }
  } while( true );
}


