/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a54f8; name: FUN_008a54f8
 */


void FUN_008a54f8(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0xb8) + 0x68);
  pbVar7 = *(byte **)(param_2 + 200);
  if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
    lVar8 = 0x230;
  }
  else {
    lVar8 = (ulong)**(uint **)(param_1 + 0x38) + 0x230;
  }
  uVar6 = -lVar5;
  uVar10 = lVar5 + -1 + lVar8 & uVar6;
  if ((*pbVar7 & 1) == 0) {
    lVar8 = *(long *)(pbVar7 + 0x40);
    *(ulong *)(pbVar7 + 0x40) = lVar8 + uVar10;
  }
  else {
    plVar9 = *(long **)(pbVar7 + 0x40);
    do {
      lVar8 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar8 + uVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(int *)(param_1 + 0x30) = (int)lVar8;
  if ((*(uint *)(param_1 + 0x10) >> 0x10 & 1) == 0) {
    pbVar7 = *(byte **)(param_2 + 200);
    if ((*(uint *)(param_1 + 0x10) >> 0x11 & 1) == 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar10 = lVar5 + 0x8f;
        bVar2 = *pbVar7;
      }
      else {
        uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0x38) + 4) + 0x8f + lVar5;
        bVar2 = *pbVar7;
      }
      uVar10 = uVar10 & uVar6;
      if ((bVar2 & 1) != 0) {
        plVar9 = *(long **)(pbVar7 + 0x40);
        do {
          lVar8 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar8 + uVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_008a562c;
      }
    }
    else {
      uVar10 = lVar5 + 0x21fU & uVar6;
      if ((*pbVar7 & 1) != 0) {
        plVar9 = *(long **)(pbVar7 + 0x40);
        do {
          lVar8 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar8 + uVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_008a562c;
      }
    }
    lVar8 = *(long *)(pbVar7 + 0x40);
    *(ulong *)(pbVar7 + 0x40) = lVar8 + uVar10;
  }
  else {
    pbVar7 = *(byte **)(param_2 + 200);
    uVar10 = lVar5 + 0xdfU & uVar6;
    if ((*pbVar7 & 1) == 0) {
      lVar8 = *(long *)(pbVar7 + 0x40);
      *(ulong *)(pbVar7 + 0x40) = lVar8 + uVar10;
    }
    else {
      plVar9 = *(long **)(pbVar7 + 0x40);
      do {
        lVar8 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar8 + uVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
LAB_008a562c:
  *(int *)(param_1 + 0x34) = (int)lVar8;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 8), uVar1 != 0)) {
    pbVar7 = *(byte **)(param_2 + 200);
    uVar10 = lVar5 + -1 + (ulong)uVar1 & uVar6;
    if ((*pbVar7 & 1) == 0) {
      lVar8 = *(long *)(pbVar7 + 0x40);
      *(ulong *)(pbVar7 + 0x40) = lVar8 + uVar10;
    }
    else {
      plVar9 = *(long **)(pbVar7 + 0x40);
      do {
        lVar8 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar8 + uVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(int *)(*(long *)(param_1 + 0x38) + 0xc) = (int)lVar8;
  }
  uVar1 = *(uint *)(param_1 + 0x14) & 3;
  if ((uVar1 != 0) &&
     ((lVar8 = *(long *)(param_1 + 0x18) +
               ((ulong)(*(uint *)(param_1 + 0x10) << 4) & 0x30) +
               ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14, *(char *)(lVar8 + 1) == '\a' ||
      ((uVar1 != 1 &&
       ((*(char *)(lVar8 + 0x11) == '\a' || ((uVar1 != 2 && (*(char *)(lVar8 + 0x21) == '\a'))))))))
     )) {
    pbVar7 = *(byte **)(param_2 + 200);
    uVar6 = lVar5 + 0xbfU & uVar6;
    if ((*pbVar7 & 1) == 0) {
      lVar5 = *(long *)(pbVar7 + 0x40);
      *(ulong *)(pbVar7 + 0x40) = lVar5 + uVar6;
    }
    else {
      plVar9 = *(long **)(pbVar7 + 0x40);
      do {
        lVar5 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar5 + uVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar1 = *(uint *)(param_1 + 0x10);
    *(long *)(*(long *)(param_1 + 0x18) +
             (long)(int)((uVar1 >> 4 & 0x1c) + (uVar1 >> 8 & 0xc) + (uVar1 >> 0xc & 8) +
                         (uVar1 >> 0xd & 0x60) + (uVar1 >> 0xc & 1) * 0xc +
                         (uVar1 >> 0x10 & 1) * 0x1c + (uVar1 >> 0xc & 0x10) * (uVar1 >> 6 & 7) +
                         (uVar1 >> 0x11 & 1) * 0x74 +
                         ((uVar1 & 3) * 0x10 + (uVar1 & 0x30) | uVar1 >> 6 & 8) +
                        ((uVar1 >> 0xd & 3) + (uVar1 >> 2 & 3)) * 0x14)) = lVar5;
  }
  return;
}


