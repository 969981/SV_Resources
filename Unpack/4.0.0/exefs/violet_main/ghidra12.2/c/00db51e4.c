/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db51e4; name: FUN_00db51e4
 */


ulong FUN_00db51e4(long param_1,long param_2,long param_3)

{
  long lVar1;
  char *param4;
  char *param5;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  byte abStack_b0 [128];
  
  param4 = *(char **)(param_2 + 8);
  param5 = *(char **)(param_3 + 8);
  lVar1 = *(long *)(param_2 + 0x10) + *(long *)(param_3 + 0x10);
  puVar11 = &DAT_cbf29ce484222645;
  lVar3 = -(lVar1 + 0x15U & 0xfffffffffffffff0);
  pbVar4 = abStack_b0 + lVar3 + 0x80;
  *pbVar4 = 0;
  snprintf((char *)pbVar4,lVar1 + 6,"%s%s:%s","iso:",param4,param5);
  bVar2 = *pbVar4;
  if (bVar2 != 0) {
    pbVar4 = abStack_b0 + lVar3 + 0x81;
    do {
      puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  puVar7 = *(undefined1 **)(param_1 + 0x78);
  if (puVar7 != (undefined1 *)0x0) {
    uVar5 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      puVar6 = (undefined1 *)((ulong)(puVar7 + -1) & (ulong)puVar11);
    }
    else {
      puVar6 = puVar11;
      if (puVar7 <= puVar11) {
        uVar10 = 0;
        if (puVar7 != (undefined1 *)0x0) {
          uVar10 = (ulong)puVar11 / (ulong)puVar7;
        }
        puVar6 = puVar11 + -(uVar10 * (long)puVar7);
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x70) + (long)puVar6 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if ((undefined1 *)plVar8[1] == puVar11) {
            if ((undefined1 *)plVar8[2] == puVar11) goto LAB_00db5328;
          }
          else if ((undefined1 *)((ulong)plVar8[1] & (ulong)(puVar7 + -1)) != puVar6)
          goto LAB_00db5398;
          plVar8 = (long *)*plVar8;
          uVar5 = 0;
          uVar10 = 0;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          puVar9 = (undefined1 *)plVar8[1];
          if (puVar9 == puVar11) {
            if ((undefined1 *)plVar8[2] == puVar11) goto LAB_00db5328;
          }
          else {
            if (puVar7 <= puVar9) {
              uVar5 = 0;
              if (puVar7 != (undefined1 *)0x0) {
                uVar5 = (ulong)puVar9 / (ulong)puVar7;
              }
              puVar9 = puVar9 + -(uVar5 * (long)puVar7);
            }
            if (puVar9 != puVar6) goto LAB_00db5398;
          }
          plVar8 = (long *)*plVar8;
          uVar5 = 0;
          uVar10 = 0;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_00db5334;
    }
  }
LAB_00db5398:
  uVar5 = 0;
  uVar10 = 0;
LAB_00db5334:
  return uVar10 | uVar5;
LAB_00db5328:
  uVar10 = (ulong)*(uint *)(plVar8 + 3) << 0x20;
  uVar5 = 1;
  goto LAB_00db5334;
}


