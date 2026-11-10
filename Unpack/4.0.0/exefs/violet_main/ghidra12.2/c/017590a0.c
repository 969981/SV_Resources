/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017590a0; name: FUN_017590a0
 */


void FUN_017590a0(long *param_1,size_t param_2)

{
  int iVar1;
  void *__s;
  long lVar2;
  long lVar3;
  undefined8 local_50;
  long *local_48;
  size_t local_40;
  undefined8 local_38;
  
  DAT_0485f2f0 = param_1;
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,param_2,1);
  if (__s == (void *)0x0) {
    local_40 = 0;
    local_38 = 0;
    local_48 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
    lVar3 = *(long *)(lVar2 + 0x80) + 1;
    *(long *)(lVar2 + 0x80) = lVar3;
    if (param_2 != 0) {
      memset(__s,0,param_2);
      lVar3 = *(long *)(lVar2 + 0x80);
    }
    local_38 = 1;
    *(long *)(lVar2 + 0x80) = lVar3 + -1;
    local_48 = param_1;
    local_40 = param_2;
  }
  local_50 = 0;
  FUN_017595c4(__s);
  DAT_0485f2d8 = local_48;
  DAT_0485f2e0 = local_40;
  DAT_0485f2e8 = local_38;
  FUN_01825acc(&local_50);
  DAT_0485f2f8 = param_2;
  return;
}


