/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043ff60; name: FUN_0043ff60
 */


long FUN_0043ff60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  plVar2 = (long *)FUN_00440220();
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  lVar6 = *plVar2;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x38) == 0)) {
    uVar3 = 0x93;
    uVar5 = 0x4a;
LAB_00440034:
    uVar4 = 0x96;
LAB_00440038:
    FUN_004806c0(6,uVar3,uVar4,"external/openssl/crypto/evp/pmeth_gn.c",uVar5);
  }
  else {
    *(undefined4 *)(plVar2 + 4) = 4;
    if ((*(code **)(lVar6 + 0x30) != (code *)0x0) &&
       (iVar1 = (**(code **)(lVar6 + 0x30))(plVar2), iVar1 < 1)) {
      lVar6 = 0;
      *(undefined4 *)(plVar2 + 4) = 0;
      goto LAB_00440040;
    }
    iVar1 = FUN_00440390(plVar2,0xffffffff,4,6,param_4,param_3);
    if (0 < iVar1) {
      if ((*plVar2 == 0) || (*(long *)(*plVar2 + 0x38) == 0)) {
        uVar3 = 0x92;
        uVar5 = 0x5c;
        goto LAB_00440034;
      }
      if ((int)plVar2[4] != 4) {
        uVar3 = 0x92;
        uVar4 = 0x97;
        uVar5 = 0x60;
        goto LAB_00440038;
      }
      lVar6 = FUN_0043def0();
      if ((lVar6 == 0) || (iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,lVar6), 0 < iVar1))
      goto LAB_00440040;
      FUN_0043e1f0(lVar6);
    }
  }
  lVar6 = 0;
LAB_00440040:
  FUN_00440340(plVar2);
  return lVar6;
}


