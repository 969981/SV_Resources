/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02535e9c; name: FUN_02535e9c
 */


void FUN_02535e9c(undefined1 *param_1,void *param_2)

{
  char *__s;
  size_t sVar1;
  void *__dest;
  undefined1 auStack_70 [56];
  ulong local_38;
  
  *param_1 = 1;
  memcpy(auStack_70,param_2,0x34);
  local_38 = 0;
  __s = (char *)(*(ulong *)((long)param_2 + 0x38) & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar1 = strlen(__s);
    sVar1 = (size_t)((int)sVar1 + 1);
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar1);
    memcpy(__dest,__s,sVar1);
    local_38 = (ulong)__dest | 1;
  }
  FUN_02535f70(param_1 + 8,auStack_70);
  if ((local_38 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02535f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_38 - 1,0);
  return;
}


