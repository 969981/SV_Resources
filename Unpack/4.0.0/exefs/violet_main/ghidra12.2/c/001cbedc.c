/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cbedc; name: FUN_001cbedc
 */


undefined8 FUN_001cbedc(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x80);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) != param_2) {
        FUN_001e04f0();
        uVar2 = *(uint *)(param_1 + 0x80);
      }
      uVar2 = uVar2 & 0xfffffffe;
      *(uint *)(param_1 + 0x80) = uVar2;
    }
    uVar1 = 0;
    *(long *)(param_1 + 0x58) = param_2;
    if ((param_2 != 0) && (param_3 != 0)) {
      uVar1 = 0;
      *(uint *)(param_1 + 0x80) = uVar2 | 1;
    }
  }
  return uVar1;
}


