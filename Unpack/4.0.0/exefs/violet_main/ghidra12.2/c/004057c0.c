/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004057c0; name: FUN_004057c0
 */


long FUN_004057c0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 local_38;
  
  local_38 = *param_2;
  puVar2 = (undefined4 *)FUN_003e1880(0,&local_38,param_3,&DAT_044a3da0);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004806c0(0x10,0x92,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x3e9);
    return 0;
  }
  if (((param_1 == (long *)0x0) || (lVar7 = *param_1, lVar7 == 0)) &&
     (lVar7 = FUN_0040ba50(), lVar7 == 0)) {
    uVar4 = 0x41;
    uVar5 = 0x3ef;
  }
  else {
    if (*(long *)(puVar2 + 4) == 0) {
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_00405904;
    }
    else {
      FUN_0040ca30();
      lVar3 = FUN_00405510(*(undefined8 *)(puVar2 + 4));
      *(long *)(lVar7 + 0x18) = lVar3;
      if (lVar3 == 0) {
LAB_00405904:
        uVar4 = 0x10;
        uVar5 = 0x3fe;
        goto LAB_00405970;
      }
      if (**(int **)(puVar2 + 4) == 1) {
        *(undefined4 *)(lVar3 + 0x28) = 1;
      }
    }
    *(undefined4 *)(lVar7 + 0x10) = *puVar2;
    lVar3 = *(long *)(puVar2 + 2);
    if (lVar3 == 0) {
      uVar4 = 0x7d;
      uVar5 = 0x40a;
    }
    else {
      uVar4 = FUN_003df520(lVar3);
      iVar1 = FUN_003df510(lVar3);
      iVar1 = FUN_0040c480(lVar7,uVar4,(long)iVar1);
      if (iVar1 == 0) goto LAB_00405974;
      FUN_0040cc00(*(undefined8 *)(lVar7 + 0x20));
      lVar3 = FUN_0040cf10(*(undefined8 *)(lVar7 + 0x18));
      *(long *)(lVar7 + 0x20) = lVar3;
      if (lVar3 == 0) {
        uVar5 = 0x411;
      }
      else {
        if (*(long *)(puVar2 + 6) == 0) {
          pcVar6 = *(code **)(**(long **)(lVar7 + 0x18) + 0x168);
          if ((pcVar6 == (code *)0x0) || (iVar1 = (*pcVar6)(lVar7), iVar1 == 0)) goto LAB_00405974;
          *(uint *)(lVar7 + 0x30) = *(uint *)(lVar7 + 0x30) | 2;
LAB_004059e0:
          if (param_1 != (long *)0x0) {
            *param_1 = lVar7;
          }
          FUN_003e4550(puVar2,&DAT_044a3da0);
          *param_2 = local_38;
          return lVar7;
        }
        uVar4 = FUN_003df520();
        iVar1 = FUN_003df510(*(undefined8 *)(puVar2 + 6));
        iVar1 = FUN_0040c350(lVar7,uVar4,(long)iVar1,0);
        if (iVar1 != 0) goto LAB_004059e0;
        uVar5 = 0x41c;
      }
      uVar4 = 0x10;
    }
  }
LAB_00405970:
  FUN_004806c0(0x10,0x92,uVar4,"external/openssl/crypto/ec/ec_asn1.c",uVar5);
LAB_00405974:
  if ((param_1 == (long *)0x0) || (*param_1 != lVar7)) {
    FUN_0040bae0(lVar7);
  }
  FUN_003e4550(puVar2,&DAT_044a3da0);
  return 0;
}


