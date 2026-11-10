/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030879d4; name: FUN_030879d4
 */


void FUN_030879d4(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined *local_b8;
  undefined4 local_88 [2];
  uint local_80 [2];
  undefined4 *local_78;
  
  puVar9 = PTR_PTR_047d1a50;
  lVar14 = *(long *)(param_2 + 0x38) + (long)*(int *)(*(long *)(param_1 + 0x20) + 0x60) * 0x100;
  uVar22 = *(uint *)(lVar14 + 0xd8);
  uVar21 = (ulong)uVar22;
  if ((int)uVar22 < 1) {
    uVar22 = 0;
    puVar10 = (undefined4 *)0x0;
    uVar21 = 0x80000000;
  }
  else {
    puVar19 = *(undefined4 **)(lVar14 + 0xd0);
    puVar10 = (undefined4 *)
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar21 << 4);
    uVar13 = 0;
    puVar15 = puVar10;
    do {
      *puVar15 = *puVar19;
      lVar17 = *(long *)(puVar19 + 2);
      *(long *)(puVar15 + 2) = lVar17;
      puVar15 = puVar15 + 4;
      puVar19 = puVar19 + 4;
      if ((lVar17 != 0) && (*(long *)(lVar17 + 8) != 0)) {
        plVar12 = (long *)(lVar17 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = *plVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar22);
  }
  if (*(int *)(*(long *)(lVar14 + 0xe0) + 4) == -2) {
    local_b8 = &DAT_03d7702c;
  }
  else {
    local_b8 = (undefined *)
               (**(code **)(*(long *)puVar9 + 0x18))(puVar9,(long)*(int *)(lVar14 + 0xe8) * 8 + 8);
    memcpy(local_b8,*(void **)(lVar14 + 0xe0),(long)*(int *)(lVar14 + 0xe8) * 8 + 8);
  }
  uVar13 = uVar22 - 1;
  if (0 < (int)uVar22) {
    do {
      lVar17 = *(long *)((long)puVar10 + ((long)((ulong)uVar13 << 0x20) >> 0x1c) + 8);
      lVar14 = *(long *)(param_1 + 0x20);
      if (*(int *)(lVar17 + 0x18) == *(int *)(lVar14 + 0x5c)) {
        if (0 < (int)*(uint *)(param_2 + 0x40)) {
          iVar20 = *(int *)(lVar14 + 0x60);
          lVar16 = 0;
          lVar14 = *(long *)(param_2 + 0x38);
          plVar12 = (long *)(lVar14 + 0x10);
          do {
            if ((*(int *)((long)plVar12 + 0xc) == *(int *)(lVar17 + 0x1c)) && (*plVar12 != 0)) {
              if ((int)lVar16 != 1) {
                iVar18 = -(int)lVar16;
                goto LAB_03087c00;
              }
              break;
            }
            lVar16 = lVar16 + -1;
            plVar12 = plVar12 + 0x20;
          } while (-lVar16 != (ulong)*(uint *)(param_2 + 0x40));
        }
      }
      else if ((*(int *)(lVar17 + 0x1c) == *(int *)(lVar14 + 0x5c)) &&
              (0 < (int)*(uint *)(param_2 + 0x40))) {
        iVar18 = *(int *)(lVar14 + 0x60);
        lVar16 = 0;
        lVar14 = *(long *)(param_2 + 0x38);
        plVar12 = (long *)(lVar14 + 0x10);
        do {
          if ((*(int *)((long)plVar12 + 0xc) == *(int *)(lVar17 + 0x18)) && (*plVar12 != 0)) {
            if ((int)lVar16 != 1) {
              iVar20 = -(int)lVar16;
LAB_03087c00:
              lVar16 = *(long *)(lVar14 + (long)iVar20 * 0x100 + 0x10);
              if (lVar16 == 0) {
                lVar16 = 0;
              }
              else if (*(char *)(lVar16 + 0x30) == '\x01') {
                lVar16 = *(long *)(lVar16 + 0x20);
              }
              else {
                lVar16 = FUN_00e0e904();
                lVar14 = *(long *)(param_2 + 0x38);
              }
              lVar14 = *(long *)(lVar14 + (long)iVar18 * 0x100 + 0x10);
              if (lVar14 == 0) {
                lVar14 = 0;
              }
              else if (*(char *)(lVar14 + 0x30) == '\x01') {
                lVar14 = *(long *)(lVar14 + 0x20);
              }
              else {
                lVar14 = FUN_00e0e904();
              }
              iVar3 = *(int *)(lVar17 + 0x38);
              if (iVar3 != 0) {
                lVar17 = *(long *)(lVar17 + 0x30);
                puVar15 = (undefined4 *)(lVar17 + 0xc);
                do {
                  uVar2 = puVar15[-3];
                  uVar4 = puVar15[-2];
                  puVar7 = (undefined8 *)(*(long *)(lVar16 + 0x38) + (long)(int)uVar2 * 0x10);
                  uVar24 = *puVar7;
                  puVar8 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)(int)uVar4 * 0x10);
                  uVar27 = *puVar8;
                  fVar23 = (float)uVar24 - (float)uVar27;
                  fVar25 = (float)((ulong)uVar24 >> 0x20) - (float)((ulong)uVar27 >> 0x20);
                  fVar26 = (float)puVar7[1] - (float)puVar8[1];
                  local_78 = (undefined4 *)0x0;
                  fVar25 = SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar26 * fVar26);
                  fVar23 = fVar25;
                  if (0.0 <= (float)((uint)*(ushort *)(puVar15 + 1) << 0x10)) {
                    fVar23 = (float)((uint)*(ushort *)(puVar15 + 1) << 0x10);
                  }
                  local_80[0] = puVar15[-3];
                  if (0.0 <= (float)((uint)*(ushort *)((long)puVar15 + 6) << 0x10)) {
                    fVar25 = (float)((uint)*(ushort *)((long)puVar15 + 6) << 0x10);
                  }
                  puVar11 = (undefined2 *)FUN_03060294(lVar16,local_80,&local_78,0);
                  *(uint *)(puVar11 + 2) = uVar4 | iVar18 << 0x16;
                  puVar11[1] = 0x40;
                  *puVar11 = (short)((uint)(fVar23 * 1.0039062) >> 0x10);
                  if (local_78 != (undefined4 *)0x0) {
                    *local_78 = puVar15[-1];
                  }
                  local_78 = (undefined4 *)0x0;
                  local_88[0] = puVar15[-2];
                  puVar11 = (undefined2 *)FUN_03060294(lVar14,local_88,&local_78,0);
                  *puVar11 = (short)((uint)(fVar25 * 1.0039062) >> 0x10);
                  *(uint *)(puVar11 + 2) = uVar2 | iVar20 << 0x16;
                  puVar11[1] = 0x40;
                  if (local_78 != (undefined4 *)0x0) {
                    *local_78 = *puVar15;
                  }
                  puVar19 = puVar15 + 2;
                  puVar15 = puVar15 + 5;
                } while (puVar19 != (undefined4 *)(lVar17 + (long)iVar3 * 0x14));
              }
            }
            break;
          }
          lVar16 = lVar16 + -1;
          plVar12 = plVar12 + 0x20;
        } while (-lVar16 != (ulong)*(uint *)(param_2 + 0x40));
      }
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  puVar9 = PTR_PTR_047d1a50;
  if ((local_b8 != (undefined *)0x0) && (*(int *)(local_b8 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_b8,0);
  }
  if (uVar22 != 0) {
    puVar15 = puVar10 + (long)(int)uVar22 * 4;
    do {
      plVar12 = *(long **)(puVar15 + -2);
      puVar15 = puVar15 + -4;
      if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
        plVar1 = plVar12 + 2;
        do {
          lVar14 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))();
        }
      }
    } while (puVar15 != puVar10);
  }
  if ((-1 < (int)uVar21) && (puVar10 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar9 + 0x20))(puVar9,puVar10,uVar21 << 4);
  }
  return;
}


