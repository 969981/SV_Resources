/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ae5f0; name: FUN_003ae5f0
 */


bool FUN_003ae5f0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)(param_2 + 0x140);
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x550);
  }
  lVar4 = *(long *)*puVar1;
  if (lVar4 != 0) {
    iVar2 = FUN_003d9b20();
    if (iVar2 == 1) {
      lVar3 = *(long *)(lVar4 + 0x10);
      if (lVar3 == 0) {
        lVar3 = FUN_0047dcc0();
        *(long *)(lVar4 + 0x10) = lVar3;
        if (lVar3 == 0) {
          return false;
        }
      }
      iVar2 = FUN_0047e2f0(lVar3,param_3);
      return iVar2 != 0;
    }
    FUN_004806c0(0x14,0x15a,iVar2,"external/openssl/ssl/ssl_cert.c",0x125);
  }
  return false;
}


