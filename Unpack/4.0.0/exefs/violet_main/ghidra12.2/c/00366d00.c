/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00366d00; name: FUN_00366d00
 */


void FUN_00366d00(long *param_1,long *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long *plVar9;
  long lVar10;
  bool bVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  long local_50;
  undefined8 uStack_48;
  byte *local_40;
  long lStack_38;
  
  puVar7 = (undefined8 *)*param_2;
  pbVar15 = (byte *)((long)param_2 + 9);
  if (puVar7 != (undefined8 *)0x0) {
    pbVar15 = (byte *)param_2[2];
  }
  uVar2 = param_2[1] & 0xff;
  if (puVar7 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
  }
  if (uVar2 != 0) {
    bVar11 = false;
    lVar10 = 0;
    pbVar1 = pbVar15 + uVar2;
    pbVar8 = pbVar15;
    do {
      pbVar12 = pbVar8 + 1;
      if (((((pbVar12 < pbVar1) && (*pbVar8 == 0x25)) &&
           ((*pbVar12 - 0x30 < 10 ||
            (uVar13 = *pbVar12 - 0x41,
            uVar13 < 0x26 && (1L << ((ulong)uVar13 & 0x3f) & 0x3f0000003fU) != 0)))) &&
          (pbVar8 + 2 < pbVar1)) &&
         ((uVar13 = (uint)pbVar8[2], uVar13 - 0x30 < 10 ||
          ((uVar13 = uVar13 - 0x41, uVar13 < 0x26 &&
           ((1L << ((ulong)uVar13 & 0x3f) & 0x3f0000003fU) != 0)))))) {
        pbVar12 = pbVar8 + 3;
        bVar11 = true;
      }
      lVar10 = lVar10 + 1;
      pbVar8 = pbVar12;
    } while (pbVar12 != pbVar1);
    if (bVar11) {
      FUN_003670f0(&local_50,lVar10);
      pbVar8 = (byte *)((long)&uStack_48 + 1);
      if (local_50 != 0) {
        pbVar8 = local_40;
      }
      if (uVar2 != 0) {
        do {
          pbVar12 = pbVar15 + 1;
          if (*pbVar15 == 0x25) {
            if (pbVar12 < pbVar1) {
              bVar3 = *pbVar12;
              uVar13 = bVar3 - 0x30;
              if (((uVar13 < 10) ||
                  (uVar14 = bVar3 - 0x41,
                  uVar14 < 0x26 && (1L << ((ulong)uVar14 & 0x3f) & 0x3f0000003fU) != 0)) &&
                 (pbVar15 + 2 < pbVar1)) {
                bVar4 = pbVar15[2];
                uVar14 = bVar4 - 0x30;
                if ((uVar14 < 10) ||
                   ((uVar6 = bVar4 - 0x41, uVar6 < 0x26 &&
                    ((1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) != 0)))) {
                  if (9 < (uVar13 & 0xff)) {
                    uVar13 = (uint)bVar3;
                    if (uVar13 - 0x41 < 6) {
                      uVar13 = uVar13 - 0x37;
                    }
                    else {
                      if (5 < uVar13 - 0x61) goto LAB_00366f8c;
                      uVar13 = uVar13 - 0x57;
                    }
                  }
                  if (9 < (uVar14 & 0xff)) {
                    uVar14 = (uint)bVar4;
                    if (uVar14 - 0x41 < 6) {
                      uVar14 = uVar14 - 0x37;
                    }
                    else {
                      if (5 < uVar14 - 0x61) goto LAB_00366f8c;
                      uVar14 = uVar14 - 0x57;
                    }
                  }
                  *pbVar8 = (byte)uVar14 | (byte)(uVar13 << 4);
                  pbVar12 = pbVar15 + 3;
                  goto LAB_00366e1c;
                }
              }
            }
            *pbVar8 = 0x25;
          }
          else {
            *pbVar8 = *pbVar15;
          }
LAB_00366e1c:
          pbVar8 = pbVar8 + 1;
          pbVar15 = pbVar12;
        } while (pbVar12 != pbVar1);
      }
      pbVar15 = (byte *)((long)&uStack_48 + 1);
      if (local_50 != 0) {
        pbVar15 = local_40;
      }
      uVar2 = uStack_48 & 0xff;
      if (local_50 != 0) {
        uVar2 = uStack_48;
      }
      if (pbVar8 != pbVar15 + uVar2) {
LAB_00366f8c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_00366f74;
    }
  }
  if ((puVar7 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar7, plVar9 != (long *)0x0)) {
    do {
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar11) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_48 = param_2[1];
  local_50 = *param_2;
  lStack_38 = param_2[3];
  local_40 = (byte *)param_2[2];
LAB_00366f74:
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = lStack_38;
  param_1[2] = (long)local_40;
  return;
}


