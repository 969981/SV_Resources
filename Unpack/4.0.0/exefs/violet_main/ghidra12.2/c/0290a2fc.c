/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290a2fc; name: FUN_0290a2fc
 */


undefined4 FUN_0290a2fc(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb6);
  if (((((uVar1 & 1) == 0) &&
       (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xc5),
       (uVar1 & 1) == 0)) &&
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x24c),
      (uVar1 & 1) == 0)) &&
     ((uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x254),
      (uVar1 & 1) == 0 &&
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x1d5),
      (uVar1 & 1) == 0)))) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
    uVar2 = 2;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}


