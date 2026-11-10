/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01022038; name: FUN_01022038
 */


int FUN_01022038(long param_1,uint *param_2,void *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  ulong uVar9;
  ushort *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  bool bVar15;
  ulong uVar16;
  uint *puVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  
  memcpy((void *)(param_1 + 0x18),param_3,0x28);
  if (*param_2 == 0) {
    iVar6 = 0;
  }
  else {
    uVar16 = 0;
    iVar6 = 0;
    puVar18 = param_2 + 2;
    do {
      uVar12 = (ulong)param_2[uVar16 + 1];
      piVar1 = (int *)((long)(param_2 + uVar16 + 1) + uVar12);
      puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar8 = *puVar10;
      if ((10 < uVar8) && (uVar13 = (ulong)puVar10[5], uVar13 != 0)) {
        puVar2 = (uint *)((long)piVar1 + uVar13);
        uVar19 = (ulong)*puVar2;
        uVar9 = (ulong)*(uint *)((long)puVar2 + uVar19);
        if (*(uint *)((long)puVar2 + uVar19) == 0) {
LAB_0102221c:
          uVar7 = puVar10[2];
          if ((ulong)uVar7 != 0) {
            uVar7 = *(ushort *)((long)piVar1 + (ulong)uVar7);
          }
          iVar6 = iVar6 + (short)uVar7;
          if (((8 < uVar8) && ((ulong)puVar10[4] != 0)) &&
             (*(char *)((long)piVar1 + (ulong)puVar10[4]) != '\0')) {
            return iVar6;
          }
        }
        else {
          uVar20 = 0;
          bVar4 = false;
          puVar17 = (uint *)((long)puVar18 + uVar19 + uVar13 + uVar12);
          bVar14 = 1;
          bVar15 = false;
          do {
            uVar12 = (ulong)*puVar17;
            lVar11 = uVar12 - (long)*(int *)((long)puVar17 + uVar12);
            if ((*(ushort *)((long)puVar17 + lVar11) < 5) ||
               (uVar13 = (ulong)*(ushort *)((long)puVar17 + lVar11 + 4), uVar13 == 0)) {
              bVar3 = false;
              if (bVar4 == false) goto LAB_0102213c;
LAB_01022128:
              bVar4 = bVar3;
              bVar3 = (bool)(bVar15 & bVar3);
            }
            else {
              bVar3 = *(char *)((long)puVar17 + uVar12 + uVar13) != '\0';
              if (bVar4 != false) goto LAB_01022128;
LAB_0102213c:
              bVar5 = FUN_02e06328(param_1);
              lVar11 = uVar12 - (long)*(int *)((long)puVar17 + uVar12);
              if (*(ushort *)((long)puVar17 + lVar11) < 7) {
                bVar4 = false;
              }
              else {
                uVar13 = (ulong)*(ushort *)((long)puVar17 + lVar11 + 6);
                bVar4 = false;
                if (uVar13 != 0) {
                  bVar4 = *(char *)((long)puVar17 + uVar12 + uVar13) != '\0';
                }
              }
              bVar14 = (bVar14 | bVar15 ^ 1U) & (bVar5 ^ bVar4 ^ 1);
              bVar5 = bVar14 ^ 1;
              if (bVar3 == false && bVar5 == 0) {
                puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
                uVar8 = *puVar10;
                goto LAB_01022210;
              }
              bVar14 = bVar3 & bVar14;
              bVar4 = (bool)(bVar3 & bVar5);
              uVar9 = (ulong)*(uint *)((long)puVar2 + uVar19);
            }
            uVar20 = uVar20 + 1;
            puVar17 = puVar17 + 1;
            bVar15 = bVar3;
          } while (uVar20 < uVar9);
          puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar8 = *puVar10;
          if (bVar14 == 0) {
            if (uVar8 < 7) {
              uVar8 = 0;
            }
            else {
              uVar8 = puVar10[3];
              if ((ulong)uVar8 != 0) {
                uVar8 = *(ushort *)((long)piVar1 + (ulong)uVar8);
              }
            }
            iVar6 = iVar6 + (short)uVar8;
          }
          else {
LAB_01022210:
            if (4 < uVar8) goto LAB_0102221c;
          }
        }
      }
      uVar16 = uVar16 + 1;
      puVar18 = puVar18 + 1;
    } while (uVar16 < *param_2);
  }
  return iVar6;
}


