/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353059c; name: FUN_0353059c
 */


void FUN_0353059c(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined *local_60;
  uint local_58;
  long local_50;
  undefined8 local_48;
  undefined *local_40;
  int local_38;
  
  *param_1 = 0;
  param_1[1] = -0x100000000;
  local_38 = 0;
  local_40 = PTR_DAT_047e7548 + 0x10;
  iVar4 = FUN_0353084c(param_2,&local_40);
  puVar2 = PTR_DAT_047e7550;
  puVar1 = PTR_DAT_047e2fd0;
  if (iVar4 != 1) {
    return;
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = PTR_DAT_047e7550 + 0x10;
  if (0 < local_38) {
    local_58 = local_38 + 0x7fe;
    if (-1 < (int)(local_38 + 0x3ffU)) {
      local_58 = local_38 + 0x3ffU;
    }
    local_58 = local_58 & 0xfffffc00;
    lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,(long)(int)local_58);
    if (lVar5 == 0) {
      local_58 = 0;
      goto LAB_0353067c;
    }
    local_50 = lVar5;
  }
  iVar4 = FUN_0353084c(param_2,&local_60);
  lVar5 = local_50;
  if (iVar4 == 1) {
    local_50 = 0;
    local_58 = 0;
    uVar3 = (undefined4)local_48;
    local_48 = local_48 & 0xffffffff00000000;
    *param_1 = lVar5;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
LAB_0353067c:
  local_60 = puVar2 + 0x10;
  if (local_50 != 0) {
    (**(code **)(puVar1 + 0x30))(local_48._4_4_);
  }
  return;
}


