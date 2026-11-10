/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025a984; name: FUN_0025a984
 */


undefined8 FUN_0025a984(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  long *plVar8;
  byte *pbVar9;
  long *plVar10;
  long lVar11;
  byte *__s1;
  undefined8 *puVar12;
  
  puVar12 = param_1 + 1;
  puVar6 = (undefined8 *)FUN_00259b80(param_1,param_2,*puVar12,puVar12);
  if (puVar12 != puVar6) {
    pbVar9 = *(byte **)*param_2;
    pbVar7 = *(byte **)puVar6[4];
    bVar3 = *pbVar7;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar7 + 8);
    }
    bVar4 = *pbVar9;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(pbVar9 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(pbVar9 + 0x10);
      if ((bVar4 & 1) == 0) {
        __s1 = pbVar9 + 1;
      }
      pbVar9 = *(byte **)(pbVar7 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar9 = pbVar7 + 1;
      }
      iVar5 = memcmp(__s1,pbVar9,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return 0;
        }
        goto LAB_0025aa1c;
      }
    }
    if (uVar1 <= uVar2) {
LAB_0025aa1c:
      plVar10 = (long *)puVar6[1];
      if ((long *)puVar6[1] == (long *)0x0) {
        plVar10 = puVar6 + 2;
        plVar8 = (long *)*plVar10;
        if ((undefined8 *)*plVar8 != puVar6) {
          do {
            lVar11 = *plVar10;
            plVar10 = (long *)(lVar11 + 0x10);
            plVar8 = (long *)*plVar10;
          } while (*plVar8 != lVar11);
        }
      }
      else {
        do {
          plVar8 = plVar10;
          plVar10 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      if ((undefined8 *)*param_1 == puVar6) {
        *param_1 = plVar8;
      }
      param_1[3] = param_1[3] + -1;
      FUN_01336080(param_1[1],puVar6);
      if (param_1[2] == 0) {
        FUN_0049e700(puVar6);
      }
      return 1;
    }
  }
  return 0;
}


