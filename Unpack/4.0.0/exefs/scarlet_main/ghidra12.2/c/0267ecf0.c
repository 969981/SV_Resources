/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0267ecf0; name: FUN_0267ecf0
 */


undefined8 FUN_0267ecf0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_40;
  ulong uStack_38;
  
  uVar3 = FUN_026729c0(param_1,1);
  dVar4 = (double)FUN_00c41790(param_1,2,0);
  dVar5 = (double)FUN_00c41790(param_1,3,0);
  dVar6 = (double)FUN_00c41790(param_1,4,0);
  if ((DAT_048565e0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048565e0);
    if (iVar2 != 0) {
      DAT_04858120 = '\x01';
      DAT_04858128 = 1;
      __cxa_guard_release(&DAT_048565e0);
    }
  }
  local_40 = CONCAT44((float)dVar5,(float)dVar4);
  uStack_38 = (ulong)(uint)(float)dVar6;
  uVar1 = 0x68;
  if (DAT_04858120 == '\0') {
    uVar1 = 0;
  }
  FUN_0267edfc(uVar3,uVar1,DAT_04858128,&local_40);
  return 0;
}


