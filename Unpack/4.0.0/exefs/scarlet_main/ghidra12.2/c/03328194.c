/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03328194; name: FUN_03328194
 */


void FUN_03328194(long param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x228) + (long)param_2 * 0x20);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar10 = puVar2[2];
  if ((uVar10 & 1) != 0) {
    piVar1 = (int *)((uVar10 & 0xfffffffffffffffe) + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  uVar5 = *(undefined4 *)(puVar2 + 3);
  uVar6 = *(uint *)(param_1 + 0x398);
  uVar9 = uVar6;
  if ((int)(*(uint *)(param_1 + 0x39c) & 0x7fffffff) <= (int)uVar6) {
    FUN_0321abfc(param_1 + 0x390,PTR_PTR_047d1a50,(long)(int)uVar6 + 1);
    uVar9 = *(uint *)(param_1 + 0x398);
  }
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x390) + (long)(int)uVar9 * 0x20);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar10;
  *(undefined4 *)(puVar2 + 3) = uVar5;
  *(int *)(param_1 + 0x398) = (int)((long)(int)uVar6 + 1);
  *(uint *)(*(long *)(param_1 + 0x290) + (long)param_2 * 4) = ~uVar6;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  FUN_03323a58(param_1 + 0x200,param_2,&local_80);
  return;
}


