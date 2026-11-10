/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004808e0; name: FUN_004808e0
 */


void FUN_004808e0(void)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)FUN_004807b0();
  if (puVar2 != (undefined4 *)0x0) {
    lVar3 = 0;
    puVar4 = puVar2;
    do {
      if ((*(byte *)(puVar4 + 0x50) & 1) != 0) {
        FUN_00452f80(*(undefined8 *)((long)puVar2 + lVar3 + 0xc0),
                     "external/openssl/crypto/err/err.c",0x1c2);
        *(undefined8 *)((long)puVar2 + lVar3 + 0xc0) = 0;
      }
      lVar1 = lVar3 + 8;
      puVar4[0x50] = 0;
      *puVar4 = 0;
      *(undefined8 *)((long)puVar2 + lVar3 + 0x40) = 0;
      *(undefined8 *)((long)puVar2 + lVar3 + 0x180) = 0;
      puVar4[0x80] = 0xffffffff;
      puVar4 = puVar4 + 1;
      lVar3 = lVar1;
    } while (lVar1 != 0x80);
    *(undefined8 *)(puVar2 + 0x90) = 0;
  }
  return;
}


