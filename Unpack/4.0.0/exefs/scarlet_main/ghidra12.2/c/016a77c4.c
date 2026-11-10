/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a77c4; name: FUN_016a77c4
 */


long FUN_016a77c4(long param_1,int *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined8 local_40;
  ulong uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  puVar3 = (ushort *)((long)param_2 - (long)*param_2);
  uVar2 = *puVar3;
  if (uVar2 < 7) {
    local_40 = 0;
    uStack_38 = 0;
LAB_016a78c4:
    local_30._0_4_ = 0;
LAB_016a78c8:
    local_30 = (ulong)(uint)local_30;
  }
  else {
    if ((ulong)puVar3[3] == 0) {
      local_40 = 0;
      uStack_38 = 0;
    }
    else {
      puVar1 = (undefined8 *)((long)param_2 + (ulong)puVar3[3]);
      local_40 = *puVar1;
      uStack_38 = (ulong)*(uint *)(puVar1 + 1);
    }
    if (uVar2 < 9) goto LAB_016a78c4;
    if ((ulong)puVar3[4] == 0) {
      local_30._0_4_ = 0;
    }
    else {
      local_30._0_4_ = *(uint *)((long)param_2 + (ulong)puVar3[4]);
    }
    if (uVar2 < 0xb) goto LAB_016a78c8;
    if ((ulong)puVar3[5] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((long)param_2 + (ulong)puVar3[5]);
    }
    local_30 = CONCAT44(uVar4,(uint)local_30);
    if (0xc < uVar2) {
      if ((ulong)puVar3[6] == 0) {
        local_28 = 0;
      }
      else {
        local_28 = *(undefined4 *)((long)param_2 + (ulong)puVar3[6]);
      }
      if (uVar2 < 0xf) {
        local_24 = false;
      }
      else {
        local_24 = false;
        if ((ulong)puVar3[7] != 0) {
          local_24 = *(char *)((long)param_2 + (ulong)puVar3[7]) != '\0';
        }
      }
      goto LAB_016a7880;
    }
  }
  local_24 = false;
  local_28 = 0;
LAB_016a7880:
  FUN_016a78fc(param_1,*(undefined8 *)(param_1 + 8),&local_40);
  return param_1;
}


