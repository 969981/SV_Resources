/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081ada4; name: FUN_0081ada4
 */


long * FUN_0081ada4(undefined4 param_1,undefined2 param_2,undefined2 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  switch(param_1) {
  case 1:
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x58);
    if (plVar3 != (long *)0x0) {
      *(undefined2 *)(plVar3 + 1) = param_2;
      *(undefined2 *)((long)plVar3 + 10) = param_3;
      *plVar3 = (long)(PTR_DAT_047d1938 + 0x10);
      FUN_008187e4(plVar3 + 2);
    }
    break;
  case 2:
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x60);
    if (plVar3 != (long *)0x0) {
      *(undefined2 *)(plVar3 + 1) = param_2;
      *(undefined2 *)((long)plVar3 + 10) = param_3;
      *plVar3 = (long)(PTR_DAT_047d1938 + 0x10);
      FUN_008187e4(plVar3 + 2);
      puVar2 = PTR_DAT_047d1940;
      plVar3[0xb] = param_4;
      *plVar3 = (long)(puVar2 + 0x10);
    }
    break;
  case 3:
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x10);
    if (plVar3 != (long *)0x0) {
      *(undefined2 *)(plVar3 + 1) = param_2;
      *(undefined2 *)((long)plVar3 + 10) = 4;
      puVar2 = PTR_DAT_047d1948;
      *(undefined4 *)((long)plVar3 + 0xc) = 0;
      *plVar3 = (long)(puVar2 + 0x10);
    }
    break;
  case 4:
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    *(undefined2 *)(plVar3 + 1) = param_2;
    *(undefined2 *)((long)plVar3 + 10) = 8;
    puVar2 = PTR_DAT_047d1950;
    goto LAB_0081af08;
  case 5:
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    *(undefined2 *)(plVar3 + 1) = param_2;
    *(undefined2 *)((long)plVar3 + 10) = param_3;
    puVar2 = PTR_DAT_047d1928;
LAB_0081af08:
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[2] = 0;
    break;
  case 6:
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (plVar3 != (long *)0x0) {
      *(undefined2 *)(plVar3 + 1) = param_2;
      *(undefined2 *)((long)plVar3 + 10) = param_3;
      puVar2 = PTR_DAT_047d1958 + 0x10;
      *(undefined2 *)((long)plVar3 + 0xc) = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[2] = 0;
      *plVar3 = (long)puVar2;
    }
    break;
  case 7:
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (plVar3 != (long *)0x0) {
      *(undefined2 *)(plVar3 + 1) = param_2;
      puVar2 = PTR_DAT_047d1960;
      *(undefined2 *)((long)plVar3 + 10) = param_3;
      *plVar3 = (long)(puVar2 + 0x10);
      puVar1 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      plVar3[2] = (long)puVar1;
    }
    break;
  default:
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


