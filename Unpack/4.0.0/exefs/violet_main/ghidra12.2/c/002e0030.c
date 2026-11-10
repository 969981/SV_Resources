/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e0030; name: FUN_002e0030
 */


void FUN_002e0030(long param_1,uint param_2,undefined8 param_3,long *param_4)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  void *__src;
  long lVar5;
  size_t __n;
  uint uVar6;
  char *pcVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ushort uVar20;
  
  if (-1 < (int)param_2) {
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    pcVar14 = (char *)0x0;
    uVar17 = 0;
    do {
      pcVar15 = pcVar14;
      uVar6 = uVar17;
      uVar1 = uVar20;
      if (uVar18 < param_2) {
        pcVar7 = *(char **)(param_1 + uVar18 * 8);
        while (cVar2 = *pcVar7, cVar2 == '\x05') {
          if (*(short *)(pcVar7 + 6) == 0) {
            uVar6 = 0;
            pcVar15 = (char *)0x0;
            uVar1 = *(ushort *)(pcVar7 + 2) & 1;
            goto joined_r0x002e0144;
          }
          plVar8 = (long *)(pcVar7 + 8);
          if (*(short *)(pcVar7 + 6) != 1) {
            plVar8 = (long *)*plVar8;
          }
          pcVar7 = (char *)*plVar8;
        }
        uVar1 = *(ushort *)(pcVar7 + 2) & 1;
        if (cVar2 == '\x04') {
          uVar6 = *(uint *)(pcVar7 + 0x18);
          pcVar15 = *(char **)(pcVar7 + 0x20);
joined_r0x002e0144:
          if (uVar1 == uVar20) goto LAB_002e015c;
          goto joined_r0x002e02fc;
        }
        uVar6 = (uint)(cVar2 == '\x03');
        pcVar15 = (char *)0x0;
        if (cVar2 == '\x03') {
          pcVar15 = pcVar7 + 0x18;
        }
        if (uVar1 != uVar20) goto joined_r0x002e02fc;
LAB_002e015c:
        uVar1 = uVar20;
        if (((int)uVar17 < 1) || ((int)uVar6 < 1)) goto joined_r0x002e02fc;
        uVar9 = 0;
        uVar16 = (ulong)uVar6;
        if ((ulong)uVar17 - 1 <= (ulong)uVar6 - 1) {
          uVar16 = (ulong)uVar17;
        }
        do {
          if (*(int *)(pcVar14 + uVar9 * 4) != *(int *)(pcVar15 + uVar9 * 4)) {
            if ((int)uVar9 == 0) goto joined_r0x002e02fc;
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar16 != uVar9);
        uVar6 = (uint)uVar9;
      }
      else {
joined_r0x002e02fc:
        uVar20 = uVar1;
        if ((uVar18 != uVar19) && (uVar18 != uVar19 + 1)) {
          uVar4 = FUN_002e5414(pcVar14,uVar17);
          uVar16 = (ulong)(int)uVar19;
          uVar9 = uVar16;
          if ((long)uVar16 < (long)uVar18) {
            do {
              FUN_002df6f8(*(undefined8 *)(param_1 + uVar9 * 8),uVar17);
              uVar9 = uVar9 + 1;
            } while (uVar18 != (uVar9 & 0xffffffff));
          }
          puVar10 = (undefined8 *)param_4[1];
          lVar5 = param_1 + uVar16 * 8;
          iVar3 = (uint)uVar18 - uVar19;
          if (puVar10 < (undefined8 *)param_4[2]) {
            *puVar10 = uVar4;
            puVar10[1] = lVar5;
            *(int *)(puVar10 + 2) = iVar3;
            *(undefined4 *)((long)puVar10 + 0x14) = 0xffffffff;
            param_4[1] = (long)(puVar10 + 3);
          }
          else {
            __src = (void *)*param_4;
            lVar13 = (long)puVar10 - (long)__src >> 3;
            uVar9 = lVar13 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar9) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar11 = param_4[2] - (long)__src >> 3;
            uVar16 = lVar11 * 0x5555555555555556;
            if (uVar9 <= uVar16) {
              uVar9 = uVar16;
            }
            if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
              uVar9 = 0xaaaaaaaaaaaaaaa;
            }
            if (uVar9 == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = FUN_0049e770(PTR_FUN_047cba38,uVar9 * 0x18);
              __src = (void *)*param_4;
              puVar10 = (undefined8 *)param_4[1];
            }
            puVar12 = (undefined8 *)(lVar11 + lVar13 * 8);
            __n = (long)puVar10 - (long)__src;
            *puVar12 = uVar4;
            puVar12[1] = lVar5;
            *(int *)(puVar12 + 2) = iVar3;
            *(undefined4 *)((long)puVar12 + 0x14) = 0xffffffff;
            if (0 < (long)__n) {
              memcpy((void *)((long)puVar12 - __n),__src,__n);
            }
            lVar5 = *param_4;
            *param_4 = (long)((long)puVar12 - __n);
            param_4[1] = (long)(puVar12 + 3);
            param_4[2] = lVar11 + uVar9 * 0x18;
            if (lVar5 != 0) {
              FUN_0049e790(PTR_LAB_047cba48);
            }
          }
        }
        uVar17 = (uint)uVar18;
        if (param_2 <= uVar18) {
          uVar17 = uVar19;
        }
        pcVar14 = pcVar15;
        uVar19 = uVar17;
      }
      uVar18 = uVar18 + 1;
      uVar17 = uVar6;
    } while (uVar18 != param_2 + 1);
  }
  return;
}


