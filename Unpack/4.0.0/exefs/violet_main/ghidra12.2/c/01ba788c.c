/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ba788c; name: FUN_01ba788c
 */


ulong * FUN_01ba788c(ulong *param_1,ulong *param_2)

{
  size_t sVar1;
  void *__dest;
  ulong uVar2;
  char *__s;
  ulong uVar3;
  
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  uVar3 = *param_1;
  if ((char *)(uVar3 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      uVar2 = 0;
    }
    else {
      sVar1 = strlen(__s);
      sVar1 = (size_t)((int)sVar1 + 1);
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar1);
      memcpy(__dest,__s,sVar1);
      uVar2 = (ulong)__dest | 1;
    }
    *param_1 = uVar2;
    if ((uVar3 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar3 - 1,0);
    }
  }
  return param_1;
}


