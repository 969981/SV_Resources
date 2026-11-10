/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f25e0; name: FUN_017f25e0
 */


undefined4 FUN_017f25e0(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xf);
  if (((uVar1 & 1) == 0) &&
     ((((uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),3),
        (uVar1 & 1) == 0 &&
        (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),2),
        (uVar1 & 1) == 0)) || (*(short *)(param_1 + 0x9e) == 0x1a)) ||
      ((*(char *)(param_1 + 0xa0) == '\x02' || (*(char *)(param_1 + 0xa1) == '\x02')))))) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x90))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    uVar2 = 0xfffffff8;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xfffffff6;
  }
  return uVar2;
}


