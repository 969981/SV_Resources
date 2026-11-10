/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d3ad8; name: FUN_007d3ad8
 */


void FUN_007d3ad8(undefined8 param_1)

{
  undefined *puVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_047d0860;
  lVar3 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar3 = *(long *)(lVar3 + 0x98);
  if (lVar3 == 0) {
    return;
  }
  FUN_01f7c4e8(*(undefined8 *)puVar1);
  sVar2 = FUN_007f4e68();
  if (sVar2 != 1) {
    uVar5 = 0;
    do {
      lVar4 = FUN_01f7c4e8(*(undefined8 *)puVar1);
      lVar6 = *(long *)(lVar4 + 0x20);
      lVar4 = FUN_01f7c4e8(*(undefined8 *)puVar1);
      if ((lVar6 == lVar4 + 0x18) ||
         ((*(long *)(lVar6 + 0x10) == lVar3 && (lVar6 = *(long *)(lVar6 + 8), lVar6 == lVar4 + 0x18)
          ))) break;
      FUN_007d5240(param_1,*(undefined8 *)(lVar6 + 0x10));
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ushort)(sVar2 - 1U));
  }
  FUN_007d5240(param_1,lVar3);
  return;
}


