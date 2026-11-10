/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352d798; name: FUN_0352d798
 */


int FUN_0352d798(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  
  iVar8 = FUN_0351af38();
  puVar7 = PTR_DAT_047e2fd0;
  if (iVar8 == 1) {
    plVar12 = *(long **)(param_1 + 0x130);
    if (plVar12 != (long *)0x0) {
      if (*(uint *)(param_1 + 0x138) != 0) {
        lVar13 = (ulong)*(uint *)(param_1 + 0x138) * 0x60;
        do {
          if (plVar12[10] != 0) {
            (**(code **)(puVar7 + 0x30))(2);
          }
          if (*plVar12 != 0) {
            *(undefined4 *)(plVar12 + 1) = 0;
            (**(code **)(puVar7 + 0x30))(0);
            *plVar12 = 0;
            *(undefined4 *)((long)plVar12 + 0xc) = 0;
          }
          if (plVar12[2] != 0) {
            *(undefined4 *)(plVar12 + 3) = 0;
            (**(code **)(puVar7 + 0x30))(0);
            plVar12[2] = 0;
            *(undefined4 *)((long)plVar12 + 0x1c) = 0;
          }
          plVar12 = plVar12 + 0xc;
          lVar13 = lVar13 + -0x60;
        } while (lVar13 != 0);
        plVar12 = *(long **)(param_1 + 0x130);
      }
      *(undefined4 *)(param_1 + 0x138) = 0;
      (**(code **)(puVar7 + 0x30))(0,plVar12);
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
    uVar2 = *(uint *)*param_2;
    *param_2 = (long)((uint *)*param_2 + 1);
    if (uVar2 == 0) {
LAB_0352dd38:
      iVar8 = 1;
    }
    else {
      lVar13 = (**(code **)(puVar7 + 0x10))(0,(ulong)uVar2 * 0x60);
      *(long *)(param_1 + 0x130) = lVar13;
      if (lVar13 != 0) {
        uVar14 = 0;
        *(uint *)(param_1 + 0x13c) = uVar2;
        uVar11 = uVar2;
        do {
          uVar16 = *(uint *)(param_1 + 0x138);
          if (uVar16 < uVar11) {
LAB_0352d8ec:
            if (uVar11 <= uVar16) goto LAB_0352d924;
            uVar11 = *(uint *)(param_1 + 0x138);
            lVar13 = *(long *)(param_1 + 0x130);
            *(uint *)(param_1 + 0x138) = uVar11 + 1;
            plVar12 = (long *)(lVar13 + (ulong)uVar11 * 0x60);
            if (lVar13 != 0) {
              *(undefined8 *)(lVar13 + (ulong)uVar11 * 0x60 + 0x50) = 0;
              plVar12[2] = 0;
              plVar12[3] = 0;
              *plVar12 = 0;
              plVar12[1] = 0;
            }
          }
          else {
            iVar8 = uVar11 + (uVar11 >> 1);
            if (uVar11 == 0) {
              iVar8 = 1;
            }
            uVar11 = iVar8 + uVar11;
            lVar13 = (**(code **)(puVar7 + 0x20))
                               (0,*(undefined8 *)(param_1 + 0x130),(ulong)uVar11 * 0x60);
            if (lVar13 != 0) {
              *(long *)(param_1 + 0x130) = lVar13;
              *(uint *)(param_1 + 0x13c) = uVar11;
              goto LAB_0352d8ec;
            }
LAB_0352d924:
            plVar12 = (long *)0x0;
          }
          puVar10 = (uint *)*param_2;
          uVar11 = *puVar10;
          uVar15 = (ulong)uVar11;
          *param_2 = (long)(puVar10 + 1);
          if (uVar11 == 0) {
            uVar11 = puVar10[1];
            puVar10 = puVar10 + 2;
            *param_2 = (long)puVar10;
            if (uVar11 == 0) goto LAB_0352da90;
LAB_0352d9e0:
            lVar13 = (**(code **)(puVar7 + 0x10))(0,(ulong)uVar11 << 2);
            plVar12[2] = lVar13;
            if (lVar13 == 0) break;
            *(uint *)((long)plVar12 + 0x1c) = uVar11;
            uVar16 = *(uint *)*param_2;
            *param_2 = (long)((uint *)*param_2 + 1);
            do {
              uVar1 = *(uint *)(plVar12 + 3);
              uVar17 = *(uint *)((long)plVar12 + 0x1c);
              if (uVar1 < uVar17) {
LAB_0352da48:
                if (uVar1 < uVar17) {
                  uVar17 = *(uint *)(plVar12 + 3);
                  *(uint *)(plVar12 + 3) = uVar17 + 1;
                  if (plVar12[2] != 0) {
                    *(uint *)(plVar12[2] + (ulong)uVar17 * 4) = uVar16;
                  }
                }
              }
              else {
                iVar8 = uVar17 + (uVar17 >> 1);
                if (uVar17 == 0) {
                  iVar8 = 1;
                }
                uVar17 = iVar8 + uVar17;
                lVar13 = (**(code **)(puVar7 + 0x20))(0,plVar12[2],(ulong)uVar17 << 2);
                if (lVar13 != 0) {
                  plVar12[2] = lVar13;
                  *(uint *)((long)plVar12 + 0x1c) = uVar17;
                  goto LAB_0352da48;
                }
              }
              uVar11 = uVar11 - 1;
              uVar16 = *(uint *)*param_2;
              *param_2 = (long)((uint *)*param_2 + 1);
            } while (uVar11 != 0);
          }
          else {
            lVar13 = (**(code **)(puVar7 + 0x10))(0,uVar15 << 2);
            *plVar12 = lVar13;
            if (lVar13 == 0) break;
            *(uint *)((long)plVar12 + 0xc) = uVar11;
            uVar11 = *(uint *)*param_2;
            *param_2 = (long)((uint *)*param_2 + 1);
            do {
              uVar17 = *(uint *)(plVar12 + 1);
              uVar16 = *(uint *)((long)plVar12 + 0xc);
              if (uVar17 < uVar16) {
LAB_0352d9a0:
                if (uVar17 < uVar16) {
                  uVar16 = *(uint *)(plVar12 + 1);
                  *(uint *)(plVar12 + 1) = uVar16 + 1;
                  if (*plVar12 != 0) {
                    *(uint *)(*plVar12 + (ulong)uVar16 * 4) = uVar11;
                  }
                }
              }
              else {
                iVar8 = uVar16 + (uVar16 >> 1);
                if (uVar16 == 0) {
                  iVar8 = 1;
                }
                uVar16 = iVar8 + uVar16;
                lVar13 = (**(code **)(puVar7 + 0x20))(0,*plVar12,(ulong)uVar16 << 2);
                if (lVar13 != 0) {
                  *plVar12 = lVar13;
                  *(uint *)((long)plVar12 + 0xc) = uVar16;
                  goto LAB_0352d9a0;
                }
              }
              puVar10 = (uint *)*param_2;
              uVar16 = (int)uVar15 - 1;
              uVar15 = (ulong)uVar16;
              uVar11 = *puVar10;
              *param_2 = (long)(puVar10 + 1);
            } while (uVar16 != 0);
            puVar10 = puVar10 + 1;
            if (uVar11 != 0) goto LAB_0352d9e0;
LAB_0352da90:
            uVar16 = *puVar10;
            *param_2 = (long)(puVar10 + 1);
          }
          *(uint *)(plVar12 + 4) = uVar16;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)((long)plVar12 + 0x24) = uVar3;
          iVar8 = *(int *)*param_2;
          *param_2 = (long)((int *)*param_2 + 1);
          uVar11 = *(uint *)PTR_DAT_047e6fa0;
          auVar6 = SEXT816((long)((ulong)uVar11 * (long)iVar8)) * SEXT816(0x20c49ba5e353f7cf);
          *(int *)(plVar12 + 5) = (int)(auVar6._8_8_ >> 7) - (auVar6._12_4_ >> 0x1f);
          bVar4 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 4);
          *(byte *)(plVar12 + 6) = *(byte *)(plVar12 + 6) & 0xe0 | bVar4 & 0x1f;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)((long)plVar12 + 0x2c) = uVar3;
          bVar4 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 1);
          *(byte *)(plVar12 + 6) = *(byte *)(plVar12 + 6) & 0xdf | (bVar4 & 1) << 5;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)((long)plVar12 + 0x34) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(plVar12 + 7) = uVar3;
          iVar8 = *(int *)*param_2;
          *param_2 = (long)((int *)*param_2 + 1);
          auVar6 = SEXT816((long)((long)iVar8 * (ulong)uVar11)) * SEXT816(0x20c49ba5e353f7cf);
          *(int *)((long)plVar12 + 0x3c) = (int)(auVar6._8_8_ >> 7) - (auVar6._12_4_ >> 0x1f);
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(plVar12 + 8) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)((long)plVar12 + 0x44) = uVar3;
          bVar4 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 2);
          *(byte *)(plVar12 + 9) = *(byte *)(plVar12 + 9) & 0xf8 | bVar4 & 7;
          bVar4 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 2);
          *(byte *)(plVar12 + 9) = *(byte *)(plVar12 + 9) & 199 | (bVar4 & 7) << 3;
          bVar4 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 1);
          *(byte *)(plVar12 + 9) = *(byte *)(plVar12 + 9) & 0xbf | (bVar4 & 1) << 6;
          cVar5 = *(char *)*param_2;
          *param_2 = (long)((char *)*param_2 + 1);
          *(byte *)(plVar12 + 9) = *(byte *)(plVar12 + 9) & 0x7f | cVar5 << 7;
          cVar5 = *(char *)*param_2;
          *param_2 = (long)((char *)*param_2 + 1);
          if (cVar5 != '\0') {
            puVar9 = (undefined4 *)(**(code **)(puVar7 + 0x10))(2,0x20);
            plVar12[10] = (long)puVar9;
            if (puVar9 == (undefined4 *)0x0) {
              return 2;
            }
            uVar3 = *(undefined4 *)*param_2;
            *param_2 = (long)((undefined4 *)*param_2 + 1);
            *puVar9 = uVar3;
            uVar3 = *(undefined4 *)*param_2;
            *param_2 = (long)((undefined4 *)*param_2 + 1);
            puVar9[1] = uVar3;
            uVar3 = *(undefined4 *)*param_2;
            *param_2 = (long)((undefined4 *)*param_2 + 1);
            puVar9[2] = uVar3;
            iVar8 = *(int *)*param_2;
            *param_2 = (long)((int *)*param_2 + 1);
            uVar11 = *(uint *)PTR_DAT_047e6fa0;
            auVar6 = SEXT816((long)((ulong)uVar11 * (long)iVar8)) * SEXT816(0x20c49ba5e353f7cf);
            puVar9[3] = (int)(auVar6._8_8_ >> 7) - (auVar6._12_4_ >> 0x1f);
            uVar3 = *(undefined4 *)*param_2;
            *param_2 = (long)((undefined4 *)*param_2 + 1);
            puVar9[4] = uVar3;
            uVar3 = *(undefined4 *)*param_2;
            *param_2 = (long)((undefined4 *)*param_2 + 1);
            puVar9[5] = uVar3;
            iVar8 = *(int *)*param_2;
            *param_2 = (long)((int *)*param_2 + 1);
            auVar6 = SEXT816((long)((long)iVar8 * (ulong)uVar11)) * SEXT816(0x20c49ba5e353f7cf);
            puVar9[6] = (int)(auVar6._8_8_ >> 7) - (auVar6._12_4_ >> 0x1f);
            bVar4 = *(byte *)*param_2;
            *param_2 = (long)((byte *)*param_2 + 1);
            *(byte *)(puVar9 + 7) = *(byte *)(puVar9 + 7) & 0xfe | bVar4 & 1;
            bVar4 = *(byte *)*param_2;
            *param_2 = (long)((byte *)*param_2 + 1);
            *(byte *)(puVar9 + 7) = *(byte *)(puVar9 + 7) & 0xfd | (bVar4 & 1) << 1;
          }
          *(uint *)(plVar12 + 0xb) = uVar14;
          uVar14 = uVar14 + 1;
          if (uVar14 == uVar2) goto LAB_0352dd38;
          uVar11 = *(uint *)(param_1 + 0x13c);
        } while( true );
      }
      iVar8 = 2;
    }
  }
  return iVar8;
}


