/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0bbe4; name: FUN_00e0bbe4
 */


void FUN_00e0bbe4(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  *(long *)(param_2 + 0x100) = param_1;
  *(undefined4 *)(param_2 + 0x108) = *(undefined4 *)(param_1 + 0x58);
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar1 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = *(int *)(param_1 + 0x58);
  lVar5 = (long)iVar4;
  if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= iVar4) {
    FUN_03182408(param_1 + 0x50,PTR_PTR_047d1a50,lVar5 + 1);
    iVar4 = *(int *)(param_1 + 0x58);
  }
  *(long *)(*(long *)(param_1 + 0x50) + (long)iVar4 * 8) = param_2;
  *(int *)(param_1 + 0x58) = (int)(lVar5 + 1);
  if (*(char *)(param_2 + 0xf8) == '\0') {
    *(undefined4 *)(param_2 + 0x10c) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)(param_1 + 0x68);
    iVar4 = *(int *)(param_1 + 0x68);
    lVar5 = (long)iVar4;
    if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) <= iVar4) {
      FUN_01496fa4(param_1 + 0x60,PTR_PTR_047d1a50,lVar5 + 1);
      iVar4 = *(int *)(param_1 + 0x68);
    }
    *(long *)(*(long *)(param_1 + 0x60) + (long)iVar4 * 8) = param_2;
    *(int *)(param_1 + 0x68) = (int)(lVar5 + 1);
  }
  FUN_0318235c(param_1 + 0x28,param_1,param_2);
  return;
}


