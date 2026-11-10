/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f8944; name: FUN_026f8944
 */


undefined1  [16] FUN_026f8944(long param_1,undefined1 (*param_2) [16])

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_60 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  char local_2c;
  
  uVar2 = *(undefined8 *)*param_2;
  auVar3 = *param_2;
  uVar1 = FUN_026f850c(param_1,1);
  if ((uVar1 & 1) == 0) {
    FUN_026f89c8(&local_40,uVar2,param_2,param_1 + 0x1b0);
    auVar3._8_8_ = uStack_38;
    auVar3._0_8_ = local_40;
    if (local_2c == '\0') {
      FUN_026f8a10(local_60,*(undefined8 *)*param_2,param_1 + 0x1b0);
      auVar3 = thunk_FUN_026fd880(local_60[0],param_2);
    }
  }
  return auVar3;
}


