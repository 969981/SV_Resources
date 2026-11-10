/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02914d78; name: FUN_02914d78
 */


bool FUN_02914d78(long param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  uVar2 = uVar2 & 0xffff;
  if (uVar2 < 0xe3) {
    if (uVar2 - 0x68 < 0x3d && (1L << ((ulong)(uVar2 - 0x68) & 0x3f) & 0x1000080000000001U) != 0 ||
        uVar2 == 0) {
      return false;
    }
    if (uVar2 == 0x4f) {
      return false;
    }
  }
  else {
    if (uVar2 == 0xe3) {
      return false;
    }
    if (uVar2 == 0x112) {
      return false;
    }
    if (uVar2 == 0x1d0) {
      return false;
    }
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar3);
  return 1 < (byte)(cVar1 - 1U);
}


