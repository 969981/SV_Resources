/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008cae90; name: FUN_008cae90
 */


void FUN_008cae90(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *(char *)(*(long *)(param_2 + 0xa0) + 0x752);
  if (cVar2 == '\0') {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_2 + 0x2c);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    cVar2 = *(char *)(*(long *)(param_2 + 0xa0) + 0x752);
  }
  if (cVar2 == '\x01') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    cVar2 = *(char *)(*(long *)(param_2 + 0xa0) + 0x752);
  }
  if (cVar2 == '\x02') {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = *(int *)(*(long *)(param_2 + 0x238) + 0x330);
  if (iVar3 == 3) {
    iVar3 = FUN_008e4214(param_2);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar3;
  }
  else if (iVar3 == 2) {
    iVar3 = FUN_008dec1c(param_2);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar3;
  }
  else if (iVar3 == 1) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_2 + 0xc);
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + *(long *)(param_2 + 0x830);
  lVar1 = *(long *)(param_1 + 0x40) + *(long *)(param_2 + 0x6f8);
  *(long *)(param_1 + 0x40) = lVar1;
  lVar1 = *(long *)(param_2 + 0x7c0) + lVar1;
  *(long *)(param_1 + 0x40) = lVar1;
  lVar1 = lVar1 + *(long *)(param_2 + 0x720);
  *(long *)(param_1 + 0x40) = lVar1;
  lVar1 = lVar1 + *(long *)(param_2 + 0x740);
  *(long *)(param_1 + 0x40) = lVar1;
  lVar1 = lVar1 + *(long *)(param_2 + 0x760);
  *(long *)(param_1 + 0x40) = lVar1;
  lVar1 = lVar1 + *(long *)(param_2 + 0x780);
  *(long *)(param_1 + 0x40) = lVar1;
  *(long *)(param_1 + 0x40) = lVar1 + *(long *)(param_2 + 0x7a0);
  return;
}


