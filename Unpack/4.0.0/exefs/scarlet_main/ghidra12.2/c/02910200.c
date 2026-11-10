/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02910200; name: FUN_02910200
 */


undefined8 FUN_02910200(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x59);
  if (((((((((uVar2 & 1) == 0) &&
           (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x5a),
           (uVar2 & 1) == 0)) &&
          (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x5b),
          (uVar2 & 1) == 0)) &&
         (((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x7d),
           (uVar2 & 1) == 0 &&
           (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x9b),
           (uVar2 & 1) == 0)) &&
          ((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xc6),
           (uVar2 & 1) == 0 &&
           ((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x19e),
            (uVar2 & 1) == 0 &&
            (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x211),
            (uVar2 & 1) == 0)))))))) &&
        (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x266),
        (uVar2 & 1) == 0)) &&
       ((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x267),
        (uVar2 & 1) == 0 &&
        (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x268),
        (uVar2 & 1) == 0)))) ||
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a),
      (uVar2 & 1) == 0)) &&
     (((*(char *)(param_1 + 0xb8) != '\x04' && (*(char *)(param_1 + 0xb9) != '\x04')) ||
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
      (uVar2 & 1) == 0)))) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (iVar1 < 0x46) {
      (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0xb);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}


