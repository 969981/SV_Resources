/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051e02c; name: FUN_0051e02c
 */


uint FUN_0051e02c(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  void *__s2;
  void *__s1;
  
  switch((uint)param_2[3]) {
  case 1:
    return (uint)((int)(uint)*param_2 < (int)(uint)*param_3);
  case 2:
    return (uint)((long)*param_2 < (long)*param_3);
  case 3:
    return (uint)((uint)*param_2 < (uint)*param_3);
  case 4:
    return (uint)(*param_2 < *param_3);
  default:
    return 1;
  case 7:
    return (uint)((char)*param_2 == '\0' && (char)*param_3 != '\0');
  case 9:
    break;
  }
  bVar3 = (byte)*param_3;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = param_3[1];
  }
  bVar4 = (byte)*param_2;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = param_2[1];
  }
  __n = uVar1;
  if (uVar2 <= uVar1) {
    __n = uVar2;
  }
  if (__n != 0) {
    __s1 = (void *)param_2[2];
    if ((bVar4 & 1) == 0) {
      __s1 = (void *)((long)param_2 + 1);
    }
    __s2 = (void *)param_3[2];
    if ((bVar3 & 1) == 0) {
      __s2 = (void *)((long)param_3 + 1);
    }
    uVar5 = memcmp(__s1,__s2,__n);
    if (uVar5 != 0) {
      return uVar5 >> 0x1f;
    }
  }
  uVar5 = 0;
  if (uVar2 < uVar1) {
    uVar5 = 0xffffffff;
  }
  return uVar5 >> 0x1f;
}


