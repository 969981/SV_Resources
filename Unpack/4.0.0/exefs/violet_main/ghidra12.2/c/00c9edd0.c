/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c9edd0; name: FUN_00c9edd0
 */


ulong FUN_00c9edd0(ulong param_1,int param_2)

{
  short sVar1;
  ulong uVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined1 *puVar15;
  
  plVar14 = *(long **)(param_1 + 0x30);
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar14 != plVar6) {
    do {
      sVar1 = *(short *)((long)plVar14 + 10);
      sVar4 = (**(code **)(*(long *)(*(long *)(*plVar14 + 0x30) + 0x30) + 0x10))();
      if ((int)(short)param_2 < (int)sVar1 + (int)sVar4) {
        param_2 = param_2 - (uint)*(ushort *)((long)plVar14 + 10);
        plVar6 = (long *)(*(long *)(*plVar14 + 0x30) + 0x30);
        uVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,param_2);
        if ((~uVar5 & 0xffff) != 0) goto LAB_00c9ee64;
        plVar6 = (long *)(*(long *)(*plVar14 + 0x30) + 0x30);
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x28))(plVar6,param_2);
        puVar15 = (undefined1 *)*puVar7;
        plVar6 = (long *)puVar7[3];
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
        if (puVar15 != &DAT_cbf29ce484222645) {
          plVar8 = *(long **)(param_1 + 0x30);
          if (plVar8 != *(long **)(param_1 + 0x38)) goto LAB_00c9eee0;
          goto LAB_00c9efe8;
        }
        bVar3 = true;
        goto LAB_00c9eff0;
      }
      plVar14 = plVar14 + 2;
    } while (plVar6 != plVar14);
  }
  param_1 = 0xffff;
  goto LAB_00c9ee6c;
LAB_00c9eee0:
  puVar9 = *(undefined1 **)(*plVar8 + 0x40);
  if (puVar9 != (undefined1 *)0x0) {
    uVar10 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)puVar15);
    }
    else {
      puVar11 = puVar15;
      if (puVar9 <= puVar15) {
        uVar2 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar15 / (ulong)puVar9;
        }
        puVar11 = puVar15 + -(uVar2 * (long)puVar9);
      }
    }
    plVar12 = *(long **)(*(long *)(*plVar8 + 0x38) + (long)puVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined1 *)plVar12[1] == puVar15) {
            if ((undefined1 *)plVar12[2] == puVar15) goto LAB_00c9efd4;
          }
          else if ((undefined1 *)((ulong)plVar12[1] & (ulong)(puVar9 + -1)) != puVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          puVar13 = (undefined1 *)plVar12[1];
          if (puVar13 == puVar15) {
            if ((undefined1 *)plVar12[2] == puVar15) goto LAB_00c9efd4;
          }
          else {
            if (puVar9 <= puVar13) {
              uVar10 = 0;
              if (puVar9 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar13 / (ulong)puVar9;
              }
              puVar13 = puVar13 + -(uVar10 * (long)puVar9);
            }
            if (puVar13 != puVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  goto LAB_00c9efdc;
LAB_00c9efd4:
  if (-1 < (short)plVar12[6]) {
    bVar3 = false;
    param_1 = (ulong)((uint)*(ushort *)((long)plVar8 + 10) + (int)(short)plVar12[6]);
    goto LAB_00c9eff0;
  }
LAB_00c9efdc:
  plVar8 = plVar8 + 2;
  if (plVar8 == *(long **)(param_1 + 0x38)) goto LAB_00c9efe8;
  goto LAB_00c9eee0;
LAB_00c9efe8:
  bVar3 = false;
  param_1 = 0xffff;
LAB_00c9eff0:
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (bVar3) {
LAB_00c9ee64:
    param_1 = (ulong)(*(ushort *)((long)plVar14 + 10) + uVar5);
  }
LAB_00c9ee6c:
  return param_1 & 0xffffffff;
}


