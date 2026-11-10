/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003bf680; name: FUN_003bf680
 */


undefined8
FUN_003bf680(long param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ushort *puVar5;
  undefined4 local_44;
  
  lVar4 = *(long *)(param_1 + 0x550);
  if ((param_2 & 0x180) == 0) {
    lVar3 = *(long *)(lVar4 + 0x1e0);
    if (lVar3 != 0) {
      puVar5 = *(ushort **)(lVar4 + 0x1d8);
      do {
        if (*puVar5 == param_3) {
          if (puVar5 == (ushort *)0x0) {
            return 1;
          }
          goto LAB_003bf738;
        }
        puVar5 = puVar5 + 0x1c;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x1e0);
    if (lVar3 != 0) {
      puVar5 = *(ushort **)(lVar4 + 0x1d8);
      do {
        if ((*puVar5 == param_3) &&
           ((*(uint *)(puVar5 + 2) == (uint)(*(int *)(param_1 + 0x38) != 0) ||
            (*(uint *)(puVar5 + 2) == 2)))) {
LAB_003bf738:
          iVar1 = FUN_003b9fd0(param_1,*(undefined4 *)(puVar5 + 4),param_2);
          if (iVar1 == 0) {
            return 1;
          }
          if (((param_2 & 0x700) == 0) || (((byte)puVar5[6] >> 1 & 1) != 0)) {
            if ((param_2 >> 7 & 1) != 0) {
              *(uint *)(puVar5 + 6) = *(uint *)(puVar5 + 6) | 1;
            }
            if (*(code **)(puVar5 + 0x14) == (code *)0x0) {
              return 1;
            }
            iVar1 = (**(code **)(puVar5 + 0x14))
                              (param_1,param_3,param_2,param_4,param_5,param_6,param_7,&local_44,
                               *(undefined8 *)(puVar5 + 0x18));
            if (0 < iVar1) {
              return 1;
            }
            uVar2 = 0xa2;
          }
          else {
            local_44 = 0x6e;
            uVar2 = 0x8f;
          }
          FUN_003c3950(param_1,local_44,0x22b,0x6e,"external/openssl/ssl/statem/extensions_cust.c",
                       uVar2);
          return 0;
        }
        puVar5 = puVar5 + 0x1c;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return 1;
}


