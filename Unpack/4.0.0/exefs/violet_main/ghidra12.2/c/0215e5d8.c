/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215e5d8; name: FUN_0215e5d8
 */


undefined8 FUN_0215e5d8(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [24];
  long *local_28;
  
  if (param_2 == 0) {
    FUN_0215c6e0(param_1);
    FUN_02155460(auStack_40);
    FUN_01282188(auStack_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    uVar2 = 1;
  }
  else {
    uVar1 = FUN_0215cbb8(param_1);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      *(undefined1 *)(param_1 + 0x81) = 0;
      *(undefined1 *)(param_1 + 0x84) = 1;
      *(undefined4 *)(param_1 + 0x9e0) = 0xffffffff;
    }
  }
  return uVar2;
}


