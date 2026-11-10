/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029427f0; name: FUN_029427f0
 */


undefined8 FUN_029427f0(long param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x30);
  if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 0xc), iVar1 != 0)) {
    iVar5 = 0;
    do {
      uVar3 = FUN_029427a0(param_1,iVar5);
      cVar2 = FUN_0154e790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x290),uVar3);
      if (cVar2 == param_2) {
        return 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return 0;
}


