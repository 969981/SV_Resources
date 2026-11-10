/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c47a20; name: FUN_01c47a20
 */


undefined8 FUN_01c47a20(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_04812e00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04812e00), iVar1 != 0)) {
    DAT_0452cb90 = 0x8f0;
    __cxa_guard_release(&DAT_04812e00);
  }
  uVar2 = FUN_01c45860(param_1,1);
  uVar3 = FUN_01c45ec0(param_1,2);
  FUN_01c478cc(&DAT_0452cb90,uVar2,uVar3);
  return 0;
}


