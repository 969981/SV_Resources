/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a0348; name: FUN_008a0348
 */


void FUN_008a0348(long param_1,undefined8 param_2,long *param_3,long param_4,long param_5,
                 long param_6,uint *param_7,long param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  short sVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  ushort *puVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong local_78;
  
  uVar9 = (ulong)(*(byte *)(param_1 + 0x14) & 3);
  if ((*(byte *)(param_1 + 0x14) & 3) != 0) {
    lVar8 = *param_3;
    puVar11 = *(ushort **)(param_1 + 0x18);
    local_78 = 0;
    lVar12 = param_1;
    pbVar10 = (byte *)(param_6 + 3);
    do {
      lVar6 = lVar8 + 0xc + (ulong)*(uint *)(lVar8 + 0xc + (ulong)*(ushort *)(pbVar10 + -3) * 4);
      if ((*(byte *)(param_5 + 0x1e) >> 5 & 1) == 0) {
LAB_008a03ac:
        lVar12 = (**(code **)(*(long *)param_3[6] + 0x70))((long *)param_3[6],param_2,lVar6);
      }
      else {
        uVar3 = *param_7;
        if (uVar3 == 0) goto LAB_008a03ac;
        if ((uVar3 & 1) == 0) {
          if ((uVar3 >> 1 & 1) == 0) {
            lVar12 = 0;
          }
          else if (*(char *)(param_4 + 0xa8) == '\0') {
            if (*(long **)(param_4 + 0x30) == param_3) {
              uVar5 = FUN_008983b0(*(undefined8 *)(param_4 + 0xa0));
              lVar6 = FUN_00899f38(uVar5,lVar6);
              uVar7 = 0x100;
            }
            else {
              uVar5 = FUN_0089a63c(*(undefined8 *)(param_4 + 0xa0),*(undefined4 *)(param_4 + 0x94));
              lVar6 = FUN_00899f38(uVar5,lVar6);
              sVar4 = FUN_0089a648(*(undefined8 *)(param_4 + 0xa0));
              uVar7 = (sVar4 - (short)*(undefined4 *)(param_4 + 0x94)) * 0x200 & 0xe00U | 0x100;
            }
            *puVar11 = *puVar11 & 0xe0ff | uVar7;
            uVar3 = *(uint *)(param_1 + 0x10);
            puVar2 = (undefined4 *)
                     (*(long *)(param_1 + 0x18) +
                      (long)(int)((uVar3 >> 4 & 0x1c) + (uVar3 >> 8 & 0xc) + (uVar3 >> 0xc & 8) +
                                  (uVar3 >> 0xc & 1) * 0xc + (uVar3 >> 0x10 & 1) * 0x1c +
                                  (uVar3 >> 0xc & 0x10) * (uVar3 >> 6 & 7) +
                                  (uVar3 >> 0x11 & 1) * 0x74 +
                                  ((uVar3 & 3) * 0x10 + (uVar3 & 0x30) | uVar3 >> 6 & 8) +
                                 ((uVar3 >> 0xd & 3) + (uVar3 >> 2 & 3)) * 0x14) +
                     (local_78 & 0xff) * 0x20);
            puVar1 = (undefined4 *)(param_8 + (local_78 & 0xff) * 0x10);
            local_78 = (ulong)((int)local_78 + 1);
            lVar12 = *(long *)(lVar6 + 8);
            *puVar2 = *puVar1;
            fVar13 = (float)NEON_ucvtf((uint)*(byte *)(puVar1 + 1));
            fVar14 = (float)NEON_ucvtf((uint)*(byte *)((long)puVar1 + 5));
            fVar15 = (float)NEON_ucvtf((uint)*(byte *)((long)puVar1 + 6));
            fVar16 = (float)NEON_ucvtf((uint)*(byte *)((long)puVar1 + 7));
            *(long *)(puVar2 + 6) = lVar6;
            puVar2[1] = fVar13 / 255.0;
            puVar2[2] = fVar14 / 255.0;
            puVar2[3] = fVar15 / 255.0;
            puVar2[4] = fVar16 / 255.0;
            uVar5 = *(undefined8 *)(puVar2 + 3);
            *(undefined8 *)(lVar6 + 0x140) = *(undefined8 *)(puVar2 + 1);
            *(undefined8 *)(lVar6 + 0x148) = uVar5;
          }
          else {
            lVar12 = FUN_00896e5c(0x18,0x10);
            if (lVar12 != 0) {
              FUN_008b409c(lVar12,lVar6);
            }
            *puVar11 = *puVar11 & 0xe0ff | 0x1000;
          }
        }
        else {
          lVar6 = FUN_008a0ab0(lVar12,puVar11,param_3,param_4,lVar6);
          lVar12 = *(long *)(lVar6 + 8);
          *(undefined1 *)(lVar6 + 0x18) = 2;
        }
      }
      *(long *)(puVar11 + 4) = lVar12;
      FUN_008afd40(puVar11,pbVar10[-1] & 3,*pbVar10 & 3);
      lVar12 = FUN_008afd5c(puVar11,pbVar10[-1] >> 2 & 3,*pbVar10 >> 2 & 3);
      param_7 = param_7 + 1;
      uVar9 = uVar9 - 1;
      puVar11 = puVar11 + 8;
      pbVar10 = pbVar10 + 4;
    } while (uVar9 != 0);
  }
  return;
}


