/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00441970; name: FUN_00441970
 */


long FUN_00441970(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = thunk_FUN_003ffef0();
  if (lVar1 != 0) {
    uVar2 = FUN_003eb7a0(PTR_PTR_047cd350);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    uVar2 = FUN_003eb7a0(PTR_PTR_047cd358);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    lVar3 = FUN_003eb7a0(PTR_PTR_047cd360);
    *(long *)(lVar1 + 0x40) = lVar3;
    if (((lVar3 == 0) || (*(long *)(lVar1 + 8) == 0)) || (*(long *)(lVar1 + 0x10) == 0)) {
      FUN_00400010(lVar1);
      return 0;
    }
  }
  return lVar1;
}


