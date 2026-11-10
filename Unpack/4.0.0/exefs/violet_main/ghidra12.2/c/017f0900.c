/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f0900; name: FUN_017f0900
 */


undefined4 FUN_017f0900(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (*(short *)(param_1 + 0x9e) == 0x7e) {
    uVar3 = 0xfffffff4;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (iVar1 == 0xc) {
      uVar3 = 0xfffffff6;
    }
    else {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d8))(*(long **)(param_1 + 0x30),1);
      uVar3 = 0xfffffffb;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


