/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02912bfc; name: FUN_02912bfc
 */


int FUN_02912bfc(long param_1)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  sVar1 = *(short *)(param_1 + 0xb6);
  if (((sVar1 == 10) || (sVar1 == 0x4e)) || (sVar1 == 0x1f)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    uVar4 = 0xfffffffe;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  sVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((sVar1 == 0) &&
     (((sVar1 = *(short *)(param_1 + 0x9e), sVar1 == 10 || (sVar1 == 0x4e)) || (sVar1 == 0x1f)))) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar4 = uVar4 | uVar2 & 1;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x14);
  return uVar4 + (uVar2 & 1);
}


