/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290c34c; name: FUN_0290c34c
 */


undefined4 FUN_0290c34c(long param_1)

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
     ((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),5),
      (uVar2 & 1) == 0 &&
      (((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),1),
        (uVar2 & 1) == 0 &&
        (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),4),
        (uVar2 & 1) == 0)) &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1d0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
       (uVar2 & 1) == 0)))))) {
    uVar3 = 0;
  }
  else {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    if ((cVar1 == '\x02') &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a),
       (uVar2 & 1) != 0)) {
      uVar3 = 2;
    }
    else {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
      uVar3 = 2;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


