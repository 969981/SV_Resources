/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00800018; name: FUN_00800018
 */


void FUN_00800018(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0079c0a0();
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  FUN_0079b704(param_1,uVar2);
  FUN_00802224(*(undefined8 *)(param_1 + 0x1300),*(undefined8 *)(param_1 + 0x1308));
  return;
}


