/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f548bc; name: FUN_02f548bc
 */


void FUN_02f548bc(long param_1,long param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  ushort *puVar17;
  
  if (0 < *(int *)(param_1 + 0x358)) {
    lVar16 = 0;
    do {
      puVar17 = (ushort *)(*(long *)(param_1 + 0x350) + lVar16 * 0x20);
      puVar14 = *(uint **)(*(long *)(param_2 + 0x540) + (long)*(int *)(param_2 + 0x548) * 8 + -8);
      uVar2 = *puVar17;
      puVar13 = *(undefined8 **)(param_2 + 0x4e0);
      uVar7 = *puVar14;
      iVar12 = 4000 - (uint)uVar2;
      puVar15 = puVar14;
      if (iVar12 <= (int)(uVar7 >> 0x10)) {
        do {
          uVar7 = *(int *)(puVar13 + 0xb) - 1;
          if (*(int *)(puVar13 + 0xb) < 1) {
            lVar9 = puVar13[1];
            (**(code **)(*(long *)*puVar13 + 0x20))((long *)*puVar13,lVar9,6);
            *(undefined4 *)(puVar13 + 0xb) = 5;
            puVar8 = (undefined8 *)(lVar9 + 0x28);
          }
          else {
            *(uint *)(puVar13 + 0xb) = uVar7;
            puVar8 = (undefined8 *)(puVar13[1] + (ulong)uVar7 * 8);
          }
          puVar14 = (uint *)*puVar8;
          puVar14[4] = 0;
          puVar14[5] = 0;
          puVar14[6] = 0;
          puVar14[7] = 0;
          puVar14[0] = 0;
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar14[3] = 0;
          puVar14[1] = *(uint *)(param_2 + 0x548);
          iVar6 = *(int *)(param_2 + 0x548);
          lVar9 = (long)iVar6;
          if ((int)(*(uint *)(param_2 + 0x54c) & 0x7fffffff) <= iVar6) {
            FUN_031c25b4(param_2 + 0x540,PTR_PTR_047d1a50,lVar9 + 1);
            iVar6 = *(int *)(param_2 + 0x548);
          }
          *(uint **)(*(long *)(param_2 + 0x540) + (long)iVar6 * 8) = puVar14;
          *(int *)(param_2 + 0x548) = (int)(lVar9 + 1);
          *(uint **)(puVar15 + 2) = puVar14;
          uVar7 = *puVar14;
          puVar15 = puVar14;
        } while (iVar12 <= (int)(uVar7 >> 0x10));
      }
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar5) {
          *puVar14 = *puVar14 + ((uint)uVar2 << 0x10 | 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar3 = (uint)(uVar2 >> 2);
      *(int *)(param_2 + 0x538) = *(int *)(param_2 + 0x538) + 1;
      if (uVar3 != 0) {
        puVar11 = (undefined4 *)((long)puVar14 + (ulong)(uVar7 >> 0x10) + 0x20);
        uVar7 = uVar2 >> 2 & 7;
        if (6 < uVar3 - 1) {
          iVar12 = -(uVar3 & 0x3ff8);
          puVar10 = puVar11;
          do {
            *puVar10 = *(undefined4 *)puVar17;
            puVar10[1] = *(undefined4 *)(puVar17 + 2);
            puVar10[2] = *(undefined4 *)(puVar17 + 4);
            puVar10[3] = *(undefined4 *)(puVar17 + 6);
            puVar10[4] = *(undefined4 *)(puVar17 + 8);
            puVar10[5] = *(undefined4 *)(puVar17 + 10);
            puVar10[6] = *(undefined4 *)(puVar17 + 0xc);
            puVar1 = puVar17 + 0xe;
            puVar17 = puVar17 + 0x10;
            puVar11 = puVar10 + 8;
            iVar12 = iVar12 + 8;
            puVar10[7] = *(undefined4 *)puVar1;
            puVar10 = puVar11;
          } while (iVar12 != 0);
        }
        if ((uVar2 >> 2 & 7) != 0) {
          do {
            uVar7 = uVar7 - 1;
            *puVar11 = *(undefined4 *)puVar17;
            puVar11 = puVar11 + 1;
            puVar17 = puVar17 + 2;
          } while (uVar7 != 0);
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_1 + 0x358));
  }
  *(undefined4 *)(param_1 + 0x358) = 0;
  return;
}


