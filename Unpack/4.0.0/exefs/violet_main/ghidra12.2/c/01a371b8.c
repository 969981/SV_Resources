/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a371b8; name: FUN_01a371b8
 */


undefined8
FUN_01a371b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  uVar8 = *(undefined8 *)(param_4 + 0x70);
  uVar4 = FUN_00f7e284(param_4);
  uVar4 = FUN_00f7e3c8(uVar4,param_5 & 0xff);
  uVar5 = FUN_00f7e27c(param_4);
  bVar1 = FUN_010f9114(uVar5,param_5);
  if (bVar1 == 0) {
LAB_01a37218:
    uVar5 = 0;
  }
  else {
    uVar9 = 0;
    do {
      plVar6 = (long *)FUN_0124e4c0(uVar4,uVar9);
      uVar7 = (**(code **)(*plVar6 + 0x200))();
      if ((uVar7 & 1) == 0) {
        uVar3 = (**(code **)(*plVar6 + 0x2b0))(plVar6,uVar8);
        uVar7 = FUN_0161bb5c(param_3,0x86c421489c90c385,uVar3);
        if (((uVar7 & 1) != 0) || (sVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6), sVar2 == 0x32))
        goto LAB_01a37218;
      }
      uVar9 = uVar9 + 1;
    } while (bVar1 != uVar9);
    uVar9 = 0;
    do {
      uVar5 = FUN_0124e4c0(uVar4,uVar9);
      uVar5 = FUN_01a372f4(uVar5,param_1,param_2,param_3,param_4);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar9 = uVar9 + 1;
    } while (bVar1 != uVar9);
  }
  return uVar5;
}


