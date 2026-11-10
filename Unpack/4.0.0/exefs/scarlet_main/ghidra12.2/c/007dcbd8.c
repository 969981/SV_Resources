/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dcbd8; name: FUN_007dcbd8
 */


void FUN_007dcbd8(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long local_38;
  
  plVar2 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  local_38 = 0;
  FUN_007935cc(&local_38);
  lVar6 = 0;
  do {
    lVar1 = param_1 + lVar6;
    if (*(long *)(lVar1 + 0x60) != 0) {
      lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
      if (lVar3 == 0) {
        *(undefined8 *)(lVar1 + 0x60) = 0;
        *(undefined8 *)(lVar1 + 0x68) = 0;
      }
      else {
        lVar7 = local_38 - *(long *)(lVar1 + 0x68);
        plVar4 = (long *)FUN_0079365c();
        lVar3 = 0;
        if (*plVar4 != 0) {
          lVar3 = lVar7 / *plVar4;
        }
        if ((500 < lVar3) &&
           (uVar5 = FUN_007d94cc(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(lVar1 + 0x60),
                                 *(undefined4 *)(lVar1 + 0x70)), (uVar5 & 1) != 0)) {
          *(long *)(lVar1 + 0x68) = local_38;
        }
      }
    }
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0x240);
  return;
}


