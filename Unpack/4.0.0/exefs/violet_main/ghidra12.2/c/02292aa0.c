/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02292aa0; name: FUN_02292aa0
 */


undefined8 FUN_02292aa0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0228e700(param_1,1);
  uVar3 = FUN_02292b30(param_1,2);
  if (((DAT_04842e00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04842e00), iVar1 != 0)) {
    DAT_04843bc8 = 1;
    __cxa_guard_release(&DAT_04842e00,uVar3);
  }
  FUN_02292bbc(uVar2,uVar3);
  return 0;
}


