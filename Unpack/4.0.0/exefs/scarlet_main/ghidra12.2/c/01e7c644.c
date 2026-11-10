/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7c644; name: FUN_01e7c644
 */


void FUN_01e7c644(void *param_1,size_t param_2)

{
  long *plVar1;
  void *__s;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 local_60;
  long *local_58;
  size_t local_50;
  undefined8 local_48;
  
  plVar1 = (long *)FUN_0126a9c0();
  __s = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,param_2,1);
  if (__s == (void *)0x0) {
    local_50 = 0;
    local_48 = 0;
    local_58 = (long *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_01053840();
    lVar3 = nn::os::GetTlsValue(*puVar2);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar1;
    lVar4 = *(long *)(lVar3 + 0x80) + 1;
    *(long *)(lVar3 + 0x80) = lVar4;
    if (param_2 != 0) {
      memset(__s,0,param_2);
      lVar4 = *(long *)(lVar3 + 0x80);
    }
    local_48 = 1;
    *(long *)(lVar3 + 0x80) = lVar4 + -1;
    local_58 = plVar1;
    local_50 = param_2;
  }
  local_60 = 0;
  FUN_01e93988(__s);
  DAT_04839320 = local_58;
  DAT_04839328 = local_50;
  DAT_04839330 = local_48;
  FUN_01e936f0(&local_60);
  if (DAT_04839318 != (void *)0x0) {
    memcpy(DAT_04839318,param_1,param_2);
    DAT_04839340 = param_2;
  }
  return;
}


