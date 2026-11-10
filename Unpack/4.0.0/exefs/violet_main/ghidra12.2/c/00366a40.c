/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00366a40; name: FUN_00366a40
 */


void FUN_00366a40(long *param_1,long *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulong uVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  long *plVar17;
  long lVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  byte *pbVar25;
  long local_80;
  undefined8 uStack_78;
  byte *local_70;
  long lStack_68;
  
  puVar15 = (undefined8 *)*param_2;
  pbVar25 = (byte *)((long)param_2 + 9);
  if (puVar15 != (undefined8 *)0x0) {
    pbVar25 = (byte *)param_2[2];
  }
  uVar2 = param_2[1] & 0xff;
  if (puVar15 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
  }
  if (0 < (long)uVar2) {
    pbVar1 = pbVar25 + uVar2;
    pbVar16 = pbVar1;
    if (pbVar1 <= pbVar25 + 1) {
      pbVar16 = pbVar25 + 1;
    }
    uVar20 = (long)pbVar16 - (long)pbVar25;
    if (uVar20 < 4) {
      lVar18 = 0;
      bVar10 = false;
      pbVar16 = pbVar25;
LAB_00366bbc:
      do {
        pbVar19 = pbVar16 + 1;
        bVar13 = (1 << ((ulong)*pbVar16 & 7) & (uint)*(byte *)(param_3 + (ulong)(*pbVar16 >> 3))) ==
                 0;
        lVar23 = 3;
        if (!bVar13) {
          lVar23 = 1;
        }
        lVar18 = lVar23 + lVar18;
        bVar10 = (bool)(bVar10 | bVar13);
        pbVar16 = pbVar19;
      } while (pbVar19 < pbVar1);
    }
    else {
      uVar21 = uVar20 & 0xfffffffffffffffc;
      lVar23 = 0;
      lVar24 = 0;
      lVar22 = 0;
      lVar18 = 0;
      bVar5 = 0;
      bVar7 = 0;
      bVar8 = 0;
      bVar9 = 0;
      pbVar16 = pbVar25 + uVar21;
      pbVar19 = pbVar25 + 3;
      uVar14 = uVar21;
      do {
        bVar10 = (1 << ((ulong)pbVar19[-3] & 7) &
                 (uint)*(byte *)(param_3 + (ulong)(pbVar19[-3] >> 3))) == 0;
        lVar3 = 3;
        if (!bVar10) {
          lVar3 = 1;
        }
        bVar13 = (1 << ((ulong)pbVar19[-2] & 7) &
                 (uint)*(byte *)(param_3 + (ulong)(pbVar19[-2] >> 3))) == 0;
        lVar4 = 3;
        if (!bVar13) {
          lVar4 = 1;
        }
        bVar11 = (1 << ((ulong)pbVar19[-1] & 7) &
                 (uint)*(byte *)(param_3 + (ulong)(pbVar19[-1] >> 3))) == 0;
        lVar23 = lVar3 + lVar23;
        lVar3 = 3;
        if (!bVar11) {
          lVar3 = 1;
        }
        bVar12 = (1 << ((ulong)*pbVar19 & 7) & (uint)*(byte *)(param_3 + (ulong)(*pbVar19 >> 3))) ==
                 0;
        lVar24 = lVar4 + lVar24;
        lVar4 = 3;
        if (!bVar12) {
          lVar4 = 1;
        }
        lVar22 = lVar3 + lVar22;
        lVar18 = lVar4 + lVar18;
        bVar5 = bVar5 | bVar10;
        bVar7 = bVar7 | bVar13;
        bVar8 = bVar8 | bVar11;
        bVar9 = bVar9 | bVar12;
        uVar14 = uVar14 - 4;
        pbVar19 = pbVar19 + 4;
      } while (uVar14 != 0);
      bVar10 = (bool)(bVar9 | bVar8 | bVar7 | bVar5);
      lVar18 = lVar18 + lVar22 + lVar24 + lVar23;
      if (uVar20 != uVar21) goto LAB_00366bbc;
    }
    if (bVar10) {
      FUN_003670f0(&local_80,lVar18);
      pbVar16 = (byte *)((long)&uStack_78 + 1);
      if (local_80 != 0) {
        pbVar16 = local_70;
      }
      if (0 < (long)uVar2) {
        do {
          while (bVar5 = *pbVar25,
                (*(byte *)(param_3 + (ulong)(bVar5 >> 3)) >> (ulong)(bVar5 & 7) & 1) != 0) {
            pbVar19 = pbVar16 + 1;
            *pbVar16 = bVar5;
            pbVar25 = pbVar25 + 1;
            pbVar16 = pbVar19;
            if (pbVar1 <= pbVar25) goto LAB_00366c8c;
          }
          *pbVar16 = 0x25;
          pbVar16[1] = "0123456789ABCDEF"[*pbVar25 >> 4];
          pbVar19 = pbVar25 + 1;
          pbVar16[2] = "0123456789ABCDEF"[(ulong)*pbVar25 & 0xf];
          pbVar16 = pbVar16 + 3;
          pbVar25 = pbVar19;
        } while (pbVar19 < pbVar1);
      }
LAB_00366c8c:
      pbVar25 = (byte *)((long)&uStack_78 + 1);
      if (local_80 != 0) {
        pbVar25 = local_70;
      }
      uVar2 = uStack_78 & 0xff;
      if (local_80 != 0) {
        uVar2 = uStack_78;
      }
      if (pbVar16 != pbVar25 + uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_00366cd4;
    }
  }
  if ((puVar15 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar15, plVar17 != (long *)0x0)) {
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = *plVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  uStack_78 = param_2[1];
  local_80 = *param_2;
  lStack_68 = param_2[3];
  local_70 = (byte *)param_2[2];
LAB_00366cd4:
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = lStack_68;
  param_1[2] = (long)local_70;
  return;
}


