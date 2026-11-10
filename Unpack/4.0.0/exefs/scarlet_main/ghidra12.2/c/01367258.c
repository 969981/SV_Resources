/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01367258; name: FUN_01367258
 */


void FUN_01367258(long param_1,int *param_2,byte param_3)

{
  uint *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  
  plVar2 = (long *)(param_1 + 0x180);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar10) {
      *plVar2 = lVar11;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_01367294;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
        while (*plVar2 == 0) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar10) {
            *plVar2 = lVar11;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_01367294;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar10) {
      *plVar2 = lVar11;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_01367294:
  iVar8 = *param_2;
  uVar12 = 1;
  if ((param_3 & 1) != 0) {
    uVar12 = 2;
  }
  pbVar13 = (&PTR_s_EnableMainColor_04595300)[iVar8];
  puVar15 = &DAT_cbf29ce484222645;
  bVar7 = *pbVar13;
  while (bVar7 != 0) {
    pbVar13 = pbVar13 + 1;
    puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar7) * 0x100000001b3);
    bVar7 = *pbVar13;
  }
  lVar11 = *(long *)(param_1 + 0x3f0);
  puVar3 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x110);
  puVar5 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x118);
  puVar16 = puVar3;
  if ((puVar3 != puVar5) && ((undefined1 *)*puVar3 != puVar15)) {
    do {
      puVar16 = puVar16 + 0xc;
      if (puVar5 == puVar16) {
        puVar16 = puVar5;
        goto LAB_01367324;
      }
    } while ((undefined1 *)*puVar16 != puVar15);
  }
LAB_01367324:
  if ((puVar5 == puVar16) ||
     (iVar18 = (int)((ulong)((long)puVar16 - (long)puVar3) >> 5),
     (*(uint *)((long)puVar3 + (long)(iVar18 * -0x55555555) * 0x60 + 0x5c) &
     *(uint *)(*(long *)(lVar11 + 0x80) +
              ((ulong)*(byte *)((long)puVar3 + (long)(iVar18 * -0x55555555) * 0x60 + 0x5a) -
              (ulong)*(byte *)((long)puVar3 + (long)(iVar18 * -0x55555555) * 0x60 + 0x59)) * 4)) >>
     (ulong)(*(byte *)((long)puVar3 + (long)(iVar18 * -0x55555555) * 0x60 + 0x5b) & 0x1f) != uVar12)
     ) {
    puVar16 = puVar3;
    if ((puVar3 != puVar5) && ((undefined1 *)*puVar3 != puVar15)) {
      do {
        puVar16 = puVar16 + 0xc;
        if (puVar5 == puVar16) {
          puVar16 = puVar5;
          goto LAB_013673a4;
        }
      } while ((undefined1 *)*puVar16 != puVar15);
    }
LAB_013673a4:
    if (puVar5 != puVar16) {
      iVar18 = (int)((ulong)((long)puVar16 - (long)puVar3) >> 5) * -0x55555555;
      lVar4 = puVar3[(long)iVar18 * 0xc + 4];
      lVar6 = puVar3[(long)iVar18 * 0xc + 5];
      lVar19 = lVar4;
      if ((lVar4 != lVar6) && (lVar14 = lVar4, *(uint *)(lVar4 + 0x20) != uVar12)) {
        do {
          lVar19 = lVar14 + 0x28;
          if (lVar6 == lVar19) {
            lVar19 = lVar6;
            goto LAB_013673e4;
          }
          puVar1 = (uint *)(lVar14 + 0x48);
          lVar14 = lVar19;
        } while (*puVar1 != uVar12);
      }
LAB_013673e4:
      if (lVar6 != lVar19) {
        lVar14 = (long)iVar18;
        uVar17 = (ulong)*(byte *)((long)puVar3 + lVar14 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)puVar3 + lVar14 * 0x60 + 0x59);
        lVar6 = *(long *)(lVar11 + 0x80);
        if ((ulong)(*(long *)(lVar11 + 0x88) - lVar6 >> 2) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        *(uint *)(lVar6 + uVar17 * 4) =
             (int)((ulong)(lVar19 - lVar4) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)puVar3 + lVar14 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar6 + uVar17 * 4) &
             (*(uint *)((long)puVar3 + lVar14 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar11 = *(long *)(param_1 + 0x3f0);
      }
    }
    FUN_00d100a8(lVar11);
    FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x128) + 200),0x1f,
                 *(long *)(param_1 + 0x3f0) + 0xf0);
    *(byte *)(param_1 + (long)iVar8 * 0x70 + 0x200) = param_3 & 1;
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x188));
  return;
}


