/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298ddc0; name: FUN_0298ddc0
 */


void FUN_0298ddc0(long param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  ushort *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined2 *puVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
    uVar6 = 0;
  }
  else {
    uVar6 = ((ushort *)((long)param_2 - (long)*param_2))[7];
    if ((ulong)uVar6 != 0) {
      uVar6 = *(ushort *)((long)param_2 + (ulong)uVar6);
    }
  }
  *(ushort *)(param_1 + 0xb8) = uVar6;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    uVar4 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    uVar4 = 0;
    if (uVar7 != 0) {
      uVar4 = *(undefined1 *)((long)param_2 + uVar7);
    }
  }
  *(undefined1 *)(param_1 + 0xba) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    uVar4 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    uVar4 = 0;
    if (uVar7 != 0) {
      uVar4 = *(undefined1 *)((long)param_2 + uVar7);
    }
  }
  *(undefined1 *)(param_1 + 0xbb) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
    uVar4 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
    uVar4 = 0;
    if (uVar7 != 0) {
      uVar4 = *(undefined1 *)((long)param_2 + uVar7);
    }
  }
  *(undefined1 *)(param_1 + 0xbc) = uVar4;
  puVar10 = (ushort *)((long)param_2 - (long)*param_2);
  uVar6 = *puVar10;
  if (10 < uVar6) {
    uVar7 = (ulong)puVar10[5];
    lVar8 = -(long)*param_2;
    if (uVar7 != 0) {
      puVar9 = (uint *)((long)param_2 + uVar7);
      piVar1 = (int *)((long)puVar9 + (ulong)*puVar9);
      if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 != 0)) {
        puVar9 = (uint *)((long)piVar1 + uVar7);
        uVar17 = *puVar9;
        *(undefined1 *)(param_1 + 8) = *(undefined1 *)((long)puVar9 + (ulong)uVar17 + 4);
        *(undefined1 *)(param_1 + 9) = *(undefined1 *)((long)puVar9 + (ulong)uVar17 + 5);
        *(undefined1 *)(param_1 + 10) = *(undefined1 *)((long)puVar9 + (ulong)uVar17 + 6);
        *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((long)puVar9 + (ulong)uVar17 + 7);
        *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)((long)puVar9 + (ulong)uVar17 + 8);
        *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((long)puVar9 + (ulong)uVar17 + 9);
        lVar8 = -(long)*param_2;
        uVar6 = *(ushort *)((long)param_2 - (long)*param_2);
      }
    }
    if ((0xc < uVar6) && (uVar7 = (ulong)*(ushort *)((long)param_2 + lVar8 + 0xc), uVar7 != 0)) {
      lVar19 = 0;
      piVar1 = (int *)((long)param_2 + *(uint *)((long)param_2 + uVar7) + uVar7);
      lVar8 = (long)param_2 + uVar7 + *(uint *)((long)param_2 + uVar7) + 8;
      do {
        if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
           (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 != 0)) {
          uVar11 = (ulong)*(uint *)((long)piVar1 + uVar7);
          puVar9 = (uint *)((long)((long)piVar1 + uVar7) + lVar19 * 4 + uVar11 + 4);
          uVar12 = (ulong)*puVar9;
          piVar2 = (int *)((long)puVar9 + uVar12);
          if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
            uVar17 = 0;
          }
          else {
            uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar17 = (uint)*(byte *)((long)piVar2 + uVar13);
            }
          }
          *(uint *)(param_1 + lVar19 * 0x1c + 0x10) = uVar17;
          if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
            uVar4 = 0;
          }
          else {
            uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = *(undefined1 *)((long)piVar2 + uVar13);
            }
          }
          *(undefined1 *)(param_1 + lVar19 * 0x1c + 0x14) = uVar4;
          if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
            uVar4 = 0;
          }
          else {
            uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = *(undefined1 *)((long)piVar2 + uVar13);
            }
          }
          *(undefined1 *)(param_1 + lVar19 * 0x1c + 0x15) = uVar4;
          if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) {
            uVar4 = 0;
          }
          else {
            uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5];
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = *(undefined1 *)((long)piVar2 + uVar13);
            }
          }
          *(undefined1 *)(param_1 + lVar19 * 0x1c + 0x16) = uVar4;
          if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) {
            uVar4 = 0;
          }
          else {
            uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = *(undefined1 *)((long)piVar2 + uVar13);
            }
          }
          *(undefined1 *)(param_1 + lVar19 * 0x1c + 0x17) = uVar4;
          if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xf) {
            uVar4 = 0;
          }
          else {
            uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7];
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = *(undefined1 *)((long)piVar2 + uVar13);
            }
          }
          *(undefined1 *)(param_1 + lVar19 * 0x1c + 0x18) = uVar4;
          if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x15) {
            bVar3 = false;
          }
          else {
            uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[10];
            bVar3 = false;
            if (uVar13 != 0) {
              bVar3 = *(char *)((long)piVar2 + uVar13) != '\0';
            }
          }
          *(bool *)(param_1 + lVar19 * 0x1c + 0x25) = bVar3;
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x17) ||
             (uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xb], uVar13 == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = *(char *)((long)piVar2 + uVar13) != '\0';
          }
          lVar14 = param_1 + lVar19 * 0x1c;
          puVar15 = (undefined2 *)(lVar14 + 0x28);
          *puVar15 = 0;
          *(bool *)(lVar14 + 0x26) = bVar3;
          lVar14 = -(long)*piVar2;
          puVar10 = (ushort *)((long)piVar2 - (long)*piVar2);
          uVar6 = *puVar10;
          if (uVar6 < 0x19) {
LAB_0298e160:
            if (uVar6 < 0x11) goto LAB_0298e290;
          }
          else {
            uVar13 = (ulong)puVar10[0xc];
            if ((uVar13 != 0) &&
               (uVar18 = (ulong)*(uint *)((long)piVar2 + uVar13),
               *(int *)((long)((long)piVar2 + uVar13) + uVar18) != 0)) {
              uVar16 = 0;
              uVar17 = 0;
              do {
                uVar17 = uVar17 | 1 << (ulong)(*(byte *)(lVar8 + uVar7 + uVar12 + uVar11 +
                                                         uVar13 + uVar18 + uVar16) & 0x1f);
                *puVar15 = (short)uVar17;
                lVar14 = -(long)*piVar2;
                puVar10 = (ushort *)((long)piVar2 - (long)*piVar2);
                uVar6 = *puVar10;
                if (uVar6 < 0x19) goto LAB_0298e160;
                uVar13 = (ulong)puVar10[0xc];
                uVar18 = (ulong)*(uint *)((long)piVar2 + uVar13);
                uVar16 = uVar16 + 1;
              } while (uVar16 < *(uint *)((long)((long)piVar2 + uVar13) + uVar18));
            }
          }
          uVar7 = (ulong)*(ushort *)((long)piVar2 + lVar14 + 0x10);
          if (uVar7 != 0) {
            puVar9 = (uint *)((long)piVar2 + uVar7);
            piVar2 = (int *)((long)puVar9 + (ulong)*puVar9);
            lVar14 = param_1 + lVar19 * 0x1c + 0x1a;
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
               (uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar7 == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined2 *)((long)piVar2 + uVar7);
            }
            FUN_0181cac8(lVar14,0,uVar5);
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
               (uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar7 == 0)) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined1 *)((long)piVar2 + uVar7);
            }
            FUN_0181cac8(lVar14,1,uVar4);
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
               (uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar7 == 0)) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined1 *)((long)piVar2 + uVar7);
            }
            FUN_0181cac8(lVar14,2,uVar4);
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) ||
               (uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar7 == 0)) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined1 *)((long)piVar2 + uVar7);
            }
            FUN_0181cac8(lVar14,3,uVar4);
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) ||
               (uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar7 == 0)) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined1 *)((long)piVar2 + uVar7);
            }
            FUN_0181cac8(lVar14,4,uVar4);
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xf) ||
               (uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7], uVar7 == 0)) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined1 *)((long)piVar2 + uVar7);
            }
            FUN_0181cac8(lVar14,5,uVar4);
          }
        }
LAB_0298e290:
        lVar19 = lVar19 + 1;
        lVar8 = lVar8 + 4;
      } while (lVar19 != 6);
    }
  }
  return;
}


