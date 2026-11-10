/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02917f9c; name: FUN_02917f9c
 */


undefined8 FUN_02917f9c(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb6);
  if (((((uVar2 & 1) != 0) ||
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xc5),
       (uVar2 & 1) != 0)) ||
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x24c),
      (uVar2 & 1) != 0)) ||
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x254),
     (uVar2 & 1) != 0)) {
    if (uVar1 < 0x24c) {
      if ((uVar1 == 0xb6) || (uVar1 == 0xc5)) goto LAB_02918064;
    }
    else if ((uVar1 == 0x24c) || (uVar1 == 0x254)) goto LAB_02918064;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32);
    if ((uVar2 & 1) != 0) {
      return 2;
    }
  }
  if ((uVar1 == 0x1f5) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32),
     (uVar2 & 1) != 0)) {
    return 2;
  }
LAB_02918064:
  uVar3 = FUN_02917a94(param_1);
  return uVar3;
}


