/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01689990; name: FUN_01689990
 */


void FUN_01689990(long param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = FUN_01689a40(param_1,param_3);
  FUN_01689a7c(param_2,param_3);
  FUN_0124e498(param_1,uVar2);
  cVar1 = FUN_00f7e454();
  if (cVar1 == '\0') {
    FUN_0123de68(param_1);
    uVar3 = FUN_01689a74();
    FUN_01689b18(uVar3,uVar2);
  }
  lVar5 = *(long *)(param_1 + 0x20);
  plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 0x30),
                                param_3);
  (**(code **)(*plVar4 + 0x550))(plVar4,1,1);
  FUN_0129aff0(*(undefined8 *)(lVar5 + 0x18),0x37,param_3,1,1);
  return;
}


