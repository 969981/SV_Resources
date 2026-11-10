/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e7c750; name: FUN_01e7c750
 */


void FUN_01e7c750(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar2 = FUN_0126a9c0();
  FUN_01e938d0(&local_40,uVar2,param_1);
  uVar2 = local_40;
  lVar1 = DAT_048392f8;
  local_40 = 0;
  DAT_048392f8 = uVar2;
  if (lVar1 != 0) {
    FUN_01e93660(&DAT_04839300);
  }
  DAT_04839300 = local_38;
  DAT_04839308 = uStack_30;
  DAT_04839310 = local_28;
  return;
}


