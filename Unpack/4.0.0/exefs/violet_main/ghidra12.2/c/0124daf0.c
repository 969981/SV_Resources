/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124daf0; name: FUN_0124daf0
 */


void FUN_0124daf0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  cVar1 = *(char *)(param_3 + 1);
  lVar4 = FUN_01243584();
  plVar5 = (long *)*param_3;
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(*plVar5 + 0x98))(plVar5);
    uVar3 = (**(code **)(*plVar5 + 0x98))(plVar5);
    FUN_0167ebc0(*(undefined8 *)(lVar4 + 0x18),0xcb,uVar2,0x110,uVar3,0xffff0000);
    return;
  }
  uVar2 = (**(code **)(*plVar5 + 0x98))(plVar5);
  FUN_0297e9d0(lVar4,uVar2,*(undefined1 *)(param_3 + 1));
  return;
}


