/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c542c; name: FUN_002c542c
 */


undefined1  [16] FUN_002c542c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t __n;
  void *__s1;
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *__s2;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  plVar6 = param_1 + 1;
  plVar7 = (long *)*plVar6;
  if (plVar7 != (long *)0x0) {
    __s1 = (void *)*param_2;
    uVar1 = param_2[1];
    plVar6 = param_1 + 1;
    do {
      while( true ) {
        uVar8 = plVar7[5];
        __n = uVar1;
        if (uVar1 >= uVar8) {
          __n = uVar8;
        }
        if (__n != 0) break;
        if (uVar1 < uVar8) goto LAB_002c549c;
LAB_002c54cc:
        if (uVar1 <= uVar8) goto LAB_002c54ec;
LAB_002c54d4:
        plVar6 = plVar7 + 1;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_002c54ec;
        plVar7 = (long *)*plVar6;
      }
      __s2 = (void *)plVar7[4];
      iVar2 = memcmp(__s1,__s2,__n);
      if (iVar2 == 0) {
        if (uVar8 <= uVar1) goto LAB_002c54b0;
      }
      else if (-1 < iVar2) {
LAB_002c54b0:
        iVar2 = memcmp(__s2,__s1,__n);
        if (iVar2 == 0) goto LAB_002c54cc;
        if (iVar2 < 0) goto LAB_002c54d4;
        goto LAB_002c54ec;
      }
LAB_002c549c:
      plVar6 = plVar7;
      if ((long *)*plVar7 == (long *)0x0) goto LAB_002c54fc;
      plVar7 = (long *)*plVar7;
    } while( true );
  }
  plVar7 = plVar6;
LAB_002c54ec:
  puVar5 = (undefined8 *)*plVar6;
joined_r0x002c5504:
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    uVar9 = param_3[1];
    uVar3 = *param_3;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = plVar7;
    puVar5[5] = uVar9;
    puVar5[4] = uVar3;
    *plVar6 = (long)puVar5;
    if (*(long *)*param_1 == 0) {
      puVar4 = puVar5;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*plVar6;
    }
    FUN_010108e0(param_1[1],puVar4);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = puVar5;
  return auVar10;
LAB_002c54fc:
  puVar5 = (undefined8 *)*plVar7;
  goto joined_r0x002c5504;
}


