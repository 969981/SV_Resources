/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004cfd18; name: FUN_004cfd18
 */


void FUN_004cfd18(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  *param_1 = (long)(PTR_DAT_047cd9e8 + 0x10);
                    /* try { // try from 004cfd3c to 004cfd47 has its CatchHandler @ 004cff28 */
  FUN_004cff78();
  FUN_004ca714(param_1 + 1);
  FUN_005322a4(param_1 + 0x18);
  puVar2 = PTR_LAB_047cba48;
  puVar3 = (uint *)param_1[0x17];
  if ((puVar3 != (uint *)0x0) && (param_1[0x15] == 0)) {
    uVar6 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      puVar1 = PTR_DAT_047cd7d8 + 0x10;
      do {
        puVar3 = puVar3 + 2;
        plVar4 = *(long **)puVar3;
        if (plVar4 != (long *)0x0) {
          *plVar4 = (long)puVar1;
                    /* try { // try from 004cfdb0 to 004cfdb3 has its CatchHandler @ 004cff74 */
          FUN_004ca714(plVar4 + 1);
          FUN_0049e790(puVar2,plVar4);
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar3 = (uint *)param_1[0x17];
    }
    FUN_0049e700(puVar3);
  }
  param_1[0x17] = 0;
                    /* try { // try from 004cfdc8 to 004cfdcb has its CatchHandler @ 004cff24 */
  FUN_004e8290(param_1 + 0x12);
                    /* try { // try from 004cfdd0 to 004cfdd3 has its CatchHandler @ 004cff20 */
  FUN_004e8000(param_1 + 0xf);
  puVar2 = PTR_LAB_047cba48;
  puVar3 = (uint *)param_1[0xe];
  if ((puVar3 != (uint *)0x0) && (param_1[0xc] == 0)) {
    uVar6 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        lVar5 = *(long *)puVar3;
        if (lVar5 != 0) {
          FUN_004ce64c(lVar5);
          FUN_0049e790(puVar2,lVar5);
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar3 = (uint *)param_1[0xe];
    }
    FUN_0049e700(puVar3);
  }
  puVar3 = (uint *)param_1[0xb];
  param_1[0xe] = 0;
  puVar2 = PTR_LAB_047cba48;
  if ((puVar3 != (uint *)0x0) && (param_1[9] == 0)) {
    uVar6 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        lVar5 = *(long *)puVar3;
        if (lVar5 != 0) {
          FUN_004d63fc(lVar5);
          FUN_0049e790(puVar2,lVar5);
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar3 = (uint *)param_1[0xb];
    }
    FUN_0049e700(puVar3);
  }
  puVar3 = (uint *)param_1[8];
  param_1[0xb] = 0;
  puVar2 = PTR_LAB_047cba48;
  if ((puVar3 != (uint *)0x0) && (param_1[6] == 0)) {
    uVar6 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        lVar5 = *(long *)puVar3;
        if (lVar5 != 0) {
          FUN_004cfd18(lVar5);
          FUN_0049e790(puVar2,lVar5);
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar3 = (uint *)param_1[8];
    }
    FUN_0049e700(puVar3);
  }
  param_1[8] = 0;
                    /* try { // try from 004cff04 to 004cff07 has its CatchHandler @ 004cff1c */
  FUN_004e8000(param_1 + 3);
  return;
}


