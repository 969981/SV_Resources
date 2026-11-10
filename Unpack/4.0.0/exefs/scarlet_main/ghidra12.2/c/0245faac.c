/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0245faac; name: thunk_FUN_0245fab0
 */


void thunk_FUN_0245fab0(undefined8 *param_1,long param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *__s2;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)(param_2 + 0x38);
  lVar8 = *(long *)(lVar7 + 8);
  if (lVar8 != 0) {
    __s2 = *(char **)(param_3 + 8);
    lVar6 = 0;
    lVar9 = *(long *)(lVar7 + 0x28);
    do {
      iVar2 = strcmp(*(char **)(lVar9 + lVar6 * 8),__s2);
      if (iVar2 == 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x30);
        uVar1 = *(ushort *)(*(long *)(lVar7 + 0x10) + lVar6 * 2);
        uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0x20) + lVar6 * 8);
        if ((short)uVar1 < 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(*(long *)(lVar7 + 0x18) +
                              (ulong)((uint)(int)(short)uVar1 >> 5 & 0x7ff) * 8))();
        }
        FUN_0245fc14(param_1,uVar4,uVar5,uVar1 & 0xf,uVar3);
        return;
      }
      lVar6 = lVar6 + 1;
    } while (lVar8 != lVar6);
  }
  *param_1 = 0;
  return;
}


