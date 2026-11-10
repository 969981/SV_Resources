/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346cfd4; name: FUN_0346cfd4
 */


undefined8 FUN_0346cfd4(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  ulong uVar11;
  int local_64;
  long local_48;
  
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar9 = param_2;
    do {
      puVar5 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x20) * 4 + 0x18);
      uVar1 = *puVar5;
      if (uVar1 == 0) {
        if (*(long **)(param_1 + 0x40) == (long *)0x0) break;
        iVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x70))();
        if (iVar3 == 4) {
LAB_0346d174:
          uVar4 = 0x38;
          goto LAB_0346d150;
        }
        uVar11 = (ulong)(*(int *)(param_1 + 0x20) == 0);
        piVar10 = (int *)(param_1 + uVar11 * 4 + 0x18);
        if (*piVar10 == 0) {
          iVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x50))
                            (*(long **)(param_1 + 0x40),uVar9,1,&local_48);
          if (iVar3 != 1) goto LAB_0346d174;
          if (local_48 == 0) {
            local_64 = 0;
            uVar1 = *(uint *)(param_1 + 0x30);
            uVar2 = 0;
            if (uVar1 != 0) {
              uVar2 = *(uint *)(param_1 + 0x24) / uVar1;
            }
            iVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x38))
                              ((float)(uVar2 * uVar1) / *(float *)(param_1 + 0x48),
                               *(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + uVar11 * 8),
                               uVar2 * uVar1,0,*(undefined1 *)(param_1 + 0x4c),&local_64);
            if (iVar3 != 1) goto LAB_0346d174;
            if (local_64 != 0) {
              *piVar10 = local_64;
            }
          }
          else {
            uVar8 = uVar8 + (int)local_48;
            uVar9 = uVar9 - (int)local_48;
          }
        }
        else {
          *(uint *)(param_1 + 0x20) = (uint)(*(int *)(param_1 + 0x20) == 0);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + uVar11 * 8);
        }
      }
      else {
        lVar6 = *(long *)(param_1 + 0x50);
        if (uVar9 <= uVar1) {
          uVar1 = uVar9;
        }
        uVar8 = uVar1 + uVar8;
        uVar9 = uVar9 - uVar1;
        if (lVar6 == 0) {
          lVar6 = *(long *)(param_1 + 0x10);
          plVar7 = (long *)(param_1 + 0x10);
        }
        else {
          plVar7 = (long *)(param_1 + 0x50);
        }
        *plVar7 = lVar6 + (ulong)uVar1;
        *puVar5 = *puVar5 - uVar1;
      }
    } while (uVar8 < param_2);
  }
  uVar4 = 1;
LAB_0346d150:
  *param_3 = uVar8;
  return uVar4;
}


