/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f32c0; name: FUN_017f32c0
 */


int FUN_017f32c0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x210))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c0))(*(long **)(param_1 + 0x30),uVar3);
  iVar5 = -10;
  if (uVar1 != 0) {
    iVar5 = 0;
  }
  if (uVar1 == 1) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                       *(undefined4 *)(param_1 + 0x98));
    if ((((uVar4 & 1) != 0) || (*(short *)(param_1 + 0xb6) == 0x9e)) ||
       (*(short *)(param_1 + 0xb6) == 0x27)) {
      iVar5 = iVar5 + -10;
    }
  }
  else {
    if ((uVar1 & 0xfffffffe) == 2) {
      iVar2 = FUN_017f3920(param_1);
    }
    else if (uVar1 == 5) {
      iVar2 = FUN_017f49d4(param_1);
    }
    else {
      if (uVar1 != 4) {
        return iVar5;
      }
      iVar2 = FUN_017f47b0(param_1);
    }
    iVar5 = iVar2 + iVar5;
  }
  return iVar5;
}


