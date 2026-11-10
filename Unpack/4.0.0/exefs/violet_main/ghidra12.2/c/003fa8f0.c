/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fa8f0; name: FUN_003fa8f0
 */


ulong FUN_003fa8f0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined1 auStack_78 [4];
  int local_74;
  ulong local_70;
  long local_68;
  
  lVar4 = FUN_003f3110();
  if (lVar4 == 0) {
    FUN_004806c0(0xd,0x6b,0x41,"external/openssl/crypto/asn1/a_d2i_fp.c",0x6e);
  }
  else {
    FUN_004808e0();
    iVar12 = 0;
    uVar8 = 0;
    uVar13 = 0;
    do {
      while( true ) {
        while( true ) {
          uVar9 = uVar13 - uVar8;
          if (uVar9 < 9) {
            uVar11 = 8 - uVar9;
            if ((CARRY8(uVar11,uVar13)) || (lVar5 = FUN_003f3310(lVar4,uVar11 + uVar13), lVar5 == 0)
               ) {
              uVar6 = 0x41;
              uVar7 = 0x78;
              goto LAB_003faaec;
            }
            uVar3 = FUN_003e8ce0(param_1,*(long *)(lVar4 + 8) + uVar13,uVar11 & 0xffffffff);
            if ((uVar9 == 0) && ((int)uVar3 < 0)) {
              uVar6 = 0x8e;
              uVar7 = 0x7d;
              goto LAB_003faaec;
            }
            if (0 < (int)uVar3) {
              bVar2 = CARRY8(uVar13,(ulong)uVar3);
              uVar13 = uVar13 + uVar3;
              if (bVar2) {
                uVar6 = 0x9b;
                uVar7 = 0x82;
                goto LAB_003faaec;
              }
              uVar9 = uVar13 - uVar8;
            }
          }
          lVar5 = *(long *)(lVar4 + 8) + uVar8;
          local_68 = lVar5;
          uVar3 = FUN_003debf0(&local_68,&local_70,&local_74,auStack_78,uVar9);
          if ((uVar3 >> 7 & 1) != 0) {
            uVar9 = FUN_00480c60();
            if ((uVar9 & 0xfff) != 0x9b) goto LAB_003faaf0;
            FUN_004808e0();
          }
          uVar8 = uVar8 + (long)((int)local_68 - (int)lVar5);
          if ((uVar3 & 1) == 0) break;
          if (iVar12 == -1) {
            uVar6 = 0x7b;
            uVar7 = 0x9c;
            goto LAB_003faaec;
          }
          iVar12 = iVar12 + 1;
        }
        if (((iVar12 != 0) && (local_70 == 0)) && (local_74 == 0)) break;
        uVar9 = local_70 - (uVar13 - uVar8);
        if (uVar13 - uVar8 <= local_70 && uVar9 != 0) {
          if ((uVar9 >> 0x1f != 0) || (CARRY8(uVar13,uVar9))) {
            uVar6 = 0x9b;
            uVar7 = 0xb1;
            goto LAB_003faaec;
          }
          if (uVar9 != 0) {
            uVar11 = 0x4000;
            do {
              uVar1 = uVar11;
              if (uVar9 <= uVar11) {
                uVar1 = uVar9;
              }
              lVar5 = FUN_003f3310(lVar4,uVar1 + uVar13);
              if (lVar5 == 0) {
                uVar6 = 0x41;
                uVar7 = 0xbe;
                goto LAB_003faaec;
              }
              if (uVar1 != 0) {
                uVar10 = uVar1;
                do {
                  uVar3 = FUN_003e8ce0(param_1,*(long *)(lVar4 + 8) + uVar13,uVar10 & 0xffffffff);
                  if ((int)uVar3 < 1) {
                    uVar6 = 0x8e;
                    uVar7 = 0xc6;
                    goto LAB_003faaec;
                  }
                  uVar13 = uVar13 + uVar3;
                  uVar10 = uVar10 - uVar3;
                } while (uVar10 != 0);
              }
              uVar9 = uVar9 - uVar1;
              uVar11 = uVar11 << (ulong)(uVar11 < 0x3fffffff);
            } while (uVar9 != 0);
          }
        }
        bVar2 = CARRY8(local_70,uVar8);
        uVar8 = local_70 + uVar8;
        if (bVar2) {
          uVar6 = 0x9b;
          uVar7 = 0xd5;
          goto LAB_003faaec;
        }
        if (iVar12 == 0) goto LAB_003faab0;
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
LAB_003faab0:
    if (uVar8 >> 0x1f == 0) {
      *param_2 = lVar4;
      goto LAB_003fab1c;
    }
    uVar6 = 0x9b;
    uVar7 = 0xe1;
LAB_003faaec:
    FUN_004806c0(0xd,0x6b,uVar6,"external/openssl/crypto/asn1/a_d2i_fp.c",uVar7);
LAB_003faaf0:
    FUN_003f3160(lVar4);
  }
  uVar8 = 0xffffffff;
LAB_003fab1c:
  return uVar8 & 0xffffffff;
}


