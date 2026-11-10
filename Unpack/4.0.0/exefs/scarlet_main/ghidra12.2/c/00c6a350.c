/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6a350; name: FUN_00c6a350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00c6a350(long param_1,int *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_00c6a72c(param_1,*(undefined8 *)(param_1 + 8));
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_40 = 0x3f4ccccd3f000000;
  local_38 = 0x83e4ccccd;
  uStack_48 = _UNK_03cabe58;
  local_50 = _DAT_03cabe50;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
     (uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar4 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = (long)param_2 + uVar4;
  }
  local_60 = FUN_00c6a4a0(lVar3);
  puVar5 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar5;
  if (uVar1 < 9) {
    local_40._0_4_ = 0;
LAB_00c6a488:
    local_40 = (ulong)(uint)local_40;
  }
  else {
    if ((ulong)puVar5[4] == 0) {
      local_40._0_4_ = 0;
    }
    else {
      local_40._0_4_ = *(uint *)((long)param_2 + (ulong)puVar5[4]);
    }
    if (uVar1 < 0xb) goto LAB_00c6a488;
    if ((ulong)puVar5[5] == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)param_2 + (ulong)puVar5[5]);
    }
    local_40 = CONCAT44(uVar6,(uint)local_40);
    if (0xc < uVar1) {
      if ((ulong)puVar5[6] == 0) {
        local_38._0_4_ = 0;
      }
      else {
        local_38._0_4_ = *(undefined4 *)((long)param_2 + (ulong)puVar5[6]);
      }
      if (uVar1 < 0xf) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        if ((ulong)puVar5[7] != 0) {
          uVar6 = *(undefined4 *)((long)param_2 + (ulong)puVar5[7]);
        }
      }
      goto LAB_00c6a43c;
    }
  }
  uVar6 = 0;
  local_38._0_4_ = 0;
LAB_00c6a43c:
  local_38 = CONCAT44(uVar6,(undefined4)local_38);
  FUN_00c6a4c4(uVar2,local_60);
  return param_1;
}


