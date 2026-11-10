/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a5a40; name: FUN_008a5a40
 */


void FUN_008a5a40(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long local_40;
  long lStack_38;
  undefined1 local_30 [16];
  
  if ((*(uint *)(param_1 + 0x10) >> 0x10 & 1) != 0) {
    FUN_008f1150(param_2,*(undefined4 *)
                          (*(long *)(*(long *)(param_1 + 0x20) + 0x28) +
                          (ulong)*(ushort *)(param_1 + 0x4a) * 4),4,local_30 + 0x10,0xe0);
    return;
  }
  if ((*(uint *)(param_1 + 0x10) >> 0x11 & 1) != 0) {
    FUN_008f1150(param_2,*(undefined4 *)
                          (*(long *)(*(long *)(param_1 + 0x20) + 0x28) +
                          (ulong)*(ushort *)(param_1 + 0x4a) * 4),4,local_30 + 0x10,0x220);
    return;
  }
  plVar1 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10);
  lStack_38 = plVar1[1];
  local_40 = *plVar1 + (ulong)*(uint *)(param_1 + 0x34);
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar8 = 0x90;
  }
  else {
    lVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0x38) + 4) + 0x90;
  }
  FUN_008f1150(param_2,*(undefined4 *)
                        (*(long *)(*(long *)(param_1 + 0x20) + 0x28) +
                        (ulong)*(ushort *)(param_1 + 0x4a) * 4),4,&local_40,lVar8);
  uVar4 = *(uint *)(param_1 + 0x14) & 3;
  if (uVar4 != 0) {
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar7 = (ulong)(uVar5 << 4) & 0x30;
    uVar6 = (ulong)(uVar5 >> 2) & 3;
    lVar2 = *(long *)(param_1 + 0x18) + uVar7 + uVar6 * 0x14;
    if ((*(char *)(lVar2 + 1) == '\a') ||
       ((uVar4 != 1 &&
        ((*(char *)(lVar2 + 0x11) == '\a' || ((uVar4 != 2 && (*(char *)(lVar2 + 0x21) == '\a')))))))
       ) {
      plVar3 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) +
                       (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10);
      lStack_38 = plVar3[1];
      plVar1 = (long *)(*(long *)(param_1 + 0x18) +
                       (long)(int)((uVar5 >> 4 & 0x1c) + (uVar5 >> 8 & 0xc) + (uVar5 >> 0xc & 8) +
                                   (uVar5 >> 0xd & 0x60) + (uVar5 >> 0xc & 1) * 0xc +
                                   (uVar5 >> 0x10 & 1) * 0x1c +
                                   (uVar5 >> 0xc & 0x10) * (uVar5 >> 6 & 7) +
                                   (uVar5 >> 0x11 & 1) * 0x74 +
                                   ((int)uVar7 + (uVar5 & 0x30) | uVar5 >> 6 & 8) +
                                  ((uVar5 >> 0xd & 3) + (int)uVar6) * 0x14));
      local_40 = *plVar3 + *plVar1;
      FUN_008f1150(param_2,(int)plVar1[1],4,&local_40,lVar8);
    }
  }
  return;
}


