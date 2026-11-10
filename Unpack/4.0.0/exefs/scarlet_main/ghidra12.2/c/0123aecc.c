/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123aecc; name: FUN_0123aecc
 */


void FUN_0123aecc(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  bVar1 = FUN_00d9c750();
  if (bVar1 < 2) {
    uVar3 = (&DAT_03c72710)[bVar1];
  }
  else {
    uVar3 = 2;
  }
  uVar2 = FUN_0123af40(param_1,param_2,uVar3,0);
  FUN_0123a588(param_1,param_2,uVar2,param_4);
  return;
}


