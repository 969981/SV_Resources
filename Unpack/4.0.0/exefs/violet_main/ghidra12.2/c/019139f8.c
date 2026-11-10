/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019139f8; name: FUN_019139f8
 */


void FUN_019139f8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_047d0900;
  if (*(long *)PTR_DAT_047d0900 != 0) {
    FUN_0078ba6c();
    lVar3 = *(long *)puVar1;
    lVar2 = *(long *)(lVar3 + 0x88);
    if (lVar2 != 0) {
      FUN_0078f82c(lVar2);
      FUN_007bfaa0(lVar2);
    }
    nn::os::FinalizeMutex((MutexType *)(lVar3 + 0x68));
    *(undefined8 *)puVar1 = 0;
  }
  puVar1 = PTR_DAT_047d0948;
  lVar2 = *(long *)PTR_DAT_047d0948;
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


