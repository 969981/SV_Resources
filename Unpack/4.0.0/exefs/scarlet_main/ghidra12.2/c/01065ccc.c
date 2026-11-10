/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01065ccc; name: FUN_01065ccc
 */


void FUN_01065ccc(long param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_68;
  
  if (param_2 != (code *)0x0) {
    if (0 < *(int *)(param_1 + 0xa0)) {
      lVar2 = 0;
      do {
        lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x28) + lVar2 * 8);
        local_68 = 0xffffffffffffffff;
        (*param_2)(&local_68,*(undefined8 *)(lVar3 + 0x88),param_3);
        *(undefined8 *)(lVar3 + 0x90) = local_68;
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0xa0));
    }
    iVar1 = *(int *)(param_1 + 0x4c);
    if (0 < iVar1) {
      lVar3 = *(long *)(param_1 + 0x58);
      lVar2 = 0;
      do {
        if (0 < *(int *)(lVar3 + lVar2 * 0x38 + 4)) {
          lVar4 = 0;
          lVar5 = 0;
          do {
            lVar3 = *(long *)(lVar3 + lVar2 * 0x38 + 0x18) + lVar4;
            *(undefined8 *)(lVar3 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(lVar3 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(lVar3 + 0x50) = 0xffffffffffffffff;
            FUN_008db9d8(param_1,(undefined8 *)(lVar3 + 0x48),
                         *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x9f0));
            FUN_008db9d8(param_1,(undefined8 *)(lVar3 + 0x50),
                         *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xa10));
            FUN_008db9d8(param_1,(undefined8 *)(lVar3 + 0x58),
                         *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xa30));
            lVar3 = *(long *)(param_1 + 0x58);
            lVar5 = lVar5 + 1;
            lVar4 = lVar4 + 0x3e0;
          } while (lVar5 < *(int *)(lVar3 + lVar2 * 0x38 + 4));
          iVar1 = *(int *)(param_1 + 0x4c);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
  }
  return;
}


