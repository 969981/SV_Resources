/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01913a70; name: FUN_01913a70
 */


void FUN_01913a70(void)

{
  undefined1 auStack_20 [16];
  
  if (DAT_047f8f68 == '\x01') {
    if (DAT_047f8f6a == '\x01') {
      FUN_018fe3a0(auStack_20);
    }
    FUN_007bfc64(0);
    FUN_019139f8();
    FUN_019139a4();
    FUN_00807dd4();
    FUN_0078bae4();
    FUN_0078effc();
    if (*(long *)PTR_DAT_047d0880 == DAT_047f8f70) {
      *(undefined8 *)PTR_DAT_047d0880 = 0;
    }
    FUN_0078f1f8();
    DAT_047f8f70 = 0;
    FUN_0078a088(2);
    FUN_00789fd0();
    nn::time::Finalize();
    DAT_047f8f68 = '\0';
    FUN_00794a5c(auStack_20,2);
  }
  return;
}


