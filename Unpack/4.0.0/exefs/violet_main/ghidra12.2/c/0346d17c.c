/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346d17c; name: FUN_0346d17c
 */


undefined8 FUN_0346d17c(long param_1,long param_2,uint param_3,uint *param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  void *__src;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int local_44;
  
  if (param_3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar12 = 0;
    plVar1 = (long *)(param_1 + 0x50);
    plVar2 = (long *)(param_1 + 0x10);
    uVar13 = param_3;
    do {
      uVar3 = *(uint *)(param_1 + 0x20);
      uVar6 = (ulong)uVar3;
      uVar9 = *(uint *)(param_1 + uVar6 * 4 + 0x18);
      uVar11 = (uint)uVar12;
      if (uVar9 == 0) {
        if (*(long **)(param_1 + 0x40) == (long *)0x0) break;
        uVar10 = (ulong)(uVar3 == 0);
        if (*(int *)(param_1 + uVar10 * 4 + 0x18) != 0) {
          iVar4 = (**(code **)(**(long **)(param_1 + 0x40) + 0x70))();
          if (iVar4 != 4) {
            uVar9 = (uint)(uVar3 == 0);
            *(uint *)(param_1 + 0x20) = uVar9;
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + uVar10 * 8);
            uVar6 = (ulong)uVar9;
            goto LAB_0346d23c;
          }
LAB_0346d394:
          uVar5 = 0x38;
          goto LAB_0346d374;
        }
LAB_0346d23c:
        local_44 = 0;
        if (uVar13 < *(uint *)(param_1 + 0x24)) {
          uVar9 = *(uint *)(param_1 + 0x30);
          uVar6 = (ulong)((int)uVar6 == 0);
          uVar3 = 0;
          if (uVar9 != 0) {
            uVar3 = *(uint *)(param_1 + 0x24) / uVar9;
          }
          iVar4 = (**(code **)(**(long **)(param_1 + 0x40) + 0x38))
                            ((float)(uVar3 * uVar9) / *(float *)(param_1 + 0x48),
                             *(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + uVar6 * 8),
                             uVar3 * uVar9,0,*(undefined1 *)(param_1 + 0x4c),&local_44);
          if (iVar4 != 1) goto LAB_0346d394;
          if (local_44 != 0) {
            *(int *)(param_1 + uVar6 * 4 + 0x18) = local_44;
            goto LAB_0346d2f4;
          }
        }
        else if (*(int *)(param_1 + uVar6 * 4 + 0x18) == 0) {
          uVar9 = *(uint *)(param_1 + 0x30);
          uVar3 = 0;
          if (uVar9 != 0) {
            uVar3 = uVar13 / uVar9;
          }
          iVar4 = (**(code **)(**(long **)(param_1 + 0x40) + 0x38))
                            ((float)(uVar3 * uVar9) / *(float *)(param_1 + 0x48),
                             *(long **)(param_1 + 0x40),param_2 + uVar12,uVar3 * uVar9,1,
                             *(undefined1 *)(param_1 + 0x4c),&local_44);
          if ((iVar4 != 1) ||
             (iVar4 = (**(code **)(**(long **)(param_1 + 0x40) + 0x68))(), iVar4 != 1))
          goto LAB_0346d394;
          uVar12 = (ulong)(local_44 + uVar11);
          uVar13 = uVar13 - local_44;
          if (local_44 != 0) goto LAB_0346d2f4;
        }
        uVar11 = (uint)uVar12;
        if (*(int *)(param_1 + (ulong)*(uint *)(param_1 + 0x20) * 4 + 0x18) == 0) break;
      }
      else {
        __src = (void *)*plVar1;
        if (__src == (void *)0x0) {
          __src = (void *)*plVar2;
        }
        if (uVar13 <= uVar9) {
          uVar9 = uVar13;
        }
        memcpy((void *)(param_2 + uVar12),__src,(ulong)uVar9);
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          lVar7 = *plVar2;
          plVar8 = plVar2;
        }
        else {
          plVar8 = plVar1;
        }
        *plVar8 = lVar7 + (ulong)uVar9;
        lVar7 = param_1 + (ulong)*(uint *)(param_1 + 0x20) * 4;
        uVar12 = (ulong)(uVar9 + uVar11);
        uVar13 = uVar13 - uVar9;
        *(uint *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) - uVar9;
      }
LAB_0346d2f4:
      uVar11 = (uint)uVar12;
    } while (uVar11 < param_3);
  }
  uVar5 = 1;
LAB_0346d374:
  *param_4 = uVar11;
  return uVar5;
}


