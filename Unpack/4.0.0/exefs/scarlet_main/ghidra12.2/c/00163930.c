/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00163930; name: FUN_00163930
 */


void FUN_00163930(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_047cb898;
  lVar5 = 0;
  plVar6 = param_1 + 2;
  lVar3 = *plVar6;
  iVar2 = (int)lVar3;
  while( true ) {
    if (0 < iVar2) {
      lVar7 = 0;
      lVar4 = *(long *)param_1[lVar5 * 3];
      while( true ) {
        if (lVar4 != 0) {
          if (*(long *)(lVar4 + 0x28) != 0) {
            (**(code **)puVar1)();
            *(undefined8 *)(lVar4 + 0x28) = 0;
          }
          *(undefined8 *)(lVar4 + 0x60) = 0;
          if (*(long *)(lVar4 + 0x50) != 0) {
            (**(code **)puVar1)();
          }
          *(long *)(lVar4 + 0x50) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          *(undefined8 *)(lVar4 + 0x18) = 0;
          if (*(long *)(lVar4 + 8) != 0) {
            (**(code **)puVar1)();
          }
          *(long *)(lVar4 + 8) = 0;
          *(undefined8 *)(lVar4 + 0x10) = 0;
          (**(code **)puVar1)(lVar4);
          lVar3 = *plVar6;
        }
        lVar7 = lVar7 + 1;
        if ((int)lVar3 <= lVar7) break;
        lVar4 = *(long *)(param_1[lVar5 * 3] + lVar7 * 8);
      }
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == 8) break;
    plVar6 = param_1 + lVar5 * 3 + 2;
    lVar3 = *plVar6;
    iVar2 = (int)lVar3;
  }
  param_1[0x17] = 0;
  puVar1 = PTR_PTR_047cb898;
  if (param_1[0x15] != 0) {
    (**(code **)PTR_PTR_047cb898)();
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  if (param_1[0x12] != 0) {
    (**(code **)puVar1)();
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  if (param_1[0xf] != 0) {
    (**(code **)puVar1)();
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  if (param_1[0xc] != 0) {
    (**(code **)puVar1)();
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  if (param_1[9] != 0) {
    (**(code **)puVar1)();
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  if (param_1[6] != 0) {
    (**(code **)puVar1)();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  if (param_1[3] != 0) {
    (**(code **)puVar1)();
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  if (*param_1 != 0) {
    (**(code **)puVar1)();
  }
  *param_1 = 0;
  param_1[1] = 0;
  (**(code **)puVar1)(param_1);
  return;
}


