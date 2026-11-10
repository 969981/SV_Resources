/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ac4a7c; name: FUN_01ac4a7c
 */


uint FUN_01ac4a7c(long param_1)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  if (((*(short *)(param_1 + 0x90) == 0x1b3) || (*(short *)(param_1 + 0x90) == 0x23a)) &&
     (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x88))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)),
     (uVar6 & 1) == 0)) {
    bVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    sVar2 = *(short *)(param_1 + 0xaa);
    if (6 < bVar3) {
      if ((((sVar2 == 10) || (sVar2 == 0x8c)) || (sVar2 == 0x4e)) &&
         ((uVar4 = *(ushort *)(param_1 + 0x9e) - 0x68, 0x3c < uVar4 ||
          ((1L << ((ulong)uVar4 & 0x3f) & 0x1800000000000001U) == 0)))) {
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x3e);
        uVar4 = 3;
        if ((uVar6 & 1) == 0) {
          uVar4 = 0;
        }
        return uVar4;
      }
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xb6);
      if ((((((uVar6 & 1) != 0) ||
            (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xc5),
            (uVar6 & 1) != 0)) ||
           (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x24c),
           (uVar6 & 1) != 0)) ||
          ((uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x254),
           (uVar6 & 1) != 0 ||
           (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x231),
           (uVar6 & 1) != 0)))) ||
         (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1d5),
         (uVar6 & 1) != 0)) {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
        uVar4 = uVar4 & 0xffff;
        if (uVar4 < 0x1f5) {
          if (((uVar4 == 0xb6) || (uVar4 == 0xc5)) || (uVar4 == 0x1d5)) goto LAB_01ac4c0c;
        }
        else if (((uVar4 - 0x231 < 0x24) &&
                 ((1L << ((ulong)(uVar4 - 0x231) & 0x3f) & 0x808000001U) != 0)) || (uVar4 == 0x1f5))
        goto LAB_01ac4c0c;
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x26);
        if ((uVar6 & 1) != 0) {
          return 2;
        }
      }
LAB_01ac4c0c:
      bVar3 = *(byte *)(param_1 + 0xac);
      if (((bVar3 | 8) == 10) || ((*(byte *)(param_1 + 0xad) | 8) == 10)) {
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
        uVar4 = 0xfffffff8;
        if ((uVar6 & 1) == 0) {
          uVar4 = 0xfffffffd;
        }
        bVar3 = *(byte *)(param_1 + 0xac);
      }
      else {
        uVar4 = 0;
      }
      if (((bVar3 != 0xb) && (cVar1 = *(char *)(param_1 + 0xad), cVar1 != '\x0f')) &&
         ((bVar3 != 0xf &&
          (((cVar1 != '\x04' && ((bVar3 & 0xf7) != 4)) && (1 < (byte)(cVar1 - 0xbU))))))) {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
        return uVar4 - (uVar5 & 1);
      }
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x26);
      uVar5 = uVar4 | 2;
      if ((uVar6 & 1) == 0) {
        uVar5 = uVar4;
      }
      return uVar5;
    }
    if (sVar2 == 10) {
      return 0;
    }
    if (sVar2 == 0x4e) {
      return 0;
    }
    if (sVar2 == 0x8c) {
      return 0;
    }
    if (((*(byte *)(param_1 + 0xac) | 8) == 10) || ((*(byte *)(param_1 + 0xad) | 8) == 10)) {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      uVar4 = 0xfffffff8;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0xfffffffd;
      }
      return uVar4;
    }
  }
  return 0;
}


