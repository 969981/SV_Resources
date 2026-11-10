/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035054a0; name: FUN_035054a0
 */


void FUN_035054a0(long param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  undefined *puVar8;
  bool bVar9;
  ushort uVar10;
  int iVar11;
  bool bVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  undefined1 auStack_68 [8];
  
  if (*(long *)(PTR_DAT_047e6ce8 + 0x58) != 0) {
    nn::os::LockMutex((MutexType *)PTR_DAT_047e7460);
  }
  uVar10 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar10 = FUN_034ad214(*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x70));
  }
  uVar13 = (uint)*(byte *)(param_1 + 0x194);
  if ((uVar10 != 0) == (*(short *)(param_1 + 400) == 0)) {
    uVar13 = uVar13 | 2;
    *(char *)(param_1 + 0x194) = (char)uVar13;
  }
  *(ushort *)(param_1 + 400) = uVar10;
  if (((uVar13 >> 1 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x114) = 0x42ca0000;
    uVar10 = *(ushort *)(param_1 + 400);
  }
  uVar6 = *(ushort *)(param_1 + 0x192);
  lVar16 = param_1 + 0x98;
  uVar21 = 0xff;
  bVar9 = (*(uint *)(param_1 + 0x158) & 0xf00) == 0x300;
  uVar19 = 0;
  uVar13 = 0;
  bVar12 = false;
  plVar18 = (long *)(param_1 + 0x160);
  plVar20 = plVar18;
  do {
    cVar1 = (char)uVar21;
    if (bVar12) {
joined_r0x03505858:
      if (((uint)uVar19 & 0xff) < 4) {
        if ((~(uint)uVar21 & 0xff) == 0) {
          bVar9 = (*(uint *)(param_1 + 0x158) & 0xf00) == 0x300;
          lVar15 = 0;
          plVar20 = plVar18;
        }
        else {
          lVar22 = param_1 + (long)cVar1 * 0x30;
          lVar15 = (long)cVar1 + 1;
          bVar9 = *(char *)(lVar22 + 0xbd) != '\0';
          plVar20 = (long *)(lVar22 + 0xa8);
        }
        *(char *)(param_1 + lVar15 + 0x170) = cVar1;
        uVar14 = uVar19 & 0xff;
        do {
          *(char *)(param_1 + uVar14 + 0x171) = (char)uVar14;
          uVar14 = uVar14 + 1;
          FUN_03501938(lVar16);
          *(undefined1 *)(lVar16 + 0x28) = 0;
          lVar16 = lVar16 + 0x30;
        } while (uVar14 != 4);
        if ((int)plVar20[1] != 0) {
          lVar16 = *plVar20;
          do {
            FUN_0350247c(param_1,uVar21,uVar19 & 0xffffffff,bVar9,lVar16);
            lVar16 = lVar16 + 0x30;
          } while (lVar16 != *plVar20 + (ulong)*(uint *)(plVar20 + 1) * 0x30);
        }
      }
      break;
    }
    pcVar17 = (char *)(param_1 + uVar19 * 0x30 + 0xbf);
    cVar3 = *pcVar17;
    if ((param_2 >> (ulong)(uVar13 & 0x1f) & 1) == 0) {
      if (cVar3 == '\0') {
        if ((short)(uVar6 ^ uVar10) < 1) {
          lVar15 = param_1 + uVar19 * 0x30;
          uVar7 = *(ushort *)(lVar15 + 0xc4);
          if ((short)(uVar7 ^ *(ushort *)(lVar15 + 0xc2)) < 1) {
            bVar12 = false;
            goto LAB_03505620;
          }
        }
        else {
          uVar7 = *(ushort *)(param_1 + uVar19 * 0x30 + 0xc4);
        }
        pcVar2 = (char *)(param_1 + cVar1 + 0x171);
        cVar3 = *(char *)(param_1 + cVar1 + 0x171);
        if ((uVar7 == 0) && (*(short *)(param_1 + 400) == 0)) {
          if ((int)uVar13 < (int)cVar3) {
            *pcVar2 = cVar1;
          }
          if (*(char *)(param_1 + uVar19 * 0x30 + 0xbc) == '\0') goto joined_r0x03505858;
        }
        else {
          if ((int)cVar3 == uVar13) {
            *pcVar2 = cVar1;
          }
          *(char *)(uVar19 + param_1 + 0x171) = (char)uVar19;
        }
        bVar12 = true;
        goto LAB_03505620;
      }
      bVar12 = false;
    }
    else {
      if (cVar3 == '\0') goto joined_r0x03505858;
      lVar15 = param_1 + uVar19 * 0x30 + 0x98;
      FUN_03501938(lVar15);
      if ((int)plVar20[1] != 0) {
        lVar22 = *plVar20;
        do {
          iVar11 = FUN_03501ad4(lVar15,lVar22,auStack_68,bVar9,uVar13,param_1,0);
          if (iVar11 != 1) break;
          lVar22 = lVar22 + 0x30;
        } while (lVar22 != *plVar20 + (ulong)*(uint *)(plVar20 + 1) * 0x30);
        if ((iVar11 != 1) && (FUN_03501938(lVar15), iVar11 == 4)) goto joined_r0x03505858;
      }
      bVar12 = false;
LAB_03505620:
      if (((*pcVar17 == '\0') && (*(short *)(param_1 + uVar19 * 0x30 + 0xc4) == 0)) &&
         (*(short *)(param_1 + 400) == 0)) {
        lVar15 = param_1 + uVar19 * 0x30;
        plVar20 = (long *)(lVar15 + 0xa8);
        bVar9 = *(char *)(lVar15 + 0xbd) != '\0';
        uVar21 = uVar19 & 0xffffffff;
      }
    }
    uVar19 = uVar19 + 1;
    lVar16 = lVar16 + 0x30;
    uVar13 = (uint)uVar19;
  } while (uVar19 != 4);
  *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) & 0xfc | 1;
  puVar8 = PTR_DAT_047e6ce8;
  bVar4 = *(byte *)(param_1 + 0x88);
  bVar5 = *(byte *)(param_1 + 0x89);
  if (*(short *)(param_1 + 400) == 0) {
    if ((*(char *)(param_1 + 0x14f) == '\0') && (*(short *)(param_1 + 0x154) == 0)) {
      lVar16 = 3;
    }
    else if ((*(char *)(param_1 + 0x11f) == '\0') && (*(short *)(param_1 + 0x124) == 0)) {
      lVar16 = 2;
    }
    else if ((*(char *)(param_1 + 0xef) == '\0') && (*(short *)(param_1 + 0xf4) == 0)) {
      lVar16 = 1;
    }
    else {
      if ((*(char *)(param_1 + 0xbf) != '\0') || (*(short *)(param_1 + 0xc4) != 0))
      goto LAB_03505888;
      lVar16 = 0;
    }
    plVar18 = (long *)(param_1 + lVar16 * 0x30 + 0xa8);
  }
LAB_03505888:
  if ((int)plVar18[1] != 0) {
    lVar16 = *plVar18;
    do {
      *(uint *)(lVar16 + 0x20) = (byte)(bVar5 | bVar4 >> 2) & 0x1f;
      *(undefined4 *)(lVar16 + 0x24) = *(undefined4 *)(lVar16 + 8);
      lVar16 = lVar16 + 0x30;
    } while (lVar16 != *plVar18 + (ulong)*(uint *)(plVar18 + 1) * 0x30);
  }
  if (*(long *)(puVar8 + 0x58) == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e7460);
  return;
}


