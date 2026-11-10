/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00130ab0; name: FUN_00130ab0
 */


void FUN_00130ab0(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  
  lVar9 = *(long *)(param_1 + 0x30);
  FUN_00138a10();
  FUN_00131050(param_1,auStack_80,0);
  if (*(int *)(param_1 + 0x10) != 0x112) {
    FUN_001329f0(param_1,0x112);
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x130d68);
    (*pcVar3)();
  }
  FUN_00138a10(param_1);
  if (*(int *)(param_1 + 0x10) == 0x101) {
    uVar5 = *(undefined4 *)(param_1 + 4);
    FUN_00135010(*(undefined8 *)(param_1 + 0x30),auStack_80);
    FUN_00138a10(param_1);
    local_56 = 0;
    local_58 = *(undefined1 *)(lVar9 + 0x42);
    lVar7 = *(long *)(*(long *)(lVar9 + 0x10) + 0x58);
    local_60 = *(undefined4 *)(lVar7 + 0x28);
    uStack_5c = *(undefined4 *)(lVar7 + 0x18);
    local_57 = 0;
    local_68 = *(long *)(lVar9 + 0x18);
    if (local_68 == 0) {
      local_55 = false;
    }
    else {
      local_55 = *(char *)(local_68 + 0x13) != '\0';
    }
    *(long **)(lVar9 + 0x18) = &local_68;
    uVar6 = FUN_0013be00(*(undefined8 *)(param_1 + 0x38),"break",5);
    lVar10 = *(long *)(param_1 + 0x58);
    iVar1 = *(int *)(lVar10 + 0x18);
    lVar7 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar10 + 0x10),iVar1,
                         lVar10 + 0x1c,0x18,0x7fff,"labels/gotos");
    lVar8 = (long)iVar1 * 0x18;
    *(long *)(lVar10 + 0x10) = lVar7;
    *(undefined8 *)(lVar7 + lVar8) = uVar6;
    *(undefined4 *)(*(long *)(lVar10 + 0x10) + lVar8 + 0xc) = uVar5;
    *(undefined1 *)(*(long *)(lVar10 + 0x10) + lVar8 + 0x10) =
         *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x42);
    *(undefined1 *)(*(long *)(lVar10 + 0x10) + lVar8 + 0x11) = 0;
    *(undefined4 *)(*(long *)(lVar10 + 0x10) + lVar8 + 8) = local_70;
    *(int *)(lVar10 + 0x18) = iVar1 + 1;
    iVar1 = *(int *)(param_1 + 0x10);
    while (iVar1 == 0x3b) {
      FUN_00138a10(param_1);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    if (iVar1 - 0x103U < 0x1e && (1 << (ulong)(iVar1 - 0x103U & 0x1f) & 0x20000007U) != 0) {
      FUN_00130d70(lVar9);
      return;
    }
    uVar5 = FUN_00133380(lVar9);
  }
  else {
    FUN_00134c10(*(undefined8 *)(param_1 + 0x30),auStack_80);
    local_56 = 0;
    local_58 = *(undefined1 *)(lVar9 + 0x42);
    lVar7 = *(long *)(*(long *)(lVar9 + 0x10) + 0x58);
    local_60 = *(undefined4 *)(lVar7 + 0x28);
    uStack_5c = *(undefined4 *)(lVar7 + 0x18);
    local_57 = 0;
    local_68 = *(long *)(lVar9 + 0x18);
    if (local_68 == 0) {
      local_55 = false;
    }
    else {
      local_55 = *(char *)(local_68 + 0x13) != '\0';
    }
    *(long **)(lVar9 + 0x18) = &local_68;
    uVar5 = local_6c;
  }
  do {
    iVar1 = *(int *)(param_1 + 0x10);
    uVar2 = iVar1 - 0x103;
    if (uVar2 < 0x1e && (1 << (ulong)(uVar2 & 0x1f) & 0x20020007U) != 0) break;
    FUN_0012f030(param_1);
  } while (iVar1 != 0x111);
  FUN_00130d70(lVar9);
  if (*(int *)(param_1 + 0x10) - 0x103U < 2) {
    uVar4 = FUN_00133380(lVar9);
    FUN_001332e0(lVar9,param_2,uVar4);
  }
  FUN_001335c0(lVar9,uVar5);
  return;
}


