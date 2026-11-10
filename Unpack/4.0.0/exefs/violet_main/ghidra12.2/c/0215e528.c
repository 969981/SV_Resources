/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215e528; name: FUN_0215e528
 */


undefined8 FUN_0215e528(long param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 auStack_40 [24];
  long *local_28;
  
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    FUN_01df1cb8(auStack_40);
    FUN_01282188(auStack_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    lVar3 = *(long *)(param_1 + 0x930);
    piVar1 = (int *)(lVar3 + 0x20);
    if (*(int *)(lVar3 + 0x28) != 0) {
      piVar1 = (int *)(lVar3 + 0x24);
    }
    *(int *)(param_1 + 0x9e0) = *(int *)(lVar3 + 0x14) + *piVar1 * *(int *)(lVar3 + 0x10);
    FUN_0143fe84(param_1);
    FUN_0215bf24(param_1,1);
    FUN_0215d9b4(param_1);
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0x84) = 1;
  }
  *(undefined1 *)(param_1 + 0x81) = uVar2;
  return 1;
}


