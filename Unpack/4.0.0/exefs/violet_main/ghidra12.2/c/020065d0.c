/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020065d0; name: FUN_020065d0
 */


undefined8 FUN_020065d0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 0x130) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x130) + 0x1e8) & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x120);
    uVar2 = *(undefined4 *)(param_1 + 0x124);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x130) + 0x70))();
    FUN_01416750(uVar1,uVar2,uVar3,0);
    uVar3 = 1;
  }
  return uVar3;
}


