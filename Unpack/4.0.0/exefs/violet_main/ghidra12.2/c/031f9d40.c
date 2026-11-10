/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f9d40; name: FUN_031f9d40
 */


void FUN_031f9d40(long param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  
  param_2 = param_2 & 0xffffffff;
LAB_031f9d70:
  iVar17 = (int)param_2;
  plVar1 = (long *)(param_1 + ((long)((ulong)(iVar17 + param_3) << 0x20) >> 0x21) * 0x20);
  lVar20 = *plVar1;
  iVar12 = (int)plVar1[1];
  uVar19 = (ulong)param_3;
  lVar3 = plVar1[2];
  lVar7 = plVar1[3];
LAB_031f9d94:
  param_2 = (ulong)(int)param_2;
  do {
    plVar1 = (long *)(param_1 + param_2 * 0x20);
    if ((*(long *)(*plVar1 + 8) == *(long *)(lVar20 + 8)) ||
       (iVar13 = FUN_031e2760(plVar1[2],plVar1[3],lVar3,lVar7), iVar13 == 0)) {
      if ((int)plVar1[1] == iVar12) {
        puVar14 = *(ulong **)(lVar20 + 8);
        if (*(ulong **)(*plVar1 + 8) == puVar14) break;
        for (; (puVar14 != (ulong *)0x0 && ((*puVar14 & 1) == 0)); puVar14 = (ulong *)puVar14[1]) {
        }
        puVar15 = puVar14;
        while( true ) {
          uVar16 = (uint)*puVar15;
          if ((uVar16 >> 0xf & 1) != 0) break;
          if (((*puVar15 & 9) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
          goto LAB_031f9e54;
        }
        uVar21 = CONCAT44(uVar16,uVar16) & 0x7fff00007fff;
        if (((undefined8 *)
             puVar15[(ulong)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8))) + 2] !=
             (undefined8 *)0x0) &&
           (puVar15 = *(ulong **)
                       puVar15[(ulong)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8)))
                               + 2], puVar15 != (ulong *)0x0)) goto LAB_031f9e58;
LAB_031f9e54:
        puVar15 = puVar14;
LAB_031f9e58:
        if (*(ulong **)(*plVar1 + 8) != puVar15) break;
      }
      else if (iVar12 <= (int)plVar1[1]) break;
    }
    else if (-1 < iVar13) break;
    param_2 = param_2 + 1;
  } while( true );
  uVar19 = (ulong)(int)uVar19;
  do {
    plVar2 = (long *)(param_1 + uVar19 * 0x20);
    if ((*(long *)(lVar20 + 8) == *(long *)(*plVar2 + 8)) ||
       (iVar13 = FUN_031e2760(lVar3,lVar7,plVar2[2],plVar2[3]), iVar13 == 0)) {
      if (iVar12 == (int)plVar2[1]) {
        puVar14 = *(ulong **)(*plVar2 + 8);
        if (*(ulong **)(lVar20 + 8) == puVar14) break;
        for (; (puVar14 != (ulong *)0x0 && ((*puVar14 & 1) == 0)); puVar14 = (ulong *)puVar14[1]) {
        }
        puVar15 = puVar14;
        while( true ) {
          uVar16 = (uint)*puVar15;
          if ((uVar16 >> 0xf & 1) != 0) break;
          if (((*puVar15 & 9) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
          goto LAB_031f9f28;
        }
        uVar21 = CONCAT44(uVar16,uVar16) & 0x7fff00007fff;
        if (((undefined8 *)
             puVar15[(ulong)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8))) + 2] !=
             (undefined8 *)0x0) &&
           (puVar15 = *(ulong **)
                       puVar15[(ulong)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8)))
                               + 2], puVar15 != (ulong *)0x0)) goto LAB_031f9f2c;
LAB_031f9f28:
        puVar15 = puVar14;
LAB_031f9f2c:
        if (*(ulong **)(lVar20 + 8) != puVar15) break;
      }
      else if ((int)plVar2[1] <= iVar12) break;
    }
    else if (-1 < iVar13) break;
    uVar19 = uVar19 - 1;
  } while( true );
  iVar13 = (int)param_2;
  iVar18 = (int)uVar19;
  if (iVar13 <= iVar18) {
    if (iVar18 != iVar13) {
      lVar4 = *plVar2;
      lVar8 = plVar2[1];
      lVar5 = plVar2[2];
      lVar9 = plVar2[3];
      lVar6 = *plVar1;
      lVar10 = plVar1[1];
      lVar11 = plVar1[3];
      plVar2[2] = plVar1[2];
      plVar2[3] = lVar11;
      *plVar2 = lVar6;
      plVar2[1] = lVar10;
      plVar1[2] = lVar5;
      plVar1[3] = lVar9;
      *plVar1 = lVar4;
      plVar1[1] = lVar8;
    }
    uVar19 = (ulong)(iVar18 - 1);
    param_2 = (ulong)(iVar13 + 1);
  }
  if ((int)uVar19 < (int)param_2) goto code_r0x031f9f88;
  goto LAB_031f9d94;
code_r0x031f9f88:
  if (iVar17 < (int)uVar19) {
    FUN_031f9d40(param_1,iVar17,uVar19 & 0xffffffff);
  }
  if ((int)param_3 <= (int)param_2) {
    return;
  }
  goto LAB_031f9d70;
}


