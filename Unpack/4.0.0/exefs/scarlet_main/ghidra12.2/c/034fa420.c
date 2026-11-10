/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034fa420; name: FUN_034fa420
 */


ulong FUN_034fa420(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int local_34;
  undefined1 auStack_30 [13];
  undefined1 local_23;
  undefined8 local_8;
  
  param_1[0xc] = 0;
  (**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],auStack_30);
  local_23 = (undefined1)(int)*(float *)(param_1[3] + 0x2c0);
  (**(code **)(*(long *)param_1[0xb] + 0x30))((long *)param_1[0xb],auStack_30);
  local_8 = 0;
  local_34 = 0;
  uVar3 = (**(code **)(*(long *)param_1[0xb] + 0x88))
                    ((long *)param_1[0xb],&local_8,&local_34,*PTR_DAT_047e6980);
  if ((int)uVar3 == 0x2d || (int)uVar3 == 0x11) {
    *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xbf;
    if (local_34 == 0) {
      uVar3 = 2;
    }
    else {
      *(int *)(param_1 + 0xd) = local_34;
      uVar2 = (**(code **)(*param_1 + 0x130))(param_1,local_8,0);
      uVar1 = 0x2d;
      if (uVar2 != 1) {
        uVar1 = uVar2;
      }
      uVar3 = (ulong)uVar1;
    }
  }
  return uVar3;
}


