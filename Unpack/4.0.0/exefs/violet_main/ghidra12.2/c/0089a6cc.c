/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089a6cc; name: FUN_0089a6cc
 */


void FUN_0089a6cc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  if (*(short *)(param_2 + 0x46) == 0) {
    *(undefined2 *)(param_2 + 0x46) = 1;
    lVar6 = 0;
    if (*(long *)(param_2 + 0x28) != 0) {
      lVar6 = param_3 + *(long *)(param_2 + 0x28);
    }
    lVar3 = 0;
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar3 = param_3 + *(long *)(param_2 + 0x30);
    }
    lVar10 = 0;
    if (*(long *)(param_2 + 0x38) != 0) {
      lVar10 = param_3 + *(long *)(param_2 + 0x38);
    }
    *(long *)(param_2 + 0x38) = lVar10;
    *(long *)(param_2 + 0x28) = lVar6;
    *(long *)(param_2 + 0x30) = lVar3;
    if (*(short *)(param_2 + 0x42) != 0) {
      uVar2 = 0;
      while( true ) {
        lVar3 = lVar3 + uVar2 * 0x48;
        plVar4 = (long *)(lVar3 + 0x38);
        lVar6 = 0;
        if (*plVar4 != 0) {
          lVar6 = param_3 + *plVar4;
        }
        *plVar4 = lVar6;
        puVar5 = (ushort *)(lVar3 + 0x44);
        if (*puVar5 != 0) {
          lVar3 = 0;
          if (*(long *)(lVar6 + 0x20) != 0) {
            lVar3 = param_3 + *(long *)(lVar6 + 0x20);
          }
          *(long *)(lVar6 + 0x20) = lVar3;
          if (1 < *puVar5) {
            lVar6 = 0x50;
            uVar7 = 1;
            do {
              uVar7 = uVar7 + 1;
              lVar10 = *(long *)(*plVar4 + lVar6);
              lVar3 = 0;
              if (lVar10 != 0) {
                lVar3 = param_3 + lVar10;
              }
              *(long *)(*plVar4 + lVar6) = lVar3;
              lVar6 = lVar6 + 0x30;
            } while (uVar7 < *puVar5);
          }
        }
        uVar2 = uVar2 + 1;
        if (*(ushort *)(param_2 + 0x42) <= uVar2) break;
        lVar3 = *(long *)(param_2 + 0x30);
      }
    }
    if (*(short *)(param_2 + 0x40) != 0) {
      uVar2 = 0;
      do {
        lVar6 = *(long *)(param_2 + 0x28) + uVar2 * 0x80;
        plVar4 = (long *)(lVar6 + 0x68);
        lVar3 = 0;
        if (*plVar4 != 0) {
          lVar3 = param_3 + *plVar4;
        }
        *plVar4 = lVar3;
        puVar5 = (ushort *)(lVar6 + 0x78);
        if (*puVar5 != 0) {
          lVar10 = 0;
          if (*(long *)(lVar3 + 0x20) != 0) {
            lVar10 = param_3 + *(long *)(lVar3 + 0x20);
          }
          lVar8 = 0;
          if (*(long *)(lVar3 + 0x28) != 0) {
            lVar8 = param_3 + *(long *)(lVar3 + 0x28);
          }
          *(long *)(lVar3 + 0x20) = lVar10;
          *(long *)(lVar3 + 0x28) = lVar8;
          if (1 < *puVar5) {
            lVar3 = 0;
            uVar7 = 1;
            do {
              lVar10 = *plVar4 + lVar3;
              uVar7 = uVar7 + 1;
              lVar8 = 0;
              if (*(long *)(lVar10 + 0x58) != 0) {
                lVar8 = param_3 + *(long *)(lVar10 + 0x58);
              }
              *(long *)(lVar10 + 0x58) = lVar8;
              lVar8 = 0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                lVar8 = param_3 + *(long *)(lVar10 + 0x60);
              }
              *(long *)(lVar10 + 0x60) = lVar8;
              lVar3 = lVar3 + 0x38;
            } while (uVar7 < *puVar5);
          }
        }
        plVar4 = (long *)(lVar6 + 0x70);
        lVar3 = 0;
        if (*plVar4 != 0) {
          lVar3 = param_3 + *plVar4;
        }
        *plVar4 = lVar3;
        if (*(ushort *)(lVar6 + 0x7a) != 0) {
          uVar7 = 0;
          while( true ) {
            lVar8 = lVar3 + uVar7 * 0xa0;
            plVar9 = (long *)(lVar8 + 0x78);
            lVar10 = 0;
            if (*plVar9 != 0) {
              lVar10 = param_3 + *plVar9;
            }
            *plVar9 = lVar10;
            puVar5 = (ushort *)(lVar8 + 0x80);
            if (*puVar5 != 0) {
              lVar8 = 0;
              if (*(long *)(lVar10 + 0x30) != 0) {
                lVar8 = param_3 + *(long *)(lVar10 + 0x30);
              }
              *(long *)(lVar10 + 0x30) = lVar8;
              if (1 < *puVar5) {
                lVar10 = 0x70;
                uVar11 = 1;
                do {
                  uVar11 = uVar11 + 1;
                  lVar1 = *(long *)(*plVar9 + lVar10);
                  lVar8 = 0;
                  if (lVar1 != 0) {
                    lVar8 = param_3 + lVar1;
                  }
                  *(long *)(*plVar9 + lVar10) = lVar8;
                  lVar10 = lVar10 + 0x40;
                } while (uVar11 < *puVar5);
              }
            }
            lVar3 = lVar3 + uVar7 * 0xa0;
            uVar7 = uVar7 + 1;
            lVar8 = *(long *)(lVar3 + 0x90);
            lVar10 = 0;
            if (lVar8 != 0) {
              lVar10 = param_3 + lVar8;
            }
            *(long *)(lVar3 + 0x90) = lVar10;
            if (*(ushort *)(lVar6 + 0x7a) <= uVar7) break;
            lVar3 = *plVar4;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_2 + 0x40));
    }
  }
  return;
}


