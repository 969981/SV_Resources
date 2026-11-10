/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079d698; name: FUN_0079d698
 */


void FUN_0079d698(long *param_1)

{
  undefined4 uVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [32];
  undefined *local_a8 [11];
  
  *(int *)((long)param_1 + 100) = *(int *)((long)param_1 + 100) + 1;
  FUN_007a3e24(local_a8,param_1 + 0x52,0x4d8,0x50,param_1);
  local_a8[0] = PTR_DAT_047d0a80 + 0x10;
  (**(code **)(*param_1 + 0x338))(param_1,local_a8);
  FUN_007a3f58(local_a8);
  FUN_00796584(auStack_c8);
  lVar4 = FUN_007ec544(param_1);
  if ((*(char *)(lVar4 + 0x38) != '\0') && ((char)param_1[0x232] != '\0')) {
    uVar5 = FUN_00796784(param_1 + 0xd);
    if ((uVar5 & 1) != 0) {
      FUN_00796828(auStack_c8,param_1 + 0xd);
      bVar3 = true;
      lVar4 = param_1[0x32];
      uVar1 = *(undefined4 *)((long)param_1 + 100);
      sVar2 = *(short *)((long)param_1 + 0x114e);
      goto joined_r0x0079d790;
    }
  }
  bVar3 = false;
  lVar4 = param_1[0x32];
  uVar1 = *(undefined4 *)((long)param_1 + 100);
  sVar2 = *(short *)((long)param_1 + 0x114e);
joined_r0x0079d790:
  if (sVar2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = 0;
    iVar7 = 0;
    do {
      uVar6 = FUN_00796784(*(long *)(param_1[0x11] + uVar5 * 8) + 0x10);
      if ((uVar6 & 1) != 0) {
        uVar6 = FUN_007967e8(*(long *)(param_1[0x11] + uVar5 * 8) + 0x10,param_1 + 0x13);
        if ((uVar6 & 1) == 0) {
          iVar7 = (1 << (ulong)((uint)uVar5 & 0x1f)) + iVar7;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)((long)param_1 + 0x114e));
  }
  if (bVar3) {
    FUN_007ab74c(lVar4,local_a8,uVar1,auStack_c8,iVar7);
  }
  else {
    FUN_007ab85c(auStack_d8,lVar4,local_a8,uVar1,iVar7);
  }
  return;
}


