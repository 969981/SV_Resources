/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0251a9a0; name: FUN_0251a9a0
 */


undefined8 FUN_0251a9a0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar3 = FUN_024e24c0(param_1,1);
  dVar4 = (double)FUN_00c41790(param_1,2,0);
  dVar5 = (double)FUN_00c41790(param_1,3,0);
  if ((DAT_0484e2b0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484e2b0);
    if (iVar2 != 0) {
      DAT_0484ed20 = '\x01';
      __cxa_guard_release(&DAT_0484e2b0);
    }
  }
  local_40 = CONCAT44((float)dVar5,(float)dVar4);
  puVar1 = PTR_LAB_047df300;
  if (DAT_0484ed20 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uStack_38 = 0;
  uVar3 = FUN_0251aab0(uVar3,puVar1,0,&local_40);
  FUN_00c46da0((double)(float)uVar3,param_1);
  FUN_00c46da0((double)(float)((ulong)uVar3 >> 0x20),param_1);
  return 2;
}


