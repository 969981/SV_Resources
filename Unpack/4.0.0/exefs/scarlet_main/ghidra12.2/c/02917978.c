/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02917978; name: FUN_02917978
 */


undefined8 FUN_02917978(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (iVar1 < 0x46) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if ((iVar1 == 0) ||
       ((uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x88))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)),
        (uVar3 & 1) == 0 &&
        (((((uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1ef),
            (uVar3 & 1) != 0 ||
            (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1ff),
            (uVar3 & 1) != 0)) &&
           (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)),
           iVar1 == 0)) &&
          (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                             (*(long **)(param_1 + 0x30),0x32), (uVar3 & 1) != 0)) ||
         ((uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x10a),
          (uVar3 & 1) != 0 &&
          (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                             (*(long **)(param_1 + 0x30),0x46), (uVar3 & 1) != 0)))))))) {
      uVar2 = 3;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


