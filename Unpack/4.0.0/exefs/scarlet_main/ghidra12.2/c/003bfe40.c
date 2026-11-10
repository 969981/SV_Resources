/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003bfe40; name: FUN_003bfe40
 */


undefined8
FUN_003bfe40(long param_1,int param_2,uint param_3,undefined4 param_4,long param_5,long param_6,
            undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  ushort *puVar1;
  int iVar2;
  long lVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((param_5 != 0) || (param_6 == 0)) {
    iVar2 = FUN_003bffb0(param_3);
    if (param_3 >> 0x10 != 0) {
      return 0;
    }
    if (param_3 != 0x12 && iVar2 != 0) {
      return 0;
    }
    puVar1 = *(ushort **)(param_1 + 0x1d8);
    lVar3 = *(long *)(param_1 + 0x1e0);
    if (lVar3 != 0) {
      if (param_2 == 2) {
        puVar4 = puVar1;
        lVar6 = lVar3;
        do {
          if (*puVar4 == param_3) {
            if (puVar4 != (ushort *)0x0) {
              return 0;
            }
            break;
          }
          puVar4 = puVar4 + 0x1c;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      else {
        puVar4 = puVar1 + 2;
        lVar6 = lVar3;
        do {
          if (puVar4[-2] == param_3) {
            if (*(int *)puVar4 == param_2) {
              return 0;
            }
            if (*(int *)puVar4 == 2) {
              return 0;
            }
          }
          puVar4 = puVar4 + 0x1c;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    lVar3 = FUN_00452db0(puVar1,lVar3 * 0x38 + 0x38,"external/openssl/ssl/statem/extensions_cust.c",
                         0x184);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar3 + *(long *)(param_1 + 0x1e0) * 0x38);
      *(long *)(param_1 + 0x1d8) = lVar3;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      *(int *)((long)puVar5 + 4) = param_2;
      *(undefined4 *)(puVar5 + 1) = param_4;
      puVar5[2] = param_5;
      puVar5[3] = param_6;
      *(short *)puVar5 = (short)param_3;
      puVar5[6] = param_9;
      puVar5[4] = param_7;
      puVar5[5] = param_8;
      *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1e0) + 1;
      return 1;
    }
  }
  return 0;
}


