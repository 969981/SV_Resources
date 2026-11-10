/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0020f5c8; name: FUN_0020f5c8
 */


undefined8 * FUN_0020f5c8(long *param_1)

{
  ulong uVar1;
  size_t __n;
  void *__s1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  void *__s2;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *local_58 [3];
  
  FUN_0020f6e0(local_58);
  puVar6 = local_58[0];
  plVar4 = param_1 + 1;
  plVar7 = (long *)*plVar4;
  if (plVar7 != (long *)0x0) {
    uVar5 = (ulong)(*(byte *)(local_58[0] + 4) >> 1);
    __s1 = (void *)local_58[0][6];
    if ((*(byte *)(local_58[0] + 4) & 1) == 0) {
      __s1 = (void *)((long)local_58[0] + 0x21);
    }
    else {
      uVar5 = local_58[0][5];
    }
    do {
      bVar2 = *(byte *)(plVar7 + 4);
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = plVar7[5];
      }
      __n = uVar1;
      if (uVar5 <= uVar1) {
        __n = uVar5;
      }
      if (__n == 0) {
LAB_0020f668:
        if (uVar5 < uVar1) goto LAB_0020f670;
LAB_0020f618:
        plVar4 = (long *)plVar7[1];
        if (plVar4 == (long *)0x0) {
          plVar4 = plVar7 + 1;
          goto LAB_0020f68c;
        }
      }
      else {
        __s2 = (void *)plVar7[6];
        if ((bVar2 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar3 = memcmp(__s1,__s2,__n);
        if (iVar3 == 0) goto LAB_0020f668;
        if (-1 < iVar3) goto LAB_0020f618;
LAB_0020f670:
        plVar4 = (long *)*plVar7;
        if (plVar4 == (long *)0x0) goto code_r0x0020f678;
      }
      plVar7 = plVar4;
    } while( true );
  }
  plVar7 = plVar4;
LAB_0020f68c:
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = plVar7;
  *plVar4 = (long)puVar6;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar6 = (undefined8 *)*plVar4;
  }
  FUN_010108e0(param_1[1],puVar6);
  param_1[2] = param_1[2] + 1;
  return local_58[0];
code_r0x0020f678:
  plVar4 = plVar7;
  goto LAB_0020f68c;
}


