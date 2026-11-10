/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02999898; name: FUN_02999898
 */


bool FUN_02999898(long param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
     (uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar5 == 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((long)param_2 + uVar5);
  }
  piVar3 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8) + 0x50)
                               ,param_3);
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
    if (4 < iVar4) {
      iVar4 = 0;
    }
  }
  if (iVar4 == iVar7) {
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar5 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)((long)param_2 + uVar5);
      if (5 < uVar6) {
        return true;
      }
    }
    uVar2 = FUN_0191f29c(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),param_3);
    bVar1 = uVar6 == (uVar2 & 0xff);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


