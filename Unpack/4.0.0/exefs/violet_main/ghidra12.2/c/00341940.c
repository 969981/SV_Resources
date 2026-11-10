/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00341940; name: FUN_00341940
 */


void FUN_00341940(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar6 + 0x10) == 1) {
    *(undefined4 *)(lVar6 + 0x10) = 2;
    FUN_00360570(lVar6 + 0x18);
  }
  if (param_2 == 0x7fffffffffffffff) {
    return;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  iVar1 = *(int *)(puVar8 + 2);
  if (iVar1 == 0) {
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar5 = puVar8 + 9;
    puVar8[10] = &LAB_00341eb0;
    puVar8[0xb] = param_1;
    puVar4 = puVar8 + 0xc;
  }
  else {
    if (iVar1 == 1) {
      return;
    }
    if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar4 = (undefined8 *)FUN_0038c780(0x30);
    puVar5 = puVar4 + 2;
    *puVar4 = &LAB_00341eb0;
    puVar4[1] = param_1;
    puVar4[3] = PTR_FUN_047cc978;
    puVar4[4] = puVar4;
    puVar4 = puVar4 + 5;
  }
  *puVar4 = 0;
  plVar7 = (long *)*puVar8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_00360550(puVar8 + 3,param_2,puVar5);
  return;
}


