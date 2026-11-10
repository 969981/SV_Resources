/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024644f0; name: FUN_024644f0
 */


void FUN_024644f0(undefined8 *param_1,long param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  char *__s2;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_2 + 0x38);
  lVar7 = *(long *)(lVar6 + 8);
  if (lVar7 != 0) {
    __s2 = *(char **)(param_3 + 8);
    lVar4 = 0;
    lVar8 = *(long *)(lVar6 + 0x28);
    do {
      iVar2 = strcmp(*(char **)(lVar8 + lVar4 * 8),__s2);
      if (iVar2 == 0) {
        uVar1 = *(ushort *)(*(long *)(lVar6 + 0x10) + lVar4 * 2);
        uVar5 = *(undefined8 *)(param_2 + 0x30);
        if ((short)uVar1 < 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(*(long *)(lVar6 + 0x18) +
                              (ulong)((uint)(int)(short)uVar1 >> 5 & 0x7ff) * 8))();
        }
        FUN_02464608(param_1,uVar5,lVar4,uVar1 & 0xf,uVar3);
        return;
      }
      lVar4 = lVar4 + 1;
    } while (lVar7 != lVar4);
  }
  *param_1 = 0;
  return;
}


