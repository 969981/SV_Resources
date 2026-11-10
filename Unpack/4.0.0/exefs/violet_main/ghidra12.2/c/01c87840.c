/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c87840; name: FUN_01c87840
 */


undefined8 FUN_01c87840(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_01c878c0(param_1,1);
  if ((DAT_04815e98 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04815e98);
    if (iVar2 != 0) {
      __cxa_guard_release(&DAT_04815e98);
    }
  }
  FUN_01c8794c(uVar3);
  uVar1 = FUN_01c879cc();
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


