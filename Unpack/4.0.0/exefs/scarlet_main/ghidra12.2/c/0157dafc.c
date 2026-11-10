/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157dafc; name: FUN_0157dafc
 */


undefined4 FUN_0157dafc(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (((cVar1 == '\0') ||
      (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
      cVar1 == '\x03')) ||
     ((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0xb0)), (uVar2 & 1) != 0 &&
      (*(short *)(param_1 + 0x9e) != 0x65)))) {
    uVar3 = 0;
  }
  else {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    if ((cVar1 == '\x02') &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
       (uVar2 & 1) != 0)) {
      uVar3 = 3;
    }
    else {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x1f);
      uVar3 = 2;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


