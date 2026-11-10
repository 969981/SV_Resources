/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bfc240; name: FUN_01bfc240
 */


undefined8 FUN_01bfc240(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_04810878 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04810878), iVar1 != 0)) {
    DAT_04810e80 = 1;
    __cxa_guard_release(&DAT_04810878);
  }
  uVar2 = FUN_01bfbeb0(param_1,1);
  uVar3 = FUN_01bfc2d0(param_1,2);
  FUN_01bfc35c(uVar2,uVar3);
  return 0;
}


