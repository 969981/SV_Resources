/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02480760; name: FUN_02480760
 */


undefined8 FUN_02480760(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  float local_24;
  
  uVar3 = FUN_02480680(param_1,1);
  dVar4 = (double)FUN_00c41790(param_1,2,0);
  if ((DAT_0484a648 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484a648);
    if (iVar2 != 0) {
      DAT_0484bbc0 = '\x01';
      DAT_0484bbc8 = 1;
      __cxa_guard_release(&DAT_0484a648);
    }
  }
  local_24 = (float)dVar4;
  uVar1 = 0x40;
  if (DAT_0484bbc0 == '\0') {
    uVar1 = 0;
  }
  FUN_02480824(uVar3,uVar1,DAT_0484bbc8,&local_24);
  return 0;
}


