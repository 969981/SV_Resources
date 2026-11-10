/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02913ec8; name: FUN_02913ec8
 */


undefined4 FUN_02913ec8(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xf45a12b0e0e3c277);
  if (((((((uVar1 & 1) == 0) &&
         (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                             0xfd429e44243a2b76), (uVar1 & 1) == 0)) &&
        (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                            0x739e7bb6cbcdab19), (uVar1 & 1) == 0)) &&
       ((uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                            0xca081ab122792f36), (uVar1 & 1) == 0 &&
        (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                            0xaa285326b339bee0), (uVar1 & 1) == 0)))) &&
      ((uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                           0xce262e65d5c3852a), (uVar1 & 1) == 0 &&
       ((uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                            0x8e01121dfc5148f), (uVar1 & 1) == 0 &&
        (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                            0x9acd2595c1a62408), (uVar1 & 1) == 0)))))) &&
     ((uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          0xe45f6b1bcc496a78), (uVar1 & 1) == 0 &&
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          0x8e0e92ce27e51009), (uVar1 & 1) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar2 = 2;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


