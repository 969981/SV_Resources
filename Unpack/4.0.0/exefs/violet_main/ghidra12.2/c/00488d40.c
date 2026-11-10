/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00488d40; name: FUN_00488d40
 */


undefined8 FUN_00488d40(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar1 = FUN_0047e430(param_2);
  if (iVar1 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    iVar1 = 0;
    do {
      uVar4 = FUN_0047e450(param_2,iVar1);
      iVar2 = (**(code **)(param_1 + 0x48))(param_1,param_3,uVar4);
      if (iVar2 != 0) {
        if (((*(byte *)(param_3 + 0xe0) >> 5 & 1) == 0) ||
           (iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 0x98)), iVar2 != 1)) {
          uVar7 = *(undefined8 *)(param_1 + 0x98);
          iVar2 = FUN_0047e430(uVar7);
          if (0 < iVar2) {
            iVar8 = 0;
            do {
              uVar5 = FUN_0047e450(uVar7,iVar8);
              iVar3 = FUN_00483b60(uVar5,uVar4);
              if (iVar3 == 0) goto LAB_00488d9c;
              iVar8 = iVar8 + 1;
            } while (iVar2 != iVar8);
          }
        }
        iVar2 = FUN_004874f0(param_1,uVar4,0xffffffff);
        uVar6 = uVar4;
        if (iVar2 != 0) {
          return uVar4;
        }
      }
LAB_00488d9c:
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(param_2);
    } while (iVar1 < iVar2);
  }
  return uVar6;
}


