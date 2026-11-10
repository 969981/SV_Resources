/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccbc30; name: FUN_00ccbc30
 */


void FUN_00ccbc30(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_00ccbd54(&local_50,*(undefined8 *)(param_1 + 8));
  lVar2 = local_50;
  local_50 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x98);
  lVar4 = *(long *)(param_1 + 0x90);
  *(long *)(param_1 + 0x90) = lVar2;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0xa0) = uStack_40;
    *(undefined8 *)(param_1 + 0xa8) = local_38;
    *puVar1 = local_48;
    local_50 = 0;
  }
  else {
    FUN_0270c1fc(puVar1);
    lVar2 = local_50;
    *(undefined8 *)(param_1 + 0xa0) = uStack_40;
    *(undefined8 *)(param_1 + 0xa8) = local_38;
    *puVar1 = local_48;
    local_50 = 0;
    if (lVar2 != 0) {
      FUN_0270c1fc(&local_48);
    }
  }
  FUN_00ccbd54(&local_50,*(undefined8 *)(param_1 + 8));
  lVar2 = local_50;
  local_50 = 0;
  puVar1 = (undefined8 *)(param_1 + 0xb8);
  lVar4 = *(long *)(param_1 + 0xb0);
  *(long *)(param_1 + 0xb0) = lVar2;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0xc0) = uStack_40;
    *(undefined8 *)(param_1 + 200) = local_38;
    *puVar1 = local_48;
    local_50 = 0;
  }
  else {
    FUN_0270c1fc(puVar1);
    lVar2 = local_50;
    *(undefined8 *)(param_1 + 0xc0) = uStack_40;
    *(undefined8 *)(param_1 + 200) = local_38;
    *puVar1 = local_48;
    local_50 = 0;
    if (lVar2 != 0) {
      FUN_0270c1fc(&local_48);
    }
  }
  uVar3 = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  FUN_00cd003c(param_1);
  nn::os::GetSystemTick();
  uVar3 = nn::os::ConvertToTimeSpan();
  *(undefined8 *)(param_1 + 0x150) = uVar3;
  return;
}


