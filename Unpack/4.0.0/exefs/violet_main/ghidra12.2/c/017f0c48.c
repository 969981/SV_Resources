/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f0c48; name: FUN_017f0c48
 */


undefined4 FUN_017f0c48(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  uVar3 = 0xfffffff6;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4a8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    uVar3 = 0;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0xfffffff6;
    }
  }
  return uVar3;
}


