/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002793b8; name: FUN_002793b8
 */


undefined8 * FUN_002793b8(long *param_1,byte *param_2)

{
  size_t __n;
  byte *__s1;
  byte bVar1;
  int iVar2;
  void *__dest;
  undefined8 *puVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  plVar8 = param_1 + 1;
  plVar9 = (long *)*plVar8;
  if (plVar9 != (long *)0x0) {
    uVar4 = (ulong)(*param_2 >> 1);
    __s1 = *(byte **)(param_2 + 0x10);
    plVar8 = param_1 + 1;
    if ((*param_2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    else {
      uVar4 = *(ulong *)(param_2 + 8);
    }
    do {
      while( true ) {
        bVar1 = *(byte *)(plVar9 + 4);
        uVar6 = (ulong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar6 = plVar9[5];
        }
        __n = uVar6;
        if (uVar4 <= uVar6) {
          __n = uVar4;
        }
        if (__n != 0) break;
        if (uVar4 < uVar6) goto LAB_0027945c;
LAB_0027948c:
        if (uVar4 <= uVar6) goto LAB_002794ac;
LAB_00279494:
        plVar8 = plVar9 + 1;
        if ((long *)*plVar8 == (long *)0x0) goto LAB_002794ac;
        plVar9 = (long *)*plVar8;
      }
      pvVar5 = (void *)plVar9[6];
      if ((bVar1 & 1) == 0) {
        pvVar5 = (void *)((long)plVar9 + 0x21);
      }
      iVar2 = memcmp(__s1,pvVar5,__n);
      if (iVar2 == 0) {
        if (uVar6 <= uVar4) goto LAB_00279470;
      }
      else if (-1 < iVar2) {
LAB_00279470:
        iVar2 = memcmp(pvVar5,__s1,__n);
        if (iVar2 == 0) goto LAB_0027948c;
        if (iVar2 < 0) goto LAB_00279494;
        goto LAB_002794ac;
      }
LAB_0027945c:
      plVar8 = plVar9;
      if ((long *)*plVar9 == (long *)0x0) goto LAB_002794e8;
      plVar9 = (long *)*plVar9;
    } while( true );
  }
  plVar9 = plVar8;
LAB_002794ac:
  puVar7 = (undefined8 *)*plVar8;
joined_r0x002794f0:
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
    if ((*param_2 & 1) == 0) {
      uVar11 = *(undefined8 *)(param_2 + 8);
      uVar10 = *(undefined8 *)param_2;
      puVar7[6] = *(undefined8 *)(param_2 + 0x10);
      puVar7[5] = uVar11;
      puVar7[4] = uVar10;
    }
    else {
      uVar4 = *(ulong *)(param_2 + 8);
      pvVar5 = *(void **)(param_2 + 0x10);
      if (uVar4 < 0x17) {
        __dest = (void *)((long)puVar7 + 0x21);
        *(char *)(puVar7 + 4) = (char)((int)uVar4 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002795a8 to 002795ab has its CatchHandler @ 002795ac */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
        puVar7[5] = uVar4;
        puVar7[6] = __dest;
        puVar7[4] = uVar6 | 1;
      }
      memcpy(__dest,pvVar5,uVar4 + 1);
    }
    puVar7[7] = 0;
    puVar7[2] = plVar9;
    *puVar7 = 0;
    puVar7[1] = 0;
    *plVar8 = (long)puVar7;
    if (*(long *)*param_1 == 0) {
      puVar3 = puVar7;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar3 = (undefined8 *)*plVar8;
    }
    FUN_010108e0(param_1[1],puVar3);
    param_1[2] = param_1[2] + 1;
  }
  return puVar7 + 7;
LAB_002794e8:
  puVar7 = (undefined8 *)*plVar9;
  goto joined_r0x002794f0;
}


