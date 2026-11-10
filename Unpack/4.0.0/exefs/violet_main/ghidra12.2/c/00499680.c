/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00499680; name: FUN_00499680
 */


uint FUN_00499680(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_40 [12];
  
  uVar1 = param_1 - 1;
  if (8 < uVar1) {
    if (DAT_047f43e8 == 0) {
      return 0xffffffff;
    }
    local_40[0] = param_1;
    iVar2 = FUN_0047e200(DAT_047f43e8,local_40);
    uVar1 = iVar2 + 9;
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


