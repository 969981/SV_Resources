/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d50b5c; name: FUN_00d50b5c
 */


void FUN_00d50b5c(undefined8 *param_1,char *param_2,code *param_3,ulong param_4)

{
  char *__s;
  char cVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
    if ((*(long *)(param_2 + 8) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar4 != 0)) {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(lVar4 + ((long)param_4 >> 1) + -0x28));
      }
      pvVar2 = (void *)(*param_3)();
      memcpy(param_1,pvVar2,0x34);
      param_1[7] = 0;
      __s = (char *)(*(ulong *)((long)pvVar2 + 0x38) & 0xfffffffffffffffe);
      if (__s == (char *)0x0) {
        return;
      }
      sVar3 = strlen(__s);
      sVar3 = (size_t)((int)sVar3 + 1);
      pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar3);
      memcpy(pvVar2,__s,sVar3);
      param_1[7] = (ulong)pvVar2 | 1;
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      FUN_00d51024(param_1,param_2 + 8);
      return;
    }
    if (cVar1 == '\x01') {
      FUN_00d50f6c(param_1,param_2 + 8);
      return;
    }
    if (cVar1 == '\0') {
      FUN_00d50eb8(param_1,*(undefined8 *)(param_2 + 8));
      return;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


