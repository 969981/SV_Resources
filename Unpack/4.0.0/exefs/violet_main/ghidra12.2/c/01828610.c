/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01828610; name: FUN_01828610
 */


undefined8 FUN_01828610(long param_1,undefined8 param_2,uint param_3)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  
  plVar5 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  sVar1 = (**(code **)(*plVar5 + 0xf8))();
  uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5);
  if (1 < uVar2) {
    param_3 = param_3 >> (ulong)(2 < param_3 && sVar1 == 0x52);
    if (param_3 == 0) {
      param_3 = 1;
    }
    uVar3 = (**(code **)(*plVar5 + 0x108))(plVar5);
    uVar4 = FUN_018286d0(uVar2,param_3);
    if ((uVar3 & 0xffff) <= uVar4) {
      return 1;
    }
  }
  return 0;
}


