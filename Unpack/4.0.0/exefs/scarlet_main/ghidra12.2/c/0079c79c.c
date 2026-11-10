/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079c79c; name: FUN_0079c79c
 */


void FUN_0079c79c(long param_1)

{
  undefined4 uVar1;
  short sVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [80];
  
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  FUN_007a3438(auStack_a0,param_1 + 0x290,0x4d8,param_1);
  if (*(short *)(param_1 + 0x114e) != 0) {
    uVar6 = 0;
    do {
      uVar4 = FUN_007a3244(auStack_a0,*(undefined8 *)(*(long *)(param_1 + 0x88) + uVar6 * 8));
      if ((uVar4 & 1) == 0) break;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_1 + 0x114e));
  }
  FUN_007a3530(auStack_a0);
  FUN_00796584(auStack_c0);
  lVar5 = FUN_007ec544(param_1);
  if ((*(char *)(lVar5 + 0x38) != '\0') && (*(char *)(param_1 + 0x1190) != '\0')) {
    uVar6 = FUN_00796784(param_1 + 0x68);
    if ((uVar6 & 1) != 0) {
      FUN_00796828(auStack_c0,param_1 + 0x68);
      bVar3 = true;
      uVar7 = *(undefined8 *)(param_1 + 0x188);
      uVar1 = *(undefined4 *)(param_1 + 0x60);
      sVar2 = *(short *)(param_1 + 0x114e);
      goto joined_r0x0079c89c;
    }
  }
  bVar3 = false;
  uVar7 = *(undefined8 *)(param_1 + 0x188);
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  sVar2 = *(short *)(param_1 + 0x114e);
joined_r0x0079c89c:
  if (sVar2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar6 = 0;
    iVar8 = 0;
    do {
      uVar4 = FUN_00796784(*(long *)(*(long *)(param_1 + 0x88) + uVar6 * 8) + 0x10);
      if ((uVar4 & 1) != 0) {
        uVar4 = FUN_007967e8(*(long *)(*(long *)(param_1 + 0x88) + uVar6 * 8) + 0x10,param_1 + 0x98)
        ;
        if ((uVar4 & 1) == 0) {
          iVar8 = (1 << (ulong)((uint)uVar6 & 0x1f)) + iVar8;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_1 + 0x114e));
  }
  if (bVar3) {
    FUN_007ab74c(uVar7,auStack_a0,uVar1,auStack_c0,iVar8);
  }
  else {
    FUN_007ab85c(auStack_d0,uVar7,auStack_a0,uVar1,iVar8);
  }
  return;
}


