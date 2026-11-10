/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02906aa8; name: FUN_02906aa8
 */


uint FUN_02906aa8(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0));
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x1f);
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      uVar1 = uVar1 & 1;
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x20);
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      uVar1 = uVar1 + (uVar2 & 1);
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x25);
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      uVar1 = uVar1 + (uVar2 & 1);
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x84);
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      uVar1 = uVar1 + (uVar2 & 1);
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xd6);
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      uVar1 = uVar1 + (uVar2 & 1);
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x4f);
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      uVar1 = uVar1 + (uVar2 & 1);
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x5b);
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      uVar1 = uVar1 + (uVar2 & 1);
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x96);
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      uVar1 = uVar1 + (uVar2 & 1);
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x62);
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      uVar1 = uVar1 + (uVar2 & 1);
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x7f);
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      return uVar1 + (uVar2 & 1);
    }
  }
  else {
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}


