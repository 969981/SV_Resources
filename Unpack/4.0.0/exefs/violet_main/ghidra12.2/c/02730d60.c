/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02730d60; name: FUN_02730d60
 */


bool FUN_02730d60(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar6 = param_2[-1];
    if (*(float *)(*(long *)(*(long *)*param_3 + (*param_1 >> 0x1d & 0x7fffffff8)) + 0x90) <
        *(float *)(*(long *)(*(long *)*param_3 + (uVar6 >> 0x1d & 0x7fffffff8)) + 0x90)) {
      if ((*param_1 & 0xff) == 0) {
        if ((uVar6 & 0xff) == 0) {
          return true;
        }
        *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + -4);
        *(undefined1 *)param_1 = 1;
        *(undefined1 *)(param_2 + -1) = 0;
        return true;
      }
      if ((uVar6 & 0xff) == 0) {
        uVar1 = *(undefined4 *)((long)param_1 + 4);
        *(undefined1 *)(param_2 + -1) = 1;
        *(undefined4 *)((long)param_2 + -4) = uVar1;
        *(undefined1 *)param_1 = 0;
        return true;
      }
      uVar1 = *(undefined4 *)((long)param_1 + 4);
      *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + -4);
      *(undefined4 *)((long)param_2 + -4) = uVar1;
    }
    break;
  case 3:
    FUN_00dd5e80(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_00dd5c70(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00dd59c0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_00dd5e80(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      iVar4 = 0;
      lVar5 = 0x18;
      puVar8 = param_1 + 3;
      puVar11 = param_1 + 2;
      do {
        puVar3 = puVar8;
        uVar9 = *puVar11;
        uVar6 = *puVar3;
        uVar7 = uVar6 >> 0x20;
        if (*(float *)(*(long *)(*(long *)*param_3 + (uVar9 >> 0x1d & 0x7fffffff8)) + 0x90) <
            *(float *)(*(long *)(*(long *)*param_3 + uVar7 * 8) + 0x90)) {
          lVar10 = lVar5;
          do {
            lVar2 = lVar10 + -8;
            *(ulong *)((long)param_1 + lVar10) = uVar9;
            if (lVar2 == 0) {
              puVar8 = param_1;
              goto LAB_02730eb4;
            }
            uVar9 = *(ulong *)((long)param_1 + lVar10 + -0x10);
            lVar10 = lVar2;
          } while (*(float *)(*(long *)(*(long *)*param_3 + (uVar9 >> 0x1d & 0x7fffffff8)) + 0x90) <
                   *(float *)(*(long *)(*(long *)*param_3 + uVar7 * 8) + 0x90));
          puVar8 = (ulong *)((long)param_1 + lVar2);
LAB_02730eb4:
          iVar4 = iVar4 + 1;
          *puVar8 = uVar6;
          if (iVar4 == 8) {
            return puVar3 + 1 == param_2;
          }
        }
        lVar5 = lVar5 + 8;
        puVar8 = puVar3 + 1;
        puVar11 = puVar3;
      } while (puVar3 + 1 != param_2);
    }
  }
  return true;
}


