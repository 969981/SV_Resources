/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0245f33c; name: FUN_0245f33c
 */


undefined8 FUN_0245f33c(long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  char *__s2;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_1 + 0x38);
  lVar7 = *(long *)(lVar6 + 8);
  if (lVar7 != 0) {
    __s2 = *(char **)(param_2 + 8);
    lVar5 = 0;
    lVar8 = *(long *)(lVar6 + 0x28);
    do {
      iVar2 = strcmp(*(char **)(lVar8 + lVar5 * 8),__s2);
      if (iVar2 == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        uVar1 = *(ushort *)(*(long *)(lVar6 + 0x10) + lVar5 * 2);
        uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + lVar5 * 8);
        if (((short)uVar1 < 0) ||
           (lVar6 = (**(code **)(*(long *)(lVar6 + 0x18) +
                                (ulong)((uint)(int)(short)uVar1 >> 5 & 0x7ff) * 8))(), lVar6 == 0))
        {
          uVar3 = FUN_0245f430(uVar3,uVar4,uVar1 & 0xf);
          return uVar3;
        }
        return 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar7 != lVar5);
  }
  return 0;
}


