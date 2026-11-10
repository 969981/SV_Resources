/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c3198; name: FUN_008c3198
 */


long * FUN_008c3198(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  ushort *puVar5;
  long *plVar6;
  
  switch(*param_2) {
  case 0:
    lVar4 = *(long *)(param_1 + 0x88);
    plVar6 = *(long **)(lVar4 + 0x10);
    *(long **)(lVar4 + 0x10) = plVar6 + 7;
    if (plVar6 != (long *)0x0) {
      *(undefined4 *)(plVar6 + 2) = 0;
      *(undefined1 *)((long)plVar6 + 0x14) = 0;
      puVar1 = PTR_DAT_047d24b8 + 0x10;
      plVar6[3] = lVar4;
      plVar6[4] = (long)param_2;
      *(undefined4 *)(plVar6 + 6) = 0x3dcccccd;
      plVar6[5] = 0;
      *plVar6 = (long)puVar1;
      plVar6[1] = 0x3f80000000000000;
      uVar3 = (ulong)*(uint *)(param_2 + 0x18);
      if (*(uint *)(param_2 + 0x18) != 0) {
        puVar5 = (ushort *)(*(long *)(param_2 + 0x20) + 0x30);
        do {
          if (((((1 < puVar5[-0x18]) || (1 < puVar5[-0x10])) || (1 < puVar5[-8])) ||
              ((1 < *puVar5 || (1 < puVar5[8])))) || (1 < puVar5[0x10])) {
            *(undefined1 *)((long)plVar6 + 0x14) = 1;
            break;
          }
          uVar3 = uVar3 - 1;
          puVar5 = puVar5 + 0x30;
        } while (uVar3 != 0);
      }
    }
    *(undefined4 *)(plVar6 + 6) = *(undefined4 *)(param_1 + 200);
    break;
  case 1:
    lVar4 = *(long *)(param_1 + 0x88);
    plVar6 = *(long **)(lVar4 + 0x10);
    *(long **)(lVar4 + 0x10) = plVar6 + 7;
    if (plVar6 != (long *)0x0) {
      *(undefined4 *)(plVar6 + 2) = 0;
      *(undefined1 *)((long)plVar6 + 0x14) = 0;
      puVar1 = PTR_DAT_047d24c8 + 0x10;
      plVar6[3] = lVar4;
      plVar6[4] = (long)param_2;
      *plVar6 = (long)puVar1;
      plVar6[1] = 0x3f80000000000000;
      plVar6[5] = 0;
      plVar6[6] = 0x3f8000003f800000;
      if (*(ushort *)(param_2 + 0x38) < 2) {
        uVar2 = *(ushort *)(param_2 + 0x48);
joined_r0x008c3340:
        if (uVar2 < 2) break;
      }
LAB_008c3344:
      *(undefined1 *)((long)plVar6 + 0x14) = 1;
    }
    break;
  case 2:
    lVar4 = *(long *)(param_1 + 0x88);
    plVar6 = *(long **)(lVar4 + 0x10);
    *(long **)(lVar4 + 0x10) = plVar6 + 8;
    if (plVar6 != (long *)0x0) {
      *(undefined4 *)(plVar6 + 2) = 0;
      puVar1 = PTR_DAT_047d24d0;
      plVar6[3] = lVar4;
      plVar6[4] = (long)param_2;
      *(undefined1 *)((long)plVar6 + 0x14) = 0;
      plVar6[5] = 0;
      plVar6[6] = 0x3f8000003f800000;
      *(undefined4 *)(plVar6 + 7) = 0;
      *plVar6 = (long)(puVar1 + 0x10);
      plVar6[1] = 0x3f80000000000000;
      if ((*(ushort *)(param_2 + 0x38) < 2) && (*(ushort *)(param_2 + 0x48) < 2)) {
        uVar2 = *(ushort *)(param_2 + 0x58);
        goto joined_r0x008c3340;
      }
      goto LAB_008c3344;
    }
    break;
  case 3:
    lVar4 = *(long *)(param_1 + 0x88);
    plVar6 = *(long **)(lVar4 + 0x10);
    *(long **)(lVar4 + 0x10) = plVar6 + 8;
    if (plVar6 != (long *)0x0) {
      *(undefined4 *)(plVar6 + 2) = 0;
      *(undefined1 *)((long)plVar6 + 0x14) = 0;
      puVar1 = PTR_DAT_047d24d8 + 0x10;
      plVar6[3] = lVar4;
      plVar6[4] = (long)param_2;
      plVar6[5] = 0;
      plVar6[6] = 0x3dcccccd00000000;
      *plVar6 = (long)puVar1;
      plVar6[1] = 0x3f80000000000000;
      if ((((1 < *(ushort *)(param_2 + 0x50)) || (1 < *(ushort *)(param_2 + 0x60))) ||
          (1 < *(ushort *)(param_2 + 0x70))) ||
         ((1 < *(ushort *)(param_2 + 0x80) || (1 < *(ushort *)(param_2 + 0x90))))) {
        *(undefined1 *)((long)plVar6 + 0x14) = 1;
      }
    }
    *(undefined4 *)((long)plVar6 + 0x34) = *(undefined4 *)(param_1 + 200);
    break;
  default:
    goto switchD_008c31c4_default;
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    return plVar6;
  }
switchD_008c31c4_default:
  return (long *)0x0;
}


