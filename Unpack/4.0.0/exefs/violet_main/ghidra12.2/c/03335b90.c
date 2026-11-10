/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03335b90; name: FUN_03335b90
 */


void FUN_03335b90(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  
  *param_1 = (long)&PTR_LAB_047ac790;
  puVar4 = PTR_DAT_047d1a08;
  uVar2 = *(uint *)((long)param_1 + 0x44);
  uVar6 = (ulong)uVar2;
  if (-1 < (int)uVar2) {
    plVar7 = (long *)param_1[7];
    uVar8 = 0xffffffffffffffff;
    plVar9 = plVar7;
    do {
      if (*plVar9 != -1) {
        uVar3 = (uint)uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
      plVar9 = plVar9 + 3;
      uVar3 = uVar2;
    } while (uVar6 != uVar8);
    iVar11 = uVar3 + 1;
    if (iVar11 <= (int)uVar2) {
      do {
        lVar12 = (long)iVar11;
        if ((int)plVar7[(long)iVar11 * 3 + 2] != 0) {
          (**(code **)(puVar4 + 8))(0,plVar7[lVar12 * 3 + 1],0);
          uVar6 = (ulong)*(uint *)((long)param_1 + 0x44);
        }
        lVar10 = lVar12 * 0x18;
        iVar5 = (int)uVar6;
        iVar1 = iVar5;
        if (iVar5 <= iVar11) {
          iVar1 = iVar11;
        }
        lVar12 = iVar1 - lVar12;
        do {
          lVar10 = lVar10 + 0x18;
          if (lVar12 == 0) {
            iVar11 = iVar1 + 1;
            break;
          }
          lVar12 = lVar12 + -1;
          iVar11 = iVar11 + 1;
        } while (*(long *)(param_1[7] + lVar10) == -1);
        if (iVar5 < iVar11) break;
        plVar7 = (long *)param_1[7];
      } while( true );
    }
  }
  (**(code **)(puVar4 + 8))(PTR_PTR_047d1a50[8],param_1[7],0);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 3));
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


