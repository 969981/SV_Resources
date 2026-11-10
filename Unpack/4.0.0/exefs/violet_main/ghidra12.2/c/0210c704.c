/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0210c704; name: FUN_0210c704
 */


undefined8 FUN_0210c704(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((param_1[8] == 0) || (uVar1 = (**(code **)(*param_1 + 0x840))(), (uVar1 & 0xff) == 10)) {
    return 0;
  }
  uVar3 = *(undefined8 *)(param_1[8] + 0x290);
  uVar2 = FUN_0210c6f0(uVar3,uVar1);
  uVar3 = FUN_0210b8a8(uVar3,uVar2);
  return uVar3;
}


