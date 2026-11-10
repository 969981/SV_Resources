/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02912cd0; name: FUN_02912cd0
 */


uint FUN_02912cd0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((uVar2 & 1) == 0) ||
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55),
     (uVar2 & 1) == 0)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x6f);
    if (((uVar2 & 1) == 0) &&
       (((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x163),
         (uVar2 & 1) == 0 &&
         (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x169),
         (uVar2 & 1) == 0)) &&
        (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x4f),
        (uVar2 & 1) == 0)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      uVar1 = uVar1 & 1;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}


