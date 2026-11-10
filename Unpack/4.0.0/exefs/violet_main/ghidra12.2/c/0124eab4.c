/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124eab4; name: FUN_0124eab4
 */


void FUN_0124eab4(long param_1,long param_2,byte param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  iVar2 = *(int *)(param_1 + (ulong)param_3 * 8 + 8);
  if (iVar2 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_1 + lVar6;
      if ((((*(char *)(lVar1 + 0xc) != '\0') && (iVar3 = *(int *)(lVar1 + 8), iVar3 != 0)) &&
          (iVar3 != iVar2)) &&
         (uVar4 = FUN_0128ab58(*(undefined8 *)(param_2 + 0x290),iVar3,iVar2), (uVar4 & 1) == 0)) {
        plVar5 = (long *)FUN_01021c94(param_4,*(undefined4 *)(lVar1 + 8));
        (**(code **)(*plVar5 + 0x4b8))(plVar5,iVar2);
        plVar5 = (long *)FUN_01021c94(param_4,iVar2);
        (**(code **)(*plVar5 + 0x4b8))(plVar5,*(undefined4 *)(lVar1 + 8));
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x58);
  }
  return;
}


