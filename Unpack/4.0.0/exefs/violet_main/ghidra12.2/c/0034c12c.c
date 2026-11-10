/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034c12c; name: FUN_0034c12c
 */


void FUN_0034c12c(ulong param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong *puVar13;
  long *local_28;
  
  lVar1 = DAT_047ef590;
  if (DAT_047ef590 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_28 = (long *)*param_3;
  *param_3 = 0;
  puVar13 = (ulong *)(lVar1 + (ulong)param_2 * 0x18);
                    /* try { // try from 0034c160 to 0034c16b has its CatchHandler @ 0034c248 */
  FUN_0034c328(puVar13,&local_28);
  plVar2 = local_28;
  if ((param_1 & 1) != 0) {
    uVar9 = *puVar13;
    uVar6 = uVar9 >> 1;
    lVar3 = uVar6 - 1;
    if ((uVar9 & 1) == 0) {
      puVar7 = (undefined8 *)(lVar1 + (ulong)param_2 * 0x18 + 8);
    }
    else {
      puVar7 = *(undefined8 **)(lVar1 + (ulong)param_2 * 0x18 + 8);
    }
    if (lVar3 != 0) {
      uVar11 = *puVar7;
      *puVar7 = puVar7[lVar3];
      puVar7[lVar3] = uVar11;
      if (lVar3 != 1) {
        puVar8 = puVar7 + 2;
        puVar5 = puVar7 + lVar3;
        puVar4 = puVar7 + lVar3;
        do {
          uVar12 = puVar8[-1];
          puVar8[-1] = uVar11;
          puVar10 = puVar4 + 1;
          *puVar4 = uVar12;
          if (puVar10 == puVar7 + uVar6) {
            puVar4 = puVar5;
            puVar10 = puVar5;
            if (puVar8 == puVar5) break;
          }
          else {
            puVar4 = puVar10;
            if (puVar8 != puVar5) {
              puVar4 = puVar5;
            }
          }
          uVar11 = *puVar10;
          puVar8 = puVar8 + 1;
          puVar5 = puVar4;
          puVar4 = puVar10;
        } while( true );
      }
    }
  }
  local_28 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    FUN_0049e790(PTR_LAB_047cba48,plVar2);
  }
  return;
}


