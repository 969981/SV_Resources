/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d75d0; name: FUN_003d75d0
 */


undefined8 FUN_003d75d0(int *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_3 = 0;
  param_1[0x1d0] = 0;
  if ((((*param_1 < 0x301) || ((*(byte *)((long)param_1 + 0x695) >> 6 & 1) != 0)) ||
      (iVar1 = FUN_003af490(param_1,10,0,0,0), iVar1 == 0)) ||
     (lVar3 = *(long *)(param_2 + 0x288), *(int *)(lVar3 + 0x100) == 0)) {
    return 2;
  }
  uVar2 = FUN_003d7660(param_1,*(undefined8 *)(lVar3 + 0xf0),*(undefined8 *)(lVar3 + 0xf8),
                       param_2 + 0x30,*(undefined8 *)(param_2 + 0x28),param_3);
  return uVar2;
}


