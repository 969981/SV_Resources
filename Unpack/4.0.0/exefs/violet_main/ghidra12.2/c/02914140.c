/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02914140; name: FUN_02914140
 */


undefined4 FUN_02914140(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0xb6) == 3) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0));
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
      uVar2 = 0xfffffffe;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


