/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a3700; name: FUN_003a3700
 */


undefined8
FUN_003a3700(undefined4 *param_1,uint param_2,undefined4 *param_3,void *param_4,ulong param_5,
            int param_6,size_t *param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  size_t __n;
  uint uVar10;
  long *plVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  char local_b8 [88];
  
  if ((*(long *)(param_1 + 0x25a) != 0) || (iVar5 = FUN_003a6be0(param_1), iVar5 != 0)) {
    if (((param_2 < 0x18) && ((1 << (ulong)(param_2 & 0x1f) & 0xc00001U) != 0)) &&
       ((param_2 == 0x17 || (param_6 == 0)))) {
      iVar5 = FUN_003c39f0(param_1);
      if ((iVar5 == 0) && (iVar5 = FUN_003c38d0(param_1), iVar5 != 0)) {
        uVar7 = (**(code **)(param_1 + 0xc))(param_1);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        if ((int)uVar7 == 0) {
          return 0xffffffff;
        }
      }
      pcVar12 = (code *)0x0;
LAB_003a3808:
      do {
        while( true ) {
          do {
            param_1[10] = 1;
            iVar5 = FUN_003c38e0(param_1);
            if (((iVar5 != 0) && (*(long *)(param_1 + 0x3a6) == 0)) &&
               (lVar6 = FUN_003a2e10(*(undefined8 *)(*(long *)(param_1 + 0x63e) + 0x50)), lVar6 != 0
               )) {
              plVar11 = *(long **)(lVar6 + 8);
              FUN_003a69a0(param_1 + 0x25a);
              lVar14 = *plVar11;
              *(long *)(param_1 + 0x626) = plVar11[1];
              *(long *)(param_1 + 0x624) = lVar14;
              lVar15 = plVar11[3];
              lVar14 = plVar11[2];
              lVar17 = plVar11[5];
              lVar16 = plVar11[4];
              *(long *)(param_1 + 0x262) = plVar11[6];
              *(long *)(param_1 + 0x25c) = lVar15;
              *(long *)(param_1 + 0x25a) = lVar14;
              *(long *)(param_1 + 0x260) = lVar17;
              *(long *)(param_1 + 0x25e) = lVar16;
              lVar15 = plVar11[0xc];
              lVar14 = plVar11[0xb];
              lVar16 = plVar11[0xd];
              lVar18 = plVar11[0x10];
              lVar17 = plVar11[0xf];
              lVar20 = plVar11[10];
              lVar19 = plVar11[9];
              *(long *)(param_1 + 0x3b2) = plVar11[0xe];
              *(long *)(param_1 + 0x3b0) = lVar16;
              *(long *)(param_1 + 0x3b6) = lVar18;
              *(long *)(param_1 + 0x3b4) = lVar17;
              *(long *)(param_1 + 0x3aa) = lVar20;
              *(long *)(param_1 + 0x3a8) = lVar19;
              *(long *)(param_1 + 0x3ae) = lVar15;
              *(long *)(param_1 + 0x3ac) = lVar14;
              lVar14 = plVar11[7];
              *(long *)(param_1 + 0x3a6) = plVar11[8];
              *(long *)(param_1 + 0x3a4) = lVar14;
              uVar2 = *(undefined4 *)(*plVar11 + 5);
              *(undefined2 *)((long)param_1 + 0x18e6) = *(undefined2 *)(*plVar11 + 9);
              *(undefined4 *)((long)param_1 + 0x18e2) = uVar2;
              FUN_00452f80(*(undefined8 *)(lVar6 + 8),"external/openssl/ssl/record/rec_layer_d1.c",
                           0x196);
              FUN_003a2cd0(lVar6);
            }
            iVar5 = FUN_003a1340(param_1);
          } while (0 < iVar5);
          iVar5 = FUN_003c39d0(param_1);
          if (iVar5 != 0) {
            return 0xffffffff;
          }
          if ((*(long *)(param_1 + 0x3a6) != 0) && (param_1[0x255] != 0xf1)) break;
          *(undefined8 *)(param_1 + 0x256) = 0;
          iVar5 = FUN_003a91b0(param_1);
          if (0 < iVar5) {
            *(undefined8 *)(param_1 + 0x256) = 1;
            break;
          }
          uVar7 = FUN_003ca810(param_1,iVar5);
          if ((int)uVar7 < 1) {
            return uVar7;
          }
        }
        uVar10 = param_1[0x3a5];
        if (uVar10 == 0x15) {
LAB_003a3910:
          if (*(int *)(*(long *)(param_1 + 0x2a) + 0xf0) == 0) goto LAB_003a3938;
          iVar5 = FUN_003a31f0(param_1,*(long *)(param_1 + 0x63e) + 0x48,param_1 + 0x3b6);
          if (iVar5 < 0) {
            return 0xffffffff;
          }
          goto LAB_003a39a4;
        }
        if (*(long *)(param_1 + 0x3a6) != 0) {
          param_1[0x63d] = 0;
        }
        if (uVar10 != 0x16) goto LAB_003a3910;
LAB_003a3938:
        if (((uint)param_1[0x11] >> 1 & 1) != 0) {
          *(undefined8 *)(param_1 + 0x3a6) = 0;
          param_1[0x3b2] = 1;
          param_1[10] = 1;
          return 0;
        }
        if ((uVar10 == param_2) ||
           (((param_3 != (undefined4 *)0x0 && (param_2 == 0x16)) && (uVar10 == 0x14)))) {
          iVar5 = FUN_003c38d0(param_1);
          if (((param_2 != 0x17) || (iVar5 == 0)) || (*(long *)(param_1 + 0x140) != 0)) {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = param_1[0x3a5];
            }
            __n = *(size_t *)(param_1 + 0x3a6);
            if (param_5 == 0) {
              if (__n == 0) {
                param_1[0x3b2] = 1;
                return 0;
              }
              return 0;
            }
            if (param_5 <= __n) {
              __n = param_5;
            }
            memcpy(param_4,(void *)(*(long *)(param_1 + 0x3ac) + *(long *)(param_1 + 0x3aa)),__n);
            if (param_6 == 0) {
              lVar6 = *(long *)(param_1 + 0x3a6) - __n;
              *(long *)(param_1 + 0x3a6) = lVar6;
              *(size_t *)(param_1 + 0x3aa) = *(long *)(param_1 + 0x3aa) + __n;
              if (lVar6 != 0) goto LAB_003a3c40;
              param_1[0x255] = 0xf0;
              *(undefined8 *)(param_1 + 0x3aa) = 0;
            }
            else if (*(long *)(param_1 + 0x3a6) != 0) goto LAB_003a3c40;
            param_1[0x3b2] = 1;
LAB_003a3c40:
            *param_7 = __n;
            return 1;
          }
          uVar7 = 10;
          uVar8 = 100;
          uVar9 = 0x1ec;
          goto LAB_003a3790;
        }
        if (uVar10 == 0x15) {
          lVar6 = *(long *)(param_1 + 0x3a6);
          if (((lVar6 < 1) || (lVar6 == 1)) || (lVar6 != 2)) {
            uVar7 = 10;
            uVar8 = 0xcd;
            uVar9 = 0x231;
            goto LAB_003a3790;
          }
          pcVar1 = (char *)(*(long *)(param_1 + 0x3ac) + *(long *)(param_1 + 0x3aa));
          cVar4 = *pcVar1;
          bVar3 = pcVar1[1];
          if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
            (**(code **)(param_1 + 0x2e))
                      (0,*param_1,0x15,pcVar1,2,param_1,*(undefined8 *)(param_1 + 0x30));
          }
          pcVar13 = *(code **)(param_1 + 0x18c);
          uVar10 = (uint)bVar3;
          if (pcVar13 == (code *)0x0) {
            pcVar13 = pcVar12;
            if (*(code **)(*(long *)(param_1 + 0x198) + 0x110) != (code *)0x0) {
              pcVar13 = *(code **)(*(long *)(param_1 + 0x198) + 0x110);
            }
            if (pcVar13 != (code *)0x0) goto LAB_003a3abc;
          }
          else {
LAB_003a3abc:
            (*pcVar13)(param_1,0x4004,CONCAT11(cVar4,bVar3));
          }
          if (cVar4 != '\x01') {
            if (cVar4 == '\x02') {
              param_1[10] = 1;
              *(uint *)(*(long *)(param_1 + 0x2a) + 0xf8) = uVar10;
              FUN_003c3950(param_1,0xffffffff,0x102,uVar10 + 1000,
                           "external/openssl/ssl/record/rec_layer_d1.c",0x267);
              FUN_003e7390(local_b8,0x10,&DAT_03bd1d93,uVar10);
              FUN_00481380(2,"SSL alert number ",local_b8);
              param_1[0x3b2] = 1;
              param_1[0x11] = param_1[0x11] | 2;
              FUN_003b9ac0(*(undefined8 *)(param_1 + 0x21e),*(undefined8 *)(param_1 + 0x174));
              return 0;
            }
            uVar7 = 0x2f;
            uVar8 = 0xf6;
            uVar9 = 0x270;
            goto LAB_003a3790;
          }
          *(uint *)(*(long *)(param_1 + 0x2a) + 0xf4) = uVar10;
          iVar5 = param_1[0x63d];
          param_1[0x3b2] = 1;
          param_1[0x63d] = iVar5 + 1;
          if (iVar5 + 1 == 5) {
            uVar7 = 10;
            uVar8 = 0x199;
            uVar9 = 0x24a;
            goto LAB_003a3790;
          }
          pcVar12 = pcVar13;
          if (uVar10 == 0) {
            param_1[0x11] = param_1[0x11] | 2;
            return 0;
          }
          goto LAB_003a3808;
        }
        if ((param_1[0x11] & 1) != 0) {
          *(undefined8 *)(param_1 + 0x3a6) = 0;
          param_1[10] = 1;
          param_1[0x3b2] = 1;
          return 0;
        }
        if (uVar10 != 0x14) {
          if (uVar10 == 0x16) {
            iVar5 = FUN_003c39f0(param_1);
            if (iVar5 == 0) {
              if ((*(ulong *)(param_1 + 0x3b4) != (ulong)**(ushort **)(param_1 + 0x63e)) ||
                 (*(ulong *)(param_1 + 0x3a6) < 0xc)) goto LAB_003a39a4;
              FUN_003cae10(*(undefined8 *)(param_1 + 0x3ac),local_b8);
              if (local_b8[0] == '\x14') {
                iVar5 = FUN_003a1740();
                if (iVar5 < 0) {
                  return 0xffffffff;
                }
                iVar5 = FUN_003ca8b0(param_1);
                if ((iVar5 < 1) && (iVar5 = FUN_003c39d0(param_1), iVar5 != 0)) {
                  return 0xffffffff;
                }
                bVar3 = *(byte *)(param_1 + 0x1a6);
                *(undefined8 *)(param_1 + 0x3a6) = 0;
                param_1[0x3b2] = 1;
              }
              else {
                iVar5 = FUN_003c38e0(param_1);
                if (iVar5 == 0) {
                  uVar7 = 0x50;
                  uVar8 = 0x44;
                  uVar9 = 0x2c5;
                  goto LAB_003a3790;
                }
                FUN_003c39e0(param_1,1);
                uVar7 = (**(code **)(param_1 + 0xc))(param_1);
                if ((int)uVar7 < 0) {
                  return uVar7;
                }
                if ((int)uVar7 == 0) {
                  return 0xffffffff;
                }
                bVar3 = *(byte *)(param_1 + 0x1a6);
              }
              if (((bVar3 >> 2 & 1) == 0) && (*(long *)(param_1 + 0x262) == 0)) {
                param_1[10] = 3;
                uVar7 = FUN_003b35d0(param_1);
                FUN_003e8cb0(uVar7,0xf);
                FUN_003e8cd0(uVar7,9);
                return 0xffffffff;
              }
              goto LAB_003a3808;
            }
            uVar10 = param_1[0x3a5];
          }
          if (uVar10 - 0x14 < 3) {
            uVar7 = 10;
            uVar8 = 0x44;
            uVar9 = 0x2f5;
          }
          else if (uVar10 == 0x17) {
            if (((*(int *)(*(long *)(param_1 + 0x2a) + 0x110) != 0) &&
                (*(int *)(*(long *)(param_1 + 0x2a) + 0x108) != 0)) &&
               (iVar5 = FUN_003c48b0(param_1), iVar5 != 0)) {
              *(undefined4 *)(*(long *)(param_1 + 0x2a) + 0x110) = 2;
              return 0xffffffff;
            }
            uVar7 = 10;
            uVar8 = 0xf5;
            uVar9 = 0x306;
          }
          else {
            uVar7 = 10;
            uVar8 = 0xf5;
            uVar9 = 0x2ea;
          }
          goto LAB_003a3790;
        }
LAB_003a39a4:
        *(undefined8 *)(param_1 + 0x3a6) = 0;
        param_1[0x3b2] = 1;
      } while( true );
    }
    uVar7 = 0x50;
    uVar8 = 0x44;
    uVar9 = 0x16a;
LAB_003a3790:
    FUN_003c3950(param_1,uVar7,0x102,uVar8,"external/openssl/ssl/record/rec_layer_d1.c",uVar9);
  }
  return 0xffffffff;
}


