/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290d230; name: FUN_0290d230
 */


uint FUN_0290d230(long param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar5 = 0xfffffff4;
  if ((*(short *)(param_1 + 0xb6) != 0x36) && (*(short *)(param_1 + 0xb6) != 0x70)) {
    uVar5 = 0xfffffff4;
    if ((*(short *)(param_1 + 0xb4) != 0x121) && (*(short *)(param_1 + 0xb4) != 0x1e6)) {
      if (((*(short *)(param_1 + 0x9e) == 0x70) || (*(short *)(param_1 + 0x9e) == 0x36)) &&
         (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x5d), (uVar4 & 1) != 0)) {
        uVar5 = 3;
      }
      else {
        iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
        if (iVar2 == 0) {
          sVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
          uVar5 = 0xfffffffe;
          if (sVar1 != 0x11d) {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
        uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
        if (((uVar4 & 1) == 0) &&
           (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                              (*(long **)(param_1 + 0x30),0x4e), (uVar4 & 1) != 0)) {
          uVar5 = uVar5 - 1;
        }
        else {
          iVar2 = FUN_02915ecc(param_1);
          if (((iVar2 == 1) &&
              (iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                                 (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
              0x32 < iVar2)) &&
             (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                                (*(long **)(param_1 + 0x30),0x46), (uVar4 & 1) != 0)) {
            uVar5 = uVar5 | 1;
          }
          else {
            iVar2 = FUN_02915c38(param_1);
            if (iVar2 == 1) {
              uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                                (*(long **)(param_1 + 0x30),0x46);
              return uVar5 | uVar3 & 1;
            }
          }
        }
      }
    }
  }
  return uVar5;
}


