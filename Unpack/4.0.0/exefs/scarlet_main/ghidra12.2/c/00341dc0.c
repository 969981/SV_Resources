/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00341dc0; name: FUN_00341dc0
 */


void FUN_00341dc0(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (param_1 == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0x7fffffffffffffff) {
    lVar9 = *(long *)(param_1 + 8);
    puVar8 = *(undefined8 **)(lVar9 + 0x10);
    iVar1 = *(int *)(puVar8 + 2);
    if (iVar1 == 0) {
      *(undefined4 *)(puVar8 + 2) = 1;
      puVar5 = puVar8 + 9;
      puVar8[10] = &LAB_00341eb0;
      puVar8[0xb] = lVar9;
      puVar4 = puVar8 + 0xc;
    }
    else {
      if (iVar1 == 1) goto LAB_00341e88;
      if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(puVar8 + 2) = 1;
                    /* try { // try from 00341e0c to 00341ea7 has its CatchHandler @ 00341ea8 */
      puVar4 = (undefined8 *)FUN_0038c780(0x30);
      puVar5 = puVar4 + 2;
      *puVar4 = &LAB_00341eb0;
      puVar4[1] = lVar9;
      puVar4[3] = PTR_FUN_047cc978;
      puVar4[4] = puVar4;
      puVar4 = puVar4 + 5;
    }
    *puVar4 = 0;
    plVar6 = (long *)*puVar8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_00360550(puVar8 + 3,lVar7,puVar5);
  }
LAB_00341e88:
  FUN_0049e790(PTR_LAB_047cba48,param_1);
  return;
}


