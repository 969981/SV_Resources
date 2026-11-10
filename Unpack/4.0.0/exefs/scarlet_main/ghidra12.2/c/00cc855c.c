/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cc855c; name: FUN_00cc855c
 */


void FUN_00cc855c(undefined8 *param_1,ulong *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_00cc86cc();
  *param_1 = &PTR_FUN_045daf70;
  param_1[4] = &PTR_LAB_045dafa0;
  *(char *)(param_1 + 5) = (char)param_2[3];
  if (DAT_0485c9e0 != 0) {
    return;
  }
  if ((char)param_2[3] == '\0') {
    if ((DAT_04859438 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04859438);
      param_1 = &DAT_04859430;
      if (iVar3 != 0) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
    }
    else {
      param_1 = &DAT_04859430;
    }
  }
  else {
    param_1 = param_1 + 1;
  }
  uVar5 = *param_1;
  FUN_00cc89b0(&local_50,uVar5);
  uVar2 = local_50;
  lVar1 = DAT_0485c9e0;
  local_50 = 0;
  DAT_0485c9e0 = uVar2;
  if (lVar1 != 0) {
    FUN_027546cc(&DAT_0485c9e8);
  }
  DAT_0485c9e8 = local_48;
  DAT_0485c9f0 = uStack_40;
  DAT_0485c9f8 = local_38;
  DAT_0485ca00 = (long *)FUN_00cc8748(DAT_0485ca08,*param_2 + param_2[1],uVar5);
  pvVar4 = (void *)(**(code **)(*DAT_0485ca00 + 0x10))(DAT_0485ca00,*param_2,0x1000);
  nv::InitializeGraphics(pvVar4,*param_2);
  nv::SetGraphicsAllocator
            ((_func_void_ptr_ulong_ulong_void_ptr *)&LAB_02bc8270,
             (_func_void_void_ptr_void_ptr *)&LAB_02754780,
             (_func_void_ptr_void_ptr_ulong_void_ptr *)&LAB_02bc82d0,DAT_0485ca00);
  return;
}


