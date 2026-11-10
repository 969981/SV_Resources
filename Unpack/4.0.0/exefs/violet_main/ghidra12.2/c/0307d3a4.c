/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307d3a4; name: FUN_0307d3a4
 */


void FUN_0307d3a4(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  int local_48 [2];
  
  puVar6 = PTR_DAT_047d1a08;
  uVar2 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar2) {
    uVar9 = 0;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0x38) + uVar9 * 0x100);
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x40) != 0) {
          plVar11 = *(long **)(lVar10 + 0x38);
          plVar12 = plVar11 + (long)*(int *)(lVar10 + 0x40) * 3;
          do {
            lVar8 = plVar12[-2];
            plVar12 = plVar12 + -3;
            if (lVar8 != 0) {
              nn::os::FinalizeMutex((MutexType *)(lVar8 + 8));
              (**(code **)(puVar6 + 8))(0,lVar8,0);
            }
            plVar7 = (long *)*plVar12;
            if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
              plVar1 = plVar7 + 2;
              do {
                lVar8 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar8 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar8 + -1 == 0) {
                (**(code **)(*plVar7 + 0x18))();
              }
            }
          } while (plVar12 != plVar11);
        }
        *(undefined4 *)(lVar10 + 0x40) = 0;
        *(undefined4 *)(lVar10 + 0x50) = 0;
        iVar3 = *(int *)(*(long *)(lVar10 + 0x20) + 0x17c);
        if (iVar3 != -1) {
          local_48[0] = iVar3;
          FUN_0307d2b8(param_1,local_48);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
  return;
}


