/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038ace0; name: FUN_0038ace0
 */


undefined * FUN_0038ace0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined *local_20;
  long lStack_18;
  
  uStack_28 = 0;
  local_20 = (undefined *)0x0;
  lStack_18 = 0;
  local_30 = param_3;
  uVar2 = FUN_003860a0(&local_30,param_1,param_2);
  if ((uVar2 & 1) == 0) {
    *param_4 = 0;
    return (undefined *)0x0;
  }
  *param_4 = lStack_18 - (long)local_20;
  puVar1 = &DAT_047f1570;
  if (lStack_18 - (long)local_20 != 0) {
    puVar1 = local_20;
  }
  return puVar1;
}


