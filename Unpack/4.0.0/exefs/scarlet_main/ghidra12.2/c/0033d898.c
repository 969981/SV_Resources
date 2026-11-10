/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033d898; name: FUN_0033d898
 */


undefined1  [16]
FUN_0033d898(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *__s1;
  undefined8 *puVar4;
  char *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar5 = param_1 + 1;
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    plVar7 = plVar5;
  }
  else {
    __s1 = (char *)*param_2;
    plVar5 = param_1 + 1;
    while( true ) {
      while( true ) {
        __s2 = (char *)plVar6[4];
        iVar1 = strcmp(__s1,__s2);
        plVar7 = plVar6;
        if (-1 < iVar1) break;
        if ((long *)*plVar6 == (long *)0x0) {
          puVar4 = (undefined8 *)*plVar6;
          goto joined_r0x0033d918;
        }
        plVar5 = plVar6;
        plVar6 = (long *)*plVar6;
      }
      iVar1 = strcmp(__s2,__s1);
      if (-1 < iVar1) break;
      plVar5 = plVar6 + 1;
      if ((long *)*plVar5 == (long *)0x0) break;
      plVar6 = (long *)*plVar5;
    }
  }
  puVar4 = (undefined8 *)*plVar5;
  plVar6 = plVar5;
joined_r0x0033d918:
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar4[4] = *(undefined8 *)*param_4;
    puVar4[5] = 0;
    puVar4[2] = plVar7;
    *puVar4 = 0;
    puVar4[1] = 0;
    *plVar6 = (long)puVar4;
    if (*(long *)*param_1 == 0) {
      puVar2 = puVar4;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar2 = (undefined8 *)*plVar6;
    }
    FUN_010108e0(param_1[1],puVar2);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar4;
  return auVar8;
}


