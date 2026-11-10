/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031dbdbc; name: FUN_031dbdbc
 */


void FUN_031dbdbc(long *param_1,undefined8 *param_2,ulong *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  ulong *puVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  
  if (((((uint)*param_2 >> 5 & 1) != 0) &&
      (plVar4 = (long *)param_2[(ulong)(byte)POPCOUNT((byte)*param_2 & 0x1f) + 2],
      plVar4 != (long *)0x0)) && (*plVar4 != 0)) {
    plVar5 = plVar4 + 1;
    do {
      puVar8 = (ulong *)plVar5[1];
      if (puVar8 == param_3) {
LAB_031dbf54:
        *param_1 = *plVar5;
        param_1[1] = (long)param_3;
        goto joined_r0x031dbf5c;
      }
      puVar9 = puVar8;
      do {
        uVar10 = (uint)*puVar9;
        if ((uVar10 >> 0xd & 1) != 0) {
          puVar12 = (ulong *)0x0;
          if (puVar9 != (ulong *)0x0) {
            uVar10 = uVar10 & 0x1fff;
            puVar12 = puVar9 + (ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)))
                               + 2;
          }
          goto LAB_031dbe58;
        }
        if ((*puVar9 & 1) != 0) {
          puVar12 = (ulong *)0x0;
          goto LAB_031dbe58;
        }
        puVar9 = (ulong *)puVar9[1];
      } while (puVar9 != (ulong *)0x0);
      puVar12 = (ulong *)0x0;
LAB_031dbe58:
      puVar9 = param_3;
LAB_031dbe5c:
      uVar10 = (uint)*puVar9;
      if ((uVar10 >> 0xd & 1) == 0) goto code_r0x031dbe64;
      if ((puVar9 != (ulong *)0x0) && (puVar12 != (ulong *)0x0)) {
        uVar10 = uVar10 & 0x1fff;
        while( true ) {
          DataMemoryBarrier(2,1);
          uVar11 = (uint)puVar9[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))
                                             ) + 2];
          if (((DAT_04884450 & 1) == 0) || ((((uint)*puVar12 ^ uVar11) & 3) == 0)) break;
          DataMemoryBarrier(2,2);
          Yield();
        }
        iVar7 = (int)(*puVar12 >> 0x11);
        if (((int)(puVar9[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2]
                  >> 0x11) <= iVar7) && (iVar7 <= (int)(uVar11 >> 2 & 0x7fff))) {
          param_3 = (ulong *)plVar5[1];
          goto LAB_031dbf54;
        }
        goto LAB_031dbf10;
      }
LAB_031dbed4:
      if (param_3 == (ulong *)0x0) {
        puVar9 = (ulong *)0x0;
      }
      else {
        puVar9 = param_3;
        do {
          if ((*puVar9 & 1) != 0) break;
          puVar9 = (ulong *)puVar9[1];
        } while (puVar9 != (ulong *)0x0);
      }
      if (puVar8 != (ulong *)0x0) {
        puVar12 = puVar8;
        do {
          if (puVar12 == puVar9) {
            param_3 = puVar8;
            goto LAB_031dbf54;
          }
          puVar12 = (ulong *)puVar12[1];
        } while (puVar12 != (ulong *)0x0);
      }
LAB_031dbf10:
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4 + *plVar4 * 2 + 1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
code_r0x031dbe64:
  if (((*puVar9 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
  goto LAB_031dbed4;
  goto LAB_031dbe5c;
joined_r0x031dbf5c:
  if (param_3 == (ulong *)0x0) {
    uVar6 = 0;
LAB_031dbf8c:
    param_1[2] = uVar6;
    if ((uVar6 & 1) != 0) {
      piVar1 = (int *)((uVar6 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  uVar6 = *param_3;
  if (((uint)uVar6 >> 2 & 1) != 0) {
    uVar6 = param_3[(uVar6 >> 1 & 1) + (uVar6 & 1) + 2];
    goto LAB_031dbf8c;
  }
  param_3 = (ulong *)param_3[1];
  goto joined_r0x031dbf5c;
}


