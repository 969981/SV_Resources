/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032b67c; name: FUN_0032b67c
 */


undefined1  [16] FUN_0032b67c(long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  size_t __n;
  char *__s1;
  char *__s2;
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  plVar8 = param_1 + 1;
  plVar9 = (long *)*plVar8;
  if (plVar9 == (long *)0x0) {
    plVar10 = plVar8;
  }
  else {
    __s1 = (char *)*param_2;
    uVar1 = param_2[1];
    plVar8 = param_1 + 1;
    while( true ) {
      while( true ) {
        __s2 = (char *)plVar9[4];
        uVar2 = plVar9[5];
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar4 = strncmp(__s1,__s2,__n);
        bVar3 = uVar1 < uVar2;
        if (iVar4 != 0) {
          bVar3 = iVar4 < 0;
        }
        plVar10 = plVar9;
        if (!bVar3) break;
        if ((long *)*plVar9 == (long *)0x0) {
          puVar7 = (undefined8 *)*plVar9;
          goto joined_r0x0032b740;
        }
        plVar8 = plVar9;
        plVar9 = (long *)*plVar9;
      }
      iVar4 = strncmp(__s2,__s1,__n);
      bVar3 = uVar2 < uVar1;
      if (iVar4 != 0) {
        bVar3 = iVar4 < 0;
      }
      if (!bVar3) break;
      plVar8 = plVar9 + 1;
      if ((long *)*plVar8 == (long *)0x0) break;
      plVar9 = (long *)*plVar8;
    }
  }
  puVar7 = (undefined8 *)*plVar8;
  plVar9 = plVar8;
joined_r0x0032b740:
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
    uVar6 = *(undefined8 *)*param_4;
    puVar7[5] = ((undefined8 *)*param_4)[1];
    puVar7[4] = uVar6;
    puVar7[6] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = plVar10;
    *plVar9 = (long)puVar7;
    if (*(long *)*param_1 == 0) {
      puVar5 = puVar7;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar5 = (undefined8 *)*plVar9;
    }
    FUN_010108e0(param_1[1],puVar5);
    uVar6 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar6 = 0;
  }
  auVar11._8_8_ = uVar6;
  auVar11._0_8_ = puVar7;
  return auVar11;
}


