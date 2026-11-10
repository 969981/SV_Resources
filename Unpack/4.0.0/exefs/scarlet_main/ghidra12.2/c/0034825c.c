/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034825c; name: FUN_0034825c
 */


void FUN_0034825c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_0038db40(param_1 + 0x108);
  plVar3 = (long *)(param_1 + 0x130);
  plVar4 = *(long **)(param_1 + 0x130);
  if (*(long **)(param_1 + 0x130) == (long *)0x0) {
    plVar4 = plVar3;
LAB_003482c4:
    lVar2 = *plVar3;
  }
  else {
    while( true ) {
      while (plVar4[4] <= param_2) {
        if (param_2 <= plVar4[4]) goto LAB_003482c4;
        plVar3 = plVar4 + 1;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_003482c4;
        plVar4 = (long *)*plVar3;
      }
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) break;
      plVar4 = (long *)*plVar4;
    }
    lVar2 = *plVar4;
  }
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar1[4] = param_2;
    puVar1[2] = plVar4;
    *(undefined1 *)(puVar1 + 5) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *plVar3 = (long)puVar1;
    if (**(long **)(param_1 + 0x128) != 0) {
      *(long *)(param_1 + 0x128) = **(long **)(param_1 + 0x128);
      puVar1 = (undefined8 *)*plVar3;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x130),puVar1);
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
  }
                    /* try { // try from 00348334 to 0034833b has its CatchHandler @ 0034834c */
  FUN_0038db60(param_1 + 0x108);
  return;
}


