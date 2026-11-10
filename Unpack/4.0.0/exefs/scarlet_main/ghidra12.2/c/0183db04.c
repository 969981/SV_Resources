/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0183db04; name: FUN_0183db04
 */


void FUN_0183db04(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x36c);
  uVar2 = *(undefined1 *)(*(long *)(param_1 + 8) + 0x370);
  bVar3 = FUN_00d9c750(uVar1,uVar2,param_2);
  if (bVar3 < 2) {
    uVar5 = (&DAT_03c72710)[bVar3];
  }
  else {
    uVar5 = 2;
  }
  uVar4 = FUN_0123af40(uVar1,uVar2,uVar5,0);
  FUN_0123a588(uVar1,uVar2,uVar4,param_3);
  return;
}


