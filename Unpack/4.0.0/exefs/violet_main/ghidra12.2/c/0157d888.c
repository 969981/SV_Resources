/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0157d888; name: FUN_0157d888
 */


uint FUN_0157d888(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((((cVar1 == '\0') ||
       (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                           *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
       cVar1 == '\x03')) ||
      (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                          *(undefined4 *)(param_1 + 0x98)), (uVar4 & 1) == 0)) ||
     (iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 0x31 < iVar2))
  {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x3a);
    uVar3 = uVar3 & 1;
  }
  return uVar3;
}


