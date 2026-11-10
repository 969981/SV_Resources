/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fb8b0; name: FUN_026fb8b0
 */


undefined8
FUN_026fb8b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  FUN_0250aaf4(auStack_50);
  uVar1 = FUN_026fb60c(param_1,auStack_50,&local_60,&local_64);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_026fdb14(local_60,param_2,0);
    uVar1 = FUN_025205f8();
    uVar2 = 0;
    if ((uVar1 & 1) != 0) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_64;
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = local_60;
        param_3[1] = uStack_58;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


