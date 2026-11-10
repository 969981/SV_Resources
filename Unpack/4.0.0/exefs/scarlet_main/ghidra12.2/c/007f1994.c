/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f1994; name: FUN_007f1994
 */


void FUN_007f1994(undefined8 param_1,long *param_2,int *param_3,void *param_4,uint param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  byte bVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  void *__src;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  undefined2 *puVar17;
  ulong local_88 [3];
  uint local_70 [2];
  uint local_68 [2];
  
  puVar5 = PTR_DAT_047d0860;
  if ((int)param_2[0xb] != *(int *)PTR_DAT_047d0e88) {
    if ((param_4 == (void *)0x0) && (param_5 != 0)) {
LAB_007f19f8:
      uVar7 = 0x10407;
      goto LAB_007f1a00;
    }
    uVar8 = (ulong)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
    if (uVar8 != 0) {
      plVar9 = (long *)param_2[8];
      do {
        if (*plVar9 != 0) {
          if ((*param_3 == 0) || (param_2[0xc] == 0)) goto LAB_007f19f8;
          if (param_5 == 0) {
            uVar15 = 1;
          }
          else {
            uVar15 = 0;
            if (*(ushort *)(param_2 + 0xe) != 0) {
              uVar15 = (param_5 - 1) / (uint)*(ushort *)(param_2 + 0xe);
            }
            uVar15 = uVar15 + 1;
          }
          if (uVar15 <= (uint)*(ushort *)(param_2 + 5) - (uint)*(ushort *)((long)param_2 + 0x32)) {
            memset(local_70,0,4);
            uVar2 = *(ushort *)(*(long *)puVar5 + 0x50);
            if (uVar2 != 0) {
              uVar11 = (uint)uVar2;
              uVar8 = 0;
              if (uVar2 < 2) {
                uVar11 = 1;
              }
              do {
                if ((*(long *)(param_2[8] + uVar8 * 8) != 0) &&
                   (uVar3 = 1 << (ulong)((uint)uVar8 & 0x1f),
                   (param_3[uVar8 >> 5 & 0x7ffffff] & uVar3) != 0)) {
                  local_70[0] = local_70[0] | uVar3;
                }
                uVar8 = uVar8 + 1;
              } while (uVar11 != uVar8);
            }
            if (0 < (int)uVar15) {
              iVar16 = 0;
              do {
                uVar11 = *(int *)((long)param_2 + 0x2c) + (uint)*(ushort *)((long)param_2 + 0x32);
                lVar12 = param_2[4];
                uVar3 = 0;
                if (*(ushort *)(param_2 + 5) <= uVar11) {
                  uVar3 = (uint)*(ushort *)(param_2 + 5);
                }
                uVar8 = (ulong)(uVar11 - uVar3);
                puVar17 = (undefined2 *)(lVar12 + uVar8 * 0x5d0);
                *puVar17 = 0;
                local_88[0] = 0;
                FUN_007935cc(local_88);
                *(ulong *)(puVar17 + 4) = local_88[0];
                piVar10 = (int *)(puVar17 + 8);
                piVar10[0] = 0;
                piVar10[1] = 0;
                pbVar13 = (byte *)(puVar17 + 0x10);
                pbVar13[0] = 0;
                pbVar13[1] = 0;
                pbVar13[2] = 0;
                pbVar13[3] = 0;
                pbVar13[4] = 0;
                pbVar13[5] = 0;
                pbVar13[6] = 0;
                pbVar13[7] = 0;
                pbVar14 = (byte *)(puVar17 + 0x14);
                *pbVar14 = 0;
                memset(puVar17 + 0x16,0,4);
                *(undefined1 *)puVar17 = 0;
                *pbVar13 = 1;
                uVar2 = *(ushort *)((long)param_2 + 0x32);
                uVar4 = (undefined2)
                        ((ulong)((uint)uVar2 + (uint)*(ushort *)(param_2 + 6)) * 0x800080008001 >>
                        0x2f);
                puVar17[0x12] = uVar4;
                *(ushort *)((long)param_2 + 0x32) = uVar2 + 1;
                if (param_6 != (undefined2 *)0x0) {
                  *param_6 = uVar4;
                }
                uVar11 = param_5;
                if (*(ushort *)(param_2 + 0xe) <= param_5) {
                  uVar11 = (uint)*(ushort *)(param_2 + 0xe);
                }
                __src = param_4;
                uVar3 = uVar11;
                if (*(char *)((long)param_2 + 0xa4) != '\0') {
                  FUN_007ebe58(local_88,param_2[0xc],param_4,uVar11 & 0xffff);
                  if ((uint)local_88[0] == 0) {
                    *pbVar13 = *pbVar13 | 0x10;
                    __src = *(void **)(param_2[0xc] + 0x28);
                    uVar3 = *(uint *)(param_2[0xc] + 0x30);
                  }
                }
                if (iVar16 == 0) {
                  *pbVar13 = *pbVar13 | 2;
                }
                if (uVar15 + iVar16 == 1) {
                  *pbVar13 = *pbVar13 | 4;
                }
                puVar17[0x11] = (short)uVar3;
                memcpy(puVar17 + 0x16,local_70,4);
                bVar6 = (**(code **)(*param_2 + 0x38))(param_2);
                uVar1 = bVar6 + 0x1f >> 3 & 0x3c;
                *pbVar14 = bVar6;
                if ((uVar3 & 0xffff) <= 0x597 - uVar1) {
                  memcpy((void *)(lVar12 + uVar8 * 0x5d0 + (ulong)(uVar1 + 9) + 0x30),__src,
                         (ulong)uVar3 & 0xffff);
                }
                param_4 = (void *)((long)param_4 + (ulong)(ushort)uVar11);
                param_5 = param_5 - (uVar11 & 0xffff);
                memcpy(local_88,local_70,4);
                uVar11 = (uint)local_88[0] & *(uint *)((long)param_2 + 0x74);
                local_88[0] = CONCAT44(local_88[0]._4_4_,uVar11);
                if ((iVar16 == 0) && (uVar11 != 0)) {
                  memcpy(local_68,local_70,4);
                  *(uint *)((long)param_2 + 0x74) =
                       *(uint *)((long)param_2 + 0x74) & (local_68[0] ^ 0xffffffff);
                  *pbVar13 = *pbVar13 | 8;
                  local_68[0] = ~local_68[0];
                }
                iVar16 = iVar16 + -1;
                *piVar10 = (uVar3 & 0xffff) + (*pbVar14 + 0x1f >> 3 & 0x3c) + 9;
                *(undefined1 *)puVar17 = 1;
              } while (uVar15 + iVar16 != 0);
            }
            sprintf((char *)local_88,"%08x",(ulong)local_70[0]);
            local_88[0] = local_88[0] & 0xffffffff00000000;
            local_68[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
            goto LAB_007f1a20;
          }
          uVar7 = 0x4c0d;
          goto LAB_007f1a00;
        }
        uVar8 = uVar8 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar8 != 0);
    }
  }
  uVar7 = 0x10408;
LAB_007f1a00:
  local_88[0] = CONCAT44(local_88[0]._4_4_,uVar7);
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
LAB_007f1a20:
  FUN_00cbd7c0(param_1,local_88);
  return;
}


