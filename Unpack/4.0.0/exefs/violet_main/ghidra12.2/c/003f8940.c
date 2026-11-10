/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f8940; name: FUN_003f8940
 */


undefined1 * FUN_003f8940(long *param_1,uint param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  
  iVar4 = FUN_003eb480();
  if (iVar4 == 0) {
    if (param_2 - 1 < 7) {
      iVar4 = FUN_003ec670(param_1);
      if ((*param_1 != 0) && ((int)param_1[1] != 0)) {
        iVar5 = FUN_003eb2b0(param_1);
        uVar13 = (ulong)iVar5;
        puVar6 = (undefined1 *)
                 FUN_00452c30(uVar13 + 1,"external/openssl/crypto/bn/bn_intern.c",0x3c);
        if (puVar6 == (undefined1 *)0x0) {
          uVar7 = 0x41;
          uVar8 = 0x42;
        }
        else {
          uVar14 = (ulong)param_2;
          uVar1 = 1 << (ulong)(param_2 & 0x1f);
          uVar2 = uVar1 * 2;
          uVar3 = uVar2 - 1 >> 1;
          uVar12 = *(uint *)*param_1 & uVar2 - 1;
          uVar9 = 0;
          if (iVar4 == 0) {
            do {
              if (uVar12 == 0) {
                if (uVar13 <= uVar14 + uVar9 + 1) goto LAB_003f8c78;
                uVar12 = 0;
LAB_003f8b1c:
                uVar10 = 0;
              }
              else {
                if ((uVar12 & 1) == 0) goto LAB_003f8b1c;
                if ((uVar12 & uVar1) == 0) {
                  uVar11 = 1;
                  uVar10 = uVar12;
                }
                else {
                  uVar10 = uVar12 + uVar1 * -2;
                  if (uVar13 <= uVar14 + uVar9 + 1) {
                    uVar10 = uVar12 & uVar3;
                  }
                  uVar11 = uVar10 & 1;
                }
                if ((((int)uVar10 <= (int)-uVar1) || ((int)uVar1 <= (int)uVar10)) || (uVar11 == 0))
                goto LAB_003f8c9c;
                uVar12 = uVar12 - uVar10;
                if (((uVar12 != 0) && (uVar12 != uVar2)) && (uVar12 != uVar1)) goto LAB_003f8bd0;
              }
              puVar6[uVar9] = (char)uVar10;
              iVar4 = FUN_003ec150(param_1,param_2 + (int)uVar9 + 1);
              uVar12 = (iVar4 << (ulong)(param_2 & 0x1f)) + ((int)uVar12 >> 1);
              uVar9 = uVar9 + 1;
            } while ((int)uVar12 <= (int)uVar2);
          }
          else {
            do {
              if (uVar12 == 0) {
                if (uVar13 <= uVar14 + uVar9 + 1) goto LAB_003f8c78;
                uVar12 = 0;
LAB_003f8a60:
                uVar10 = 0;
              }
              else {
                if ((uVar12 & 1) == 0) goto LAB_003f8a60;
                if ((uVar12 & uVar1) == 0) {
                  uVar11 = 1;
                  uVar10 = uVar12;
                }
                else {
                  uVar10 = uVar12 + uVar1 * -2;
                  if (uVar13 <= uVar14 + uVar9 + 1) {
                    uVar10 = uVar12 & uVar3;
                  }
                  uVar11 = uVar10 & 1;
                }
                if ((((int)uVar10 <= (int)-uVar1) || ((int)uVar1 <= (int)uVar10)) || (uVar11 == 0))
                goto LAB_003f8c9c;
                uVar12 = uVar12 - uVar10;
                if (((uVar12 != 0) && (uVar12 != uVar2)) && (uVar12 != uVar1)) goto LAB_003f8bd0;
              }
              puVar6[uVar9] = -(char)uVar10;
              iVar4 = FUN_003ec150(param_1,param_2 + (int)uVar9 + 1);
              uVar12 = (iVar4 << (ulong)(param_2 & 0x1f)) + ((int)uVar12 >> 1);
              uVar9 = uVar9 + 1;
            } while ((int)uVar12 <= (int)uVar2);
          }
          uVar7 = 0x44;
          uVar8 = 0x7c;
        }
        goto LAB_003f89d8;
      }
      uVar7 = 0x37;
    }
    else {
      uVar7 = 0x2b;
    }
    FUN_004806c0(3,0x8e,0x44,"external/openssl/crypto/bn/bn_intern.c",uVar7);
    puVar6 = (undefined1 *)0x0;
    goto LAB_003f8c08;
  }
  puVar6 = (undefined1 *)FUN_00452c30(1,"external/openssl/crypto/bn/bn_intern.c",0x1f);
  if (puVar6 != (undefined1 *)0x0) {
    uVar9 = 1;
    *puVar6 = 0;
    goto LAB_003f8994;
  }
  uVar7 = 0x41;
  uVar8 = 0x21;
  puVar6 = (undefined1 *)0x0;
  goto LAB_003f89d8;
LAB_003f8c78:
  if (uVar9 <= uVar13 + 1) {
LAB_003f8994:
    *param_3 = uVar9;
    return puVar6;
  }
  uVar7 = 0x44;
  uVar8 = 0x82;
  goto LAB_003f89d8;
LAB_003f8c9c:
  uVar7 = 0x44;
  uVar8 = 0x65;
  goto LAB_003f89d8;
LAB_003f8bd0:
  uVar7 = 0x44;
  uVar8 = 0x71;
LAB_003f89d8:
  FUN_004806c0(3,0x8e,uVar7,"external/openssl/crypto/bn/bn_intern.c",uVar8);
LAB_003f8c08:
  FUN_00452f80(puVar6,"external/openssl/crypto/bn/bn_intern.c",0x89);
  return (undefined1 *)0x0;
}


