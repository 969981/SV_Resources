/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00870084; name: FUN_00870084
 */


void FUN_00870084(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 *local_230;
  undefined8 local_228;
  undefined1 auStack_220 [512];
  undefined8 local_8;
  
  local_260 = &local_8;
  local_258 = 1;
  uStack_248 = param_2[1];
  local_250 = *param_2;
  uStack_238 = param_2[3];
  local_240 = param_2[2];
  local_230 = auStack_220;
  local_228 = -0x7fffff8000000000;
  local_8 = param_3;
  FUN_00870af0(*(long *)(param_1 + 0x18) + 0x18,&local_230,&local_260);
  lVar1 = local_228;
  uVar2 = (ulong)local_228._4_4_;
  local_228 = (ulong)local_228._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_230 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_230,uVar2 << 2);
  }
  return;
}


