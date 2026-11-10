/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025c9b0; name: FUN_0025c9b0
 */


undefined8 FUN_0025c9b0(long param_1,int *param_2)

{
  char cVar1;
  long *plVar2;
  size_t __n;
  char *__dest;
  undefined8 uVar3;
  ulong *puVar4;
  byte *pbVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *__s;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 local_80;
  size_t sStack_78;
  char *local_70;
  long *local_68;
  
  if (*param_2 == 6) {
    lVar14 = *(long *)(param_2 + 0xe);
    if (lVar14 != *(long *)(param_2 + 0x10)) {
      do {
        pbVar5 = (byte *)(lVar14 + 8);
        FUN_0025c510(&local_80,pbVar5);
        if ((local_80 & 1) == 0) {
          if (((byte)local_80 & 0xfe) == 2) {
            cVar1 = local_80._1_1_;
joined_r0x0025ca78:
            if (cVar1 == '*') {
              pbVar5 = *(byte **)(param_1 + 0x20);
              if (*(byte **)(param_1 + 0x28) != pbVar5) {
                pbVar10 = *(byte **)(param_1 + 0x28);
                do {
                  pbVar11 = pbVar10 + -0x20;
                  if ((*pbVar11 & 1) != 0) {
                    (**(code **)(**(long **)(pbVar10 + -8) + 0x18))
                              (*(long **)(pbVar10 + -8),*(undefined8 *)(pbVar10 + -0x10),
                               *(ulong *)(pbVar10 + -0x20) & 0xfffffffffffffffe,1);
                  }
                  pbVar10 = pbVar11;
                } while (pbVar5 != pbVar11);
              }
              *(byte **)(param_1 + 0x28) = pbVar5;
              return 0;
            }
          }
          if ((*pbVar5 & 1) != 0) goto LAB_0025cab0;
LAB_0025ca84:
          __s = (char *)(lVar14 + 9);
        }
        else {
          if (sStack_78 == 1) {
            cVar1 = *local_70;
            (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
            goto joined_r0x0025ca78;
          }
          (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
          if ((*pbVar5 & 1) == 0) goto LAB_0025ca84;
LAB_0025cab0:
          __s = *(char **)(lVar14 + 0x18);
        }
        plVar2 = (long *)FUN_01cf7e20();
        local_68 = plVar2;
        __n = strlen(__s);
        if (0xffffffffffffffef < __n) {
                    /* try { // try from 0025cd24 to 0025cd2b has its CatchHandler @ 0025cd64 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < 0x17) {
          local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
          __dest = (char *)((ulong)&local_80 | 1);
          if (__n != 0) goto LAB_0025cb44;
          *(char *)((ulong)&local_80 | 1) = '\0';
          puVar4 = *(ulong **)(param_1 + 0x28);
          puVar6 = *(ulong **)(param_1 + 0x30);
          if (puVar6 <= puVar4) goto LAB_0025cb64;
LAB_0025cafc:
          puVar4[1] = sStack_78;
          *puVar4 = local_80;
          puVar4[3] = (ulong)local_68;
          puVar4[2] = (ulong)local_70;
          sStack_78 = 0;
          local_70 = (char *)0x0;
          local_80 = 0;
          *(ulong **)(param_1 + 0x28) = puVar4 + 4;
        }
        else {
          uVar13 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = (char *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar13,1);
          local_80 = uVar13 | 1;
          sStack_78 = __n;
          local_70 = __dest;
LAB_0025cb44:
          memcpy(__dest,__s,__n);
          __dest[__n] = '\0';
          puVar4 = *(ulong **)(param_1 + 0x28);
          puVar6 = *(ulong **)(param_1 + 0x30);
          if (puVar4 < puVar6) goto LAB_0025cafc;
LAB_0025cb64:
          lVar12 = (long)puVar4 - *(long *)(param_1 + 0x20) >> 5;
          uVar13 = lVar12 + 1;
          if (uVar13 >> 0x3b != 0) {
                    /* try { // try from 0025cd2c to 0025cd33 has its CatchHandler @ 0025cd34 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar7 = (long)puVar6 - *(long *)(param_1 + 0x20);
          uVar8 = lVar7 >> 4;
          if (uVar13 <= uVar8) {
            uVar13 = uVar8;
          }
          if (0x3fffffffffffffe < (ulong)(lVar7 >> 5)) {
            uVar13 = 0x7ffffffffffffff;
          }
          if (uVar13 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                              (*(long **)(param_1 + 0x38),uVar13 << 5,8);
          }
          puVar6 = (ulong *)(lVar7 + lVar12 * 0x20);
          puVar4 = puVar6 + 4;
          puVar6[1] = sStack_78;
          *puVar6 = local_80;
          puVar6[3] = (ulong)local_68;
          puVar6[2] = (ulong)local_70;
          local_80 = 0;
          sStack_78 = 0;
          local_70 = (char *)0x0;
          pbVar5 = *(byte **)(param_1 + 0x20);
          pbVar10 = *(byte **)(param_1 + 0x28);
          puVar9 = puVar6;
          if (pbVar10 == pbVar5) {
            pbVar10 = pbVar5;
          }
          else {
            do {
              uVar8 = *(ulong *)(pbVar10 + -0x20);
              uVar16 = *(ulong *)(pbVar10 + -8);
              uVar15 = *(ulong *)(pbVar10 + -0x10);
              puVar6 = puVar9 + -4;
              puVar9[-3] = *(ulong *)(pbVar10 + -0x18);
              *puVar6 = uVar8;
              puVar9[-1] = uVar16;
              puVar9[-2] = uVar15;
              pbVar10[-0x18] = 0;
              pbVar10[-0x17] = 0;
              pbVar10[-0x16] = 0;
              pbVar10[-0x15] = 0;
              pbVar10[-0x14] = 0;
              pbVar10[-0x13] = 0;
              pbVar10[-0x12] = 0;
              pbVar10[-0x11] = 0;
              pbVar10[-0x10] = 0;
              pbVar10[-0xf] = 0;
              pbVar10[-0xe] = 0;
              pbVar10[-0xd] = 0;
              pbVar10[-0xc] = 0;
              pbVar10[-0xb] = 0;
              pbVar10[-10] = 0;
              pbVar10[-9] = 0;
              pbVar10[-0x20] = 0;
              pbVar10[-0x1f] = 0;
              pbVar10[-0x1e] = 0;
              pbVar10[-0x1d] = 0;
              pbVar10[-0x1c] = 0;
              pbVar10[-0x1b] = 0;
              pbVar10[-0x1a] = 0;
              pbVar10[-0x19] = 0;
              pbVar10 = pbVar10 + -0x20;
              puVar9 = puVar6;
            } while (pbVar5 != pbVar10);
            pbVar5 = *(byte **)(param_1 + 0x28);
            pbVar10 = *(byte **)(param_1 + 0x20);
          }
          lVar12 = *(long *)(param_1 + 0x30);
          *(ulong *)(param_1 + 0x30) = lVar7 + uVar13 * 0x20;
          *(ulong **)(param_1 + 0x20) = puVar6;
          *(ulong **)(param_1 + 0x28) = puVar4;
          if (pbVar5 != pbVar10) {
            do {
              pbVar11 = pbVar5 + -0x20;
              if ((*pbVar11 & 1) != 0) {
                (**(code **)(**(long **)(pbVar5 + -8) + 0x18))
                          (*(long **)(pbVar5 + -8),*(undefined8 *)(pbVar5 + -0x10),
                           *(ulong *)(pbVar5 + -0x20) & 0xfffffffffffffffe,1);
              }
              pbVar5 = pbVar11;
            } while (pbVar10 != pbVar11);
          }
          if (pbVar10 != (byte *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
                      (*(long **)(param_1 + 0x38),pbVar10,lVar12 - (long)pbVar10,8);
          }
        }
        if ((local_80 & 1) != 0) {
          (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
        }
        lVar14 = lVar14 + 0x50;
      } while (lVar14 != *(long *)(param_2 + 0x10));
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0x80341;
  }
  return uVar3;
}


