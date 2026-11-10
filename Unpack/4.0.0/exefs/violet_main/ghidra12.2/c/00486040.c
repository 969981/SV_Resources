/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00486040; name: FUN_00486040
 */


undefined8 FUN_00486040(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar5 = 0x69;
    uVar6 = 0x108;
  }
  else {
    if (*(long *)(param_1 + 0x98) == 0) {
      lVar9 = *(long *)(param_1 + 0xe8);
      iVar1 = FUN_00485cf0();
      if (iVar1 == 0) {
        FUN_004806c0(0xb,0x7f,0x44,"external/openssl/crypto/x509/x509_vfy.c",0x118);
        uVar7 = 1;
        goto LAB_00486098;
      }
      lVar3 = FUN_0047dcc0();
      *(long *)(param_1 + 0x98) = lVar3;
      if ((lVar3 == 0) || (iVar1 = FUN_0047e2f0(lVar3,*(undefined8 *)(param_1 + 8)), iVar1 == 0)) {
        FUN_0048c830(*(undefined8 *)(param_1 + 8));
        FUN_004806c0(0xb,0x7f,0x41,"external/openssl/crypto/x509/x509_vfy.c",0x124);
        uVar7 = 0x11;
        goto LAB_00486098;
      }
      *(undefined4 *)(param_1 + 0x94) = 1;
      lVar3 = FUN_00483c90(*(undefined8 *)(param_1 + 8));
      iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
      if (0 < iVar1) {
        if (lVar3 != 0) {
          if (4 < iVar1) {
            iVar1 = 5;
          }
          iVar2 = FUN_0043dbd0();
          if (*(int *)(&DAT_03d064f0 + (ulong)(iVar1 - 1) * 4) <= iVar2) goto LAB_00486158;
        }
        lVar3 = *(long *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0xac) = 0;
        if (lVar3 == 0) {
          lVar3 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),0);
        }
        *(undefined4 *)(param_1 + 0xb0) = 0x42;
        *(long *)(param_1 + 0xb8) = lVar3;
        uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
      }
LAB_00486158:
      if ((lVar9 == 0) || (iVar1 = FUN_0047e430(*(undefined8 *)(lVar9 + 8)), iVar1 < 1)) {
LAB_004862a0:
        uVar5 = FUN_00486390(param_1);
        iVar1 = (int)uVar5;
      }
      else {
        lVar3 = *(long *)(param_1 + 0xe8);
        lVar9 = *(long *)(param_1 + 8);
        FUN_0048c830(*(undefined8 *)(lVar3 + 0x20));
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x2c) = 0xffffffffffffffff;
        iVar1 = FUN_00488e60(*(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0xe8),
                             *(undefined8 *)(param_1 + 8),0);
        if (iVar1 == 0) {
          if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x28) & 5) != 0)) ||
             (-1 < *(int *)(lVar3 + 0x2c))) goto LAB_004862a0;
          FUN_00487770(0,*(undefined8 *)(param_1 + 0x98));
          iVar1 = FUN_00483d70(0,lVar9,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0xac) = 0;
            lVar3 = lVar9;
            if (lVar9 == 0) {
              lVar3 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),0);
            }
            *(long *)(param_1 + 0xb8) = lVar3;
            *(int *)(param_1 + 0xb0) = iVar1;
            uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar5 == 0) goto LAB_00486368;
          }
          *(undefined4 *)(param_1 + 0xac) = 0;
          if (lVar9 == 0) {
            lVar9 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),0);
          }
          *(undefined4 *)(param_1 + 0xb0) = 0x41;
          pcVar8 = *(code **)(param_1 + 0x38);
          *(long *)(param_1 + 0xb8) = lVar9;
          uVar5 = 0;
        }
        else {
          FUN_00487770(0,*(undefined8 *)(param_1 + 0x98));
          uVar6 = DAT_03cb5490;
          if (iVar1 < 1) {
            *(long *)(param_1 + 0xb8) = lVar9;
            uVar5 = 0xffffffff;
            *(undefined8 *)(param_1 + 0xac) = uVar6;
            goto LAB_00486368;
          }
          iVar1 = FUN_00483d70(0,lVar9,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0xac) = 0;
            lVar4 = lVar9;
            if (lVar9 == 0) {
              lVar4 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),0);
            }
            *(long *)(param_1 + 0xb8) = lVar4;
            *(int *)(param_1 + 0xb0) = iVar1;
            uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar5 == 0) goto LAB_00486368;
          }
          if (((*(byte *)(lVar3 + 0x38) & 1) == 0) &&
             (uVar5 = FUN_004888f0(param_1), (int)uVar5 == 0)) goto LAB_00486368;
          pcVar8 = *(code **)(param_1 + 0x38);
          uVar5 = 1;
          *(undefined4 *)(param_1 + 0xac) = 0;
          *(long *)(param_1 + 0xb8) = lVar9;
        }
        uVar5 = (*pcVar8)(uVar5,param_1);
        iVar1 = (int)uVar5;
      }
      if (0 < iVar1) {
        return uVar5;
      }
LAB_00486368:
      if (*(int *)(param_1 + 0xb0) == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 1;
        return uVar5;
      }
      return uVar5;
    }
    uVar5 = 0x42;
    uVar6 = 0x112;
  }
  FUN_004806c0(0xb,0x7f,uVar5,"external/openssl/crypto/x509/x509_vfy.c",uVar6);
  uVar7 = 0x45;
LAB_00486098:
  *(undefined4 *)(param_1 + 0xb0) = uVar7;
  return 0xffffffff;
}


