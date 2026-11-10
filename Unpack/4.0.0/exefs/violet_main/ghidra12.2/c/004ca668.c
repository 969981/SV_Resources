/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ca668; name: FUN_004ca668
 */


void FUN_004ca668(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = (long)(PTR_DAT_047cd890 + 0x10);
                    /* try { // try from 004ca688 to 004ca68b has its CatchHandler @ 004ca700 */
  FUN_004ca714(param_1 + 1);
  puVar1 = PTR_LAB_047cba48;
  puVar2 = (uint *)param_1[4];
  if ((puVar2 != (uint *)0x0) && (param_1[2] == 0)) {
    uVar4 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        lVar3 = *(long *)puVar2;
        if (lVar3 != 0) {
          FUN_004cb2ec(lVar3);
          FUN_0049e790(puVar1,lVar3);
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar2 = (uint *)param_1[4];
    }
    FUN_0049e700(puVar2);
  }
  param_1[4] = 0;
  return;
}


