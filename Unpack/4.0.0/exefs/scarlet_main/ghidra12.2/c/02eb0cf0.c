/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eb0cf0; name: FUN_02eb0cf0
 */


undefined8 FUN_02eb0cf0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulong uStack_28;
  undefined8 *local_20;
  ushort local_18;
  
  local_18 = *(ushort *)((long)param_1 + 0x1c);
  if ((ulong)local_18 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = 0;
    if (*param_1 != 0) {
      lVar1 = *param_1 + (long)param_1;
    }
    local_20 = (undefined8 *)(lVar1 + (ulong)local_18 * 0x20);
    local_30 = local_20[2];
    uStack_28 = local_20[3] & 0xffffffff;
    uStack_38 = local_20[1];
    local_40 = *local_20;
    uVar2 = FUN_02eb1530(param_1,&local_40,param_2);
  }
  return uVar2;
}


