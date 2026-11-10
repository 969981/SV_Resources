/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00369944; name: FUN_00369944
 */


void FUN_00369944(long *param_1,long *param_2)

{
  long *plVar1;
  size_t __n;
  void *__src;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  void *pvVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong *puVar22;
  long *plVar23;
  ulong uVar24;
  uint uVar25;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  
  lVar8 = *param_2;
  if (lVar8 == 0) {
    uVar21 = (ulong)*(byte *)(param_2 + 1);
    lVar8 = (long)param_2 + 9;
  }
  else {
    if (*(int *)(lVar8 + 8) == 1) {
      uVar6 = *(uint *)(lVar8 + 0x60);
      goto LAB_003699c0;
    }
    if (*(int *)(lVar8 + 8) == 0) {
      lVar8 = *param_2;
      lVar9 = param_2[3];
      lVar17 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = lVar8;
      param_1[3] = lVar9;
      param_1[2] = lVar17;
      return;
    }
    uVar21 = param_2[1];
    lVar8 = param_2[2];
  }
  uVar6 = FUN_0038cbd0(lVar8,uVar21,*(undefined4 *)PTR_DAT_047cc650);
LAB_003699c0:
  puVar5 = PTR_DAT_047cc628;
  uVar19 = 0;
  uVar25 = uVar6;
  do {
    lVar8 = (ulong)(uVar25 % 0x1b0) * 8;
    if ((*(uint *)(&DAT_047efa5c + lVar8) == uVar6) && (*(uint *)(&DAT_047efa60 + lVar8) < 0x6c)) {
      lVar17 = *(long *)puVar5;
      plVar23 = (long *)(lVar17 + (ulong)*(uint *)(&DAT_047efa60 + lVar8) * 0x20);
      if ((*plVar23 == *param_2) || (iVar7 = FUN_00368130(param_2,plVar23), iVar7 == 0)) {
        if (lVar17 != 0) {
          lVar8 = *plVar23;
          lVar9 = plVar23[3];
          lVar17 = plVar23[2];
          param_1[1] = plVar23[1];
          *param_1 = lVar8;
          param_1[3] = lVar9;
          param_1[2] = lVar17;
          return;
        }
        goto LAB_00369a68;
      }
    }
    uVar19 = uVar19 + 1;
    uVar25 = uVar25 + 1;
    if (DAT_047f07e4 < uVar19) {
LAB_00369a68:
      uVar24 = (ulong)(uVar6 & 0x1f);
      FUN_0038db40(&DAT_047f07e8 + uVar24 * 0x38);
      puVar22 = &DAT_047f0818 + uVar24 * 7;
      uVar10 = *puVar22;
      uVar21 = 0;
      if (uVar10 != 0) {
        uVar21 = (uVar6 >> 5) / uVar10;
      }
      lVar8 = (ulong)(uVar6 >> 5) - uVar21 * uVar10;
      plVar23 = &DAT_047f0808 + uVar24 * 7;
      puVar20 = *(undefined8 **)(*plVar23 + lVar8 * 8);
      do {
        if (puVar20 == (undefined8 *)0x0) {
LAB_00369b38:
          lVar17 = *param_2;
          pvVar18 = (void *)param_2[2];
          __n = param_2[1] & 0xff;
          if (lVar17 != 0) {
            __n = param_2[1];
          }
          puVar20 = (undefined8 *)FUN_0038c780(__n + 0x70);
          lVar9 = *plVar23;
          uVar14 = *(undefined8 *)(lVar9 + lVar8 * 8);
          puVar13 = puVar20 + 0xb;
          *puVar13 = 1;
          *(undefined4 *)(puVar20 + 1) = 1;
          *puVar20 = puVar13;
          puVar11 = puVar20 + 5;
          *puVar11 = puVar13;
          puVar5 = PTR_FUN_047ccef8;
          puVar20[2] = puVar11;
          puVar20[3] = puVar5;
          puVar20[4] = puVar20;
          *(undefined4 *)(puVar20 + 6) = 3;
          puVar20[7] = puVar11;
          puVar20[8] = puVar5;
          puVar20[9] = puVar20;
          puVar20[10] = __n;
          *(uint *)(puVar20 + 0xc) = uVar6;
          puVar20[0xd] = uVar14;
          if (__n != 0) {
            __src = (void *)((long)param_2 + 9);
            if (lVar17 != 0) {
              __src = pvVar18;
            }
            memcpy(puVar20 + 0xe,__src,__n);
            lVar9 = *plVar23;
          }
          *(undefined8 **)(lVar9 + lVar8 * 8) = puVar20;
          lVar8 = (&DAT_047f0810)[uVar24 * 7];
          (&DAT_047f0810)[uVar24 * 7] = lVar8 + 1U;
          uVar21 = *puVar22 * 2;
          if (uVar21 < lVar8 + 1U) {
            lVar8 = FUN_0038c7b0(*puVar22 << 4);
            uVar10 = *puVar22;
            pvVar18 = (void *)*plVar23;
            if (uVar10 != 0) {
              uVar12 = 0;
              do {
                lVar17 = *(long *)((long)pvVar18 + uVar12 * 8);
                if (lVar17 != 0) {
                  do {
                    uVar15 = (ulong)(*(uint *)(lVar17 + 0x60) >> 5);
                    uVar4 = 0;
                    if (uVar21 != 0) {
                      uVar4 = uVar15 / uVar21;
                    }
                    lVar16 = *(long *)(lVar17 + 0x68);
                    lVar9 = (uVar15 - uVar4 * uVar21) * 8;
                    *(undefined8 *)(lVar17 + 0x68) = *(undefined8 *)(lVar8 + lVar9);
                    *(long *)(lVar8 + lVar9) = lVar17;
                    lVar17 = lVar16;
                  } while (lVar16 != 0);
                  pvVar18 = (void *)*plVar23;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 != uVar10);
            }
            free(pvVar18);
            *plVar23 = lVar8;
            *puVar22 = uVar21;
          }
LAB_00369c68:
          FUN_0038db60(&DAT_047f07e8 + uVar24 * 0x38);
          lVar8 = puVar20[10];
          *param_1 = (long)puVar20;
          param_1[1] = lVar8;
          param_1[2] = (long)(puVar20 + 0xe);
          return;
        }
        if (*(uint *)(puVar20 + 0xc) == uVar6) {
          local_70 = puVar20 + 0xe;
          uStack_78 = puVar20[10];
          local_80 = puVar20;
          if ((puVar20 == (undefined8 *)*param_2) ||
             (iVar7 = FUN_00368130(param_2,&local_80), iVar7 == 0)) {
            plVar1 = puVar20 + 0xb;
            lVar17 = *plVar1;
            while (lVar17 != 0) {
              lVar9 = *plVar1;
              if (lVar9 == lVar17) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar17 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                lVar17 = lVar9;
                if (cVar2 == '\0') {
                  if (puVar20 != (undefined8 *)0x0) goto LAB_00369c68;
                  goto LAB_00369b38;
                }
              }
              else {
                ClearExclusiveLocal();
                lVar17 = lVar9;
              }
            }
          }
        }
        puVar20 = (undefined8 *)puVar20[0xd];
      } while( true );
    }
  } while( true );
}


