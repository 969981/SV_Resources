/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290f0ac; name: FUN_0290f0ac
 */


int FUN_0290f0ac(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
  if (((iVar1 == 0) &&
      (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 0x50 < iVar1)
      ) && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
           iVar1 == 0)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar1 = -(uVar2 & 1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


