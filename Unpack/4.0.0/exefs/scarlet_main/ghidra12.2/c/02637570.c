/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02637570; name: FUN_02637570
 */


undefined8 FUN_02637570(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  char local_58 [8];
  long local_50;
  undefined1 auStack_48 [24];
  
  uVar3 = FUN_02637660(param_1,1);
  uVar4 = FUN_00c646d0(param_1,2,0);
  uVar5 = FUN_00c646d0(param_1,3,0);
  if ((DAT_04855060 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04855060);
    if (iVar2 != 0) {
      DAT_04855920 = 1;
      __cxa_guard_release(&DAT_04855060,extraout_x1,uVar5);
    }
  }
  FUN_026376ec(local_58,uVar3,uVar4,uVar5);
  FUN_02630980(param_1,local_58);
  lVar1 = local_50;
  if (local_58[0] == '\x01') {
    local_50 = 0;
    if (lVar1 != 0) {
      FUN_02630a64(auStack_48);
    }
  }
  return 1;
}


