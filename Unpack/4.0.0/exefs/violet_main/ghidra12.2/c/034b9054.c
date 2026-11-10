/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b9054; name: FUN_034b9054
 */


void FUN_034b9054(long *param_1,uint param_2,long *param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  uint *local_40;
  undefined1 local_34 [4];
  
  local_34[0] = 1;
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 0) {
    return;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = param_2 / uVar2;
  }
  puVar5 = *(uint **)(*param_1 + (ulong)(param_2 - uVar3 * uVar2) * 8);
  while( true ) {
    if (puVar5 == (uint *)0x0) {
      return;
    }
    if (*puVar5 == param_2) break;
    puVar5 = *(uint **)(puVar5 + 2);
  }
  lVar6 = *(long *)(puVar5 + 0x10);
  if (lVar6 != 0) {
    do {
      if (((((*(long *)(lVar6 + 0x20) == *param_3) && (*(int *)(lVar6 + 0x28) == (int)param_3[1]))
           && (*(int *)(lVar6 + 0x30) == (int)param_3[2])) &&
          ((*(char *)(lVar6 + 0x38) == (char)param_3[3] &&
           (*(char *)(lVar6 + 0x40) == (char)param_3[4])))) &&
         (*(long *)(lVar6 + 0x48) == param_3[5])) break;
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != 0);
  }
  local_40 = (uint *)0x0;
  lVar4 = FUN_034b9430(puVar5 + 8,param_3,&local_40,local_34);
  if ((lVar6 != 0) || (lVar4 != 0)) {
    puVar1 = puVar5 + 4;
    if (local_40 != (uint *)0x0) {
      puVar1 = local_40;
    }
    FUN_034b6f50(*puVar1,puVar5,lVar4,local_40,param_3,param_4,1,local_34[0]);
  }
  return;
}


