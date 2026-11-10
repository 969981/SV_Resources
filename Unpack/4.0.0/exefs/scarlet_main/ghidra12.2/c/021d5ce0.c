/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d5ce0; name: FUN_021d5ce0
 */


bool FUN_021d5ce0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined1 local_38;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    puVar9 = param_2 + -2;
    if (*puVar9 < *param_1) {
      uVar7 = *param_1;
      uVar1 = param_1[1];
      uVar3 = *puVar9;
      *(char *)(param_1 + 1) = (char)param_2[-1];
      *param_1 = uVar3;
      local_38 = (undefined1)uVar1;
      *(undefined1 *)(param_2 + -1) = local_38;
      *puVar9 = uVar7;
    }
    break;
  case 3:
    FUN_00cba750(param_1,param_1 + 2,param_2 + -2);
    break;
  case 4:
    FUN_00cba650(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
    break;
  case 5:
    FUN_00cba880(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    FUN_00cba750(param_1,param_1 + 2,param_1 + 4);
    if (param_1 + 6 != param_2) {
      lVar4 = 0;
      iVar5 = 0;
      puVar9 = param_1 + 6;
      puVar10 = param_1 + 4;
      do {
        puVar6 = puVar9;
        uVar7 = *puVar6;
        if (uVar7 < *puVar10) {
          uVar1 = puVar6[1];
          lVar2 = lVar4;
          do {
            lVar8 = lVar2;
            *(undefined8 *)((long)param_1 + lVar8 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar8 + 0x20);
            *(undefined1 *)((long)param_1 + lVar8 + 0x38) =
                 *(undefined1 *)((long)param_1 + lVar8 + 0x28);
            if (lVar8 == -0x20) {
              puVar9 = param_1;
              goto LAB_021d5de4;
            }
            lVar2 = lVar8 + -0x10;
          } while (uVar7 < *(ulong *)((long)param_1 + lVar8 + 0x10));
          puVar9 = (ulong *)((long)param_1 + lVar8 + 0x20);
LAB_021d5de4:
          iVar5 = iVar5 + 1;
          *puVar9 = uVar7;
          *(char *)(puVar9 + 1) = (char)uVar1;
          if (iVar5 == 8) {
            return puVar6 + 2 == param_2;
          }
        }
        lVar4 = lVar4 + 0x10;
        puVar9 = puVar6 + 2;
        puVar10 = puVar6;
      } while (puVar6 + 2 != param_2);
    }
  }
  return true;
}


