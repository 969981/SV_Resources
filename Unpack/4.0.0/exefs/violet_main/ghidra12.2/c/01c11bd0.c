/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c11bd0; name: FUN_01c11bd0
 */


undefined8 FUN_01c11bd0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_048113a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048113a8), iVar2 != 0)) {
    DAT_0452adf0 = 1;
    __cxa_guard_release(&DAT_048113a8);
  }
  uVar3 = FUN_01c11a60(param_1,1);
  uVar1 = FUN_01c11aec(&DAT_0452adf0,uVar3);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


