/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02367d70; name: FUN_02367d70
 */


undefined8 FUN_02367d70(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_048487d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048487d8), iVar1 != 0)) {
    DAT_048490a8 = 1;
    __cxa_guard_release(&DAT_048487d8);
  }
  uVar2 = FUN_023527f0(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  FUN_02367df8(uVar2,uVar3);
  return 0;
}


