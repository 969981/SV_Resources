/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b9430; name: FUN_034b9430
 */


long FUN_034b9430(long param_1,ulong *param_2,long *param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar7 = *param_2;
  if (((((uVar7 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
      (((char)param_2[3] == -1 && ((char)param_2[4] == -1)))) && (param_2[5] == 0)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(param_1 + 0x18) != 0;
    }
    lVar4 = 0;
    if (*(char *)(param_1 + 0xc) != '\0') {
      lVar4 = param_1 + 8;
    }
    return lVar4;
  }
  if ((param_3 != (long *)0x0) && (*(char *)(param_1 + 0xc) != '\0')) {
    *param_3 = param_1 + 8;
    uVar7 = *param_2;
  }
  uVar8 = *(uint *)(param_1 + 0x18);
  if (uVar8 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  iVar9 = 0;
  while( true ) {
    iVar1 = iVar9 + (uVar8 >> 1);
    lVar6 = (long)iVar1;
    uVar11 = *(ulong *)(lVar4 + (long)iVar1 * 0x28 + 0x20);
    if (uVar11 == uVar7) break;
    if (uVar11 < uVar7) {
      iVar9 = iVar1 + 1;
    }
    uVar8 = uVar8 - (uVar11 < uVar7) >> 1;
    if (uVar8 == 0) {
      return 0;
    }
  }
  uVar8 = (uint)param_2[1];
  if ((((uVar8 == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1)) &&
     (((char)param_2[4] == -1 && (param_2[5] == 0)))) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(lVar4 + lVar6 * 0x28 + 0x18) != 0;
    }
    lVar4 = lVar4 + lVar6 * 0x28;
  }
  else {
    if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + lVar6 * 0x28 + 0xc) != '\0')) {
      *param_3 = lVar4 + lVar6 * 0x28 + 8;
      uVar8 = (uint)param_2[1];
    }
    uVar10 = *(uint *)(lVar4 + lVar6 * 0x28 + 0x18);
    if (uVar10 == 0) {
      return 0;
    }
    lVar4 = *(long *)(lVar4 + lVar6 * 0x28 + 0x10);
    iVar9 = 0;
    while( true ) {
      iVar1 = iVar9 + (uVar10 >> 1);
      lVar6 = (long)iVar1;
      uVar2 = *(uint *)(lVar4 + (long)iVar1 * 0x28 + 0x20);
      if (uVar2 == uVar8) break;
      if (uVar2 < uVar8) {
        iVar9 = iVar1 + 1;
      }
      uVar10 = uVar10 - (uVar2 < uVar8) >> 1;
      if (uVar10 == 0) {
        return 0;
      }
    }
    uVar8 = (uint)param_2[2];
    if ((((uVar8 == 0) && ((char)param_2[3] == -1)) && ((char)param_2[4] == -1)) &&
       (param_2[5] == 0)) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = *(int *)(lVar4 + lVar6 * 0x28 + 0x18) != 0;
      }
      lVar4 = lVar4 + lVar6 * 0x28;
    }
    else {
      if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + lVar6 * 0x28 + 0xc) != '\0')) {
        *param_3 = lVar4 + lVar6 * 0x28 + 8;
        uVar8 = (uint)param_2[2];
      }
      uVar10 = *(uint *)(lVar4 + lVar6 * 0x28 + 0x18);
      if (uVar10 == 0) {
        return 0;
      }
      lVar4 = *(long *)(lVar4 + lVar6 * 0x28 + 0x10);
      iVar9 = 0;
      while( true ) {
        iVar1 = iVar9 + (uVar10 >> 1);
        lVar6 = (long)iVar1;
        uVar2 = *(uint *)(lVar4 + (long)iVar1 * 0x28 + 0x20);
        if (uVar2 == uVar8) break;
        if (uVar2 < uVar8) {
          iVar9 = iVar1 + 1;
        }
        uVar10 = uVar10 - (uVar2 < uVar8) >> 1;
        if (uVar10 == 0) {
          return 0;
        }
      }
      bVar5 = (byte)param_2[3];
      if (((bVar5 != 0xff) || ((char)param_2[4] != -1)) || (param_2[5] != 0)) {
        if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + lVar6 * 0x28 + 0xc) != '\0')) {
          *param_3 = lVar4 + lVar6 * 0x28 + 8;
          bVar5 = (byte)param_2[3];
        }
        uVar8 = *(uint *)(lVar4 + lVar6 * 0x28 + 0x18);
        if (uVar8 == 0) {
          return 0;
        }
        lVar4 = *(long *)(lVar4 + lVar6 * 0x28 + 0x10);
        iVar9 = 0;
        while( true ) {
          iVar1 = iVar9 + (uVar8 >> 1);
          lVar6 = (long)iVar1;
          bVar3 = *(byte *)(lVar4 + (long)iVar1 * 0x28 + 0x20);
          if (bVar3 == bVar5) break;
          if (bVar3 < bVar5) {
            iVar9 = iVar1 + 1;
          }
          uVar8 = uVar8 - (bVar3 < bVar5) >> 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        bVar5 = (byte)param_2[4];
        if ((bVar5 != 0xff) || (param_2[5] != 0)) {
          if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + lVar6 * 0x28 + 0xc) != '\0')) {
            *param_3 = lVar4 + lVar6 * 0x28 + 8;
            bVar5 = (byte)param_2[4];
          }
          uVar8 = *(uint *)(lVar4 + lVar6 * 0x28 + 0x18);
          if (uVar8 == 0) {
            return 0;
          }
          lVar4 = *(long *)(lVar4 + lVar6 * 0x28 + 0x10);
          iVar9 = 0;
          while( true ) {
            iVar1 = iVar9 + (uVar8 >> 1);
            lVar6 = (long)iVar1;
            bVar3 = *(byte *)(lVar4 + (long)iVar1 * 0x28 + 0x20);
            if (bVar3 == bVar5) break;
            if (bVar3 < bVar5) {
              iVar9 = iVar1 + 1;
            }
            uVar8 = uVar8 - (bVar3 < bVar5) >> 1;
            if (uVar8 == 0) {
              return 0;
            }
          }
          if (param_2[5] != 0) {
            if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + lVar6 * 0x28 + 0xc) != '\0')) {
              *param_3 = lVar4 + lVar6 * 0x28 + 8;
            }
            if (param_4 != (undefined1 *)0x0) {
              *param_4 = 0;
            }
            uVar8 = *(uint *)(lVar4 + lVar6 * 0x28 + 0x18);
            if (uVar8 == 0) {
              return 0;
            }
            uVar7 = param_2[5];
            lVar4 = *(long *)(lVar4 + lVar6 * 0x28 + 0x10);
            iVar9 = 0;
            do {
              iVar1 = iVar9 + (uVar8 >> 1);
              uVar11 = *(ulong *)(lVar4 + (long)iVar1 * 0x10 + 8);
              if (uVar11 == uVar7) {
                return lVar4 + (long)iVar1 * 0x10;
              }
              if (uVar11 < uVar7) {
                iVar9 = iVar1 + 1;
              }
              uVar8 = uVar8 - (uVar11 < uVar7) >> 1;
            } while (uVar8 != 0);
            return 0;
          }
        }
      }
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = *(int *)(lVar4 + lVar6 * 0x28 + 0x18) != 0;
      }
      lVar4 = lVar4 + lVar6 * 0x28;
    }
  }
  lVar6 = 0;
  if (*(char *)(lVar4 + 0xc) != '\0') {
    lVar6 = lVar4 + 8;
  }
  return lVar6;
}


