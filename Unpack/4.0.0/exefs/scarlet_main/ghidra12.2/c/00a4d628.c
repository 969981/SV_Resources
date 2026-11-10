/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4d628; name: FUN_00a4d628
 */


void FUN_00a4d628(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  ulong local_28;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  local_28 = (local_28 >> 0x18 & 0xff) << 0x18;
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  local_14 = 0;
  if (param_2 == 2) {
    plVar3 = (long *)(param_1 + 0x6140);
    lVar5 = 0x6148;
LAB_00a4d690:
    iVar2 = (int)((ulong)(*(long *)(param_1 + lVar5) - *plVar3) >> 3) * -0x55555555;
  }
  else {
    if (param_2 == 1) {
      plVar3 = (long *)(param_1 + 0x60d0);
      lVar5 = 0x60d8;
      goto LAB_00a4d690;
    }
    iVar2 = 0;
    if (param_2 == 0) {
      plVar3 = (long *)(param_1 + 0x6060);
      lVar5 = 0x6068;
      goto LAB_00a4d690;
    }
  }
  if (param_3 < iVar2) {
    if (param_2 == 2) {
      lVar5 = *(long *)(param_1 + 0x6140);
    }
    else if (param_2 == 1) {
      lVar5 = *(long *)(param_1 + 0x60d0);
    }
    else {
      if (param_2 != 0) goto LAB_00a4d6f8;
      lVar5 = *(long *)(param_1 + 0x6060);
    }
    puVar4 = (ulong *)(lVar5 + (long)param_3 * 0x18);
    local_28 = *puVar4;
    uVar1 = puVar4[1];
    local_20 = (undefined2)uVar1;
    uStack_1e = (undefined2)(uVar1 >> 0x10);
    uStack_1c = (undefined4)(uVar1 >> 0x20);
    uStack_18 = (undefined4)puVar4[2];
    local_14 = (undefined4)(puVar4[2] >> 0x20);
  }
LAB_00a4d6f8:
  FUN_00a64f20(&local_28);
  return;
}


