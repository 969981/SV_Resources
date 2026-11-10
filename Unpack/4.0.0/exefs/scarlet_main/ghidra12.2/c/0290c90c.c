/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290c90c; name: FUN_0290c90c
 */


int FUN_0290c90c(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x5ad9be5a83bf246d);
  if (((((((uVar5 & 1) != 0) ||
         (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                             0x5c58902b05ee580d), (uVar5 & 1) != 0)) ||
        (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                            0xe74f254444349190), (uVar5 & 1) != 0)) ||
       ((uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                            0xb040792974baf831), (uVar5 & 1) != 0 ||
        (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                            0x213e983b3fef30f2), (uVar5 & 1) != 0)))) ||
      (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                          0x6bf70c799345550b), (uVar5 & 1) != 0)) &&
     (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d),
     (uVar5 & 1) != 0)) {
    return -2;
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x5ad9be5a83bf246d);
  if (((((uVar5 & 1) == 0) &&
       (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                           0x5c58902b05ee580d), (uVar5 & 1) == 0)) &&
      (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          0xe74f254444349190), (uVar5 & 1) == 0)) ||
     (((iVar2 = FUN_02915aa4(param_1), iVar2 != 1 ||
       (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
       (uVar5 & 1) == 0)) &&
      ((uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x32),
       (uVar5 & 1) == 0 ||
       (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
       (uVar5 & 1) == 0)))))) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xb040792974baf831
                      );
    if (((uVar5 & 1) != 0) && (*(short *)(param_1 + 0xb6) != 0x3e)) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
      cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar4);
      if ((cVar1 == '\x01') &&
         (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x55), (uVar5 & 1) != 0)) {
        return 2;
      }
      if ((*(short *)(param_1 + 0xb6) != 0x62) &&
         (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x3e), (uVar5 & 1) != 0)) {
        return 2;
      }
    }
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x6bf70c799345550b
                      );
    if (((((uVar5 & 1) == 0) ||
         (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x55), (uVar5 & 1) == 0)) &&
        ((((uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                               0x213e983b3fef30f2), (uVar5 & 1) == 0 ||
           ((*(char *)(param_1 + 0xb8) == '\x03' || (*(char *)(param_1 + 0xb9) == '\x03')))) ||
          ((uVar3 = *(ushort *)(param_1 + 0xb6) - 0x3e, uVar3 < 0x25 &&
           ((1L << ((ulong)uVar3 & 0x3f) & 0x1010000001U) != 0)))) ||
         (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x55), (uVar5 & 1) == 0)))) &&
       ((uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                            0x6bf70c799345550b), (uVar5 & 1) == 0 ||
        (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55)
        , (uVar5 & 1) == 0)))) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
      return -(uVar3 & 1);
    }
  }
  return 2;
}


