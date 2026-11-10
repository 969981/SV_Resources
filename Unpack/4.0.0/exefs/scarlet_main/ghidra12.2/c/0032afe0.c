/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032afe0; name: FUN_0032afe0
 */


void FUN_0032afe0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  if ((DAT_04495688 == 0) || (uVar3 = thunk_FUN_00354f70(), (uVar3 & 1) != 0)) {
    return;
  }
  FUN_00358240(param_1,*(undefined8 *)(DAT_047ef480 + 0x78));
  FUN_0038db40(&DAT_047ef488);
  iVar2 = FUN_0038dac0(DAT_047ef480 + 0x88);
  lVar1 = DAT_047ef480;
  if (iVar2 == 0) {
    FUN_0038db60(&DAT_047ef488);
    return;
  }
  DAT_047ef480 = 0;
  FUN_0038db60(&DAT_047ef488);
  FUN_0038db40(*(undefined8 *)(lVar1 + 0x70));
  *(undefined1 *)(lVar1 + 0x80) = 1;
  *(undefined1 **)(lVar1 + 0x58) = &LAB_0032b210;
  *(long *)(lVar1 + 0x60) = lVar1;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  FUN_00358130(*(undefined8 *)(lVar1 + 0x78),lVar1 + 0x50);
  FUN_0038db60(*(undefined8 *)(lVar1 + 0x70));
  FUN_00360570(lVar1);
  return;
}


