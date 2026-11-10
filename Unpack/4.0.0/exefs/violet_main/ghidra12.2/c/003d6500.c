/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d6500; name: FUN_003d6500
 */


undefined8 FUN_003d6500(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  undefined2 *puVar14;
  long lVar15;
  int local_48 [2];
  ushort local_34 [2];
  
  uVar6 = FUN_0043e840(param_3);
  iVar4 = (int)uVar6;
  if (iVar4 == -1) {
    return uVar6;
  }
  if (((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0) ||
     (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304 || iVar3 == 0x10000)) {
    lVar7 = FUN_003d62c0(param_2);
    if (lVar7 != 0) goto LAB_003d6570;
  }
  else {
    if (iVar4 == 6) {
      iVar4 = 0x390;
    }
    else if (iVar4 == 0x74) {
      uVar6 = 0x2f;
      uVar8 = 0x172;
      uVar9 = 0x411;
      goto LAB_003d66c4;
    }
    lVar7 = FUN_003d62c0(param_2);
    if ((lVar7 != 0) &&
       ((iVar3 < 0x304 || iVar3 == 0x10000 ||
        ((*(int *)(lVar7 + 0xc) != 0x40 && (*(int *)(lVar7 + 0xc) != 0x2a3)))))) {
LAB_003d6570:
      if ((iVar4 == *(int *)(lVar7 + 0x14)) || ((iVar4 == 6 && (*(int *)(lVar7 + 0x14) == 0x390))))
      {
        uVar6 = FUN_0043e840(param_3);
        iVar3 = FUN_003af4f0(uVar6,local_48);
        if ((iVar3 == 0) || (*(int *)(lVar7 + 0x18) != local_48[0])) {
          uVar6 = 0x2f;
          uVar8 = 0x172;
          uVar9 = 0x429;
          goto LAB_003d66c4;
        }
        if (iVar4 == 0x198) {
          iVar4 = FUN_003d69f0(param_1,param_3);
          if (iVar4 == 0) {
            uVar6 = 0x2f;
            uVar8 = 0xa2;
            uVar9 = 0x434;
            goto LAB_003d66c4;
          }
          piVar10 = *(int **)(param_1 + 8);
          uVar11 = *(uint *)(*(long *)(piVar10 + 0x30) + 0x60);
          if (((((uVar11 >> 3 & 1) == 0) && (0x303 < *piVar10)) && (*piVar10 != 0x10000)) ||
             ((*(byte *)(*(long *)(param_1 + 0x550) + 0x1e) & 3) != 0)) {
            FUN_0043e6b0(param_3);
            FUN_0040c210();
            iVar4 = FUN_0040d580();
            if ((*(int *)(lVar7 + 0x20) != 0) && (iVar4 != *(int *)(lVar7 + 0x20))) {
              uVar6 = 0x2f;
              uVar8 = 0x17a;
              uVar9 = 0x43f;
              goto LAB_003d66c4;
            }
            piVar10 = *(int **)(param_1 + 8);
            uVar11 = *(uint *)(*(long *)(piVar10 + 0x30) + 0x60);
          }
          if ((((uVar11 >> 3 & 1) == 0) && (0x303 < *piVar10)) && (*piVar10 != 0x10000)) {
            lVar12 = *(long *)(param_1 + 0x550);
            uVar11 = *(uint *)(lVar12 + 0x1c);
          }
          else {
            lVar12 = FUN_0043e6b0(param_3);
            if (lVar12 == 0) {
LAB_003d679c:
              lVar12 = 0;
            }
            else {
              FUN_0040c210();
              iVar4 = FUN_0040d580();
              lVar12 = 0;
              piVar10 = &DAT_03cdd004;
              do {
                if (lVar12 == 0x1e) goto LAB_003d679c;
                iVar3 = *piVar10;
                lVar12 = lVar12 + 1;
                piVar10 = piVar10 + 3;
              } while (iVar3 != iVar4);
            }
            iVar4 = FUN_003d5be0(param_1,lVar12,1);
            if (iVar4 == 0) {
              uVar6 = 0x2f;
              uVar8 = 0x17a;
              uVar9 = 0x447;
              goto LAB_003d66c4;
            }
            lVar12 = *(long *)(param_1 + 0x550);
            uVar11 = *(uint *)(lVar12 + 0x1c);
            if (((param_2 & 0xfeff) != 0x403) && ((uVar11 & 0x30000) != 0)) {
              uVar6 = 0x28;
              uVar8 = 0x172;
              uVar9 = 0x450;
              goto LAB_003d66c4;
            }
          }
        }
        else {
          lVar12 = *(long *)(param_1 + 0x550);
          uVar11 = *(uint *)(lVar12 + 0x1c);
          if ((uVar11 & 0x30000) != 0) {
            uVar6 = 0x28;
            uVar8 = 0x172;
            uVar9 = 0x457;
            goto LAB_003d66c4;
          }
        }
        uVar1 = uVar11 & 0x30000;
        uVar2 = (ushort)(param_2 >> 8);
        if (uVar1 == 0x30000) {
          lVar12 = 2;
          puVar14 = &DAT_03cdd17e;
LAB_003d68b8:
          lVar15 = 0;
          do {
            if ((uint)(ushort)puVar14[lVar15] == (param_2 & 0xffff)) goto LAB_003d6888;
            lVar15 = lVar15 + 1;
          } while (lVar12 != lVar15);
LAB_003d68d4:
          if (((uVar11 & 0x30001) != 0) || (*(int *)(lVar7 + 0xc) != 0x40)) {
            uVar6 = 0x28;
            uVar8 = 0x172;
            uVar9 = 0x466;
            goto LAB_003d66c4;
          }
LAB_003d68f0:
          lVar12 = FUN_003b00f0(*(undefined4 *)(lVar7 + 0x10));
          if (lVar12 == 0) {
            uVar6 = 0x28;
            uVar8 = 0x170;
            uVar9 = 0x46b;
            goto LAB_003d66c4;
          }
          local_34[0] = uVar2 & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
          if (*(int *)(lVar7 + 0xc) == 0) goto LAB_003d6948;
          lVar15 = FUN_003b00f0(*(undefined4 *)(lVar7 + 0x10));
          if (lVar15 != 0) {
            iVar4 = FUN_0043b720();
            iVar4 = iVar4 << 2;
            goto LAB_003d6968;
          }
        }
        else {
          if (uVar1 == 0x20000) {
            lVar12 = 1;
            puVar14 = &DAT_03cdd180;
            goto LAB_003d68b8;
          }
          if (uVar1 == 0x10000) {
            lVar12 = 1;
            puVar14 = &DAT_03cdd17e;
            goto LAB_003d68b8;
          }
          if ((*(int *)(param_1 + 0x38) == 1) &&
             (puVar14 = *(undefined2 **)(lVar12 + 0x1a8), puVar14 != (undefined2 *)0x0)) {
            plVar13 = (long *)(lVar12 + 0x1b0);
          }
          else {
            puVar14 = *(undefined2 **)(lVar12 + 0x198);
            if (puVar14 == (undefined2 *)0x0) {
              lVar12 = 0x1a;
              puVar14 = &DAT_03cdd182;
              goto LAB_003d68b8;
            }
            plVar13 = (long *)(lVar12 + 0x1a0);
          }
          lVar12 = *plVar13;
          if (lVar12 != 0) goto LAB_003d68b8;
          lVar15 = 0;
LAB_003d6888:
          if (lVar15 == lVar12) goto LAB_003d68d4;
          if (*(int *)(lVar7 + 0xc) != 0) goto LAB_003d68f0;
          local_34[0] = uVar2 & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
          lVar12 = 0;
LAB_003d6948:
          iVar4 = 0xe0;
          if (*(short *)(lVar7 + 8) != 0x808) {
            iVar4 = 0;
          }
          if (*(short *)(lVar7 + 8) == 0x807) {
            iVar4 = 0x80;
          }
          else {
LAB_003d6968:
            if (iVar4 == 0) goto LAB_003d69cc;
          }
          if (lVar12 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_0043b710(lVar12);
          }
          iVar4 = FUN_003af490(param_1,0x5000d,iVar4,uVar5,local_34);
          if (iVar4 != 0) {
            *(long *)(*(long *)(param_1 + 0xa8) + 0x308) = lVar7;
            return 1;
          }
        }
LAB_003d69cc:
        uVar6 = 0x28;
        uVar8 = 0x172;
        uVar9 = 0x47a;
        goto LAB_003d66c4;
      }
    }
  }
  uVar6 = 0x2f;
  uVar8 = 0x172;
  uVar9 = 0x422;
LAB_003d66c4:
  FUN_003c3950(param_1,uVar6,0x14d,uVar8,"external/openssl/ssl/t1_lib.c",uVar9);
  return 0;
}


