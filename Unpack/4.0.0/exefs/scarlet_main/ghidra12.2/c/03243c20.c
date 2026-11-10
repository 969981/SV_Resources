/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03243c20; name: FUN_03243c20
 */


undefined8 FUN_03243c20(long *param_1,ulong *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  uint uVar9;
  ulong *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *local_80 [2];
  ulong local_70;
  ulong *local_68;
  
  if (*param_2 != 0) {
    uVar7 = 1;
    uVar11 = 0;
    do {
      uVar16 = uVar7;
      **(undefined8 **)(param_3 + uVar11 * 8) = 0;
      uVar7 = (ulong)((int)uVar16 + 1);
      uVar11 = uVar16;
    } while (uVar16 < *param_2);
  }
  puVar5 = PTR_DAT_047e6058;
  lVar13 = *param_1;
  uVar12 = 0;
  lVar14 = lVar13 + -1;
  if (-1 < lVar14) {
    do {
      puVar15 = *(ulong **)(param_1[1] + lVar14 * 8 + 8);
      puVar10 = puVar15;
      while( true ) {
        FUN_031dbdbc(local_80,puVar10,puVar5);
        puVar8 = local_80[0];
        if (local_80[0] != (ulong *)0x0) break;
        if ((local_70 & 1) != 0) {
          plVar6 = (long *)(local_70 & 0xfffffffffffffffe);
          plVar1 = plVar6 + 1;
          do {
            lVar4 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)lVar4 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
            (**(code **)(*plVar6 + 8))();
          }
        }
        puVar10 = (ulong *)puVar10[1];
        if (puVar10 == (ulong *)0x0) goto LAB_03243e70;
      }
      if ((local_70 & 1) != 0) {
        plVar6 = (long *)(local_70 & 0xfffffffffffffffe);
        plVar1 = plVar6 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      if ((byte)*puVar8 == 0) goto LAB_03243e70;
      uVar7 = *param_2;
      uVar12 = uVar12 + 1;
      if (uVar7 != 0) {
        uVar11 = 0;
        do {
          puVar10 = (ulong *)param_2[uVar11 + 1];
          if (puVar15 == puVar10) {
LAB_03243e50:
            **(long **)(param_3 + uVar11 * 8) = param_1[lVar14 + 2];
            param_1[lVar14 + 2] = 0;
            break;
          }
          local_80[0] = puVar15;
          while( true ) {
            uVar9 = (uint)*local_80[0];
            if ((uVar9 >> 0xd & 1) != 0) break;
            if (((*local_80[0] & 1) != 0) ||
               (local_80[0] = (ulong *)local_80[0][1], local_80[0] == (ulong *)0x0))
            goto LAB_03243da8;
          }
          if (local_80[0] != (ulong *)0x0) {
            uVar16 = CONCAT44(uVar9,uVar9) & 0x1fff00001fff;
            local_80[0] = local_80[0] +
                          (ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8))) + 2;
            goto LAB_03243db0;
          }
LAB_03243da8:
          local_80[0] = (ulong *)0x0;
LAB_03243db0:
          local_68 = puVar10;
          while( true ) {
            uVar9 = (uint)*local_68;
            if ((uVar9 >> 0xd & 1) != 0) break;
            if (((*local_68 & 1) != 0) ||
               (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0)) goto LAB_03243e10;
          }
          if (local_68 != (ulong *)0x0) {
            uVar16 = CONCAT44(uVar9,uVar9) & 0x1fff00001fff;
            local_68 = local_68 +
                       (ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8))) + 2;
            if (local_80[0] == (ulong *)0x0) goto joined_r0x03243e14;
            uVar7 = FUN_031dd354(local_80,&local_68);
            if ((uVar7 & 1) != 0) goto LAB_03243e50;
            uVar7 = *param_2;
            goto LAB_03243e40;
          }
LAB_03243e10:
          local_68 = (ulong *)0x0;
joined_r0x03243e14:
          for (; (puVar10 != (ulong *)0x0 && ((*puVar10 & 1) == 0)); puVar10 = (ulong *)puVar10[1])
          {
          }
          if (puVar15 != (ulong *)0x0) {
            puVar8 = puVar15;
            do {
              if (puVar8 == puVar10) goto LAB_03243e50;
              puVar8 = (ulong *)puVar8[1];
            } while (puVar8 != (ulong *)0x0);
          }
LAB_03243e40:
          uVar11 = (ulong)((int)uVar11 + 1);
        } while (uVar11 < uVar7);
      }
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
    uVar12 = (uint)lVar13;
LAB_03243e70:
    lVar13 = *param_1;
  }
  *param_1 = lVar13 - (ulong)uVar12;
  return 0;
}


