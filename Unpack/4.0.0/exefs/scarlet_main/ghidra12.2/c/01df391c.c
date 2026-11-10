/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df391c; name: FUN_01df391c
 */


void FUN_01df391c(long param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  undefined1 local_28 [2];
  undefined2 local_26;
  undefined2 local_24;
  
  uVar3 = FUN_01195974(*(undefined8 *)(param_1 + 0x30));
  uVar6 = uVar3 >> 0x20;
  lVar4 = *(long *)(param_1 + 0x30);
  iVar7 = *(int *)(lVar4 + 0x108);
  if (iVar7 == 0) {
    uVar6 = (ulong)(uint)((int)uVar3 + (int)(uVar3 >> 0x20) * 6);
    lVar4 = FUN_01195854();
    uVar8 = (uint)*(byte *)(lVar4 + 0x570);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  else if ((iVar7 == 1) || (iVar7 == 2)) {
    uVar8 = *(uint *)(lVar4 + 0x2a4);
  }
  else {
    uVar8 = 0xffffffff;
    iVar7 = 3;
    uVar6 = 1;
  }
  iVar2 = FUN_01ddc738(lVar4,iVar7,uVar8,uVar6,1);
  if (iVar2 == 0) {
    uVar5 = FUN_0119579c(*(undefined8 *)(param_1 + 0x30));
    FUN_00feea48(*(undefined8 *)(param_1 + 0x50),uVar5);
    local_28[0] = iVar7 == 0;
    local_26 = (undefined2)uVar8;
    local_24 = (undefined2)uVar6;
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x1c8);
    if (lVar4 == 0) {
      return;
    }
    uVar3 = FUN_01df3a7c(lVar4,uVar5,local_28);
    if ((uVar3 & 1) == 0) {
      FUN_01df3778(param_1);
      return;
    }
    uVar5 = 5;
  }
  else {
    local_c0 = &LAB_00a896dc;
    local_b8 = FUN_00a896f0;
    local_b0 = &LAB_00a896f4;
    local_a8 = &LAB_00a89700;
    alStack_a0[0] = param_1;
    FUN_01df3d28(param_1,iVar2,&local_c0);
    pcVar1 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar1)(alStack_a0);
    }
    uVar5 = 2;
  }
  *(undefined8 *)(param_1 + 0x44) = uVar5;
  return;
}


