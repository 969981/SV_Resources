/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00258640; name: FUN_00258640
 */


void FUN_00258640(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar4 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar4 != 0) {
                    /* try { // try from 00258670 to 0025867b has its CatchHandler @ 002586f4 */
      FUN_00269fa4(lVar4,0);
    }
    *param_2 = lVar4;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  lVar4 = *(long *)(lVar4 + 0x20);
  uVar1 = *(ulong *)(lVar4 + 0x18);
  uVar3 = *(ulong *)(lVar4 + 8);
  if (uVar1 < uVar3) {
    do {
      plVar2 = *(long **)(*(long *)(lVar4 + 0x20) + uVar1 * 8);
      if (plVar2 != (long *)0x0) {
        if (plVar2 == *(long **)(*(long *)(lVar4 + 0x20) + (uVar1 ^ 1) * 8)) {
          plVar2 = *(long **)(*plVar2 + 0x20);
        }
        goto LAB_002586e0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar3 != uVar1);
    plVar2 = (long *)0x0;
    uVar1 = uVar3;
  }
  else {
    plVar2 = (long *)0x0;
  }
LAB_002586e0:
  *param_1 = (long)plVar2;
  param_1[1] = lVar4;
  param_1[2] = uVar1;
  return;
}


