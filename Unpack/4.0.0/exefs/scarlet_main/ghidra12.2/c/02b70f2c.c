/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b70f2c; name: FUN_02b70f2c
 */


bool FUN_02b70f2c(long param_1,uint param_2)

{
  long *plVar1;
  short *psVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  ushort *puVar12;
  short sVar13;
  int *piVar14;
  int iVar15;
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar6 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02b70f64;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b70f64:
  uVar9 = (param_2 & 0xffff) / 200;
  param_2 = param_2 + uVar9 * -200;
  uVar7 = (ulong)(param_2 >> 3 & 0x1f);
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar14 = *(int **)(param_1 + 0x10);
    iVar15 = *piVar14;
    lVar6 = 0;
    do {
      lVar11 = lVar6 + 4;
      iVar3 = iVar15 * 0x41c64e6d + 0x6073;
      iVar15 = iVar3 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar14 + lVar6 + 8) =
           *(ushort *)((long)piVar14 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
      *(ushort *)((long)piVar14 + lVar6 + 10) =
           *(ushort *)((long)piVar14 + lVar6 + 10) ^ (ushort)((uint)iVar15 >> 0x10);
      lVar6 = lVar11;
    } while (lVar11 != 0x140);
    puVar12 = *(ushort **)(param_1 + 8);
    if (puVar12 != (ushort *)0x0) {
      iVar15 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar3 = iVar15 * 0x41c64e6d + 0x6073;
      *puVar12 = *puVar12 ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar3 * 0x41c64e6d + 0x6073;
      puVar12[1] = puVar12[1] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar15 * 0x41c64e6d + 0x6073;
      puVar12[2] = puVar12[2] ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar3 * 0x41c64e6d + 0x6073;
      puVar12[3] = puVar12[3] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar15 * 0x41c64e6d + 0x6073;
      puVar12[4] = puVar12[4] ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar3 * 0x41c64e6d + 0x6073;
      puVar12[5] = puVar12[5] ^ (ushort)((uint)iVar3 >> 0x10);
      puVar12[6] = puVar12[6] ^ (ushort)((uint)iVar15 >> 0x10);
      puVar12[7] = puVar12[7] ^ (ushort)((uint)(iVar15 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar11 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar13 = 0;
    lVar6 = 0xe;
    do {
      psVar2 = (short *)(lVar11 + lVar6);
      lVar6 = lVar6 + 8;
      sVar13 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar13;
    } while (lVar6 != 0x14e);
    if (*(short *)(lVar11 + 6) != sVar13) {
      *(ushort *)(lVar11 + 4) = *(ushort *)(lVar11 + 4) | 4;
    }
  }
  uVar9 = uVar9 & 0xff;
  if (uVar9 == 1) {
    puVar10 = *(uint **)(param_1 + 0x10);
    if (((byte)puVar10[1] >> 2 & 1) == 0) {
      if (0x67 < (param_2 & 0xff)) {
LAB_02b7131c:
        bVar5 = false;
        goto LAB_02b712c0;
      }
      puVar10 = puVar10 + (ulong)(byte)(&DAT_03d62e18)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x14
                          + 2;
    }
    else {
      if (0x67 < (param_2 & 0xff)) goto LAB_02b7131c;
      puVar10 = (uint *)&DAT_04842290;
    }
    pbVar8 = (byte *)((long)puVar10 + uVar7 + 0x43);
LAB_02b7116c:
    uVar9 = (uint)*pbVar8;
  }
  else {
    if (uVar9 == 0) {
      puVar10 = *(uint **)(param_1 + 0x10);
      if (((byte)puVar10[1] >> 2 & 1) == 0) {
        puVar10 = puVar10 + (ulong)(byte)(&DAT_03d62e1b)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] *
                            0x14 + 2;
      }
      else {
        puVar10 = (uint *)&DAT_04842380;
      }
      pbVar8 = (byte *)((long)puVar10 + uVar7 + 0x37);
      goto LAB_02b7116c;
    }
    uVar9 = 0;
  }
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      sVar13 = 0;
      lVar11 = 0xe;
      do {
        psVar2 = (short *)(lVar6 + lVar11);
        lVar11 = lVar11 + 8;
        sVar13 = *psVar2 + psVar2[-1] + psVar2[-2] + psVar2[-3] + sVar13;
      } while (lVar11 != 0x14e);
      *(short *)(lVar6 + 6) = sVar13;
      piVar14 = *(int **)(param_1 + 0x10);
      iVar15 = *piVar14;
      lVar6 = 0;
      do {
        lVar11 = lVar6 + 4;
        iVar3 = iVar15 * 0x41c64e6d + 0x6073;
        iVar15 = iVar3 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar14 + lVar6 + 8) =
             *(ushort *)((long)piVar14 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
        *(ushort *)((long)piVar14 + lVar6 + 10) =
             *(ushort *)((long)piVar14 + lVar6 + 10) ^ (ushort)((uint)iVar15 >> 0x10);
        lVar6 = lVar11;
      } while (lVar11 != 0x140);
    }
    puVar12 = *(ushort **)(param_1 + 8);
    if ((puVar12 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar15 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar3 = iVar15 * 0x41c64e6d + 0x6073;
      *puVar12 = *puVar12 ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar3 * 0x41c64e6d + 0x6073;
      puVar12[1] = puVar12[1] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar15 * 0x41c64e6d + 0x6073;
      puVar12[2] = puVar12[2] ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar3 * 0x41c64e6d + 0x6073;
      puVar12[3] = puVar12[3] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar15 * 0x41c64e6d + 0x6073;
      puVar12[4] = puVar12[4] ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar3 * 0x41c64e6d + 0x6073;
      puVar12[5] = puVar12[5] ^ (ushort)((uint)iVar3 >> 0x10);
      puVar12[6] = puVar12[6] ^ (ushort)((uint)iVar15 >> 0x10);
      puVar12[7] = puVar12[7] ^ (ushort)((uint)(iVar15 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  bVar5 = (uVar9 & 1 << (ulong)(param_2 & 7)) != 0;
LAB_02b712c0:
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return bVar5;
}


