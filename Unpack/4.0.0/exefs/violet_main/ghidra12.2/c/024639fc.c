/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024639fc; name: thunk_FUN_02463a00
 */


undefined1  [16] thunk_FUN_02463a00(long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  char *__s2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar5 = *(long *)(param_1 + 0x38);
  lVar6 = *(long *)(lVar5 + 8);
  if (lVar6 != 0) {
    __s2 = *(char **)(param_2 + 8);
    lVar4 = 0;
    lVar7 = *(long *)(lVar5 + 0x28);
    do {
      iVar2 = strcmp(*(char **)(lVar7 + lVar4 * 8),__s2);
      if (iVar2 == 0) {
        uVar1 = *(ushort *)(*(long *)(lVar5 + 0x10) + lVar4 * 2);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        if (((short)uVar1 < 0) ||
           (lVar5 = (**(code **)(*(long *)(lVar5 + 0x18) +
                                (ulong)((uint)(int)(short)uVar1 >> 5 & 0x7ff) * 8))(), lVar5 == 0))
        {
          auVar8 = FUN_02463af0(uVar3,(int)lVar4 * 2 + 4,uVar1 & 0xf);
          return auVar8;
        }
        break;
      }
      lVar4 = lVar4 + 1;
    } while (lVar6 != lVar4);
  }
  return ZEXT816(0);
}


