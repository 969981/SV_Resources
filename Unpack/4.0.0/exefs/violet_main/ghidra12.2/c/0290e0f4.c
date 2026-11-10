/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290e0f4; name: FUN_0290e0f4
 */


undefined4 FUN_0290e0f4(long param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar1 == '\x03')) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    uVar4 = 2;
    if (0x31 < iVar2) {
      uVar4 = 0xffffffff;
    }
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
  }
  return uVar4;
}


