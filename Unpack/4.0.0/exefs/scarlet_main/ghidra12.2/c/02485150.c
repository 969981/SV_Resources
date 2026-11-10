/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02485150; name: FUN_02485150
 */


undefined8 FUN_02485150(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_40;
  ulong uStack_38;
  
  uVar3 = FUN_024844a0(param_1,1);
  dVar4 = (double)FUN_00c41790(param_1,2,0);
  dVar5 = (double)FUN_00c41790(param_1,3,0);
  dVar6 = (double)FUN_00c41790(param_1,4,0);
  if ((DAT_0484a860 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484a860);
    if (iVar2 != 0) {
      DAT_0484be40 = '\x01';
      DAT_0484be48 = 1;
      __cxa_guard_release(&DAT_0484a860);
    }
  }
  local_40 = CONCAT44((float)dVar5,(float)dVar4);
  uStack_38 = (ulong)(uint)(float)dVar6;
  uVar1 = 0xa0;
  if (DAT_0484be40 == '\0') {
    uVar1 = 0;
  }
  FUN_0248511c(uVar3,uVar1,DAT_0484be48,&local_40);
  return 0;
}


