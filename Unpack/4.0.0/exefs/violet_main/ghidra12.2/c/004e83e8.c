/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e83e8; name: FUN_004e83e8
 */


void FUN_004e83e8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  long *plVar4;
  ulong uVar5;
  
  puVar2 = PTR_LAB_047cba48;
  puVar3 = (uint *)param_1[2];
  if ((puVar3 != (uint *)0x0) && (*param_1 == 0)) {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      puVar1 = PTR_DAT_047cd818 + 0x10;
      do {
        puVar3 = puVar3 + 2;
        plVar4 = *(long **)puVar3;
        if (plVar4 != (long *)0x0) {
          *plVar4 = (long)puVar1;
                    /* try { // try from 004e844c to 004e845b has its CatchHandler @ 004e848c */
          FUN_004d7d04(plVar4);
          FUN_004ca714(plVar4 + 1);
          FUN_0049e790(puVar2,plVar4);
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar3 = (uint *)param_1[2];
    }
    FUN_0049e700(puVar3);
  }
  param_1[2] = 0;
  return;
}


