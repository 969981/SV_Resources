/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021553d0; name: FUN_021553d0
 */


undefined8 FUN_021553d0(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [24];
  long *local_28;
  
  if (param_2 == 0) {
    FUN_02153d44(param_1,*(undefined4 *)(param_1 + 0x44c),
                 *(undefined4 *)(*(long *)(param_1 + 0x4a8) + 8));
    FUN_02155460(auStack_40);
    FUN_01282188(auStack_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    uVar2 = 1;
  }
  else {
    uVar1 = FUN_02154208(param_1);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      *(undefined1 *)(param_1 + 0x84) = 1;
      *(undefined1 *)(param_1 + 0x81) = 0;
    }
  }
  return uVar2;
}


