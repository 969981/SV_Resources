/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ce41c; name: FUN_018ce41c
 */


void FUN_018ce41c(long param_1,long *param_2,uint param_3,undefined1 (*param_4) [16])

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  if ((param_3 & 0xffff) == 0) {
    return;
  }
  if (param_4 != (undefined1 (*) [16])0x0) {
    auVar7 = (**(code **)(*param_2 + 0x240))(param_2,param_3);
    *param_4 = auVar7;
  }
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar6 = param_3 & 0xffff;
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x30),
                                uVar2);
  if (uVar6 < 6) {
    (**(code **)(*plVar3 + 0x608))();
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x14,uVar2);
    cVar1 = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),uVar2);
    if (cVar1 == '\n') {
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = 0x90;
    uVar6 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x610))(plVar3,param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = 0x15;
  }
  FUN_0129aff0(uVar4,uVar5,uVar2,uVar6);
  return;
}


