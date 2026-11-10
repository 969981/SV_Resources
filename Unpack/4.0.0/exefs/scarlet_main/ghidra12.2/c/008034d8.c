/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008034d8; name: FUN_008034d8
 */


void FUN_008034d8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d0 [16];
  undefined *local_c0 [4];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [32];
  
  FUN_00796584(auStack_50);
  lVar3 = param_2 + 0x48;
  if (*(char *)(param_2 + 0x68) != '\0') {
    lVar3 = param_2 + 0x28;
  }
  FUN_0078a1c0(local_c0,lVar3);
  uVar1 = FUN_0078b12c(local_c0);
  FUN_0284e3d4(local_c0);
  if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x20) == 0xd)) {
    lVar3 = param_2 + 0x48;
    if (*(char *)(param_2 + 0x68) != '\0') {
      lVar3 = param_2 + 0x28;
    }
    FUN_0078a1c0(local_c0,lVar3);
    FUN_007968fc(auStack_50,local_c0);
    FUN_0284e3d4(local_c0);
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = FUN_007ec4a8(*(undefined8 *)(param_1 + 0xb0));
    FUN_00804fd0(local_c0,7,uVar7,uVar6,param_1 + 0x60,param_1 + 0x80,uVar2);
    lVar3 = FUN_007fcb70();
    if ((lVar3 == 0) || (iVar5 = *(int *)(lVar3 + 0x14), iVar5 < 0)) {
      iVar5 = 1;
      goto LAB_00803614;
    }
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
LAB_00803614:
      lVar3 = FUN_007fcb70();
      if ((lVar3 == 0) || (iVar4 = *(int *)(lVar3 + 0x18), iVar4 < 0)) {
        iVar4 = 0;
      }
      FUN_00803f88(auStack_d0,param_1,local_c0,auStack_50,iVar4);
    }
    local_c0[0] = PTR_DAT_047d1688 + 0x10;
    FUN_0284e3d4(auStack_80);
    FUN_0284e3d4(auStack_a0);
  }
  return;
}


