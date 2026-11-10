/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02535dd0; name: FUN_02535dd0
 */


void FUN_02535dd0(undefined8 param_1,void *param_2)

{
  char *__s;
  ulong uVar1;
  size_t sVar2;
  void *__dest;
  undefined1 auStack_70 [56];
  ulong local_38;
  
  memcpy(auStack_70,param_2,0x34);
  local_38 = 0;
  __s = (char *)(*(ulong *)((long)param_2 + 0x38) & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    sVar2 = (size_t)((int)sVar2 + 1);
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar2);
    memcpy(__dest,__s,sVar2);
    local_38 = (ulong)__dest | 1;
  }
  uVar1 = local_38;
  FUN_02535e9c(param_1,auStack_70);
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02535e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar1 - 1,0);
  return;
}


