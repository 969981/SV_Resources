/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d8c030; name: FUN_01d8c030
 */


undefined8 FUN_01d8c030(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00c646d0(param_1,1,0);
  uVar3 = FUN_00c41790(param_1,2,0);
  if ((DAT_048327b0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048327b0);
    if (iVar1 != 0) {
      __cxa_guard_release(uVar3,&DAT_048327b0);
    }
  }
  FUN_01d8c0bc(uVar3,uVar2);
  return 0;
}


