/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01609fe0; name: FUN_01609fe0
 */


void FUN_01609fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  long *plVar12;
  long lVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  float fVar21;
  undefined8 *puStack_70;
  undefined1 local_68;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x140) = 0;
  uVar10 = FUN_00dc5c18(param_1 + 0x30,0,param_3,0,param_2);
  if ((uVar10 & 1) != 0) {
    puVar11 = (uint *)(**(code **)(**(long **)(param_1 + 0x38) + 0x70))();
    piVar4 = (int *)((long)puVar11 + (ulong)*puVar11);
    puVar5 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    puVar11 = puVar5 + 1;
    uVar10 = (ulong)*puVar5;
    if (uVar10 != 0) {
      puVar5 = puVar11 + uVar10;
      plVar1 = (long *)(param_1 + 0x70);
      puVar2 = (undefined8 *)(param_1 + 0xa8);
      plVar3 = (long *)(param_1 + 0xa0);
      do {
        piVar4 = (int *)((long)puVar11 + (ulong)*puVar11);
        if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
           (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar10 == 0)) {
          lVar13 = 0;
        }
        else {
          puVar6 = (uint *)((long)piVar4 + uVar10);
          lVar13 = (long)puVar6 + (ulong)*puVar6;
        }
        bVar7 = *(byte *)(lVar13 + 4);
        puVar20 = &DAT_cbf29ce484222645;
        if (bVar7 != 0) {
          puVar20 = &DAT_cbf29ce484222645;
          pbVar15 = (byte *)(lVar13 + 5);
          do {
            puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar7) * 0x100000001b3);
            bVar7 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar7 != 0);
        }
        plVar12 = (long *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,0x20,8);
        if (plVar12 == (long *)0x0) {
          (**(code **)(*(long *)*puVar2 + 0xe8))();
        }
        local_68 = 0;
        uVar18 = *puVar2;
        puStack_70 = puVar2;
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          plVar12[2] = (long)puVar20;
          plVar12[3] = (long)piVar4;
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar18;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar12[2] = (long)puVar20;
          plVar12[3] = (long)piVar4;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          puVar20 = (undefined1 *)plVar12[2];
        }
        local_68 = 1;
        *plVar12 = 0;
        plVar12[1] = (long)puVar20;
        puVar19 = *(undefined1 **)(param_1 + 0x78);
        if (puVar19 == (undefined1 *)0x0) {
LAB_0160a1bc:
          fVar21 = (float)(*(long *)(param_1 + 200) + 1);
          if ((puVar19 == (undefined1 *)0x0) ||
             (*(float *)(param_1 + 0xd0) * (float)puVar19 < fVar21)) {
            puVar20 = (undefined1 *)
                      ((ulong)(puVar19 < (undefined1 *)0x3 ||
                              ((ulong)puVar19 & (ulong)(puVar19 + -1)) != 0) | (long)puVar19 << 1);
            puVar14 = (undefined1 *)(long)(fVar21 / *(float *)(param_1 + 0xd0));
            if (puVar14 <= puVar20) {
              puVar14 = puVar20;
            }
            if (puVar14 + -1 == (undefined1 *)0x0) {
              puVar14 = (undefined1 *)0x2;
            }
            else if (((ulong)puVar14 & (ulong)(puVar14 + -1)) != 0) {
              puVar14 = (undefined1 *)std::__next_prime((ulong)puVar14);
              puVar19 = *(undefined1 **)(param_1 + 0x78);
            }
            if (puVar19 < puVar14) {
              puVar20 = puVar14;
LAB_0160a338:
              FUN_0160a4e4(plVar1,puVar20);
            }
            else if (puVar14 < puVar19) {
              puVar20 = (undefined1 *)
                        (long)((float)*(ulong *)(param_1 + 200) / *(float *)(param_1 + 0xd0));
              if ((puVar19 < (undefined1 *)0x3) ||
                 (uVar10 = (long)puVar19 - ((ulong)puVar19 >> 1 & 0x5555555555555555),
                 uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333),
                 1 < (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                puVar20 = (undefined1 *)std::__next_prime((ulong)puVar20);
              }
              else if ((undefined1 *)0x1 < puVar20) {
                puVar20 = (undefined1 *)(1L << (-LZCOUNT(puVar20 + -1) & 0x3fU));
              }
              if (puVar20 <= puVar14) {
                puVar20 = puVar14;
              }
              if (puVar20 < puVar19) goto LAB_0160a338;
            }
            puVar19 = *(undefined1 **)(param_1 + 0x78);
            puVar20 = (undefined1 *)plVar12[1];
          }
          uVar10 = (long)puVar19 - ((ulong)puVar19 >> 1 & 0x5555555555555555);
          uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
          uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar10 < 2) {
            puVar20 = (undefined1 *)((ulong)(puVar19 + -1) & (ulong)puVar20);
          }
          else if (puVar19 <= puVar20) {
            uVar8 = 0;
            if (puVar19 != (undefined1 *)0x0) {
              uVar8 = (ulong)puVar20 / (ulong)puVar19;
            }
            puVar20 = puVar20 + -(uVar8 * (long)puVar19);
          }
          plVar16 = *(long **)(*plVar1 + (long)puVar20 * 8);
          if (plVar16 == (long *)0x0) {
            *plVar12 = *plVar3;
            *plVar3 = (long)plVar12;
            *(long **)(*plVar1 + (long)puVar20 * 8) = plVar3;
            if (*plVar12 != 0) {
              puVar20 = *(undefined1 **)(*plVar12 + 8);
              if (uVar10 < 2) {
                puVar20 = (undefined1 *)((ulong)puVar20 & (ulong)(puVar19 + -1));
              }
              else if (puVar19 <= puVar20) {
                uVar10 = 0;
                if (puVar19 != (undefined1 *)0x0) {
                  uVar10 = (ulong)puVar20 / (ulong)puVar19;
                }
                puVar20 = puVar20 + -(uVar10 * (long)puVar19);
              }
              plVar16 = (long *)(*plVar1 + (long)puVar20 * 8);
              goto LAB_0160a2b4;
            }
          }
          else {
            *plVar12 = *plVar16;
LAB_0160a2b4:
            *plVar16 = (long)plVar12;
          }
          *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
        }
        else {
          puVar14 = puVar19 + -1;
          if (((ulong)puVar19 & (ulong)puVar14) == 0) {
            plVar16 = *(long **)(*plVar1 + ((ulong)puVar14 & (ulong)puVar20) * 8);
            if (plVar16 == (long *)0x0) goto LAB_0160a1bc;
            do {
              plVar16 = (long *)*plVar16;
              if ((plVar16 == (long *)0x0) ||
                 ((plVar16[1] & (ulong)puVar14) != ((ulong)puVar14 & (ulong)puVar20)))
              goto LAB_0160a1bc;
            } while ((undefined1 *)plVar16[2] != puVar20);
          }
          else {
            puVar14 = puVar20;
            if (puVar19 <= puVar20) {
              uVar10 = 0;
              if (puVar19 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar20 / (ulong)puVar19;
              }
              puVar14 = puVar20 + -(uVar10 * (long)puVar19);
            }
            plVar16 = *(long **)(*plVar1 + (long)puVar14 * 8);
            if (plVar16 == (long *)0x0) goto LAB_0160a1bc;
            do {
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) goto LAB_0160a1bc;
              puVar17 = (undefined1 *)plVar16[1];
              if (puVar19 <= puVar17) {
                uVar10 = 0;
                if (puVar19 != (undefined1 *)0x0) {
                  uVar10 = (ulong)puVar17 / (ulong)puVar19;
                }
                puVar17 = puVar17 + -(uVar10 * (long)puVar19);
              }
              if (puVar17 != puVar14) goto LAB_0160a1bc;
            } while ((undefined1 *)plVar16[2] != puVar20);
          }
          if (plVar12 != (long *)0x0) {
            FUN_0160b940(&puStack_70);
          }
        }
        puVar11 = puVar11 + 1;
      } while (puVar11 != puVar5);
    }
  }
  return;
}


