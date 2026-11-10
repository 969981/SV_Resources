/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300f0e0; name: FUN_0300f0e0
 */


bool FUN_0300f0e0(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  while (bVar1 = *(byte *)(param_1 + 0x18), bVar1 == 0x12) {
    plVar9 = (long *)(param_1 + 0x40);
    lVar5 = *plVar9;
    param_1 = 0;
    if (lVar5 != 0) {
      param_1 = lVar5 + (long)plVar9;
    }
  }
  if (bVar1 == 0xc) {
    plVar9 = (long *)(param_1 + 0x48);
    uVar4 = *(uint *)(param_1 + 0x50);
    uVar2 = 0;
    do {
      uVar10 = uVar2;
      if ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar10) {
        return false;
      }
      lVar5 = *plVar9;
      uVar2 = uVar10 + 1;
    } while ((*(byte *)((long)plVar9 + (ulong)(uVar10 & 0xffff) * 0x40 + lVar5 + 0x1e) & 1) != 0);
    if (uVar10 + 1 == 0) {
      return false;
    }
    while( true ) {
      plVar6 = (long *)((long)plVar9 + (ulong)(uVar10 & 0xffff) * 0x40 + lVar5 + 0x30);
      lVar7 = *plVar6;
      lVar8 = 0;
      if (lVar7 != 0) {
        lVar8 = lVar7 + (long)plVar6;
      }
      uVar3 = FUN_0300f0e0(lVar8);
      if ((uVar3 & 1) != 0) break;
      uVar2 = uVar10 + 1;
      do {
        uVar10 = uVar2;
        if ((int)uVar4 <= (int)uVar10) {
          return false;
        }
        uVar2 = uVar10 + 1;
      } while ((*(byte *)((long)plVar9 + (ulong)(uVar10 & 0xffff) * 0x40 + lVar5 + 0x1e) & 1) != 0);
      if (uVar10 + 1 == 0) {
        return false;
      }
    }
  }
  else {
    uVar4 = (uint)bVar1;
    if (uVar4 - 0x13 < 2) {
      lVar8 = *(long *)(param_1 + 0x40);
      lVar5 = 0;
      if (lVar8 != 0) {
        lVar5 = lVar8 + param_1 + 0x40;
      }
      uVar4 = *(uint *)(lVar5 + 0x50);
      plVar9 = (long *)(lVar5 + 0x48);
      uVar2 = 0;
      do {
        uVar10 = uVar2;
        if ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar10) {
          return false;
        }
        lVar5 = *plVar9;
        uVar2 = uVar10 + 1;
      } while ((*(byte *)((long)plVar9 + (ulong)(uVar10 & 0xffff) * 0x40 + lVar5 + 0x1e) & 1) != 0);
      if (uVar10 + 1 == 0) {
        return false;
      }
      while( true ) {
        plVar6 = (long *)((long)plVar9 + (ulong)(uVar10 & 0xffff) * 0x40 + lVar5 + 0x30);
        lVar7 = *plVar6;
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = lVar7 + (long)plVar6;
        }
        uVar3 = FUN_0300f0e0(lVar8);
        if ((uVar3 & 1) != 0) break;
        uVar2 = uVar10 + 1;
        do {
          uVar10 = uVar2;
          if ((int)uVar4 <= (int)uVar10) {
            return false;
          }
          uVar2 = uVar10 + 1;
        } while ((*(byte *)((long)plVar9 + (ulong)(uVar10 & 0xffff) * 0x40 + lVar5 + 0x1e) & 1) != 0
                );
        if (uVar10 + 1 == 0) {
          return false;
        }
      }
    }
    else {
      if (uVar4 != 0x15) {
        return uVar4 == 0xe || uVar4 - 9 < 2;
      }
      lVar5 = *(long *)(param_1 + 0x48);
      if (((lVar5 == 0) || (lVar5 + param_1 + 0x48 == 0)) ||
         (uVar3 = FUN_0300f0e0(), (uVar3 & 1) == 0)) {
        lVar5 = *(long *)(param_1 + 0x50);
        if (((lVar5 == 0) || (lVar5 + param_1 + 0x50 == 0)) ||
           (uVar3 = FUN_0300f0e0(), (uVar3 & 1) == 0)) {
          lVar5 = *(long *)(param_1 + 0x58);
          if (((lVar5 == 0) || (lVar5 + param_1 + 0x58 == 0)) ||
             (uVar3 = FUN_0300f0e0(), (uVar3 & 1) == 0)) {
            lVar5 = *(long *)(param_1 + 0x60);
            if (((lVar5 == 0) || (lVar5 + param_1 + 0x60 == 0)) ||
               (uVar3 = FUN_0300f0e0(), (uVar3 & 1) == 0)) {
              lVar5 = *(long *)(param_1 + 0x68);
              if (((lVar5 == 0) || (lVar5 + param_1 + 0x68 == 0)) ||
                 (uVar3 = FUN_0300f0e0(), (uVar3 & 1) == 0)) {
                lVar5 = *(long *)(param_1 + 0x70);
                if (((lVar5 == 0) || (lVar5 + param_1 + 0x70 == 0)) ||
                   (uVar3 = FUN_0300f0e0(), (uVar3 & 1) == 0)) {
                  lVar5 = *(long *)(param_1 + 0x78);
                  if (((lVar5 == 0) || (lVar5 + param_1 + 0x78 == 0)) ||
                     (uVar3 = FUN_0300f0e0(), (uVar3 & 1) == 0)) {
                    lVar5 = *(long *)(param_1 + 0x80);
                    if (lVar5 == 0) {
                      return false;
                    }
                    if (lVar5 + param_1 + 0x80 == 0) {
                      return false;
                    }
                    uVar3 = FUN_0300f0e0();
                    if ((uVar3 & 1) == 0) {
                      return false;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}


