/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f4ade8; name: FUN_02f4ade8
 */


void FUN_02f4ade8(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  
  puVar6 = PTR_PTR_047d1a50;
  iVar8 = *(int *)(param_2 + 0x48);
  if (0 < iVar8) {
    lVar14 = *(long *)(param_1 + 8);
    lVar10 = *(long *)(lVar14 + 0x38);
    lVar12 = lVar10 + (param_3 & 0xffffff) * 0xc0;
    puVar1 = (undefined8 *)(lVar12 + 0xb0);
    if ((*(byte *)(lVar12 + 0x55) & 0x60) == 0) {
      lVar12 = 0;
      while( true ) {
        lVar16 = *(long *)(param_2 + 0x40);
        if ((*(byte *)(lVar10 + ((ulong)*(uint *)(lVar16 + lVar12 * 0x90 + 0x30) & 0xffffff) * 0xc0
                      + 0x55) & 0x60) != 0) {
          puVar17 = *(uint **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8
                              );
          puVar15 = *(undefined8 **)(param_1 + 0x4e0);
          uVar7 = *puVar17;
          puVar18 = puVar17;
          if (0xf2 < uVar7 >> 0x14) {
            do {
              uVar7 = *(int *)(puVar15 + 0xb) - 1;
              if (*(int *)(puVar15 + 0xb) < 1) {
                lVar10 = puVar15[1];
                (**(code **)(*(long *)*puVar15 + 0x20))((long *)*puVar15,lVar10,6);
                *(undefined4 *)(puVar15 + 0xb) = 5;
                puVar9 = (undefined8 *)(lVar10 + 0x28);
              }
              else {
                *(uint *)(puVar15 + 0xb) = uVar7;
                puVar9 = (undefined8 *)(puVar15[1] + (ulong)uVar7 * 8);
              }
              puVar17 = (uint *)*puVar9;
              puVar17[4] = 0;
              puVar17[5] = 0;
              puVar17[6] = 0;
              puVar17[7] = 0;
              puVar17[0] = 0;
              puVar17[1] = 0;
              puVar17[2] = 0;
              puVar17[3] = 0;
              puVar17[1] = *(uint *)(param_1 + 0x548);
              iVar8 = *(int *)(param_1 + 0x548);
              lVar10 = (long)iVar8;
              if ((int)(*(uint *)(param_1 + 0x54c) & 0x7fffffff) <= iVar8) {
                FUN_031c25b4(param_1 + 0x540,puVar6,lVar10 + 1);
                iVar8 = *(int *)(param_1 + 0x548);
              }
              *(uint **)(*(long *)(param_1 + 0x540) + (long)iVar8 * 8) = puVar17;
              *(int *)(param_1 + 0x548) = (int)(lVar10 + 1);
              *(uint **)(puVar18 + 2) = puVar17;
              uVar7 = *puVar17;
              puVar18 = puVar17;
            } while (0xf2 < uVar7 >> 0x14);
          }
          uVar7 = uVar7 >> 0x10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar17,0x10);
            if (bVar5) {
              *puVar17 = *puVar17 + 0x700001;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          lVar16 = lVar16 + lVar12 * 0x90;
          *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x538) + 1;
          uVar2 = *(undefined4 *)(lVar16 + 0x10);
          uVar3 = *(undefined4 *)(lVar16 + 0x38);
          uVar11 = *puVar1;
          *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x30) = *(undefined8 *)(lVar16 + 0x28);
          *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x20) = 0x504000070;
          *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x28) = uVar11;
          *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x48) = *(undefined8 *)(lVar16 + 0x68);
          *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x40) = *(undefined8 *)(lVar16 + 0x60);
          *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x58) = *(undefined8 *)(lVar16 + 0x58);
          *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x50) = *(undefined8 *)(lVar16 + 0x50);
          *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x68) = *(undefined8 *)(lVar16 + 0x88);
          *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x60) = *(undefined8 *)(lVar16 + 0x80);
          *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x78) = *(undefined8 *)(lVar16 + 0x78);
          uVar11 = *(undefined8 *)(lVar16 + 0x70);
          *(undefined4 *)((long)puVar17 + (ulong)uVar7 + 0x80) = uVar2;
          *(undefined4 *)((long)puVar17 + (ulong)uVar7 + 0x84) = uVar3;
          *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x70) = uVar11;
          iVar8 = *(int *)(param_2 + 0x48);
        }
        lVar12 = lVar12 + 1;
        if (iVar8 <= lVar12) break;
        lVar10 = *(long *)(lVar14 + 0x38);
      }
    }
    else {
      lVar10 = 0;
      do {
        lVar12 = *(long *)(param_2 + 0x40);
        puVar17 = *(uint **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8);
        puVar15 = *(undefined8 **)(param_1 + 0x4e0);
        uVar7 = *puVar17;
        puVar18 = puVar17;
        if (0xf2 < uVar7 >> 0x14) {
          do {
            uVar7 = *(int *)(puVar15 + 0xb) - 1;
            if (*(int *)(puVar15 + 0xb) < 1) {
              lVar14 = puVar15[1];
              (**(code **)(*(long *)*puVar15 + 0x20))((long *)*puVar15,lVar14,6);
              puVar9 = (undefined8 *)(lVar14 + 0x28);
              *(undefined4 *)(puVar15 + 0xb) = 5;
            }
            else {
              *(uint *)(puVar15 + 0xb) = uVar7;
              puVar9 = (undefined8 *)(puVar15[1] + (ulong)uVar7 * 8);
            }
            puVar17 = (uint *)*puVar9;
            puVar17[4] = 0;
            puVar17[5] = 0;
            puVar17[6] = 0;
            puVar17[7] = 0;
            puVar17[0] = 0;
            puVar17[1] = 0;
            puVar17[2] = 0;
            puVar17[3] = 0;
            puVar17[1] = *(uint *)(param_1 + 0x548);
            iVar8 = *(int *)(param_1 + 0x548);
            lVar14 = (long)iVar8;
            if ((int)(*(uint *)(param_1 + 0x54c) & 0x7fffffff) <= iVar8) {
              FUN_031c25b4(param_1 + 0x540,puVar6,lVar14 + 1);
              iVar8 = *(int *)(param_1 + 0x548);
            }
            *(uint **)(*(long *)(param_1 + 0x540) + (long)iVar8 * 8) = puVar17;
            *(int *)(param_1 + 0x548) = (int)(lVar14 + 1);
            *(uint **)(puVar18 + 2) = puVar17;
            uVar7 = *puVar17;
            puVar18 = puVar17;
          } while (0xf2 < uVar7 >> 0x14);
        }
        uVar7 = uVar7 >> 0x10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar17,0x10);
          if (bVar5) {
            *puVar17 = *puVar17 + 0x700001;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar12 = lVar12 + lVar10 * 0x90;
        lVar10 = lVar10 + 1;
        *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x538) + 1;
        uVar11 = *puVar1;
        uVar13 = *(undefined8 *)(lVar12 + 0x28);
        uVar2 = *(undefined4 *)(lVar12 + 0x10);
        uVar3 = *(undefined4 *)(lVar12 + 0x38);
        *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x20) = 0x504000070;
        *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x28) = uVar11;
        *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x30) = uVar13;
        *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x48) = *(undefined8 *)(lVar12 + 0x68);
        *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x40) = *(undefined8 *)(lVar12 + 0x60);
        *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x58) = *(undefined8 *)(lVar12 + 0x58);
        *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x50) = *(undefined8 *)(lVar12 + 0x50);
        *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x68) = *(undefined8 *)(lVar12 + 0x88);
        *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x60) = *(undefined8 *)(lVar12 + 0x80);
        *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x78) = *(undefined8 *)(lVar12 + 0x78);
        uVar11 = *(undefined8 *)(lVar12 + 0x70);
        *(undefined4 *)((long)puVar17 + (ulong)uVar7 + 0x80) = uVar2;
        *(undefined4 *)((long)puVar17 + (ulong)uVar7 + 0x84) = uVar3;
        *(undefined8 *)((long)puVar17 + (ulong)uVar7 + 0x70) = uVar11;
      } while (lVar10 < *(int *)(param_2 + 0x48));
    }
  }
  return;
}


