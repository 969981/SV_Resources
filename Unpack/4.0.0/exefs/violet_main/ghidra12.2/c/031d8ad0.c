/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d8ad0; name: FUN_031d8ad0
 */


void FUN_031d8ad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 ulong *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  short sVar9;
  undefined1 uVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  ulong *puVar14;
  
  uVar5 = param_5[2];
  puVar2 = (undefined1 *)(((7 - uVar5) + *param_5 & 0xfffffffffffffff8) + uVar5);
  puVar1 = puVar2 + 0x10;
  *param_5 = (ulong)puVar1;
  if (puVar1 <= (undefined1 *)param_5[1]) {
    lVar3 = ((ulong)(puVar1 + (7 - uVar5)) & 0xfffffffffffffff8) + uVar5;
    puVar1 = (undefined1 *)(lVar3 + (long)*(int *)(param_1 + 5) * 0x10);
    *param_5 = (ulong)puVar1;
    if (puVar1 <= (undefined1 *)param_5[1]) {
      *puVar2 = (char)*(undefined4 *)(param_1 + 5);
      *(undefined8 *)(puVar2 + 8) = param_2;
      puVar2[1] = 0;
      *(undefined2 *)(puVar2 + 2) = 0;
      if (*(int *)(param_1 + 5) < 1) {
LAB_031d8d0c:
        uVar6 = param_1[2];
        *param_4 = param_1[1];
        param_4[1] = uVar6;
        param_4[2] = puVar2;
        param_4[3] = param_3;
        param_4[5] = *param_1;
        return;
      }
      sVar9 = 0;
      lVar7 = 0;
LAB_031d8b50:
      puVar8 = *(ulong **)(param_1[4] + lVar7 * 8);
      puVar14 = puVar8;
      while( true ) {
        uVar13 = (uint)*puVar14;
        if ((uVar13 >> 0x14 & 1) != 0) break;
        if (((*puVar14 & 1) != 0) || (puVar14 = (ulong *)puVar14[1], puVar14 == (ulong *)0x0))
        goto LAB_031d8bf8;
      }
      if ((puVar14 != (ulong *)0x0) &&
         (uVar13 = uVar13 & 0xfffff,
         (ushort)(byte)puVar2[1] <
         (*(ushort *)
           ((long)puVar14 +
           (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                        POPCOUNT((char)(uVar13 >> 0x10))) * 8 + 0x12) & 0xfff))) {
        puVar14 = puVar8;
        goto LAB_031d8bac;
      }
      goto LAB_031d8bf8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032270d0(0xdeadf11d,"../..\\Common/Base/Reflect/Util/hkLinearBuffer.inl",0x2f,
               "hkLinearBuffer exhausted");
  while (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0) {
LAB_031d8bac:
    uVar13 = (uint)*puVar14;
    if ((uVar13 >> 0x14 & 1) != 0) {
      uVar10 = 0;
      if (puVar14 != (ulong *)0x0) {
        uVar13 = uVar13 & 0xfffff;
        uVar10 = (undefined1)
                 *(undefined2 *)
                  ((long)puVar14 +
                  (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                               POPCOUNT((char)(uVar13 >> 0x10))) * 8 + 0x12);
      }
      goto LAB_031d8bf4;
    }
    if ((*puVar14 & 1) != 0) {
      uVar10 = 0;
      goto LAB_031d8bf4;
    }
  }
  uVar10 = 0;
LAB_031d8bf4:
  puVar2[1] = uVar10;
LAB_031d8bf8:
  puVar14 = puVar8;
  do {
    uVar13 = (uint)*puVar14;
    if ((uVar13 >> 0x14 & 1) != 0) {
      uVar11 = 0;
      if (puVar14 != (ulong *)0x0) {
        uVar13 = uVar13 & 0xfffff;
        uVar11 = *(ushort *)
                  ((long)puVar14 +
                  (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                               POPCOUNT((char)(uVar13 >> 0x10))) * 8 + 0x12) & 0xfff;
      }
      goto LAB_031d8c48;
    }
    if ((*puVar14 & 1) != 0) {
      uVar11 = 0;
      goto LAB_031d8c48;
    }
    puVar14 = (ulong *)puVar14[1];
  } while (puVar14 != (ulong *)0x0);
  uVar11 = 0;
LAB_031d8c48:
  puVar14 = puVar8;
  do {
    uVar13 = (uint)*puVar14;
    if ((uVar13 >> 0x14 & 1) != 0) {
      uVar12 = 0;
      if (puVar14 != (ulong *)0x0) {
        uVar13 = uVar13 & 0xfffff;
        uVar12 = *(ushort *)
                  ((long)puVar14 +
                  (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                               POPCOUNT((char)(uVar13 >> 0x10))) * 8 + 0x12) & 0xfff;
      }
      goto LAB_031d8c9c;
    }
    if ((*puVar14 & 1) != 0) {
      uVar12 = 0;
      goto LAB_031d8c9c;
    }
    puVar14 = (ulong *)puVar14[1];
  } while (puVar14 != (ulong *)0x0);
  uVar12 = 0;
LAB_031d8c9c:
  uVar11 = (sVar9 + uVar11) - 1 & -uVar12;
  plVar4 = (long *)(lVar3 + lVar7 * 0x10);
  *(ushort *)(plVar4 + 1) = uVar11;
  *plVar4 = (long)puVar8;
  do {
    uVar13 = (uint)*puVar8;
    if ((uVar13 >> 0x14 & 1) != 0) {
      sVar9 = 0;
      if (puVar8 != (ulong *)0x0) {
        uVar13 = uVar13 & 0xfffff;
        sVar9 = (short)puVar8[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                           POPCOUNT((char)(uVar13 >> 0x10))) + 2];
      }
      goto LAB_031d8cf4;
    }
    if ((*puVar8 & 1) != 0) {
      sVar9 = 0;
      goto LAB_031d8cf4;
    }
    puVar8 = (ulong *)puVar8[1];
  } while (puVar8 != (ulong *)0x0);
  sVar9 = 0;
LAB_031d8cf4:
  sVar9 = sVar9 + uVar11;
  *(short *)(puVar2 + 2) = sVar9;
  lVar7 = lVar7 + 1;
  if (*(int *)(param_1 + 5) <= lVar7) goto LAB_031d8d0c;
  goto LAB_031d8b50;
}


