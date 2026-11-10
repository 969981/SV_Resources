/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033419cc; name: FUN_033419cc
 */


uint * FUN_033419cc(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  char *__s;
  void *__s1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  ulong __n;
  uint uVar8;
  long lVar9;
  
  __s1 = (void *)*param_2;
  __n = param_2[1] - (long)__s1;
  uVar8 = 0x811c9dc5;
  if (0 < (long)__n) {
    if (param_2[1] == (long)__s1 + 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        pbVar1 = (byte *)((long)__s1 + uVar7);
        uVar7 = uVar7 + 2;
        uVar8 = ((uVar8 ^ *pbVar1) * 0x1000193 ^ (uint)pbVar1[1]) * 0x1000193;
      } while ((__n & 0xfffffffffffffffe) != uVar7);
    }
    if ((__n & 1) != 0) {
      uVar8 = (uVar8 ^ *(byte *)((long)__s1 + uVar7)) * 0x1000193;
    }
  }
  uVar4 = *(uint *)(param_1 + 3);
  uVar7 = (ulong)(uVar4 & uVar8);
  lVar9 = param_1[2];
  do {
    uVar3 = *(uint *)(lVar9 + uVar7 * 8 + 4);
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar2 = (uint *)(lVar9 + uVar7 * 8);
    if (*puVar2 == uVar8) {
      __s = (char *)(*(ulong *)(*param_1 + (ulong)uVar3 * 0x10) & 0xfffffffffffffffe);
      if (__s == (char *)0x0) {
        if (__n == 0) {
          return puVar2;
        }
      }
      else {
        sVar6 = strlen(__s);
        if ((sVar6 == __n) && (iVar5 = memcmp(__s1,__s,__n), iVar5 == 0)) {
          return puVar2;
        }
      }
    }
    uVar7 = uVar7 + 1 & (long)(int)uVar4;
  } while( true );
}


