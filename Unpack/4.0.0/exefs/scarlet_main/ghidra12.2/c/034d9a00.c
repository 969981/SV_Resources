/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d9a00; name: FUN_034d9a00
 */


ulong FUN_034d9a00(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int local_34;
  undefined1 auStack_30 [13];
  undefined1 local_23;
  long local_8;
  
  local_8 = 0;
  local_34 = 0;
  if ((*(byte *)((long)param_1 + 0x42) & 0x38) == 8) {
    local_8 = param_1[2] + (ulong)*(uint *)((long)param_1 + 0x2c);
    local_34 = *(int *)((long)param_1 + 0x24) - *(uint *)((long)param_1 + 0x2c);
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(byte *)((long)param_1 + 0x42) = *(byte *)((long)param_1 + 0x42) & 199 | 0x10;
  }
  else {
    param_1[3] = 0;
    (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,auStack_30);
    local_23 = *(undefined1 *)(param_1 + 1);
    (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,auStack_30);
    uVar3 = (**(code **)(*(long *)*param_1 + 0x88))
                      ((long *)*param_1,&local_8,&local_34,*PTR_DAT_047e6980);
    if ((int)uVar3 != 0x2d && (int)uVar3 != 0x11) {
      return uVar3;
    }
  }
  *(byte *)((long)param_1 + 0x42) = *(byte *)((long)param_1 + 0x42) & 0xfb;
  if (local_34 == 0) {
    uVar3 = 2;
  }
  else {
    uVar2 = FUN_034d9b10(param_1,local_8);
    uVar1 = 0x2d;
    if (uVar2 != 1) {
      uVar1 = uVar2;
    }
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}


