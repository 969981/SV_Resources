/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007de4fc; name: FUN_007de4fc
 */


void FUN_007de4fc(undefined8 param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  void *__dest;
  undefined4 local_610 [4];
  undefined1 local_600;
  undefined1 local_5ff;
  undefined2 local_38;
  undefined1 local_36;
  
  uVar1 = (param_4 & 0xffffffff) << 3;
  local_5ff = (undefined1)param_4;
  __dest = (void *)((ulong)&local_600 | 2);
  local_600 = 1;
  memcpy(__dest,param_3,-(param_4 >> 0x1f & 1) & 0xfffffff800000000 | uVar1);
  uVar2 = FUN_007ec544(param_1);
  local_610[0] = 0xa0000000;
  local_38 = 0;
  local_36 = 0;
  lVar3 = FUN_007ebb00(uVar2,local_610,param_2,((int)__dest + (int)uVar1) - (int)&local_600,
                       &local_38,0x1000000);
  if (lVar3 != 0) {
    uVar2 = FUN_007ec544(param_1);
    FUN_007eba90(local_610,uVar2,&local_600);
  }
  return;
}


