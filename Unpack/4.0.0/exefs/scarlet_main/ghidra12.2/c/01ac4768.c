/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ac4768; name: FUN_01ac4768
 */


uint FUN_01ac4768(long param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((*(short *)(param_1 + 0x90) == 0x1e2) &&
     (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x88))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)),
     (uVar5 & 1) == 0)) {
    bVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    if (6 < bVar2) {
      if ((*(short *)(param_1 + 0xaa) == 0x8c) &&
         ((uVar3 = *(ushort *)(param_1 + 0x9e) - 0x68, 0x3c < uVar3 ||
          ((1L << ((ulong)uVar3 & 0x3f) & 0x1800000000000001U) == 0)))) {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x3e);
        uVar3 = 3;
        if ((uVar5 & 1) == 0) {
          uVar3 = 0;
        }
        return uVar3;
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xb6);
      if (((((uVar5 & 1) != 0) ||
           (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xc5),
           (uVar5 & 1) != 0)) ||
          (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x24c),
          (uVar5 & 1) != 0)) ||
         (((uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x254),
           (uVar5 & 1) != 0 ||
           (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x231),
           (uVar5 & 1) != 0)) ||
          (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1d5),
          (uVar5 & 1) != 0)))) {
        uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
        uVar3 = uVar3 & 0xffff;
        if (uVar3 < 0x1f5) {
          if (((uVar3 == 0xb6) || (uVar3 == 0xc5)) || (uVar3 == 0x1d5)) goto LAB_01ac4940;
        }
        else if (((uVar3 - 0x231 < 0x24) &&
                 ((1L << ((ulong)(uVar3 - 0x231) & 0x3f) & 0x808000001U) != 0)) || (uVar3 == 0x1f5))
        goto LAB_01ac4940;
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x26);
        if ((uVar5 & 1) != 0) {
          return 2;
        }
      }
LAB_01ac4940:
      bVar2 = *(byte *)(param_1 + 0xac);
      if ((bVar2 == 0xb) || (*(char *)(param_1 + 0xad) == '\v')) {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
        uVar3 = 0xfffffff8;
        if ((uVar5 & 1) == 0) {
          uVar3 = 0xfffffffd;
        }
        bVar2 = *(byte *)(param_1 + 0xac);
      }
      else {
        uVar3 = 0;
      }
      if (((bVar2 != 3) && (cVar1 = *(char *)(param_1 + 0xad), cVar1 != '\b')) &&
         ((bVar2 != 8 &&
          ((((cVar1 != '\a' && (bVar2 != 7)) && ((bVar2 & 0xfe) != 4)) && (2 < (byte)(cVar1 - 3U))))
          ))) {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
        return uVar3 - (uVar4 & 1);
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x26);
      uVar4 = uVar3 | 2;
      if ((uVar5 & 1) == 0) {
        uVar4 = uVar3;
      }
      return uVar4;
    }
    if ((*(short *)(param_1 + 0xaa) != 0x8c) &&
       ((*(char *)(param_1 + 0xac) == '\v' || (*(char *)(param_1 + 0xad) == '\v')))) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      uVar3 = 0xfffffff8;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0xfffffffd;
      }
      return uVar3;
    }
  }
  return 0;
}


