/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025ee2b0; name: FUN_025ee2b0
 */


undefined8 FUN_025ee2b0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  float local_24;
  
  uVar3 = FUN_025ee370(param_1,1);
  dVar4 = (double)FUN_00c41790(param_1,2,0);
  if ((DAT_04853df0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04853df0);
    if (iVar2 != 0) {
      DAT_04853eb0 = '\x01';
      __cxa_guard_release(&DAT_04853df0);
    }
  }
  local_24 = (float)dVar4;
  puVar1 = PTR_LAB_047d85e0;
  if (DAT_04853eb0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_025ee3fc(uVar3,puVar1,0,&local_24);
  return 0;
}


