/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d847a0; name: FUN_01d847a0
 */


undefined8 FUN_01d847a0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_40;
  ulong uStack_38;
  
  uVar3 = FUN_01d848a0(param_1,1);
  dVar4 = (double)FUN_00c41790(param_1,2,0);
  dVar5 = (double)FUN_00c41790(param_1,3,0);
  dVar6 = (double)FUN_00c41790(param_1,4,0);
  if ((DAT_04832448 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04832448);
    if (iVar2 != 0) {
      DAT_048324d0 = '\x01';
      __cxa_guard_release(&DAT_04832448);
    }
  }
  local_40 = CONCAT44((float)dVar5,(float)dVar4);
  uStack_38 = (ulong)(uint)(float)dVar6;
  puVar1 = PTR_FUN_047d8100;
  if (DAT_048324d0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01d8492c(uVar3,puVar1,0,&local_40);
  return 0;
}


