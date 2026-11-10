/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290883c; name: FUN_0290883c
 */


undefined4 FUN_0290883c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (iVar1 < 0x50) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    uVar3 = 0xfffffffe;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


