/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348d8a8; name: FUN_0348d8a8
 */


undefined8 FUN_0348d8a8(long param_1,ulong *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  ulong uVar17;
  long *plVar19;
  long lVar18;
  undefined4 uVar20;
  undefined1 local_d;
  undefined3 uStack_c;
  undefined4 local_8;
  undefined3 uStack_4;
  
  local_8 = DAT_048afe88;
  pbVar10 = *(byte **)(param_1 + 0x20);
  if (pbVar10 != (byte *)0x0) {
    bVar15 = *pbVar10;
    uVar14 = (uint)bVar15;
    if (bVar15 < 2) {
      uVar14 = 1;
    }
    uVar12 = (ulong)uVar14;
    pbVar5 = pbVar10 + ((ulong)(bVar15 + 4) & 0x1fc);
    pbVar11 = pbVar10;
    do {
      pbVar10 = pbVar5;
      pbVar11 = pbVar11 + 1;
      if (*pbVar11 == 0) goto LAB_0348d8f8;
      uVar12 = uVar12 - 1;
      pbVar5 = pbVar10 + 4;
    } while (uVar12 != 0);
    pbVar10 = (byte *)0x0;
  }
LAB_0348d8f8:
  uVar12 = *param_2;
  pbVar11 = (byte *)&local_8;
  if (pbVar10 != (byte *)0x0) {
    pbVar11 = pbVar10;
  }
  iVar8 = *(int *)pbVar11;
  uVar14 = (uint)param_2[1];
  uVar13 = (uint)param_2[2];
  bVar15 = (byte)param_2[3];
  uVar20 = *(undefined4 *)((long)param_2 + 0x19);
  uStack_4 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x1c) >> 8);
  uVar3 = *(undefined4 *)((long)param_2 + 0x21);
  bVar16 = (byte)param_2[4];
  uStack_c = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x24) >> 8);
  if (iVar8 < 1) {
    uVar17 = param_2[5];
  }
  else {
    if (bVar16 != 0xff) {
      uVar14 = 0;
    }
    if (iVar8 == 1) {
      uVar17 = 0;
    }
    else {
      if (iVar8 != 2) {
        uVar12 = 0;
      }
      uVar13 = 0;
      uVar14 = 0;
      uVar17 = 0;
      bVar15 = 0xff;
      bVar16 = 0xff;
    }
  }
  bVar4 = bVar16 & bVar15;
  if ((((uVar17 == 0) && (bVar4 == 0xff)) && (uVar14 == 0 && uVar13 == 0)) && (uVar12 == 0)) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      return 0;
    }
    plVar19 = (long *)(param_1 + 0x40);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x58);
    if (uVar7 == 0) {
      return 0;
    }
    lVar18 = *(long *)(param_1 + 0x50);
    iVar8 = 0;
    while( true ) {
      iVar1 = iVar8 + (uVar7 >> 1);
      lVar6 = (long)iVar1;
      uVar9 = *(ulong *)(lVar18 + (long)iVar1 * 0x30 + 0x28);
      if (uVar9 == uVar12) break;
      if (uVar9 < uVar12) {
        iVar8 = iVar1 + 1;
      }
      uVar7 = uVar7 - (uVar9 < uVar12) >> 1;
      if (uVar7 == 0) {
        return 0;
      }
    }
    if (((uVar17 == 0) && (bVar4 == 0xff)) && (uVar14 == 0 && uVar13 == 0)) {
      lVar18 = lVar18 + lVar6 * 0x30;
    }
    else {
      uVar7 = *(uint *)(lVar18 + lVar6 * 0x30 + 0x20);
      if (uVar7 == 0) {
        return 0;
      }
      lVar18 = *(long *)(lVar18 + lVar6 * 0x30 + 0x18);
      iVar8 = 0;
      while( true ) {
        iVar1 = iVar8 + (uVar7 >> 1);
        lVar6 = (long)iVar1;
        uVar2 = *(uint *)(lVar18 + (long)iVar1 * 0x30 + 0x28);
        if (uVar2 == uVar14) break;
        if (uVar2 < uVar14) {
          iVar8 = iVar1 + 1;
        }
        uVar7 = uVar7 - (uVar2 < uVar14) >> 1;
        if (uVar7 == 0) {
          return 0;
        }
      }
      if (((bVar4 == 0xff) && (uVar13 == 0)) && (uVar17 == 0)) {
        lVar18 = lVar18 + lVar6 * 0x30;
      }
      else {
        uVar7 = *(uint *)(lVar18 + lVar6 * 0x30 + 0x20);
        if (uVar7 == 0) {
          return 0;
        }
        lVar18 = *(long *)(lVar18 + lVar6 * 0x30 + 0x18);
        iVar8 = 0;
        while( true ) {
          iVar1 = iVar8 + (uVar7 >> 1);
          lVar6 = (long)iVar1;
          uVar2 = *(uint *)(lVar18 + (long)iVar1 * 0x30 + 0x28);
          if (uVar2 == uVar13) break;
          if (uVar2 < uVar13) {
            iVar8 = iVar1 + 1;
          }
          uVar7 = uVar7 - (uVar2 < uVar13) >> 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        if ((bVar4 == 0xff) && (uVar17 == 0)) {
          lVar18 = lVar18 + lVar6 * 0x30;
        }
        else {
          uVar7 = *(uint *)(lVar18 + lVar6 * 0x30 + 0x20);
          if (uVar7 == 0) {
            return 0;
          }
          lVar18 = *(long *)(lVar18 + lVar6 * 0x30 + 0x18);
          iVar8 = 0;
          while( true ) {
            iVar1 = iVar8 + (uVar7 >> 1);
            lVar6 = (long)iVar1;
            bVar4 = *(byte *)(lVar18 + (long)iVar1 * 0x30 + 0x28);
            if (bVar4 == bVar15) break;
            if (bVar4 < bVar15) {
              iVar8 = iVar1 + 1;
            }
            uVar7 = uVar7 - (bVar4 < bVar15) >> 1;
            if (uVar7 == 0) {
              return 0;
            }
          }
          if ((bVar16 == 0xff) && (uVar17 == 0)) {
            lVar18 = lVar18 + lVar6 * 0x30;
          }
          else {
            uVar7 = *(uint *)(lVar18 + lVar6 * 0x30 + 0x20);
            if (uVar7 == 0) {
              return 0;
            }
            lVar18 = *(long *)(lVar18 + lVar6 * 0x30 + 0x18);
            iVar8 = 0;
            while( true ) {
              iVar1 = iVar8 + (uVar7 >> 1);
              lVar6 = (long)iVar1;
              bVar4 = *(byte *)(lVar18 + (long)iVar1 * 0x30 + 0x28);
              if (bVar4 == bVar16) break;
              if (bVar4 < bVar16) {
                iVar8 = iVar1 + 1;
              }
              uVar7 = uVar7 - (bVar4 < bVar16) >> 1;
              if (uVar7 == 0) {
                return 0;
              }
            }
            if (uVar17 != 0) {
              uVar7 = *(uint *)(lVar18 + lVar6 * 0x30 + 0x20);
              if (uVar7 == 0) {
                return 0;
              }
              lVar18 = *(long *)(lVar18 + lVar6 * 0x30 + 0x18);
              iVar8 = 0;
              while( true ) {
                iVar1 = iVar8 + (uVar7 >> 1);
                uVar9 = *(ulong *)(lVar18 + (long)iVar1 * 0x10 + 8);
                if (uVar9 == uVar17) break;
                if (uVar9 < uVar17) {
                  iVar8 = iVar1 + 1;
                }
                uVar7 = uVar7 - (uVar9 < uVar17) >> 1;
                if (uVar7 == 0) {
                  return 0;
                }
              }
              plVar19 = (long *)(lVar18 + (long)iVar1 * 0x10);
              goto LAB_0348d9c4;
            }
            lVar18 = lVar18 + lVar6 * 0x30;
          }
        }
      }
    }
    if (*(char *)(lVar18 + 0x10) == '\0') {
      return 0;
    }
    plVar19 = (long *)(lVar18 + 8);
  }
LAB_0348d9c4:
  lVar18 = *plVar19;
  if (lVar18 == 0) {
    return 0;
  }
  *param_2 = uVar12;
  *(uint *)(param_2 + 1) = uVar14;
  *(uint *)(param_2 + 2) = uVar13;
  *(byte *)(param_2 + 3) = bVar15;
  local_8._3_1_ = (undefined1)((uint)uVar20 >> 0x18);
  *(uint *)((long)param_2 + 0x1c) = CONCAT31(uStack_4,local_8._3_1_);
  *(undefined4 *)((long)param_2 + 0x19) = uVar20;
  *(byte *)(param_2 + 4) = bVar16;
  local_d = (undefined1)((uint)uVar3 >> 0x18);
  *(uint *)((long)param_2 + 0x24) = CONCAT31(uStack_c,local_d);
  *(undefined4 *)((long)param_2 + 0x21) = uVar3;
  param_2[5] = uVar17;
  if (*(long *)(lVar18 + 0x60) == 0) {
    if (*(char *)(lVar18 + 0x90) == '\0') {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined4 *)(lVar18 + 0x80);
    }
  }
  else {
    uVar20 = *(undefined4 *)(*(long *)(lVar18 + 0x60) + 0xc);
  }
  *param_3 = uVar20;
  return 1;
}


