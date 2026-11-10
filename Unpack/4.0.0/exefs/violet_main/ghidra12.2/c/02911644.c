/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02911644; name: FUN_02911644
 */


int FUN_02911644(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((((iVar1 < 6) ||
       (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 6))
      || (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 6)
      ) || (((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             iVar1 < 6 ||
             (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             iVar1 < 6)) ||
            ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             iVar1 < 6 ||
             (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             iVar1 < 6)))))) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    iVar1 = -(uVar2 & 1);
  }
  else {
    iVar1 = 0;
  }
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((((iVar3 < 8) &&
       (iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar3 < 8))
      && ((iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar3 < 8
          && (((iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
               iVar3 < 8 &&
               (iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
               iVar3 < 7)) &&
              (iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                                 (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
              iVar3 < 8)))))) &&
     (iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar3 < 8)) {
    iVar3 = iVar1;
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    iVar3 = iVar1 + 2;
    if ((uVar4 & 1) == 0) {
      iVar3 = iVar1;
    }
  }
  return iVar3;
}


