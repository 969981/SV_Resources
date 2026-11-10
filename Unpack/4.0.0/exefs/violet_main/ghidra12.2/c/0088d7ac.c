/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088d7ac; name: FUN_0088d7ac
 */


void FUN_0088d7ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint *puVar4;
  uint uVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar9 = *(long *)(param_1 + 0x18);
  if (*(short *)(lVar9 + 0xe) != 0) {
    uVar5 = *(uint *)(lVar9 + 0x10);
    uVar10 = 0;
    lVar1 = param_2 + 0x18;
    do {
      lVar2 = lVar9 + (ulong)*(uint *)(lVar9 + (ulong)uVar5 + uVar10 * 4);
      switch(*(undefined1 *)(lVar2 + 0x1d)) {
      case 0:
      case 3:
      case 4:
        for (lVar11 = *(long *)(param_2 + 0x20); lVar1 != lVar11; lVar11 = *(long *)(lVar11 + 8)) {
          uVar7 = FUN_0088fc10(lVar2,*(long *)(lVar11 + 0x10) + 0xb0);
          if ((uVar7 & 1) != 0) {
            lVar11 = *(long *)(lVar11 + 0x10);
            if (lVar11 != 0) {
              uVar6 = *(ushort *)(param_1 + 0x38);
              if (uVar6 < *(ushort *)(param_1 + 0x3a)) {
                *(ushort *)(param_1 + 0x38) = uVar6 + 1;
                plVar3 = (long *)(*(long *)(param_1 + 0x30) + (ulong)uVar6 * 0x10);
                *plVar3 = lVar11;
                plVar3[1] = lVar2;
              }
            }
            break;
          }
        }
        break;
      case 1:
        for (lVar11 = *(long *)(param_2 + 0x20); lVar1 != lVar11; lVar11 = *(long *)(lVar11 + 8)) {
          lVar8 = (**(code **)(**(long **)(lVar11 + 0x10) + 0x88))
                            (*(long **)(lVar11 + 0x10),lVar2,0);
          if (lVar8 != 0) {
            FUN_0088d418(param_1,lVar8,lVar2);
            break;
          }
        }
        break;
      case 2:
        for (lVar11 = *(long *)(param_2 + 0x20); lVar1 != lVar11; lVar11 = *(long *)(lVar11 + 8)) {
          uVar7 = FUN_0088fc10(lVar2,*(long *)(lVar11 + 0x10) + 0xb0);
          if ((uVar7 & 1) != 0) {
            lVar11 = *(long *)(lVar11 + 0x10);
            if (lVar11 != 0) {
              if ((*(char *)(lVar2 + 0x1d) == '\x04') || (*(char *)(lVar2 + 0x1d) == '\x02')) {
                puVar4 = (uint *)(lVar2 + (ulong)*(uint *)(lVar2 + 0x24));
                lVar11 = FUN_00fa5b78(lVar11,(long)puVar4 + (ulong)*puVar4);
              }
              else {
                lVar11 = FUN_00fa5b78(lVar11,0);
              }
              if (lVar11 != 0) {
                uVar6 = *(ushort *)(param_1 + 0x38);
                if (uVar6 < *(ushort *)(param_1 + 0x3a)) {
                  *(ushort *)(param_1 + 0x38) = uVar6 + 1;
                  plVar3 = (long *)(*(long *)(param_1 + 0x30) + (ulong)uVar6 * 0x10);
                  *plVar3 = lVar11;
                  plVar3[1] = lVar2;
                }
              }
            }
            break;
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ushort *)(lVar9 + 0xe));
  }
  return;
}


