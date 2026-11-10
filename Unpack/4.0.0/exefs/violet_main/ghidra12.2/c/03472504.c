/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03472504; name: FUN_03472504
 */


void FUN_03472504(ulong param_1,long param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  ulong uVar10;
  
  if (*(long *)(param_2 + 0x90) != 0) {
    lVar1 = param_2 + 0xe0;
    bVar2 = *(int *)(param_2 + 0x110) != 0;
    lVar6 = lVar1;
    if (bVar2) {
      lVar6 = param_2 + 0x100;
    }
    lVar4 = 0xe8;
    if (bVar2) {
      lVar4 = 0x108;
    }
    plVar7 = *(long **)(param_2 + lVar4);
    plVar8 = (long *)(lVar6 + 8);
    lVar4 = *plVar8;
    puVar9 = (uint *)(lVar6 + 0x10);
    uVar5 = (ulong)*puVar9;
    if ((long *)(lVar4 + uVar5 * 8) != plVar7) {
      do {
        plVar3 = (long *)*plVar7;
        uVar10 = param_1;
        if ((plVar3[0x12] != 0) && (0 < *(short *)(plVar3[0x12] + 0x90))) {
          if ((DAT_048afcb8 != '\0') &&
             (((*(byte *)(param_2 + 0x1bc) >> 6 & 1) != 0 && (uVar10 = 0, *param_3 != param_2)))) {
            uVar10 = param_1 & 0xffffffff;
          }
          (**(code **)(*plVar3 + 0xd0))(uVar10,plVar3,param_3,1);
          lVar4 = *plVar8;
          uVar5 = (ulong)*puVar9;
        }
        plVar7 = plVar7 + 1;
        if ((lVar1 != lVar6) && (plVar7 == (long *)(lVar4 + uVar5 * 8))) {
          plVar7 = *(long **)(param_2 + 0xe8);
          lVar6 = lVar1;
        }
        plVar8 = (long *)(lVar6 + 8);
        lVar4 = *plVar8;
        puVar9 = (uint *)(lVar6 + 0x10);
        uVar5 = (ulong)*puVar9;
        param_1 = uVar10;
      } while ((long *)(lVar4 + uVar5 * 8) != plVar7);
    }
  }
  return;
}


