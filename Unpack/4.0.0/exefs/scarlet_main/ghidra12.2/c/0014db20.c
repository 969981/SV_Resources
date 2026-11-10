/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0014db20; name: FUN_0014db20
 */


undefined8 FUN_0014db20(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  time_t tVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_00c41a10(param_1,0xfff0b9d7);
  iVar1 = FUN_00d34290(param_1,1);
  if (iVar1 == -1) {
    tVar3 = time((time_t *)0x0);
    uVar4 = param_1;
  }
  else {
    tVar3 = FUN_00124340(param_1,1);
    uVar4 = FUN_001243d0(param_1,2,0);
  }
  FUN_0014d7f0(param_1,uVar2,tVar3,uVar4);
  return 2;
}


