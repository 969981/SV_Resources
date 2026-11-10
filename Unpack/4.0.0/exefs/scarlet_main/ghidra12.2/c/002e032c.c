/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e032c; name: FUN_002e032c
 */


void FUN_002e032c(long param_1,uint param_2,undefined8 param_3,long *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__src;
  size_t __n;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  
  if (-1 < (int)param_2) {
    uVar15 = 0;
    pbVar14 = (byte *)0x0;
    uVar16 = 0;
    do {
      pbVar13 = pbVar14;
      if (uVar15 < param_2) {
        pbVar13 = *(byte **)(param_1 + uVar15 * 8);
        if (*pbVar13 == 2) {
          pbVar13 = (byte *)0x0;
          if (pbVar14 != (byte *)0x0) goto LAB_002e0404;
          goto LAB_002e0424;
        }
        if ((*pbVar13 == 5) && (1 < *(ushort *)(pbVar13 + 6))) {
          pbVar1 = pbVar13 + 8;
          pbVar13 = (byte *)0x0;
          if (*(byte *)**(undefined8 **)pbVar1 != 2) {
            pbVar13 = (byte *)**(undefined8 **)pbVar1;
          }
        }
        if (pbVar14 == (byte *)0x0) goto LAB_002e0424;
LAB_002e0404:
        if (8 < *pbVar14 - 0xc) {
          if ((*pbVar14 == 10) && (*(int *)(pbVar14 + 0x1c) == *(int *)(pbVar14 + 0x18))) {
            if (*(ushort *)(pbVar14 + 6) < 2) {
              bVar3 = **(byte **)(pbVar14 + 8);
            }
            else {
              bVar3 = *(byte *)**(undefined8 **)(pbVar14 + 8);
            }
            if (((bVar3 < 0x15) && ((1 << (ulong)(bVar3 & 0x1f) & 0x101008U) != 0)) ||
               (bVar3 == 0xd)) goto LAB_002e0414;
          }
          goto LAB_002e0424;
        }
LAB_002e0414:
        uVar5 = FUN_002e55c0(pbVar14,pbVar13);
        if ((uVar5 & 1) == 0) goto LAB_002e0424;
      }
      else {
LAB_002e0424:
        if ((uVar15 != uVar16) && (uVar15 != uVar16 + 1)) {
          uVar6 = FUN_002e4590(pbVar14);
          uVar12 = (ulong)(int)uVar16;
          uVar5 = uVar12;
          if ((long)uVar12 < (long)uVar15) {
            do {
              lVar17 = uVar5 * 8;
              uVar7 = FUN_002df610(*(undefined8 *)(param_1 + lVar17));
              uVar5 = uVar5 + 1;
              *(undefined8 *)(param_1 + lVar17) = uVar7;
            } while (uVar15 != (uVar5 & 0xffffffff));
          }
          puVar8 = (undefined8 *)param_4[1];
          lVar17 = param_1 + uVar12 * 8;
          iVar4 = (uint)uVar15 - uVar16;
          if (puVar8 < (undefined8 *)param_4[2]) {
            *puVar8 = uVar6;
            puVar8[1] = lVar17;
            *(int *)(puVar8 + 2) = iVar4;
            *(undefined4 *)((long)puVar8 + 0x14) = 0xffffffff;
            param_4[1] = (long)(puVar8 + 3);
          }
          else {
            __src = (void *)*param_4;
            lVar11 = (long)puVar8 - (long)__src >> 3;
            uVar5 = lVar11 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar9 = param_4[2] - (long)__src >> 3;
            uVar12 = lVar9 * 0x5555555555555556;
            if (uVar5 <= uVar12) {
              uVar5 = uVar12;
            }
            if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
              uVar5 = 0xaaaaaaaaaaaaaaa;
            }
            if (uVar5 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = FUN_0049e770(PTR_FUN_047cba38,uVar5 * 0x18);
              __src = (void *)*param_4;
              puVar8 = (undefined8 *)param_4[1];
            }
            puVar10 = (undefined8 *)(lVar9 + lVar11 * 8);
            __n = (long)puVar8 - (long)__src;
            *puVar10 = uVar6;
            puVar10[1] = lVar17;
            *(int *)(puVar10 + 2) = iVar4;
            *(undefined4 *)((long)puVar10 + 0x14) = 0xffffffff;
            if (0 < (long)__n) {
              memcpy((void *)((long)puVar10 - __n),__src,__n);
            }
            lVar17 = *param_4;
            param_4[2] = lVar9 + uVar5 * 0x18;
            *param_4 = (long)((long)puVar10 - __n);
            param_4[1] = (long)(puVar10 + 3);
            if (lVar17 != 0) {
              FUN_0049e790(PTR_LAB_047cba48);
            }
          }
        }
        uVar2 = (uint)uVar15;
        if (param_2 <= uVar15) {
          uVar2 = uVar16;
        }
        pbVar14 = pbVar13;
        uVar16 = uVar2;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_2 + 1);
  }
  return;
}


