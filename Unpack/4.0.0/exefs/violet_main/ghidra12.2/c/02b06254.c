/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b06254; name: FUN_02b06254
 */


void FUN_02b06254(ushort *param_1)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  short *psVar14;
  long lVar15;
  
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    lVar4 = FUN_02b055e0();
    if (*param_1 != 0) {
      lVar5 = FUN_02b055e0();
      lVar15 = 0;
      psVar14 = (short *)(lVar5 + 0x90);
      do {
        if (*psVar14 == 0) break;
        uVar6 = FUN_0131cbf0(psVar14,param_1);
        if ((uVar6 & 1) != 0) {
          if ((uint)lVar15 < 0x31) {
            uVar7 = (uint)lVar15 + 1;
            goto LAB_02b062d8;
          }
          break;
        }
        lVar15 = lVar15 + 1;
        psVar14 = psVar14 + 0x20;
      } while (lVar15 != 0x31);
    }
    if (*(short *)(lVar4 + 0xcd0) != 0) {
      uVar7 = 1;
LAB_02b062d8:
      memmove((void *)(lVar4 + 0x90 + (ulong)(uVar7 - 1) * 0x40),
              (void *)(lVar4 + 0x90 + (ulong)uVar7 * 0x40),(ulong)(0x32 - uVar7) << 6);
      *(undefined2 *)(lVar4 + 0xcd0) = 0;
    }
    if (*(short *)(lVar4 + 0x90) == 0) {
      lVar15 = 0;
    }
    else if (*(short *)(lVar4 + 0xd0) == 0) {
      lVar15 = 1;
    }
    else if (*(short *)(lVar4 + 0x110) == 0) {
      lVar15 = 2;
    }
    else if (*(short *)(lVar4 + 0x150) == 0) {
      lVar15 = 3;
    }
    else if (*(short *)(lVar4 + 400) == 0) {
      lVar15 = 4;
    }
    else if (*(short *)(lVar4 + 0x1d0) == 0) {
      lVar15 = 5;
    }
    else if (*(short *)(lVar4 + 0x210) == 0) {
      lVar15 = 6;
    }
    else if (*(short *)(lVar4 + 0x250) == 0) {
      lVar15 = 7;
    }
    else if (*(short *)(lVar4 + 0x290) == 0) {
      lVar15 = 8;
    }
    else if (*(short *)(lVar4 + 0x2d0) == 0) {
      lVar15 = 9;
    }
    else if (*(short *)(lVar4 + 0x310) == 0) {
      lVar15 = 10;
    }
    else if (*(short *)(lVar4 + 0x350) == 0) {
      lVar15 = 0xb;
    }
    else if (*(short *)(lVar4 + 0x390) == 0) {
      lVar15 = 0xc;
    }
    else if (*(short *)(lVar4 + 0x3d0) == 0) {
      lVar15 = 0xd;
    }
    else if (*(short *)(lVar4 + 0x410) == 0) {
      lVar15 = 0xe;
    }
    else if (*(short *)(lVar4 + 0x450) == 0) {
      lVar15 = 0xf;
    }
    else if (*(short *)(lVar4 + 0x490) == 0) {
      lVar15 = 0x10;
    }
    else if (*(short *)(lVar4 + 0x4d0) == 0) {
      lVar15 = 0x11;
    }
    else if (*(short *)(lVar4 + 0x510) == 0) {
      lVar15 = 0x12;
    }
    else if (*(short *)(lVar4 + 0x550) == 0) {
      lVar15 = 0x13;
    }
    else if (*(short *)(lVar4 + 0x590) == 0) {
      lVar15 = 0x14;
    }
    else if (*(short *)(lVar4 + 0x5d0) == 0) {
      lVar15 = 0x15;
    }
    else if (*(short *)(lVar4 + 0x610) == 0) {
      lVar15 = 0x16;
    }
    else if (*(short *)(lVar4 + 0x650) == 0) {
      lVar15 = 0x17;
    }
    else if (*(short *)(lVar4 + 0x690) == 0) {
      lVar15 = 0x18;
    }
    else if (*(short *)(lVar4 + 0x6d0) == 0) {
      lVar15 = 0x19;
    }
    else if (*(short *)(lVar4 + 0x710) == 0) {
      lVar15 = 0x1a;
    }
    else if (*(short *)(lVar4 + 0x750) == 0) {
      lVar15 = 0x1b;
    }
    else if (*(short *)(lVar4 + 0x790) == 0) {
      lVar15 = 0x1c;
    }
    else if (*(short *)(lVar4 + 2000) == 0) {
      lVar15 = 0x1d;
    }
    else if (*(short *)(lVar4 + 0x810) == 0) {
      lVar15 = 0x1e;
    }
    else if (*(short *)(lVar4 + 0x850) == 0) {
      lVar15 = 0x1f;
    }
    else if (*(short *)(lVar4 + 0x890) == 0) {
      lVar15 = 0x20;
    }
    else if (*(short *)(lVar4 + 0x8d0) == 0) {
      lVar15 = 0x21;
    }
    else if (*(short *)(lVar4 + 0x910) == 0) {
      lVar15 = 0x22;
    }
    else if (*(short *)(lVar4 + 0x950) == 0) {
      lVar15 = 0x23;
    }
    else if (*(short *)(lVar4 + 0x990) == 0) {
      lVar15 = 0x24;
    }
    else if (*(short *)(lVar4 + 0x9d0) == 0) {
      lVar15 = 0x25;
    }
    else if (*(short *)(lVar4 + 0xa10) == 0) {
      lVar15 = 0x26;
    }
    else if (*(short *)(lVar4 + 0xa50) == 0) {
      lVar15 = 0x27;
    }
    else if (*(short *)(lVar4 + 0xa90) == 0) {
      lVar15 = 0x28;
    }
    else if (*(short *)(lVar4 + 0xad0) == 0) {
      lVar15 = 0x29;
    }
    else if (*(short *)(lVar4 + 0xb10) == 0) {
      lVar15 = 0x2a;
    }
    else if (*(short *)(lVar4 + 0xb50) == 0) {
      lVar15 = 0x2b;
    }
    else if (*(short *)(lVar4 + 0xb90) == 0) {
      lVar15 = 0x2c;
    }
    else if (*(short *)(lVar4 + 0xbd0) == 0) {
      lVar15 = 0x2d;
    }
    else if (*(short *)(lVar4 + 0xc10) == 0) {
      lVar15 = 0x2e;
    }
    else if (*(short *)(lVar4 + 0xc50) == 0) {
      lVar15 = 0x2f;
    }
    else {
      lVar15 = 0x30;
      if (*(short *)(lVar4 + 0xc90) != 0) {
        lVar15 = 0x31;
      }
    }
    iVar9 = 0;
    uVar7 = 0x20;
    puVar8 = (ushort *)(lVar4 + lVar15 * 0x40 + 0x90);
    do {
      while( true ) {
        uVar2 = *param_1;
        *puVar8 = uVar2;
        if (uVar2 == 0) {
          return;
        }
        if (uVar2 == 0x10) break;
        puVar8 = puVar8 + 1;
        iVar9 = iVar9 + 1;
        uVar7 = uVar7 - 1;
        param_1 = param_1 + 1;
        if (uVar7 == 0) goto LAB_02b06714;
      }
      puVar11 = param_1 + 1;
      uVar2 = *puVar11;
      uVar1 = uVar2 + 2;
      bVar3 = uVar7 < uVar1;
      uVar7 = uVar7 - uVar1;
      if (bVar3 || uVar7 == 0) {
        *puVar8 = 0;
        return;
      }
      uVar10 = uVar2 + 1;
      uVar13 = uVar10 & 7;
      puVar8[1] = uVar2;
      puVar12 = puVar8 + 1;
      if (uVar13 != 0) {
        lVar4 = 0;
        do {
          lVar15 = lVar4;
          uVar10 = uVar10 - 1;
          uVar13 = uVar13 - 1;
          *(undefined2 *)((long)puVar8 + lVar15 + 4) = *(undefined2 *)((long)param_1 + lVar15 + 4);
          lVar4 = lVar15 + 2;
        } while (uVar13 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar15 + 4);
        param_1 = (ushort *)((long)param_1 + lVar15 + 2);
        puVar11 = param_1 + 1;
        puVar12 = puVar8;
      }
      if (6 < uVar2) {
        puVar8 = puVar12;
        do {
          puVar8[1] = param_1[2];
          puVar8[2] = puVar11[2];
          puVar8[3] = puVar11[3];
          puVar8[4] = puVar11[4];
          puVar8[5] = puVar11[5];
          puVar8[6] = puVar11[6];
          param_1 = puVar11 + 7;
          puVar8[7] = *param_1;
          puVar11 = puVar11 + 8;
          uVar10 = uVar10 - 8;
          puVar8 = puVar8 + 8;
          *puVar8 = *puVar11;
        } while (uVar10 != 0);
      }
      iVar9 = uVar1 + iVar9;
      param_1 = puVar11;
    } while (uVar7 != 0);
LAB_02b06714:
    if (iVar9 != 0) {
      puVar8[-1] = 0;
    }
  }
  return;
}


