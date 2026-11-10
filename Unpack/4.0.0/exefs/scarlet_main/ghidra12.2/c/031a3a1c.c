/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a3a1c; name: FUN_031a3a1c
 */


long FUN_031a3a1c(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_18;
  
  puVar7 = PTR_DAT_047d1a08;
  if (*(char *)(param_1 + 0x1e5) == '\0') {
    local_18 = 0x1e8;
    lVar8 = (**(code **)PTR_DAT_047d1a08)(0,&local_18,0);
    if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
      (**(code **)(puVar7 + 0x10))(lVar8,"hkMemoryMeshVertexBuffer");
    }
    FUN_031a333c(lVar8,param_1 + 0x18,*(undefined4 *)(param_1 + 0x1e0));
    iVar4 = *(int *)(param_1 + 0x1e0) * *(int *)(param_1 + 0x1b0);
    if (0 < iVar4) {
      puVar10 = *(undefined8 **)(param_1 + 0x1a0);
      iVar9 = iVar4 + 0xf >> 4;
      puVar11 = *(undefined8 **)(lVar8 + 0x1a0);
      do {
        iVar9 = iVar9 + -1;
        uVar2 = *(undefined4 *)(puVar10 + 1);
        uVar3 = *(undefined4 *)((long)puVar10 + 0xc);
        *puVar11 = *puVar10;
        *(undefined4 *)(puVar11 + 1) = uVar2;
        *(undefined4 *)((long)puVar11 + 0xc) = uVar3;
        puVar10 = puVar10 + 2;
        puVar11 = puVar11 + 2;
      } while (iVar9 != 0);
    }
    if (*(int *)(lVar8 + 0x1a8) != iVar4) {
      *(int *)(lVar8 + 0x1a8) = iVar4;
    }
    param_1 = lVar8;
  }
  else if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(param_1 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  return param_1;
}


