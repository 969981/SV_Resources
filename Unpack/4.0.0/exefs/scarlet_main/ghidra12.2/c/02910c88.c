/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02910c88; name: FUN_02910c88
 */


undefined4 FUN_02910c88(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  if ((((*(short *)(param_1 + 0xb6) == 0x1a) || (*(char *)(param_1 + 0xb8) == '\b')) ||
      (*(char *)(param_1 + 0xb9) != '\b')) &&
     (((((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x59),
         (uVar4 & 1) != 0 ||
         (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x5a),
         (uVar4 & 1) != 0)) ||
        ((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x5b),
         (uVar4 & 1) != 0 ||
         ((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x7d),
          (uVar4 & 1) != 0 ||
          (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x9b),
          (uVar4 & 1) != 0)))))) ||
       ((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xc6),
        (uVar4 & 1) != 0 ||
        ((((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x19e),
           (uVar4 & 1) != 0 ||
           (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x211),
           (uVar4 & 1) != 0)) ||
          (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x266),
          (uVar4 & 1) != 0)) ||
         ((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x267),
          (uVar4 & 1) != 0 ||
          (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x268),
          (uVar4 & 1) != 0)))))))) &&
      ((*(char *)(param_1 + 0xb8) != '\v' && (*(char *)(param_1 + 0xb8) != '\x06')))))) {
    if (*(char *)(param_1 + 0xb9) == '\x06') {
      return 0;
    }
    if (*(char *)(param_1 + 0xb9) == '\v') {
      return 0;
    }
    iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (0x46 < iVar3) {
      cVar1 = *(char *)(param_1 + 0xb8);
      if ((((cVar1 == '\f') || (cVar2 = *(char *)(param_1 + 0xb9), cVar2 == '\b')) ||
          ((((cVar1 == '\b' || (((cVar2 == '\x05' || (cVar1 == '\x05')) || (cVar2 == '\x03')))) ||
            (((cVar1 == '\x03' || (cVar2 == '\t')) || (cVar1 == '\t')))) || (cVar2 == '\f')))) &&
         (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x32), (uVar4 & 1) != 0)) {
        return 2;
      }
      uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x14);
      uVar5 = 2;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  return 0;
}


