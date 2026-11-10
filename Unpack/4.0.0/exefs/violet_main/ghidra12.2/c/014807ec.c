/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014807ec; name: FUN_014807ec
 */


void FUN_014807ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [128];
  undefined1 auStack_26 [6];
  
  uVar2 = (**(code **)(**(long **)(param_3 + 0x18) + 0x200))();
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_3 + 8);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    uVar3 = FUN_01246e90(param_1);
    uVar2 = FUN_01483ad8(uVar3,uVar4,uVar1,uVar5);
    if ((uVar2 & 1) != 0) {
      FUN_01461214(param_1);
      uVar4 = FUN_014808b4();
      FUN_014808bc(uVar4,auStack_c0 + 0x88,auStack_26 + -10);
      return;
    }
  }
  return;
}


