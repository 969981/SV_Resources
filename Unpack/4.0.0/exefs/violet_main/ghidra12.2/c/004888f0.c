/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004888f0; name: FUN_004888f0
 */


undefined8 FUN_004888f0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(lVar8 + 0x38) != 0) {
    iVar1 = FUN_0047e430();
    plVar6 = (long *)(lVar8 + 0x48);
    if (*plVar6 != 0) {
      FUN_00452f80(*plVar6,"external/openssl/crypto/x509/x509_vfy.c",0x2ef);
      *plVar6 = 0;
    }
    if (0 < iVar1) {
      iVar7 = 0;
      do {
        uVar3 = FUN_0047e450(*(undefined8 *)(lVar8 + 0x38),iVar7);
        iVar2 = FUN_0049b550(uVar5,uVar3,0,*(undefined4 *)(lVar8 + 0x40),plVar6);
        if (0 < iVar2) goto LAB_004889bc;
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
    }
    if (iVar1 != 0) {
      lVar4 = *(long *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar4 == 0) {
        lVar4 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(undefined4 *)(param_1 + 0xb0) = 0x3e;
      *(long *)(param_1 + 0xb8) = lVar4;
      uVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
  }
LAB_004889bc:
  if ((*(long *)(lVar8 + 0x50) != 0) &&
     (iVar1 = FUN_0049bab0(uVar5,*(long *)(lVar8 + 0x50),*(undefined8 *)(lVar8 + 0x58),0), iVar1 < 1
     )) {
    lVar4 = *(long *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar4 == 0) {
      lVar4 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x3f;
    *(long *)(param_1 + 0xb8) = lVar4;
    uVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  if ((*(long *)(lVar8 + 0x60) != 0) &&
     (iVar1 = FUN_0049bb50(uVar5,*(long *)(lVar8 + 0x60),*(undefined8 *)(lVar8 + 0x68),0), iVar1 < 1
     )) {
    lVar8 = *(long *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar8 == 0) {
      lVar8 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x40;
    *(long *)(param_1 + 0xb8) = lVar8;
    uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  return 1;
}


