/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a21b4; name: FUN_031a21b4
 */


long FUN_031a21b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_047d1a08;
  if (*(char *)(param_1 + 0x165) == '\0') {
    local_38 = 0x168;
    lVar5 = (**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(lVar5,"hkMultipleVertexBuffer");
    }
    FUN_031a1ce4(lVar5,param_1);
    *(undefined1 *)(lVar5 + 0x165) = 1;
    if (0 < *(int *)(lVar5 + 0x150)) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        uVar6 = (**(code **)(**(long **)(*(long *)(lVar5 + 0x148) + lVar7) + 0x28))();
        if ((uVar6 & 1) == 0) {
          *(undefined1 *)(lVar5 + 0x165) = 0;
          break;
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x18;
      } while (lVar8 < *(int *)(lVar5 + 0x150));
    }
    *(undefined1 *)(lVar5 + 0x166) = 1;
  }
  else {
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(param_1 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar5 = param_1;
  }
  return lVar5;
}


