/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ba070; name: FUN_003ba070
 */


undefined8
FUN_003ba070(int *param_1,undefined8 *param_2,uint param_3,long *param_4,long *param_5,int param_6)

{
  long lVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  bool bVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ushort *puVar20;
  long local_68;
  
  puVar20 = (ushort *)*param_2;
  uVar18 = param_2[1];
  lVar19 = *(long *)(param_1 + 0x154);
  *param_4 = 0;
  if ((param_3 >> 7 & 1) != 0) {
    FUN_003bf5d0(*(long *)(param_1 + 0x154) + 0x1d8);
  }
  lVar1 = *(long *)(lVar19 + 0x1e0) + 0x1c;
  lVar8 = FUN_00452ce0(lVar1 * 0x28,"external/openssl/ssl/statem/extensions.c",0x25d);
  if (lVar8 == 0) {
    FUN_003c3950(param_1,0x50,0x1b3,0x41,"external/openssl/ssl/statem/extensions.c",0x260);
    return 0;
  }
  uVar3 = (param_3 >> 7 ^ 0xffffffff) & 2;
  if ((param_3 & 0x80) != 0) {
    uVar3 = 1;
  }
  lVar19 = lVar19 + 0x1d8;
  lVar17 = 0;
  while (uVar18 != 0) {
    if ((uVar18 == 1) || ((uVar18 & 0xfffffffffffffffe) == 2)) {
LAB_003ba6c0:
      uVar9 = 0x32;
      uVar11 = 0x6e;
      uVar12 = 0x26d;
LAB_003ba6d8:
      FUN_003c3950(param_1,uVar9,0x1b3,uVar11,"external/openssl/ssl/statem/extensions.c",uVar12);
      goto LAB_003ba6e0;
    }
    uVar6 = (((ulong)puVar20[1] & 0xff00) << 0x28 | (ulong)puVar20[1] << 0x38) >> 0x30;
    uVar13 = uVar18 - 4;
    uVar18 = uVar13 - uVar6;
    if (uVar13 < uVar6) goto LAB_003ba6c0;
    uVar5 = ((*puVar20 & 0xff00) << 8 | (uint)*puVar20 << 0x18) >> 0x10;
    if (0x3373 < uVar5) {
      if (uVar5 < 0xff01) {
        if (uVar5 == 0x3374) {
          lVar10 = 8;
          lVar16 = 0x44a0f98;
        }
        else {
          if (uVar5 != 65000) goto LAB_003ba450;
          lVar10 = 0x15;
          lVar16 = 0x44a1270;
        }
      }
      else if (uVar5 == 0xff01) {
        lVar10 = 0;
        lVar16 = 0x44a0dd8;
      }
      else {
        if (uVar5 != 0xffa5) goto LAB_003ba450;
        lVar10 = 0x18;
        lVar16 = 0x44a1318;
      }
      uVar4 = *(uint *)(lVar16 + 4);
      if ((uVar4 & param_3) != 0) {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
          uVar4 = uVar4 >> 1;
        }
        if ((uVar4 & 1) == 0) {
LAB_003ba3d0:
          plVar14 = (long *)(lVar8 + lVar10 * 0x28);
          if ((int)plVar14[2] != 1) {
            bVar15 = false;
            goto joined_r0x003ba3e8;
          }
        }
      }
LAB_003ba6a4:
      uVar9 = 0x2f;
      uVar11 = 0x6e;
      uVar12 = 0x27b;
      goto LAB_003ba6d8;
    }
    if (uVar5 < 0x3a) {
                    /* WARNING: Jumptable with 0 entries at 0x003ba1e8 */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)(&UNK_003ba1ec + (ulong)(byte)(&DAT_03cdca28)[uVar5] * 4))(lVar19,0x44a0eb8)
      ;
      return uVar9;
    }
LAB_003ba450:
    local_68 = 0;
    lVar10 = FUN_003bf550(lVar19,uVar3,uVar5,&local_68,&DAT_044a0e80,&DAT_044a1158,&DAT_044a1008);
    if (lVar10 != 0) {
      uVar4 = *(uint *)(lVar10 + 8);
      if ((uVar4 & param_3) != 0) {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
          uVar4 = uVar4 >> 1;
        }
        if ((uVar4 & 1) == 0) {
          lVar10 = local_68 + 0x1c;
          goto LAB_003ba3d0;
        }
      }
      goto LAB_003ba6a4;
    }
    plVar14 = (long *)0x0;
    bVar15 = true;
joined_r0x003ba3e8:
    if ((((param_3 >> 7 & 1) != 0) && (uVar5 == 0x29)) && (uVar18 != 0)) goto LAB_003ba6a4;
    if (((((param_3 & 0x6080) == 0) &&
         (uVar13 = (ulong)(uint)((int)((ulong)((long)plVar14 - lVar8) >> 3) * -0x33333333),
         uVar13 < 0x1c)) && ((uVar5 != 0x12 && ((uVar5 != 0x2c && (uVar5 != 0xff01)))))) &&
       (((*(byte *)((long)param_1 + uVar13 + 0x6d0) >> 1 & 1) == 0 &&
        (((uint)(uVar5 == 65000) & param_3 >> 8) == 0)))) {
      uVar9 = 0x6e;
      uVar11 = 0xd9;
      uVar12 = 0x29b;
      goto LAB_003ba6d8;
    }
    puVar2 = puVar20 + 2;
    puVar20 = (ushort *)((long)puVar2 + uVar6);
    if (!bVar15) {
      *plVar14 = (long)puVar2;
      plVar14[1] = uVar6;
      *(undefined4 *)(plVar14 + 2) = 1;
      *(uint *)(plVar14 + 3) = uVar5;
      plVar14[4] = lVar17;
      if (*(code **)(param_1 + 0x1bc) == (code *)0x0) {
        lVar17 = lVar17 + 1;
      }
      else {
        (**(code **)(param_1 + 0x1bc))
                  (param_1,param_1[0xe] == 0,uVar5,puVar2,uVar6,*(undefined8 *)(param_1 + 0x1be));
        lVar17 = lVar17 + 1;
      }
    }
  }
  if (param_6 != 0) {
    lVar19 = 0;
    if ((param_3 >> 0xb & 1) == 0) {
      do {
        if ((*(code **)((long)&DAT_044a0de0 + lVar19) != (code *)0x0) &&
           (uVar3 = *(uint *)((long)&DAT_044a0ddc + lVar19), (uVar3 & param_3) != 0)) {
          if ((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) {
            iVar7 = **(int **)(param_1 + 2);
            bVar15 = 0x303 < iVar7 && iVar7 != 0x10000;
          }
          else {
            if ((uVar3 >> 2 & 1) != 0) goto LAB_003ba738;
            bVar15 = false;
          }
          if ((((((uVar3 >> 3 & 1) != 0) || (*param_1 != 0x300)) &&
               (((uVar3 >> 4 & 1) == 0 || (!bVar15)))) &&
              (((((param_3 >> 7 & 1) != 0 || ((uVar3 >> 5 & 1) == 0)) || (bVar15)) &&
               ((((uVar3 >> 5 & 1) == 0 || (bVar15)) || (param_1[0xe] == 0)))))) &&
             ((((uVar3 >> 6 ^ 0xffffffff) & 1) != 0 || param_1[0x32] == 0 &&
              (iVar7 = (**(code **)((long)&DAT_044a0de0 + lVar19))(param_1,param_3), iVar7 == 0))))
          {
LAB_003ba6e0:
            FUN_00452f80(lVar8,"external/openssl/ssl/statem/extensions.c",0x2c1);
            return 0;
          }
        }
LAB_003ba738:
        lVar19 = lVar19 + 0x38;
      } while (lVar19 != 0x620);
    }
    else {
      do {
        if (((*(code **)((long)&DAT_044a0de0 + lVar19) != (code *)0x0) &&
            (uVar3 = *(uint *)((long)&DAT_044a0ddc + lVar19), (uVar3 & param_3) != 0)) &&
           ((((uVar3 >> 2 & 1) == 0 ||
             ((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0)) &&
            (((((uVar3 & 8) != 0 || *param_1 != 0x300 && ((uVar3 >> 4 & 1) == 0)) &&
              (((uVar3 >> 6 ^ 0xffffffff) & 1) != 0 || param_1[0x32] == 0)) &&
             (iVar7 = (**(code **)((long)&DAT_044a0de0 + lVar19))(param_1,param_3), iVar7 == 0))))))
        goto LAB_003ba6e0;
        lVar19 = lVar19 + 0x38;
      } while (lVar19 != 0x620);
    }
  }
  *param_4 = lVar8;
  if (param_5 != (long *)0x0) {
    *param_5 = lVar1;
  }
  return 1;
}


