/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a5ef8; name: FUN_007a5ef8
 */


void FUN_007a5ef8(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long local_50 [4];
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x1d0))();
  plVar2 = (long *)FUN_0079365c();
  lVar4 = *plVar2;
  local_50[0] = 0;
  FUN_007935cc(local_50);
  *(long *)(param_1 + 0x70) = local_50[0] + lVar4 * iVar1;
  FUN_018ff39c(param_1 + 0x80,param_2);
  lVar4 = *(long *)(param_1 + 0x78);
  FUN_00796584(local_50);
  lVar4 = lVar4 + 0x11a8;
  uVar3 = FUN_007967e8(lVar4,local_50);
  if ((uVar3 & 1) == 0) {
    FUN_00796828(lVar4,local_50);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xd8;
  *(undefined8 *)(param_1 + 0x38) = 1;
  *(char **)(param_1 + 0x40) = "NetBackgroundProcessJob::StartDisconnectNetwork";
  return;
}


