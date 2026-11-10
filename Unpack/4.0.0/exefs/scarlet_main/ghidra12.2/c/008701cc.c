/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008701cc; name: FUN_008701cc
 */


undefined4
FUN_008701cc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_290 [4];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined1 *local_260 [2];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined1 *local_230;
  undefined8 local_228;
  undefined1 auStack_220 [512];
  
  local_260[0] = (undefined1 *)local_290;
  local_290[0] = 0xffffffff;
  uStack_248 = param_2[1];
  local_280 = *param_2;
  fVar3 = (float)*param_3;
  fVar4 = (float)((ulong)*param_3 >> 0x20);
  fVar3 = fVar3 * fVar3;
  local_240 = CONCAT44(fVar4 * fVar4,fVar3);
  uStack_278 = CONCAT44(fVar3,(int)uStack_248);
  local_230 = auStack_220;
  local_238 = 0;
  local_228 = -0x7fffff8000000000;
  local_270 = param_4;
  local_250 = local_280;
  FUN_00870fbc(*(long *)(param_1 + 0x18) + 0x18,&local_230,local_260);
  lVar1 = local_228;
  uVar2 = (ulong)local_228._4_4_;
  local_228 = (ulong)local_228._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_230 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_230,uVar2 << 2);
  }
  param_5[1] = uStack_278;
  *param_5 = local_280;
  return local_290[0];
}


