/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dea30; name: FUN_007dea30
 */


undefined8 FUN_007dea30(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x68);
  if (lVar6 != param_1 + 0x60) {
    uVar4 = *(undefined8 *)PTR_DAT_047d11a0;
    do {
      uVar1 = FUN_007967e8(lVar6 + 0x10,param_2);
      if ((uVar1 & 1) != 0) {
        lVar2 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
        uVar5 = *(undefined8 *)(lVar2 + 0x98);
        uVar3 = FUN_007de240(lVar6 + 0x10);
        FUN_007e0fd0(uVar4,uVar5,uVar3,*(undefined1 *)(lVar6 + 0x30));
        return 1;
      }
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != param_1 + 0x60);
  }
  return 0;
}


