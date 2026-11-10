/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123267c; name: FUN_0123267c
 */


undefined8 FUN_0123267c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar3 = *param_1;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  uVar1 = FUN_01232724(lVar3,&local_50);
  if ((uVar1 & 1) == 0) {
    if ((code *)*param_3 != (code *)0x0) {
      local_58 = (ulong)local_58._4_4_ << 0x20;
      (*(code *)*param_3)(param_3 + 4,&local_58);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01232cd8(*(undefined8 *)PTR_DAT_047dcae0);
    local_58 = uVar2;
    FUN_012329ac(lVar3 + 0xa0,&local_58);
    uVar2 = FUN_01233358(lVar3,&local_50,uVar2,param_2,param_3);
  }
  return uVar2;
}


