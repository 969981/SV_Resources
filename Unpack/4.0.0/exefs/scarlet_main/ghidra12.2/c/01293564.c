/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01293564; name: FUN_01293564
 */


void FUN_01293564(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &DAT_045a5ad0;
  param_1[4] = &PTR_LAB_045a5b70;
  param_1[5] = &PTR_LAB_045a5bd0;
  FUN_00f738b8(param_1 + 0x12);
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    lVar1 = param_1[0x10];
    plVar2 = (long *)param_1[0x11];
    param_1[0xf] = lVar5;
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,8);
        goto LAB_012935dc;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,8);
  }
LAB_012935dc:
  FUN_01293618(param_1);
  return;
}


