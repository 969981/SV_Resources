/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052d43c; name: FUN_0052d43c
 */


uint FUN_0052d43c(long *param_1,long *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long *__dest;
  size_t __n;
  long local_a0;
  long lStack_98;
  long *local_90;
  undefined4 local_84;
  undefined8 local_80;
  long alStack_78 [5];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  __n = (size_t)param_3;
  (**(code **)(*param_1 + 0x28))();
  local_48 = *(undefined4 *)PTR_DAT_047cdbc8;
  local_50 = 0;
  local_40 = 0;
  uStack_38 = 0;
  alStack_78[0] = 0;
  local_80 = 0;
  alStack_78[2] = 0;
  alStack_78[1] = 0;
  uStack_44 = 0x80000000;
  alStack_78[4] = 0;
  alStack_78[3] = 0;
  if (param_3 < 0x11) {
    __dest = alStack_78;
    memcpy(__dest,param_2,__n);
    lStack_98 = (long)__dest + __n;
    local_84 = 0;
    local_90 = (long *)0x0;
    if (alStack_78[4] == 1) {
      alStack_78[4] = (long)param_2 - (long)__dest;
    }
  }
  else {
    local_84 = 0x10;
    lStack_98 = (long)param_2 + (__n - 0x10);
    local_90 = alStack_78;
    __dest = param_2;
  }
  local_a0 = lStack_98;
  lVar2 = (**(code **)(*param_1 + 0x58))(param_1,__dest,&local_a0);
  uVar1 = 0;
  if ((lVar2 != 0) && ((int)local_50 == 0)) {
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  }
  return uVar1 & 1;
}


