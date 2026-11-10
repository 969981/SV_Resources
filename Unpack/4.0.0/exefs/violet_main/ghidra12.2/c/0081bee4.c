/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081bee4; name: FUN_0081bee4
 */


undefined8 FUN_0081bee4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0049e7b0(PTR_FUN_047cba38,*(undefined2 *)(param_1 + 10));
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar2 = FUN_008197bc(param_2,uVar1,*(undefined2 *)(param_1 + 10));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar2 = (ulong)*(ushort *)(param_1 + 10) & 3;
  if ((int)uVar2 != 0) {
    FUN_00819960(param_2,4 - uVar2);
  }
  return 1;
}


